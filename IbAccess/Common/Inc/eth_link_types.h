/* BEGIN_ICS_COPYRIGHT7 ****************************************

Copyright (c) 2020, Intel Corporation

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice,
      this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of Intel Corporation nor the names of its contributors
      may be used to endorse or promote products derived from this software
      without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

** END_ICS_COPYRIGHT7   ****************************************/

/* [ICS VERSION STRING: unknown] */

#ifndef __IBA_ETH_LINK_TYPES_H__
#define __IBA_ETH_LINK_TYPES_H__

#if defined (__cplusplus)
extern "C" {
#endif

// high-level generic general purpose speed masks
#define ETH_LINK_SPEED_NOP		0x0000
#define ETH_LINK_SPEED_LT_100G	0x0001
#define ETH_LINK_SPEED_100G		0x0002
#define ETH_LINK_SPEED_200G		0x0004
#define ETH_LINK_SPEED_400G     0x0008

// see ianamau-mib
typedef enum {
	ETH_LINK_MODE_Other,
	ETH_LINK_MODE_AUI,
	ETH_LINK_MODE_10base5,
	ETH_LINK_MODE_Foirl,
	ETH_LINK_MODE_10base2,
	ETH_LINK_MODE_10baseT,
	ETH_LINK_MODE_10baseFP,
	ETH_LINK_MODE_10baseFB,
	ETH_LINK_MODE_10baseFL,
	ETH_LINK_MODE_10broad36,
	ETH_LINK_MODE_10baseTHD,
	ETH_LINK_MODE_10baseTFD,
	ETH_LINK_MODE_10baseFLHD,
	ETH_LINK_MODE_10baseFLFD,
	ETH_LINK_MODE_100baseT4,
	ETH_LINK_MODE_100baseTXHD,
	ETH_LINK_MODE_100baseTXFD,
	ETH_LINK_MODE_100baseFXHD,
	ETH_LINK_MODE_100baseFXFD,
	ETH_LINK_MODE_100baseT2HD,
	ETH_LINK_MODE_100baseT2FD,
	ETH_LINK_MODE_1000baseXHD,
	ETH_LINK_MODE_1000baseXFD,
	ETH_LINK_MODE_1000baseLXHD,
	ETH_LINK_MODE_1000baseLXFD,
	ETH_LINK_MODE_1000baseSXHD,
	ETH_LINK_MODE_1000baseSXFD,
	ETH_LINK_MODE_1000baseCXHD,
	ETH_LINK_MODE_1000baseCXFD,
	ETH_LINK_MODE_1000baseTHD,
	ETH_LINK_MODE_1000baseTFD,
	ETH_LINK_MODE_10GbaseX,
	ETH_LINK_MODE_10GbaseLX4,
	ETH_LINK_MODE_10GbaseR,
	ETH_LINK_MODE_10GbaseER,
	ETH_LINK_MODE_10GbaseLR,
	ETH_LINK_MODE_10GbaseSR,
	ETH_LINK_MODE_10GbaseW,
	ETH_LINK_MODE_10GbaseEW,
	ETH_LINK_MODE_10GbaseLW,
	ETH_LINK_MODE_10GbaseSW,
	ETH_LINK_MODE_10GbaseCX4,
	ETH_LINK_MODE_2BaseTL,
	ETH_LINK_MODE_10PassTS,
	ETH_LINK_MODE_100BaseBX10D,
	ETH_LINK_MODE_100BaseBX10U,
	ETH_LINK_MODE_100BaseLX10,
	ETH_LINK_MODE_1000BaseBX10D,
	ETH_LINK_MODE_1000BaseBX10U,
	ETH_LINK_MODE_1000BaseLX10,
	ETH_LINK_MODE_1000BasePX10D,
	ETH_LINK_MODE_1000BasePX10U,
	ETH_LINK_MODE_1000BasePX20D,
	ETH_LINK_MODE_1000BasePX20U,
	ETH_LINK_MODE_10GbaseT,
	ETH_LINK_MODE_10GbaseLRM,
	ETH_LINK_MODE_1000baseKX,
	ETH_LINK_MODE_10GbaseKX4,
	ETH_LINK_MODE_10GbaseKR,
	ETH_LINK_MODE_10G1GbasePRXD1,
	ETH_LINK_MODE_10G1GbasePRXD2,
	ETH_LINK_MODE_10G1GbasePRXD3,
	ETH_LINK_MODE_10G1GbasePRXU1,
	ETH_LINK_MODE_10G1GbasePRXU2,
	ETH_LINK_MODE_10G1GbasePRXU3,
	ETH_LINK_MODE_10GbasePRD1,
	ETH_LINK_MODE_10GbasePRD2,
	ETH_LINK_MODE_10GbasePRD3,
	ETH_LINK_MODE_10GbasePRU1,
	ETH_LINK_MODE_10GbasePRU3,
	ETH_LINK_MODE_40GbaseKR4,
	ETH_LINK_MODE_40GbaseCR4,
	ETH_LINK_MODE_40GbaseSR4,
	ETH_LINK_MODE_40GbaseFR,
	ETH_LINK_MODE_40GbaseLR4,
	ETH_LINK_MODE_100GbaseCR10,
	ETH_LINK_MODE_100GbaseSR10,
	ETH_LINK_MODE_100GbaseLR4,
	ETH_LINK_MODE_100GbaseER4,
	ETH_LINK_MODE_1000baseT1,
	ETH_LINK_MODE_1000basePX30D,
	ETH_LINK_MODE_1000basePX30U,
	ETH_LINK_MODE_1000basePX40D,
	ETH_LINK_MODE_1000basePX40U,
	ETH_LINK_MODE_10G1GbasePRXD4,
	ETH_LINK_MODE_10G1GbasePRXU4,
	ETH_LINK_MODE_10GbasePRD4,
	ETH_LINK_MODE_10GbasePRU4,
	ETH_LINK_MODE_25GbaseCR,
	ETH_LINK_MODE_25GbaseCRS,
	ETH_LINK_MODE_25GbaseKR,
	ETH_LINK_MODE_25GbaseKRS,
	ETH_LINK_MODE_25GbaseR,
	ETH_LINK_MODE_25GbaseSR,
	ETH_LINK_MODE_25GbaseT,
	ETH_LINK_MODE_40GbaseER4,
	ETH_LINK_MODE_40GbaseR,
	ETH_LINK_MODE_40GbaseT,
	ETH_LINK_MODE_100GbaseCR4,
	ETH_LINK_MODE_100GbaseKR4,
	ETH_LINK_MODE_100GbaseKP4,
	ETH_LINK_MODE_100GbaseR,
	ETH_LINK_MODE_100GbaseSR4,
	ETH_LINK_MODE_2p5GbaseT,
	ETH_LINK_MODE_5GbaseT,
	ETH_LINK_MODE_100baseT1,
	ETH_LINK_MODE_1000baseRHA,
	ETH_LINK_MODE_1000baseRHB,
	ETH_LINK_MODE_1000baseRHC,
	ETH_LINK_MODE_2p5GbaseKX,
	ETH_LINK_MODE_2p5GbaseX,
	ETH_LINK_MODE_5GbaseKR,
	ETH_LINK_MODE_5GbaseR,
	ETH_LINK_MODE_10GpassXR,
	ETH_LINK_MODE_25GbaseLR,
	ETH_LINK_MODE_25GbaseER,
	ETH_LINK_MODE_50GbaseR,
	ETH_LINK_MODE_50GbaseCR,
	ETH_LINK_MODE_50GbaseKR,
	ETH_LINK_MODE_50GbaseSR,
	ETH_LINK_MODE_50GbaseFR,
	ETH_LINK_MODE_50GbaseLR,
	ETH_LINK_MODE_50GbaseER,
	ETH_LINK_MODE_100GbaseCR2,
	ETH_LINK_MODE_100GbaseKR2,
	ETH_LINK_MODE_100GbaseSR2,
	ETH_LINK_MODE_100GbaseDR,
	ETH_LINK_MODE_200GbaseR,
	ETH_LINK_MODE_200GbaseDR4,
	ETH_LINK_MODE_200GbaseFR4,
	ETH_LINK_MODE_200GbaseLR4,
	ETH_LINK_MODE_200GbaseCR4,
	ETH_LINK_MODE_200GbaseKR4,
	ETH_LINK_MODE_200GbaseSR4,
	ETH_LINK_MODE_200GbaseER4,
	ETH_LINK_MODE_400GbaseR,
	ETH_LINK_MODE_400GbaseSR16,
	ETH_LINK_MODE_400GbaseDR4,
	ETH_LINK_MODE_400GbaseFR8,
	ETH_LINK_MODE_400GbaseLR8,
	ETH_LINK_MODE_400GbaseER8,
	ETH_LINK_MODE_10baseT1L,
	ETH_LINK_MODE_10baseT1SHD,
	ETH_LINK_MODE_10baseT1SMD,
	ETH_LINK_MODE_10baseT1SFD,
	ETH_LINK_MODE_LAST
} ETH_LINK_MODE;

static const char* const ETH_LINK_MODE_NAME[] = {
	"Other/Unknown",
	"AUI",
	"10B-5",
	"FOIRL",
	"10B-2",
	"10B-T",
	"10B-FP",
	"10B-FB",
	"10B-FL",
	"10BROAD36",
	"10B-T/Half",
	"10B-T/Full",
	"10B-FL/Half",
	"10B-FL/Full",
	"100B-T4",
	"100B-TX/Half",
	"100B-TX/Full",
	"100B-FX/Half",
	"100B-FX/Full",
	"100B-T2/Half",
	"100B-T2/Full",
	"1000B-X/Half",
	"1000B-X/Full",
	"1000B-LX/Half",
	"1000B-LX/Full",
	"1000B-SX/Half",
	"1000B-SX/Full",
	"1000B-CX/Half",
	"1000B-CX/Full",
	"1000B-T/Half",
	"1000B-T/Full",
	"10GB-X",
	"10GB-LX4",
	"10GB-R",
	"10GB-ER",
	"10GB-LR",
	"10GB-SR",
	"10GB-W",
	"10GB-EW",
	"10GB-LW",
	"10GB-SW",
	"10GB-CX4",
	"2B-TL",
	"10PASS-TS",
	"100B-BX10D",
	"100B-BX10U",
	"100B-LX10",
	"1000B-BX10D",
	"1000B-BX10U",
	"1000B-LX10",
	"1000B-PX10D",
	"1000B-PX10U",
	"1000B-PX20D",
	"1000B-PX20U",
	"10GB-T",
	"10GB-LRM",
	"1000B-KX",
	"10GB-KX4",
	"10GB-KR",
	"10/1GB-PRX-D1",
	"10/1GB-PRX-D2",
	"10/1GB-PRX-D3",
	"10/1GB-PRX-U1",
	"10/1GB-PRX-U2",
	"10/1GB-PRX-U3",
	"10GB-PR-D1",
	"10GB-PR-D2",
	"10GB-PR-D3",
	"10GB-PR-U1",
	"10GB-PR-U3",
	"40GB-KR4",
	"40GB-CR4",
	"40GB-SR4",
	"40GB-FR",
	"40GB-LR4",
	"100GB-CR10",
	"100GB-SR10",
	"100GB-LR4",
	"100GB-ER4",
	"1000B-T1 ",
	"1000B-PX30D ",
	"1000B-PX30U ",
	"1000B-PX40D ",
	"1000B-PX40U ",
	"10/1GB-PRX-D4 ",
	"10/1GB-PRX-U4 ",
	"10GB-PRD4 ",
	"10GB-PRU4 ",
	"25GB-CR ",
	"25GB-CR-S ",
	"25GB-KR ",
	"25GB-KR-S ",
	"25GB-R ",
	"25GB-SR ",
	"25GB-T ",
	"40GB-ER4 ",
	"40GB-R ",
	"40GB-T ",
	"100GB-CR4 ",
	"100GB-KR4 ",
	"100GB-KP4 ",
	"100GB-R ",
	"100GB-SR4",
	"2.5GB-T",
	"5GB-T",
	"100B-T1",
	"1000B-RHA",
	"1000B-RHB",
	"1000B-RHC",
	"2.5GB-KX",
	"2.5GB-X",
	"5GB-KR",
	"5GB-R",
	"10GPASS-XR",
	"25GB-LR",
	"25GB-ER",
	"50GB-R",
	"50GB-CR",
	"50GB-KR",
	"50GB-SR",
	"50GB-FR",
	"50GB-LR",
	"50GB-ER",
	"100GB-CR2",
	"100GB-KR2",
	"100GB-SR2",
	"100GB-DR",
	"200GB-R",
	"200GB-DR4",
	"200GB-FR4",
	"200GB-LR4",
	"200GB-CR4",
	"200GB-KR4",
	"200GB-SR4",
	"200GB-ER4",
	"400GB-R",
	"400GB-SR16",
	"400GB-DR4",
	"400GB-FR8",
	"400GB-LR8",
	"400GB-ER8",
	"10B-T1L",
	"10B-T1S/Half",
	"10B-T1S/Multidrop",
	"10B-T1S/Full"
};

static __inline uint16
EthLinkModeToSpeed(uint16 mode) {
	switch(mode) {
	case ETH_LINK_MODE_Other:
		return ETH_LINK_SPEED_NOP;
	case ETH_LINK_MODE_100GbaseCR10:
	case ETH_LINK_MODE_100GbaseSR10:
	case ETH_LINK_MODE_100GbaseLR4:
	case ETH_LINK_MODE_100GbaseER4:
	case ETH_LINK_MODE_100GbaseCR4:
	case ETH_LINK_MODE_100GbaseKR4:
	case ETH_LINK_MODE_100GbaseKP4:
	case ETH_LINK_MODE_100GbaseR:
	case ETH_LINK_MODE_100GbaseSR4:
	case ETH_LINK_MODE_100GbaseCR2:
	case ETH_LINK_MODE_100GbaseKR2:
	case ETH_LINK_MODE_100GbaseSR2:
	case ETH_LINK_MODE_100GbaseDR:
		return ETH_LINK_SPEED_100G;
	case ETH_LINK_MODE_200GbaseR:
	case ETH_LINK_MODE_200GbaseDR4:
	case ETH_LINK_MODE_200GbaseFR4:
	case ETH_LINK_MODE_200GbaseLR4:
	case ETH_LINK_MODE_200GbaseCR4:
	case ETH_LINK_MODE_200GbaseKR4:
	case ETH_LINK_MODE_200GbaseSR4:
	case ETH_LINK_MODE_200GbaseER4:
		return ETH_LINK_SPEED_200G;
	case ETH_LINK_MODE_400GbaseR:
	case ETH_LINK_MODE_400GbaseSR16:
	case ETH_LINK_MODE_400GbaseDR4:
	case ETH_LINK_MODE_400GbaseFR8:
	case ETH_LINK_MODE_400GbaseLR8:
	case ETH_LINK_MODE_400GbaseER8:
		return ETH_LINK_SPEED_400G;
	}
	return ETH_LINK_SPEED_LT_100G;
}

#if defined (__cplusplus)
};
#endif

#endif /* __IBA_ETH_LINK_TYPES_H__ */