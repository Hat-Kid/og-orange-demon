#include "mips_instructions.h"

namespace LSPData {

const std::vector<MIPSInstruction> MIPS_INSTRUCTION_LIST = {
    {"ee", "ADD", "Add Word"},
    {"ee", "ADDI", "Add Immediate Word"},
    {"ee", "ADDIU", "Add Immediate Unsigned Word"},
    {"ee", "ADDU", "Add Unsigned Word"},
    {"ee", "AND", "And"},
    {"ee", "ANDI", "Add Immediate"},
    {"ee", "BEQ", "Branch on Equal"},
    {"ee", "BEQL", "Branch on Equal Likely"},
    {"ee", "BGEZ", "Branch on Greater Than or Equal to Zero"},
    {"ee", "BGEZAL", "Branch on Greater Than or Equal to Zero and Link"},
    {"ee", "BGEZALL", "Branch on Greater Than or Equal to Zero and Link Likely"},
    {"ee", "BGEZL", "Branch on Greater Than or Equal to Zero Likely"},
    {"ee", "BGTZ", "Branch on Greater Than Zero"},
    {"ee", "BGTZL", "Branch on Greater Than Zero Likely"},
    {"ee", "BLEZ", "Branch on Less Than or Equal to Zero"},
    {"ee", "BLEZL", "Branch on Less Than or Equal to Zero Likely"},
    {"ee", "BLTZ", "Branch on Less Than Zero"},
    {"ee", "BLTZAL", "Branch on Less Than Zero and Link"},
    {"ee", "BLTZALL", "Branch on Less Than Zero and Link Likely"},
    {"ee", "BLTZL", "Branch on Less Than Zero Likely"},
    {"ee", "BNE", "Branch on Not Equal"},
    {"ee", "BNEL", "Branch on Not Equal Likely"},
    {"ee", "BREAK", "Breakpoint"},
    {"ee", "DADD", "Doubleword Add"},
    {"ee", "DADDI", "Doubleword Add Immediate"},
    {"ee", "DADDIU", "Doubleword Add Immediate Unsigned"},
    {"ee", "DADDU", "Doubleword Add Unsigned"},
    {"ee", "DIV", "Divide Word"},
    {"ee", "DIVU", "Divide Unsigned Word"},
    {"ee", "DSLL", "Doubleword Shift Left Logical"},
    {"ee", "DSLL32", "Doubleword Shift Left Logical Plus 32"},
    {"ee", "DSLLV", "Doubleword Shift Left Logical Variable"},
    {"ee", "DSRA", "Doubleword Shift Right Arithmetic"},
    {"ee", "DSRA32", "Doubleword Shift Right Arithmetic Plus 32"},
    {"ee", "DSRAV", "Doubleword Shift Right Arithmetic Variable"},
    {"ee", "DSRL", "Doubleword Shift Right Logical"},
    {"ee", "DSRL32", "Doubleword Shift Right Logical Plus 32"},
    {"ee", "DSRLV", "Doubleword Shift Right Logical Variable"},
    {"ee", "DSUB", "Doubleword Subtract"},
    {"ee", "DSUBU", "Doubleword Subtract Unsigned"},
    {"ee", "J", "Jump"},
    {"ee", "JAL", "Jump and Link"},
    {"ee", "JALR", "Jump and Link Register"},
    {"ee", "JR", "Jump Register"},
    {"ee", "LB", "Load Byte"},
    {"ee", "LBU", "Load Byte Unsigned"},
    {"ee", "LD", "Load Doubleword"},
    {"ee", "LDL", "Load Doubleword Left"},
    {"ee", "LDR", "Load Doubleword Right"},
    {"ee", "LH", "Load Halfword"},
    {"ee", "LHU", "Load Halfword Unsigned"},
    {"ee", "LUI", "Load Upper Immediate"},
    {"ee", "LW", "Load Word"},
    {"ee", "LWL", "Load Word Left"},
    {"ee", "LWR", "Load Word Right"},
    {"ee", "LWU", "Load Word Unsigned"},
    {"ee", "MFHI", "Move from HI Register"},
    {"ee", "MFLO", "Move from LO Register"},
    {"ee", "MOVN", "Move Conditional on Not Zero"},
    {"ee", "MOVZ", "Move Conditional on Zero"},
    {"ee", "MTHI", "Move to HI Register"},
    {"ee", "MTLO", "Move to LO Register"},
    {"ee", "MULT", "Multiply Word"},
    {"ee", "MULTU", "Multiply Unsigned Word"},
    {"ee", "NOR", "Not Or"},
    {"ee", "OR", "Or"},
    {"ee", "ORI", "Or immediate"},
    {"ee", "PREF", "Prefetch"},
    {"ee", "SB", "Store Byte"},
    {"ee", "SD", "Store Doubleword"},
    {"ee", "SDL", "Store Doubleword Left"},
    {"ee", "SDR", "Store Doubleword Right"},
    {"ee", "SH", "Store Halfword"},
    {"ee", "SLL", "Shift Word Left Logical"},
    {"ee", "SLLV", "Shift Word Left Logical Variable"},
    {"ee", "SLT", "Set on Less Than"},
    {"ee", "SLTI", "Set on Less Than Immediate"},
    {"ee", "SLTIU", "Set on Less Than Immediate Unsigned"},
    {"ee", "SLTU", "Set on Less Than Unsigned"},
    {"ee", "SRA", "Shift Word Right Arithmetic"},
    {"ee", "SRAV", "Shift Word Right Arithmetic Variable"},
    {"ee", "SRL", "Shift Word Right Logical"},
    {"ee", "SRLV", "Shift Word Right Logical Variable"},
    {"ee", "SUB", "Subtract Word"},
    {"ee", "SUBU", "Subtract Unsigned Word"},
    {"ee", "SW", "Store Word"},
    {"ee", "SWL", "Store Word Left"},
    {"ee", "SWR", "Store Word Right"},
    {"ee", "SYNC", "Synchronize Shared Memory"},
    {"ee", "SYNC.L", "Synchronize Shared Memory"},
    {"ee", "SYNC.P", "Synchronize Shared Memory"},
    {"ee", "SYSCALL", "System Call"},
    {"ee", "TEQ", "Trap if Equal"},
    {"ee", "TEQI", "Trap if Equal Immediate"},
    {"ee", "TGE", "Trap if Greater or Equal"},
    {"ee", "TGEI", "Trap if Greater or Equal Immediate"},
    {"ee", "TGEIU", "Trap if Greater or Equal Immediate Unsigned"},
    {"ee", "TGEU", "Trap if Greater or Equal Unsigned"},
    {"ee", "TLT", "Trap if Less Than"},
    {"ee", "TLTI", "Trap if Less Than Immediate"},
    {"ee", "TLTIU", "Trap if Less Than Immediate Unsigned"},
    {"ee", "TLTU", "Trap if Less Than Unsigned"},
    {"ee", "TNE", "Trap if Not Equal"},
    {"ee", "TNEI", "Trap if Not Equal Immediate"},
    {"ee", "XOR", "Exclusive OR"},
    {"ee", "XORI", "Exclusive OR Immediate"},
    {"ee", "DIV1", "Divide Word Pipeline 1"},
    {"ee", "DIVU1", "Divide Unsigned Word Pipeline 1"},
    {"ee", "LQ", "Load Quadword"},
    {"ee", "MADD", "Multiply-Add word"},
    {"ee", "MADD1", "Multiply-Add word Pipeline"},
    {"ee", "MADDU", "Multiply-Add Unsigned word"},
    {"ee", "MADDU1", "Multiply-Add Unsigned word Pipeline"},
    {"ee", "MFHI1", "Move From HI1 Register"},
    {"ee", "MFLO1", "Move From LO1 Register"},
    {"ee", "MFSA", "Move from Shift Amount Register"},
    {"ee", "MTHI1", "Move To HI1 Register"},
    {"ee", "MTLO1", "Move To LO1 Register"},
    {"ee", "MTSA", "Move to Shift Amount Register"},
    {"ee", "MTSAB", "Move Byte Count to Shift Amount Register"},
    {"ee", "MTSAH", "Move Halfword Count to Shift Amount Register"},
    {"ee", "MULT", "Multiply Word"},
    {"ee", "MULT1", "Multiply Word Pipeline"},
    {"ee", "MULTU", "Multiply Unsigned Word"},
    {"ee", "MULTU1", "Multiply Unsigned Word Pipeline"},
    {"ee", "PABSH", "Parallel Absolute Halfword"},
    {"ee", "PABSW", "Parallel Absolute Word"},
    {"ee", "PADDB", "Parallel Add Byte"},
    {"ee", "PADDH", "Parallel Add Halfword"},
    {"ee", "PADDSB", "Parallel Add with Signed Saturation Byte"},
    {"ee", "PADDSH", "Parallel Add with Signed Saturation Halfword"},
    {"ee", "PADDSW", "Parallel Add with Signed Saturation Word"},
    {"ee", "PADDUB", "Parallel Add with Unsigned Saturation Byte"},
    {"ee", "PADDUH", "Parallel Add with Unsigned Saturation Halfword"},
    {"ee", "PADDUW", "Parallel Add with Unsigned Saturation Word"},
    {"ee", "PADDW", "Parallel Add Word"},
    {"ee", "PADSBH", "Parallel Add/Subtract Halfword"},
    {"ee", "PAND", "Parallel And"},
    {"ee", "PCEQB", "Parallel Compare for Equal Byte"},
    {"ee", "PCEQH", "Parallel Compare for Equal Halfword"},
    {"ee", "PCEQW", "Parallel Compare for Equal Word"},
    {"ee", "PCGTB", "Parallel Compare for Greater Than Byte"},
    {"ee", "PCGTH", "Parallel Compare for Greater Than Halfword"},
    {"ee", "PCGTW", "Parallel Compare for Greater Than Word"},
    {"ee", "PCPYH", "Parallel Copy Halfword"},
    {"ee", "PCPYLD", "Parallel Copy Lower Doubleword"},
    {"ee", "PCPYUD", "Parallel Copy Upper Doubleword"},
    {"ee", "PDIVBW", "Parallel Divide Broadcast Word"},
    {"ee", "PDIVUW", "Parallel Divide Unsigned Word"},
    {"ee", "PDIVW", "Parallel Divide Word"},
    {"ee", "PEXCH", "Parallel Exchange Center Halfword"},
    {"ee", "PEXCW", "Parallel Exchange Center Word"},
    {"ee", "PEXEH", "Parallel Exchange Even Halfword"},
    {"ee", "PEXEW", "Parallel Exchange Even Word"},
    {"ee", "PEXT5", "Parallel Extend from 5 bits"},
    {"ee", "PEXTLB", "Parallel Extend Lower from Byte"},
    {"ee", "PEXTLH", "Parallel Extend Lower from Halfword"},
    {"ee", "PEXTLW", "Parallel Extend Lower from Word"},
    {"ee", "PEXTUB", "Parallel Extend Upper from Byte"},
    {"ee", "PEXTUH", "Parallel Extend Upper from Halfword"},
    {"ee", "PEXTUW", "Parallel Extend Upper from Word"},
    {"ee", "PHMADH", "Parallel Horizontal Multiply-Add Halfword"},
    {"ee", "PHMSBH", "Parallel Horizontal Multiply-Subtract Halfword"},
    {"ee", "PINTEH", "Parallel Interleave Even Halfword"},
    {"ee", "PINTH", "Parallel Interleave Halfword"},
    {"ee", "PLZCW", "Parallel Leading Zero or one Count Word"},
    {"ee", "PMADDH", "Parallel Multiply-Add Halfword"},
    {"ee", "PMADDUW", "Parallel Multiply-Add Unsigned Word"},
    {"ee", "PMADDW", "Parallel Multiply-Add Word"},
    {"ee", "PMAXH", "Parallel Maximize Halfword"},
    {"ee", "PMAXW", "Parallel Maximize Word"},
    {"ee", "PMFHI", "Parallel Move From HI Register"},
    {"ee", "PMFHL", "Parallel Move From HI/LO Register"},
    {"ee", "PMFHL", "Parallel Move From HI/LO Register"},
    {"ee", "PMFHL", "Parallel Move From HI/LO Register"},
    {"ee", "PMFHL", "Parallel Move From HI/LO Register"},
    {"ee", "PMFHL", "Parallel Move From HI/LO Register"},
    {"ee", "PMFLO", "Parallel Move From LO Register"},
    {"ee", "PMINH", "Parallel Minimize Halfword"},
    {"ee", "PMINW", "Parallel Minimize Word"},
    {"ee", "PMSUBH", "Parallel Multiply-Subtract Halfword"},
    {"ee", "PMSUBW", "Parallel Multiply-Subtract Word"},
    {"ee", "PMTHI", "Parallel Move To HI Register"},
    {"ee", "PMTHL", "Parallel Move To HI/LO Register"},
    {"ee", "PMTLO", "Parallel Move To LO Register"},
    {"ee", "PMULTH", "Parallel Multiply Halfword"},
    {"ee", "PMULTUW", "Parallel Multiply Unsigned Word"},
    {"ee", "PMULTW", "Parallel Multiply Word"},
    {"ee", "PNOR", "Parallel Not Or"},
    {"ee", "POR", "Parallel Or"},
    {"ee", "PPAC5", "Parallel Pack to 5 bits"},
    {"ee", "PPACB", "Parallel Pack to Byte"},
    {"ee", "PPACH", "Parallel Pack to Halfword"},
    {"ee", "PPACW", "Parallel Pack to Word"},
    {"ee", "PREVH", "Parallel Reverse Halfword"},
    {"ee", "PROT3W", "Parallel Rotate 3 Words Left"},
    {"ee", "PSLLH", "Parallel Shift Left Logical Halfword"},
    {"ee", "PSLLVW", "Parallel Shift Left Logical Variable Word"},
    {"ee", "PSLLW", "Parallel Shift Left Logical Word"},
    {"ee", "PSRAH", "Parallel Shift Right Arithmetic Halfword"},
    {"ee", "PSRAVW", "Parallel Shift Right Arithmetic Variable Word"},
    {"ee", "PSRAW", "Parallel Shift Right Arithmetic Word"},
    {"ee", "PSRLH", "Parallel Shift Right Logical Halfword"},
    {"ee", "PSRLVW", "Parallel Shift Right Logical Variable Word"},
    {"ee", "PSRLW", "Parallel Shift Right Logical Word"},
    {"ee", "PSUBB", "Parallel Subtract Byte"},
    {"ee", "PSUBH", "Parallel Subtract Halfword"},
    {"ee", "PSUBSB", "Parallel Subtract with Signed saturation Byte"},
    {"ee", "PSUBSH", "Parallel Subtract with Signed Saturation Halfword"},
    {"ee", "PSUBSW", "Parallel Subtract with Signed Saturation Word"},
    {"ee", "PSUBUB", "Parallel Subtract with Unsigned Saturation Byte"},
    {"ee", "PSUBUH", "Parallel Subtract with Unsigned Saturation Halfword"},
    {"ee", "PSUBUW", "Parallel Subtract with Unsigned Saturation Word"},
    {"ee", "PSUBW", "Parallel Subtract Word"},
    {"ee", "PXOR", "Parallel Exclusive OR"},
    {"ee", "QFSRV", "Quadword Funnel Shift Right Variable"},
    {"ee", "SQ", "Store Quadword"},
    {"ee", "BC0F", "Branch on Coprocessor 0 False"},
    {"ee", "BC0FL", "Branch on Coprocessor 0 False Likely"},
    {"ee", "BC0T", "Branch on Coprocessor 0 True"},
    {"ee", "BC0TL", "Branch on Coprocessor 0 True Likely"},
    {"ee", "cache bfh", "Cache Operation (BTAC Flush)"},
    {"ee", "cache bhinbt", "Cache Operation (Hit Invalidate BTAC)"},
    {"ee", "cache bxlbt", "Cache Operation (Index Load BTAC)"},
    {"ee", "cache bxsbt", "Cache Operation (Index Store BTAC)"},
    {"ee", "cache dhin", "Cache Operation (Hit Invalidate)"},
    {"ee", "cache dhwbin", "Cache Operation (Hit Writeback Invalidate)"},
    {"ee", "cache dhwoin", "Cache Operation (Hit Writeback Without Invalidate)"},
    {"ee", "cache dxin", "Cache Operation (Index Invalidate)"},
    {"ee", "cache dxldt", "Cache Operation (Index Load Data)"},
    {"ee", "cache dxltg", "Cache Operation (Index Load Tag)"},
    {"ee", "cache dxsdt", "Cache Operation (Index Store Data)"},
    {"ee", "cache dxstg", "Cache Operation (Index Store Tag)"},
    {"ee", "cache dxwbin", "Cache Operation (Index Writeback Invalidate)"},
    {"ee", "cache ifl", "Cache Operation (Fill)"},
    {"ee", "cache ihin", "Cache Operation (Hit Invalidate)"},
    {"ee", "cache ixin", "Cache Operation (Index Invalidate)"},
    {"ee", "cache ixldt", "Cache Operation (Index Load Data)"},
    {"ee", "cache ixltg", "Cache Operation (Index Load Tag)"},
    {"ee", "cache ixsdt", "Cache Operation (Index Store Data)"},
    {"ee", "cache ixstg", "Cache Operation (Index Store Tag)"},
    {"ee", "DI", "Disable Interrupt"},
    {"ee", "EI", "Enable Interrupt"},
    {"ee", "ERET", "Exception Return"},
    {"ee", "MFBPC", "Move from Breakpoint Control Register"},
    {"ee", "MFC0", "Move from System Control Coprocessor"},
    {"ee", "MFDAB", "Move from Data Address Breakpoint Register"},
    {"ee", "MFDABM", "Move from Data Address Breakpoint Mask Register"},
    {"ee", "MFDVB", "Move from Data value Breakpoint Register"},
    {"ee", "MFDVBM", "Move from Data Value Breakpoint Mask Register"},
    {"ee", "MFIAB", "Move from Instruction Address Breakpoint Register"},
    {"ee", "MFIABM", "Move from Instruction Address Breakpoint Mask Register"},
    {"ee", "MFPC", "Move from Performance Counter"},
    {"ee", "MFPS", "Move from Performance Event Specifier"},
    {"ee", "MTBPC", "Move to Breakpoint Control Register"},
    {"ee", "MTC0", "Move to System Control Coprocessor"},
    {"ee", "MTDAB", "Move to Data Address Breakpoint Register"},
    {"ee", "MTDABM", "Move to Data Address Breakpoint Mask Register"},
    {"ee", "MTDVB", "Move to Data Value Breakpoint Register"},
    {"ee", "MTDVBM", "Move to Data Value Breakpoint Mask Register"},
    {"ee", "MTIAB", "Move to Instruction Address Breakpoint Register"},
    {"ee", "MTIABM", "Move to Instruction Address Breakpoint Mask Register"},
    {"ee", "MTPC", "Move to Performance Counter"},
    {"ee", "MTPS", "Move to Performance Event Specifier"},
    {"ee", "TLBP", "Probe TLB for Matching Entry"},
    {"ee", "TLBR", "Read Indexed TLB Entry"},
    {"ee", "TLBWI", "Write Index TLB Entry"},
    {"ee", "TLBWR", "Write Random TLB Entry"},
    {"ee", "ABS", "Floating Point Absolute Value"},
    {"ee", "ADD", "Floating Point ADD"},
    {"ee", "ADDA", "Floating Point Add to Accumulator"},
    {"ee", "BC1F", "Branch on FP False"},
    {"ee", "BC1FL", "Branch on FP False Likely"},
    {"ee", "BC1T", "Branch on FP True"},
    {"ee", "BC1TL", "Branch on FP True Likely"},
    {"ee", "C.EQ.S", "Floating Point Compare"},
    {"ee", "c.f.s", "Floating Point Compare"},
    {"ee", "c.le.s", "Floating Point Compare"},
    {"ee", "c.lt.s", "Floating Point Compare"},
    {"ee", "CFC1", "Move Control Word from Floating Point"},
    {"ee", "CTC1", "Move Control Word to Floating Point"},
    {"ee", "CVT", "Fixed-point Convert to Single Floating Point"},
    {"ee", "CVT", "Floating Point Convert to Word Fixed-point"},
    {"ee", "DIV", "Floating Point Divide"},
    {"ee", "LWC1", "Load Word to Floating Point"},
    {"ee", "MADD", "Floating Point Multiply-ADD"},
    {"ee", "MADDA", "Floating Point Multiply-Add"},
    {"ee", "MAX", "Floating Point Maximum"},
    {"ee", "MFC1", "Move Word from Floating Point"},
    {"ee", "MIN", "Floating Point Minimum"},
    {"ee", "MOV", "Floating Point Move"},
    {"ee", "MSUB", "Floating Point Multiply and Subtract"},
    {"ee", "MSUBA", "Floating Point Multiply and Subtract from Accumulator"},
    {"ee", "MTC1", "Move Word to Floating Point"},
    {"ee", "MUL", "Floating Point Multiply"},
    {"ee", "MULA", "Floating Point Multiply to Accumulator"},
    {"ee", "NEG", "Floating Point Negate"},
    {"ee", "RSQRT", "Floating Point Reciprocal Square Root"},
    {"ee", "SQRT", "Floating Point Square Root"},
    {"ee", "SUB", "Floating Point Subtract"},
    {"ee", "SUBA", "Floating Point Subtract to Accumulator"},
    {"ee", "SWC1", "Store Word from Floating Point"},
    {"vu", "ABS", "Absolute Value"},
    {"vu", "ADD", "Add"},
    {"vu", "ADDi", "Add to I Register"},
    {"vu", "ADDq", "Add to Q Register"},
    {"vu", "ADDbc", "Broadcast Add"},
    {"vu", "ADDA", "Add to Accumulator"},
    {"vu", "ADDAi", "Add I Register to Accumulator"},
    {"vu", "ADDAq", "Add Q Register to Accumulator"},
    {"vu", "ADDAbc", "Broadcast Add to Accumulator"},
    {"vu", "CLIP", "Clipping Judgment"},
    {"vu", "FTOI0", "Convert to Fixed Point"},
    {"vu", "FTOI4", "Convert to Fixed Point"},
    {"vu", "FTOI12", "Convert to Fixed Point"},
    {"vu", "FTOI15", "Convert to Fixed Point"},
    {"vu", "ITOF0", "Convert to Floating-Point Number"},
    {"vu", "ITOF4", "Convert to Floating-Point Number"},
    {"vu", "ITOF12", "Convert to Floating-Point Number"},
    {"vu", "ITOF15", "Convert to Floating-Point Number"},
    {"vu", "MADD", "Product Sum"},
    {"vu", "MADDi", "Product Sum with I Register"},
    {"vu", "MADDq", "Product Sum by Q Register"},
    {"vu", "MADDbc", "Broadcast Product Sum"},
    {"vu", "MADDA", "Product Sum to Accumulator"},
    {"vu", "MADDAi", "Product Sum by I register, to Accumulator"},
    {"vu", "MADDAq", "Product Sum by Q Register, to Accumulator"},
    {"vu", "MADDAbc", "Broadcast Product Sum to Accumulator"},
    {"vu", "MAX", "Maximum Value"},
    {"vu", "MAXi", "Maximum Value"},
    {"vu", "MAXbc", "Maximum Value"},
    {"vu", "MINI", "Minimum Value"},
    {"vu", "MINIi", "Minimum Value"},
    {"vu", "MINIbc", "Minimum Value"},
    {"vu", "MSUB", "Multiply and Subtract"},
    {"vu", "MSUBi", "Multiply and Subtract with I Register"},
    {"vu", "MSUBq", "Multiply and Subtract by Q Register"},
    {"vu", "MSUBbc", "Broadcast Multiply and Subtract"},
    {"vu", "MSUBA", "Multiply and Subtract to Accumulator"},
    {"vu", "MSUBAi", "Multiply and Subtract with I Register, to Accumulator"},
    {"vu", "MSUBAq", "Multiply and Subtract by Q Register, to Accumulator"},
    {"vu", "MSUBAbc", "Broadcast Multiply and Subtract to Accumulator"},
    {"vu", "MUL", "Multiply"},
    {"vu", "MULi", "Multiply by I Register"},
    {"vu", "MULq", "Multiply by Q Register"},
    {"vu", "MULbc", "Multiply by Broadcast"},
    {"vu", "MULA", "Multiply to Accumulator"},
    {"vu", "MULAi", "Multiply by I Register, to Accumulator"},
    {"vu", "MULAq", "Multiply by Q Register, to Accumulator"},
    {"vu", "MULAbc", "Broadcast Multiply by broadcast, to Accumulator"},
    {"vu", "NOP", "No Operation"},
    {"vu", "OPMULA", "Vector Outer Product"},
    {"vu", "OPMSUB", "Vector Outer Product"},
    {"vu", "SUB", "Subtract"},
    {"vu", "SUBi", "Subtract I Register"},
    {"vu", "SUBq", "Subtract Q Register"},
    {"vu", "SUBbc", "Broadcast Subtract"},
    {"vu", "SUBA", "Substract to Accumulator"},
    {"vu", "SUBAi", "Subtract I Register to Accumulator"},
    {"vu", "SUBAq", "Subtract Q Register to Accumulator"},
    {"vu", "SUBAbc", "Broadcast Subtract to Accumulator"},
    {"vu", "B", "Unconditional Branch"},
    {"vu", "BAL", "Unconditional Branch with Saving Address"},
    {"vu", "DIV", "Divide"},
    {"vu", "EATAN", "Arctangent"},
    {"vu", "EATANxy", "Arctangent"},
    {"vu", "EATANxz", "Arctangent"},
    {"vu", "EEXP", "Exponent"},
    {"vu", "ELENG", "Length"},
    {"vu", "ERCPR", "Reciprocal Number"},
    {"vu", "ERLENG", "Reciprocal Number of Length"},
    {"vu", "ERSADD", "Reciprocal Number"},
    {"vu", "ERSQRT", "Reciprocal Number of Square Root"},
    {"vu", "ESADD", "Sum of Square Numbers"},
    {"vu", "ESIN", "Sine"},
    {"vu", "ESQRT", "Square Root"},
    {"vu", "ESUM", "Sum of Each Field"},
    {"vu", "FCAND", "Test Clipping Flag"},
    {"vu", "FCEQ", "Test Clipping Flag"},
    {"vu", "FCGET", "Get Clipping Flag"},
    {"vu", "FCOR", "Test Clipping Flag"},
    {"vu", "FCSET", "Setting Clipping Flag"},
    {"vu", "FMAND", "Test MAC Flag Check"},
    {"vu", "FMEQ", "Test MAC Flag Check"},
    {"vu", "FMOR", "Test MAC Flag Check"},
    {"vu", "FSAND", "Test Status Flag Check"},
    {"vu", "FSEQ", "Test Status Flag Check"},
    {"vu", "FSOR", "Test Status Flag"},
    {"vu", "FSSET", "Set Sticky Flags"},
    {"vu", "IADD", "ADD Integer"},
    {"vu", "IADDI", "Add Immediate Value Integer"},
    {"vu", "IADDIU", "Add Immediate Integer"},
    {"vu", "IAND", "Logical Product"},
    {"vu", "IBEQ", "Conditional Branch"},
    {"vu", "IBGEZ", "Conditional Branch"},
    {"vu", "IBGTZ", "Conditional Branch"},
    {"vu", "IBLEZ", "Conditional Branch"},
    {"vu", "IBLTZ", "Conditional Branch"},
    {"vu", "IBNE", "Conditional Branch"},
    {"vu", "ILW", "Integer Load with Offset Specification"},
    {"vu", "ILWR", "Integer Load"},
    {"vu", "IOR", "Logical Sum"},
    {"vu", "ISUB", "Integer Subtract"},
    {"vu", "ISUBIU", "Immediate Value Integer Subtract"},
    {"vu", "ISW", "Integer Store with Offset"},
    {"vu", "ISWR", "Integer Store"},
    {"vu", "JALR", "Unconditional Jump with Address Saving"},
    {"vu", "JR", "Unconditional Jump"},
    {"vu", "LQ", "Load Qword"},
    {"vu", "LQD", "Load Qword with Pre-Decrement"},
    {"vu", "LQI", "Load with Post-Increment"},
    {"vu", "MFIR", "Move from Integer Register to Floating-Point Register"},
    {"vu", "MFP", "Move from P Register to Floating-Point Register"},
    {"vu", "MOVE", "Transfer between Floating-Point Registers"},
    {"vu", "MR32", "Move with Rotate"},
    {"vu", "MTIR", "Move from Floating-Point Register to Integer Register"},
    {"vu", "RGET", "Get Random Number"},
    {"vu", "RINIT", "Random Number Intialize"},
    {"vu", "RNEXT", "Next Random Number"},
    {"vu", "RSQRT", "Square Root Division"},
    {"vu", "RXOR", "Random Number Set"},
    {"vu", "SQ", "Store Qword with Offset"},
    {"vu", "SQD", "Store Qword with Pre-Decrement"},
    {"vu", "SQI", "Store with Post-Increment"},
    {"vu", "SQRT", "Square Root"},
    {"vu", "WAITP", "P Register Syncronize"},
    {"vu", "WAITQ", "Q Register Syncronize"},
    {"vu", "XGKICK", "GIF Control"},
    {"vu", "XITOP", "VIF Control"},
    {"vu", "XTOP", "VIF Control"},
    {"vu", "BC2F", "Branch on COP2 Conditional Signal"},
    {"vu", "BC2FL", "Branch on COP2 Conditional Signal"},
    {"vu", "BC2T", "Branch on COP2 Conditional Signal"},
    {"vu", "BC2TL", "Branch on COP2 Conditional signal"},
    {"vu", "CFC2", "Transfer Integer Data from VU to EE Core"},
    {"vu", "CTC2", "Transfer Integer Data from EE Core to VU"},
    {"vu", "LQC2", "Floating-Point Data Transfer from EE Core to VU"},
    {"vu", "QMFC2", "Floating-Point Data Transfer from VU to EE Core"},
    {"vu", "QMTC2", "Floating-Point Data Transfer from EE Core to VU"},
    {"vu", "SQC2", "Floating-Point Data Transfer from VU to EE Core"},
    {"vu", "VABS", "Absolute Value"},
    {"vu", "VADD", "Add"},
    {"vu", "VADDi", "Add to I Register"},
    {"vu", "VADDq", "Add to Q Register"},
    {"vu", "VADDbc", "Broadcast Add"},
    {"vu", "VADDA", "Add to Accumulator"},
    {"vu", "VADDAi", "Add I Register to Accumulator"},
    {"vu", "VADDAq", "Add Q Register to Accumulator"},
    {"vu", "VADDAbc", "Broadcast Add to Accumulator"},
    {"vu", "VCALLMS", "Start Micro Sub-Routine"},
    {"vu", "VCALLMSR", "Start Micro Sub-Routine by Register"},
    {"vu", "VCLIP", "Clipping Judgment"},
    {"vu", "VDIV", "Divide"},
    {"vu", "VFTOI0", "Conversion to Fixed Point"},
    {"vu", "VFTOI4", "Conversion to Fixed Point"},
    {"vu", "VFTOI12", "Conversion to Fixed Point"},
    {"vu", "VFTOI15", "Conversion to Fixed Point"},
    {"vu", "VIADD", "Add Integer"},
    {"vu", "VIADDI", "Add Immediate Value Integer"},
    {"vu", "VIAND", "Logical Product"},
    {"vu", "VILWR", "Integer Load"},
    {"vu", "VIOR", "Logical Sum"},
    {"vu", "VISUB", "Integer Subtract"},
    {"vu", "VISWR", "Integer Store"},
    {"vu", "VITOF0", "Conversion to Floating-Point Number"},
    {"vu", "VITOF4", "Conversion to Floating-Point Number"},
    {"vu", "VITOF12", "Conversion to Floating-Point Number"},
    {"vu", "VITOF15", "Conversion to Floating-Point Number"},
    {"vu", "VLQD", "Load with Pre-Decrement"},
    {"vu", "VLQI", "Load with Post-Increment"},
    {"vu", "VMADD", "Product Sum"},
    {"vu", "VMADDi", "Product Sum with I Register"},
    {"vu", "VMADDq", "Product Sum with Q Register"},
    {"vu", "VMADDbc", "Broadcast Product Sum"},
    {"vu", "VMADDA", "Product Sum to Accumulator"},
    {"vu", "VMADDAi", "Product Sum with I Register, to Accumulator"},
    {"vu", "VMADDAq", "Product Sum with Q Register, to Accumulator"},
    {"vu", "VMADDAbc", "Broadcast Product Sum to Accumulator"},
    {"vu", "VMAX", "Maximum Value"},
    {"vu", "VMAXi", "Maximum Value"},
    {"vu", "VMAXbc", "Maximum Value"},
    {"vu", "VMFIR", "Transfer from Integer Register to Floating-Point Register"},
    {"vu", "VMINI", "Minimum Value"},
    {"vu", "VMINIi", "Minimum Value"},
    {"vu", "VMINIbc", "Minimum Value"},
    {"vu", "VMOVE", "Transfer between Floating-Point Registers"},
    {"vu", "VMR32", "Vector Rotate"},
    {"vu", "VMSUB", "Multiply and Subtract"},
    {"vu", "VMSUBi", "Multiply and Subtract with I Register"},
    {"vu", "VMSUBq", "Multiply and Subtract Q Register"},
    {"vu", "VMSUBbc", "Broadcast Multiply and Subtract"},
    {"vu", "VMSUBA", "Multiply and Subtract to Accumulator"},
    {"vu", "VMSUBAi", "Multiply and Subtract with I Register, to Accumulator"},
    {"vu", "VMSUBAq", "Multiply and Subtract with Q Register, to Accumulator"},
    {"vu", "VMSUBAbc", "Broadcast Multiply and Subtract to Accumulator"},
    {"vu", "VMTIR", "Transfer from Floating-Point Register to Integer Register"},
    {"vu", "VMUL", "Multiply"},
    {"vu", "VMULi", "Multiply by I Register"},
    {"vu", "VMULq", "Multiply by Q Register"},
    {"vu", "VMULbc", "Broadcast Multiply"},
    {"vu", "VMULA", "Multiply to Accumulator"},
    {"vu", "VMULAi", "Multiply by I Register to Accumulator"},
    {"vu", "VMULAq", "Multiply by Q Register to Accumulator"},
    {"vu", "VMULAbc", "Broadcast Multiply to Accumulator"},
    {"vu", "VNOP", "No Operation"},
    {"vu", "VOPMULA", "Vector Outer Product"},
    {"vu", "VOPMSUB", "Vector Outer Product"},
    {"vu", "VRGET", "Get Random Numbers"},
    {"vu", "VRINIT", "Random Number Initial Set"},
    {"vu", "VRNEXT", "New Random Numbers"},
    {"vu", "VRSQRT", "Square Root Division"},
    {"vu", "VRXOR", "Random Number Set"},
    {"vu", "VSQD", "Store with Pre-Decrement"},
    {"vu", "VSQI", "Store with Post-Increment"},
    {"vu", "VSQRT", "Square Root"},
    {"vu", "VSUB", "Subtract"},
    {"vu", "VSUBi", "Subtract I Register"},
    {"vu", "VSUBq", "Subtract Q Register"},
    {"vu", "VSUBbc", "Broadcast Subtract"},
    {"vu", "VSUBA", "Subtract to Accumulator"},
    {"vu", "VSUBAi", "Subtract I Register to Accumulator"},
    {"vu", "VSUBAq", "Subtract Q Register to Accumulator"},
    {"vu", "VSUBAbc", "Broadcast Subtract to Accumulator"},
    {"vu", "VWAITQ", "Q Register Synchronize"},
};
}
