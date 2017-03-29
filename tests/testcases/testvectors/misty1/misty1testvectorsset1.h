#ifndef __MISTY1TESTVECTORSSET1__
#define __MISTY1TESTVECTORSSET1__

#include "../plainkeycipher.h"

// Test vector from <https://www.cosic.esat.kuleuven.be/nessie/testvectors/bc/misty1/Misty1-128-64.verified.test-vectors>

const std::vector <PlainKeyCipher> MISTY1_TEST_VECTORS_SET_1 = {
    std::make_tuple("0000000000000000", "80000000000000000000000000000000", "B5EDA7D64FCD2A02"),
    std::make_tuple("0000000000000000", "40000000000000000000000000000000", "EE7704FEB8363AE7"),
    std::make_tuple("0000000000000000", "20000000000000000000000000000000", "13CE7F4D691500E5"),
    std::make_tuple("0000000000000000", "10000000000000000000000000000000", "95EFB24F87A00F8B"),
    std::make_tuple("0000000000000000", "08000000000000000000000000000000", "2E1B2D4C1F8ADA93"),
    std::make_tuple("0000000000000000", "04000000000000000000000000000000", "93A0C856B5A15D17"),
    std::make_tuple("0000000000000000", "02000000000000000000000000000000", "26F070473709DDD3"),
    std::make_tuple("0000000000000000", "01000000000000000000000000000000", "307648EFA8EDC0E3"),
    std::make_tuple("0000000000000000", "00800000000000000000000000000000", "D8DF4DECAFCF82BA"),
    std::make_tuple("0000000000000000", "00400000000000000000000000000000", "736BC8D9CA650CE5"),
    std::make_tuple("0000000000000000", "00200000000000000000000000000000", "96F0B76064D85F51"),
    std::make_tuple("0000000000000000", "00100000000000000000000000000000", "E64959914035165A"),
    std::make_tuple("0000000000000000", "00080000000000000000000000000000", "71D4A818DD87C28C"),
    std::make_tuple("0000000000000000", "00040000000000000000000000000000", "6D8B15055A9D6F9B"),
    std::make_tuple("0000000000000000", "00020000000000000000000000000000", "55647D1966241FA0"),
    std::make_tuple("0000000000000000", "00010000000000000000000000000000", "35056BD48DD52DD5"),
    std::make_tuple("0000000000000000", "00008000000000000000000000000000", "971D05A15B00795F"),
    std::make_tuple("0000000000000000", "00004000000000000000000000000000", "D736385D0276280D"),
    std::make_tuple("0000000000000000", "00002000000000000000000000000000", "D91357A4CBB45A41"),
    std::make_tuple("0000000000000000", "00001000000000000000000000000000", "BA56FC91CBD8E6A8"),
    std::make_tuple("0000000000000000", "00000800000000000000000000000000", "DF7E8E7A1244DE27"),
    std::make_tuple("0000000000000000", "00000400000000000000000000000000", "1799C7D2C3B2DF95"),
    std::make_tuple("0000000000000000", "00000200000000000000000000000000", "91F7F20D0CFDEBBE"),
    std::make_tuple("0000000000000000", "00000100000000000000000000000000", "1F5880A6AD814FCB"),
    std::make_tuple("0000000000000000", "00000080000000000000000000000000", "7C711BBEA687E4B7"),
    std::make_tuple("0000000000000000", "00000040000000000000000000000000", "B116BD7E2029BBEE"),
    std::make_tuple("0000000000000000", "00000020000000000000000000000000", "2293E34A270DE17E"),
    std::make_tuple("0000000000000000", "00000010000000000000000000000000", "A9E23C1D56A36D4F"),
    std::make_tuple("0000000000000000", "00000008000000000000000000000000", "825EE27FC2DFD114"),
    std::make_tuple("0000000000000000", "00000004000000000000000000000000", "9A2B95A3E21A8E65"),
    std::make_tuple("0000000000000000", "00000002000000000000000000000000", "364931D1869B97ED"),
    std::make_tuple("0000000000000000", "00000001000000000000000000000000", "3B51CCAA6082708D"),
    std::make_tuple("0000000000000000", "00000000800000000000000000000000", "AF7C3B59E56C5BF2"),
    std::make_tuple("0000000000000000", "00000000400000000000000000000000", "13A15901144A0517"),
    std::make_tuple("0000000000000000", "00000000200000000000000000000000", "45DF7FBF944EED60"),
    std::make_tuple("0000000000000000", "00000000100000000000000000000000", "FD53EA6C45E7BD72"),
    std::make_tuple("0000000000000000", "00000000080000000000000000000000", "AE301D63A4ABD99B"),
    std::make_tuple("0000000000000000", "00000000040000000000000000000000", "810AEDB651136C2C"),
    std::make_tuple("0000000000000000", "00000000020000000000000000000000", "6D7923F3E5407939"),
    std::make_tuple("0000000000000000", "00000000010000000000000000000000", "ED659407D3367F3B"),
    std::make_tuple("0000000000000000", "00000000008000000000000000000000", "43884A3A589A83DF"),
    std::make_tuple("0000000000000000", "00000000004000000000000000000000", "B0D5866AE233B4FD"),
    std::make_tuple("0000000000000000", "00000000002000000000000000000000", "1980E8259B9A651E"),
    std::make_tuple("0000000000000000", "00000000001000000000000000000000", "3451535F4FDDB23F"),
    std::make_tuple("0000000000000000", "00000000000800000000000000000000", "46B6A290868205F4"),
    std::make_tuple("0000000000000000", "00000000000400000000000000000000", "439E65B4CB242789"),
    std::make_tuple("0000000000000000", "00000000000200000000000000000000", "F5459731A3478E9F"),
    std::make_tuple("0000000000000000", "00000000000100000000000000000000", "28BF6EE27B74938E"),
    std::make_tuple("0000000000000000", "00000000000080000000000000000000", "F27E0FE7E11DA460"),
    std::make_tuple("0000000000000000", "00000000000040000000000000000000", "0E972F84B35C20D5"),
    std::make_tuple("0000000000000000", "00000000000020000000000000000000", "8CBD55AB09EF7033"),
    std::make_tuple("0000000000000000", "00000000000010000000000000000000", "B162CBDA795222AB"),
    std::make_tuple("0000000000000000", "00000000000008000000000000000000", "EADF5E6B5CA2F205"),
    std::make_tuple("0000000000000000", "00000000000004000000000000000000", "224D51BBC1C022A0"),
    std::make_tuple("0000000000000000", "00000000000002000000000000000000", "32B18E595BA64925"),
    std::make_tuple("0000000000000000", "00000000000001000000000000000000", "12C364DD05943BCF"),
    std::make_tuple("0000000000000000", "00000000000000800000000000000000", "C11549479F7A04A5"),
    std::make_tuple("0000000000000000", "00000000000000400000000000000000", "67CF73E19C4D004D"),
    std::make_tuple("0000000000000000", "00000000000000200000000000000000", "F35F1C16B6885D35"),
    std::make_tuple("0000000000000000", "00000000000000100000000000000000", "D964407E8A910063"),
    std::make_tuple("0000000000000000", "00000000000000080000000000000000", "2118444ECDBEFCB9"),
    std::make_tuple("0000000000000000", "00000000000000040000000000000000", "0891F28A1EF9C52F"),
    std::make_tuple("0000000000000000", "00000000000000020000000000000000", "5771EE0D778E53B0"),
    std::make_tuple("0000000000000000", "00000000000000010000000000000000", "6D957F1C5179EB81"),
    std::make_tuple("0000000000000000", "00000000000000008000000000000000", "4532114D129EE6D6"),
    std::make_tuple("0000000000000000", "00000000000000004000000000000000", "E83CCEA05AC0E368"),
    std::make_tuple("0000000000000000", "00000000000000002000000000000000", "3EC37A76EDD7D36D"),
    std::make_tuple("0000000000000000", "00000000000000001000000000000000", "19DA57F35DBE4278"),
    std::make_tuple("0000000000000000", "00000000000000000800000000000000", "095BBEFD99B3EA5E"),
    std::make_tuple("0000000000000000", "00000000000000000400000000000000", "5C75B1E985742DE0"),
    std::make_tuple("0000000000000000", "00000000000000000200000000000000", "D4F32B059A0F70CE"),
    std::make_tuple("0000000000000000", "00000000000000000100000000000000", "5C3A9D450839EF6A"),
    std::make_tuple("0000000000000000", "00000000000000000080000000000000", "0599BEF5D7799C9E"),
    std::make_tuple("0000000000000000", "00000000000000000040000000000000", "8E9B91B3123406E7"),
    std::make_tuple("0000000000000000", "00000000000000000020000000000000", "C525925B8A708A75"),
    std::make_tuple("0000000000000000", "00000000000000000010000000000000", "8A5833D0FE6A630F"),
    std::make_tuple("0000000000000000", "00000000000000000008000000000000", "DCF3D5BAF3DE61A0"),
    std::make_tuple("0000000000000000", "00000000000000000004000000000000", "F6D5FFEB1564CF9C"),
    std::make_tuple("0000000000000000", "00000000000000000002000000000000", "8425331851134F68"),
    std::make_tuple("0000000000000000", "00000000000000000001000000000000", "02486E0A715229CB"),
    std::make_tuple("0000000000000000", "00000000000000000000800000000000", "2D88ABE9595090E5"),
    std::make_tuple("0000000000000000", "00000000000000000000400000000000", "2B447F384733C6C3"),
    std::make_tuple("0000000000000000", "00000000000000000000200000000000", "E7F1CA05120B5327"),
    std::make_tuple("0000000000000000", "00000000000000000000100000000000", "39F3897FD93F458F"),
    std::make_tuple("0000000000000000", "00000000000000000000080000000000", "58D0D0157012E79E"),
    std::make_tuple("0000000000000000", "00000000000000000000040000000000", "4BC1AE301508B1A0"),
    std::make_tuple("0000000000000000", "00000000000000000000020000000000", "7CA33618F1F4CDC1"),
    std::make_tuple("0000000000000000", "00000000000000000000010000000000", "F771EC2C46CA9507"),
    std::make_tuple("0000000000000000", "00000000000000000000008000000000", "6B3AEDAA8311A9E2"),
    std::make_tuple("0000000000000000", "00000000000000000000004000000000", "645710AAFC1AD56A"),
    std::make_tuple("0000000000000000", "00000000000000000000002000000000", "F3AE7FA8F7ABD0A0"),
    std::make_tuple("0000000000000000", "00000000000000000000001000000000", "3F19DF683E2BF8F3"),
    std::make_tuple("0000000000000000", "00000000000000000000000800000000", "62D646ECFBD4136B"),
    std::make_tuple("0000000000000000", "00000000000000000000000400000000", "5DC2BFAB0997B130"),
    std::make_tuple("0000000000000000", "00000000000000000000000200000000", "ED69491C5F7A3957"),
    std::make_tuple("0000000000000000", "00000000000000000000000100000000", "A14FC5BFF3E137F0"),
    std::make_tuple("0000000000000000", "00000000000000000000000080000000", "DAA30797B07BFBE2"),
    std::make_tuple("0000000000000000", "00000000000000000000000040000000", "20679B78B36B4817"),
    std::make_tuple("0000000000000000", "00000000000000000000000020000000", "097C25FBAAD047F4"),
    std::make_tuple("0000000000000000", "00000000000000000000000010000000", "271B7E9E697AA5AD"),
    std::make_tuple("0000000000000000", "00000000000000000000000008000000", "D0B65735C4BB3C7A"),
    std::make_tuple("0000000000000000", "00000000000000000000000004000000", "C45006F2474B962B"),
    std::make_tuple("0000000000000000", "00000000000000000000000002000000", "D41B09CE3717A549"),
    std::make_tuple("0000000000000000", "00000000000000000000000001000000", "274DCF19128A7A5F"),
    std::make_tuple("0000000000000000", "00000000000000000000000000800000", "367BDF7F4D162AA9"),
    std::make_tuple("0000000000000000", "00000000000000000000000000400000", "C3560CFB89F4EE7E"),
    std::make_tuple("0000000000000000", "00000000000000000000000000200000", "3E06A7C290502DF7"),
    std::make_tuple("0000000000000000", "00000000000000000000000000100000", "A446FAEB2E6C7DC8"),
    std::make_tuple("0000000000000000", "00000000000000000000000000080000", "A6844BF5C273190A"),
    std::make_tuple("0000000000000000", "00000000000000000000000000040000", "CC7305667BE061DD"),
    std::make_tuple("0000000000000000", "00000000000000000000000000020000", "03CBCA8A2CA85241"),
    std::make_tuple("0000000000000000", "00000000000000000000000000010000", "FC6ACEF79D79C572"),
    std::make_tuple("0000000000000000", "00000000000000000000000000008000", "656FACEBBCDFB19C"),
    std::make_tuple("0000000000000000", "00000000000000000000000000004000", "09CF9885BF7BB142"),
    std::make_tuple("0000000000000000", "00000000000000000000000000002000", "071FBD9D2AAD88B2"),
    std::make_tuple("0000000000000000", "00000000000000000000000000001000", "82CB2CC125D4659D"),
    std::make_tuple("0000000000000000", "00000000000000000000000000000800", "8EABA33903F93948"),
    std::make_tuple("0000000000000000", "00000000000000000000000000000400", "83FD413EB23B5C16"),
    std::make_tuple("0000000000000000", "00000000000000000000000000000200", "E4DBB186EE01C8B4"),
    std::make_tuple("0000000000000000", "00000000000000000000000000000100", "12CC44657B6367D1"),
    std::make_tuple("0000000000000000", "00000000000000000000000000000080", "73BC52B34CDE8D7A"),
    std::make_tuple("0000000000000000", "00000000000000000000000000000040", "3A6FB39CDABEABD5"),
    std::make_tuple("0000000000000000", "00000000000000000000000000000020", "3EC0084375B70518"),
    std::make_tuple("0000000000000000", "00000000000000000000000000000010", "96FC7F65AD2B3F92"),
    std::make_tuple("0000000000000000", "00000000000000000000000000000008", "C45A526F6A948F42"),
    std::make_tuple("0000000000000000", "00000000000000000000000000000004", "AC062401CDCC8B18"),
    std::make_tuple("0000000000000000", "00000000000000000000000000000002", "44E1E63DF01EACF3"),
    std::make_tuple("0000000000000000", "00000000000000000000000000000001", "2049AA1BE3546AED"),
};

#endif // __MISTY1TESTVECTORSSET1__