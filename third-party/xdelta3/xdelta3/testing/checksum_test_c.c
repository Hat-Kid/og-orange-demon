/* xdelta3 - delta compression tools and library -*- Mode: C++ -*-
   Copyright 2016 Joshua MacDonald

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
#include "../xdelta3.c"

// OLD CHECKSUM CODE

#define PERMUTE32(x) (__single_hash32[x])
#define PERMUTE64(x) (__single_hash64[x])

const uint16_t __single_hash32[256] =
{
  /* This hashes the input alphabet (Scheme SLIB pseudo-random). */
  0xbcd1, 0xbb65, 0x42c2, 0xdffe, 0x9666, 0x431b, 0x8504, 0xeb46,
  0x6379, 0xd460, 0xcf14, 0x53cf, 0xdb51, 0xdb08, 0x12c8, 0xf602,
  0xe766, 0x2394, 0x250d, 0xdcbb, 0xa678, 0x02af, 0xa5c6, 0x7ea6,
  0xb645, 0xcb4d, 0xc44b, 0xe5dc, 0x9fe6, 0x5b5c, 0x35f5, 0x701a,
  0x220f, 0x6c38, 0x1a56, 0x4ca3, 0xffc6, 0xb152, 0x8d61, 0x7a58,
  0x9025, 0x8b3d, 0xbf0f, 0x95a3, 0xe5f4, 0xc127, 0x3bed, 0x320b,
  0xb7f3, 0x6054, 0x333c, 0xd383, 0x8154, 0x5242, 0x4e0d, 0x0a94,
  0x7028, 0x8689, 0x3a22, 0x0980, 0x1847, 0xb0f1, 0x9b5c, 0x4176,
  0xb858, 0xd542, 0x1f6c, 0x2497, 0x6a5a, 0x9fa9, 0x8c5a, 0x7743,
  0xa8a9, 0x9a02, 0x4918, 0x438c, 0xc388, 0x9e2b, 0x4cad, 0x01b6,
  0xab19, 0xf777, 0x365f, 0x1eb2, 0x091e, 0x7bf8, 0x7a8e, 0x5227,
  0xeab1, 0x2074, 0x4523, 0xe781, 0x01a3, 0x163d, 0x3b2e, 0x287d,
  0x5e7f, 0xa063, 0xb134, 0x8fae, 0x5e8e, 0xb7b7, 0x4548, 0x1f5a,
  0xfa56, 0x7a24, 0x900f, 0x42dc, 0xcc69, 0x02a0, 0x0b22, 0xdb31,
  0x71fe, 0x0c7d, 0x1732, 0x1159, 0xcb09, 0xe1d2, 0x1351, 0x52e9,
  0xf536, 0x5a4f, 0xc316, 0x6bf9, 0x8994, 0xb774, 0x5f3e, 0xf6d6,
  0x3a61, 0xf82c, 0xcc22, 0x9d06, 0x299c, 0x09e5, 0x1eec, 0x514f,
  0x8d53, 0xa650, 0x5c6e, 0xc577, 0x7958, 0x71ac, 0x8916, 0x9b4f,
  0x2c09, 0x5211, 0xf6d8, 0xcaaa, 0xf7ef, 0x287f, 0x7a94, 0xab49,
  0xfa2c, 0x7222, 0xe457, 0xd71a, 0x00c3, 0x1a76, 0xe98c, 0xc037,
  0x8208, 0x5c2d, 0xdfda, 0xe5f5, 0x0b45, 0x15ce, 0x8a7e, 0xfcad,
  0xaa2d, 0x4b5c, 0xd42e, 0xb251, 0x907e, 0x9a47, 0xc9a6, 0xd93f,
  0x085e, 0x35ce, 0xa153, 0x7e7b, 0x9f0b, 0x25aa, 0x5d9f, 0xc04d,
  0x8a0e, 0x2875, 0x4a1c, 0x295f, 0x1393, 0xf760, 0x9178, 0x0f5b,
  0xfa7d, 0x83b4, 0x2082, 0x721d, 0x6462, 0x0368, 0x67e2, 0x8624,
  0x194d, 0x22f6, 0x78fb, 0x6791, 0xb238, 0xb332, 0x7276, 0xf272,
  0x47ec, 0x4504, 0xa961, 0x9fc8, 0x3fdc, 0xb413, 0x007a, 0x0806,
  0x7458, 0x95c6, 0xccaa, 0x18d6, 0xe2ae, 0x1b06, 0xf3f6, 0x5050,
  0xc8e8, 0xf4ac, 0xc04c, 0xf41c, 0x992f, 0xae44, 0x5f1b, 0x1113,
  0x1738, 0xd9a8, 0x19ea, 0x2d33, 0x9698, 0x2fe9, 0x323f, 0xcde2,
  0x6d71, 0xe37d, 0xb697, 0x2c4f, 0x4373, 0x9102, 0x075d, 0x8e25,
  0x1672, 0xec28, 0x6acb, 0x86cc, 0x186e, 0x9414, 0xd674, 0xd1a5
};

const uint32_t __single_hash64[256] =
{
  /* http://random.org 2014.10.24 */
  0xd25e9f0a, 0xb1af9d5e, 0xb753dfa2, 0x157050f7,  /* 0 */
  0xc84b072c, 0xdd14fe7c, 0xf92208c3, 0xdf08a0c0,
  0x63a5c118, 0x76f5d90f, 0xa2f8b93e, 0xb6c12d22,
  0xaf074957, 0x966fb7d9, 0x62f7b785, 0xb40e8a09,
  0x0a811d5d, 0x323a6daa, 0xb62f7c5b, 0xfdcb9a53,
  0xf25a9067, 0x4506bc7a, 0xff58a74b, 0x5ae62817,
  0x74097675, 0x722c0fd9, 0x116a2a66, 0x65f76728,
  0x72c79651, 0xe043cf9d, 0x64b867c7, 0x6604834f,
  0xcdca58a6, 0x0f164e2d, 0x24515f05, 0x632cdbf8,
  0x18091d4a, 0x3eff4128, 0x673d1c33, 0xd8e10c71,
  0x1a3edf11, 0xba52892f, 0xa56949e0, 0xf3e1dd77,  /* 10 */
  0x86fcbe3e, 0x138d66d0, 0x4fc98359, 0xc22e5dd6,
  0xc59f2267, 0x6c6dd739, 0xe03da190, 0x07e8469c,
  0xadcfb02c, 0x00d3b0d9, 0xa1f44918, 0x8bd84d87,
  0x08ec9ec1, 0xbbcd156f, 0xb57718e3, 0x3177e752,
  0xf52a4d70, 0xde7aaad9, 0x075f1da0, 0x21ba00c6,
  0xb9469a5c, 0xcf08d5ba, 0x91ac9edc, 0xc6167b63,
  0xc1974919, 0xc8c8d195, 0x4b1996dd, 0xeff8991c,
  0xf7f66c6b, 0x25b012e2, 0x59d12a98, 0xea40d3cc,
  0x41f9970b, 0xec48101a, 0xa3bdcf90, 0x99f16905,
  0x27af6c97, 0xc849af37, 0x49cad89b, 0xf48c2278,  /* 20 */
  0x5529c3d8, 0x9e7d6dce, 0x16feb52d, 0xf1b0aca1,
  0xaf28fccb, 0x48e4ce3c, 0xc4436617, 0x64524e3e,
  0x61806681, 0x6384f2d7, 0x1172880f, 0x34a5ef5f,
  0xcc8cc0a8, 0x66e8f100, 0x2866085f, 0xba9b1b2d,
  0x51285949, 0x2be4b574, 0x889b1ef5, 0x3dbe920d,
  0x9277a62f, 0x0584a9f6, 0x085d8fc4, 0x4b5d403d,
  0x4e46ca78, 0x3294c2f9, 0x29313e70, 0xe4f09b24,
  0xe73b331c, 0x072f5552, 0x2e390b78, 0xea0021ca,
  0xd8f40320, 0xed0e16fd, 0x7de9cf7a, 0xf17e3d6c,
  0x8df1bd85, 0x052cae67, 0x3486e512, 0x3a1c09b8,  /* 30 */
  0x6c2a7b4e, 0x83455753, 0xbc0353ac, 0x0ffe20b6,
  0x5fdcef85, 0x010f506c, 0x595ce972, 0xe28680d0,
  0xa7e216b2, 0xa392ee0f, 0x25b73faa, 0x2b1f4983,
  0xeeaefe98, 0x1d3d9cbc, 0x6aebe97b, 0x8b7b3584,
  0x9e6a9a07, 0xd37f1e99, 0x4ac2a441, 0x8ae9a213,
  0x7d0e27d7, 0x5de54b9a, 0x8621de1f, 0xf0f2f866,
  0xcb08d275, 0x49c3f87e, 0xd5ee68c1, 0x9802fc77,
  0x68be6c5e, 0x65aa8c27, 0xf423d5f7, 0x10ec5502,
  0x9909bce1, 0x509cdf1b, 0x338fea72, 0x2733e9bf,
  0xf92f4fd7, 0x87738ea2, 0x931a8bbc, 0x0a5c9155,  /* 40 */
  0xbe5edd9b, 0xadbf5838, 0x0338f8d2, 0x290da210,
  0x390c37d8, 0xe7cffae8, 0x20617ebe, 0x464322dd,
  0x7b3c4e78, 0xac142dcb, 0x2d5cef76, 0xd8fe49fc,
  0x60f4e9a9, 0x7473816f, 0x0dc35f39, 0x5eed80c1,
  0x0cb55ab6, 0x1d3ac541, 0x13c7f529, 0x7bffdf4a,
  0xe334785b, 0x85263ec1, 0xd132ae56, 0x7c868b9e,
  0x47f60638, 0x1012b979, 0x81c31dd3, 0x1af868c8,
  0x0c5d0742, 0xd1b3e1a2, 0x5873200a, 0xf848465c,
  0x0fc4d596, 0x609c18af, 0xc9f5a480, 0xd1a94a84,
  0xa1431a3f, 0x7de8bb1a, 0x25f1256b, 0x1dcc732c,  /* 50 */
  0x6aa1549a, 0xa2367281, 0x32f2a77e, 0x82e62a0f,
  0x045cbb56, 0x74b2027c, 0xd71a32d9, 0x022e7cb5,
  0xe99be177, 0x60222fdf, 0xd69681ca, 0x9008ee2c,
  0x32923db4, 0xcf82bf97, 0x38960a5b, 0xb3503d5b,
  0x9bd4c7f2, 0x33c029c8, 0x1ef504a3, 0xdb249d3b,
  0x91e89676, 0x4ca43b36, 0x9191433c, 0x465d5dc4,
  0xf4dcb118, 0x9d11dd00, 0xb592f058, 0xdbe5ce30,
  0x74790d92, 0x779850a8, 0x7180d25b, 0xfa951d99,
  0x5990935a, 0x921cb022, 0x3b7c39bc, 0x6a38a7c7,
  0xdc22703b, 0x142bab3b, 0x4e3d9479, 0x44bb8482,  /* 60 */
  0x8043abce, 0xfebe832a, 0x8e6a2f98, 0x4d43c4fe,
  0xd192a70a, 0x802f3c3a, 0x5d11bbab, 0x2665d241,
  0xb3f3a680, 0x3a8d223f, 0xcf82cdb4, 0x4ed28743,
};

uint64_t
xd3_large64_cksum_old (xd3_hash_cfg *ignore, const uint8_t *base, const usize_t look)
{
  static const uint64_t kBits = 32;
  static const uint64_t kMask = 0xffffffff;
  usize_t i = 0;
  uint64_t low  = 0;
  uint64_t high = 0;

  for (; i < look; i += 1)
    {
      low  += PERMUTE64(*base++);
      high += low;
    }

  return ((high & kMask) << kBits) | (low & kMask);
}

uint64_t
xd3_large64_cksum_update_old (xd3_hash_cfg *ignore, const uint64_t cksum,
			      const uint8_t *base, const usize_t look)
{
  static const uint64_t kBits = 32;
  static const uint64_t kMask = 0xffffffff;
  uint64_t old_c = PERMUTE64(base[0]);
  uint64_t new_c = PERMUTE64(base[look]);
  uint64_t low   = ((cksum & kMask) - old_c + new_c) & kMask;
  uint64_t high  = ((cksum >> kBits) - (old_c * look) + low) & kMask;
  return (high << kBits) | low;
}

uint32_t
xd3_large32_cksum_old (xd3_hash_cfg *ignore, const uint8_t *base, const usize_t look)
{
  static const uint32_t kBits = 16;
  static const uint32_t kMask = 0xffff;
  usize_t i = 0;
  uint32_t low  = 0;
  uint32_t high = 0;

  for (; i < look; i += 1)
    {
      low  += PERMUTE32(*base++);
      high += low;
    }

  return ((high & kMask) << kBits) | (low & kMask);
}

uint32_t
xd3_large32_cksum_update_old (xd3_hash_cfg *ignore, const uint32_t cksum,
			      const uint8_t *base, const usize_t look)
{
  static const uint32_t kBits = 16;
  static const uint32_t kMask = 0xffff;
  uint32_t old_c = PERMUTE32(base[0]);
  uint32_t new_c = PERMUTE32(base[look]);
  uint32_t low   = ((cksum & kMask) - old_c + new_c) & kMask;
  uint32_t high  = ((cksum >> kBits) - (old_c * look) + low) & kMask;
  return (high << kBits) | low;
}
