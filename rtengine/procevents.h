/*
 *  This file is part of RawTherapee.
 *
 *  Copyright (c) 2004-2010 Gabor Horvath <hgabor@rawtherapee.com>
 *
 *  RawTherapee is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  RawTherapee is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with RawTherapee.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __PROCEVENT__
#define __PROCEVENT__

namespace rtengine
{




// Aligned so the first entry starts on line 30
enum ProcEvent {
    EvPhotoLoaded = 0,
    EvProfileLoaded = 1,
    EvProfileChanged = 2,
    EvHistoryBrowsed = 3,
    EvBrightness = 4,
    EvContrast = 5,
    EvBlack = 6,
    EvExpComp = 7,
    EvHLCompr = 8,
    EvSHCompr = 9,
    EvToneCurve1 = 10,
    EvAutoExp = 11,
    EvClip = 12,
    EvLBrightness = 13,
    EvLContrast = 14,
    EvLBlack = 15,
    EvLHLCompr = 16,
    EvLSHCompr = 17,
    EvLLCurve = 18,
    EvShrEnabled = 19,
    EvShrRadius = 20,
    EvShrAmount = 21,
    EvShrThresh = 22,
    EvShrEdgeOnly = 23,
    EvShrEdgeRadius = 24,
    EvShrEdgeTolerance = 25,
    EvShrHaloControl = 26,
    EvShrHaloAmount = 27,
    EvShrMethod = 28,
    EvShrDRadius = 29,
    EvShrDAmount = 30,
    EvShrDDamping = 31,
    EvShrDIterations = 32,
    EvLCPUseDist = 33,
    EvLCPUseVign = 34,
    EvLCPUseCA = 35,
    EvFixedExp = 36,
    EvWBMethod = 37,
    EvWBTemp = 38,
    EvWBGreen = 39,
    EvToneCurveMode1 = 40,
    EvToneCurve2 = 41,
    EvToneCurveMode2 = 42,
    EvLDNRadius = 43, // obsolete
    EvLDNEdgeTolerance = 44, // obsolete
    EvCDNEnabled = 45, // obsolete
    EvBlendCMSMatrix = 46,
    EvDCPToneCurve = 47,
    EvDCPIlluminant = 48,
    EvSHEnabled = 49,
    EvSHHighlights = 50,
    EvSHShadows = 51,
    EvSHHLTonalW = 52,
    EvSHSHTonalW = 53,
    EvSHLContrast = 54,
    EvSHRadius = 55,
    EvCTRotate = 56,
    EvCTHFlip = 57,
    EvCTVFlip = 58,
    EvROTDegree = 59,
    EvTransAutoFill = 60,
    EvDISTAmount = 61,
    EvBookmarkSelected = 62,
    EvCrop = 63,
    EvCACorr = 64,
    EvHREnabled = 65,
    EvHRAmount = 66, //obsolete
    EvHRMethod = 67,
    EvWProfile = 68,
    EvOProfile = 69,
    EvIProfile = 70,
    EvVignettingAmount = 71,
    EvChMixer = 72,
    EvResizeScale = 73,
    EvResizeMethod = 74,
    EvExif = 75,
    EvIPTC = 76,
    EvResizeSpec = 77,
    EvResizeWidth = 78,
    EvResizeHeight = 79,
    EvResizeEnabled = 80,
    EvProfileChangeNotification = 81,
    EvSHHighQuality = 82,
    EvPerspCorr = 83,
    EvLCPFile = 84,
    EvRGBrCurveLumamode = 85,
    EvIDNEnabled = 86,
    EvIDNThresh = 87,
    EvDPDNEnabled = 88,
    EvDPDNLuma = 89,
    EvDPDNChroma = 90,
    EvDPDNGamma = 91,
    EvDirPyrEqualizer = 92,
    EvDirPyrEqlEnabled = 93,
    EvLSaturation = 94,
    EvLaCurve = 95,
    EvLbCurve = 96,
    EvDemosaicMethod = 97,
    EvPreProcessHotPixel = 98,
    EvSaturation = 99,
    EvHSVEqualizerH = 100,
    EvHSVEqualizerS = 101,
    EvHSVEqualizerV = 102,
    EvHSVEqEnabled = 103,
    EvDefringeEnabled = 104,
    EvDefringeRadius = 105,
    EvDefringeThreshold = 106,
    EvHLComprThreshold = 107,
    EvResizeBoundingBox = 108,
    EvResizeAppliesTo = 109,
    EvLAvoidColorShift = 110,
    EvLSatLimiter = 111,    // obsolete
    EvLRSTProtection = 112,
    EvDemosaicDCBIter = 113,
    EvDemosaicFalseColorIter = 114,
    EvDemosaicDCBEnhanced = 115,
    EvPreProcessCARed = 116,
    EvPreProcessCABlue = 117,
    EvPreProcessLineDenoise = 118,
    EvPreProcessGEquilThresh = 119,
    EvPreProcessAutoCA = 120,
    EvPreProcessAutoDF = 121,
    EvPreProcessDFFile = 122,
    EvPreProcessExpCorrLinear = 123,
    EvPreProcessExpCorrPH = 124,
    EvFlatFieldFile = 125,
    EvFlatFieldAutoSelect = 126,
    EvFlatFieldBlurRadius = 127,
    EvFlatFieldBlurType = 128,
    EvAutoDIST = 129,
    EvDPDNLumCurve = 130,
    EvDPDNChromCurve = 131,
    EvGAMMA = 132,
    EvGAMPOS = 133,
    EvGAMFREE = 134,
    EvSLPOS = 135,
    EvPreProcessExpBlackzero = 136,
    EvPreProcessExpBlackone = 137,
    EvPreProcessExpBlacktwo = 138,
    EvPreProcessExpBlackthree = 139,
    EvPreProcessExptwoGreen = 140,
    EvSharpenEdgePasses = 141,
    EvSharpenEdgeAmount = 142,
    EvSharpenMicroAmount = 143,
    EvSharpenMicroUniformity = 144,
    EvSharpenEdgeEnabled = 145,
    EvSharpenEdgeThreechannels = 146,
    EvSharpenMicroEnabled = 147,
    EvSharpenMicroMatrix = 148,
    EvDemosaicALLEnhanced = 149,  // Disabled but not removed for now, may be reintroduced some day
    EvVibranceEnabled = 150,
    EvVibrancePastels = 151,
    EvVibranceSaturated = 152,
    EvVibranceProtectSkins = 153,
    EvVibranceAvoidColorShift = 154,
    EvVibrancePastSatTog = 155,
    EvVibrancePastSatThreshold = 156,
    EvEPDStrength = 157,
    EvEPDEdgeStopping = 158,
    EvEPDScale = 159,
    EvEPDReweightingIterates = 160,
    EvEPDEnabled = 161,
    EvRGBrCurve = 162,
    EvRGBgCurve = 163,
    EvRGBbCurve = 164,
    EvNeutralExp = 165,
    EvDemosaicMethodPreProc = 166,
    EvLCCCurve = 167,
    EvLCHCurve = 168,
    EvVibranceSkinTonesCurve = 169,
    EvLLCCurve = 170,
    EvLLCredsk = 171,
    EvDPDNLdetail = 172,
    EvCATEnabled = 173,
    EvCATDegree = 174,
    EvCATMethodsur = 175,
    EvCATAdapscen = 176,
    EvCATAdapLum = 177,
    EvCATMethodWB = 178,
    EvCATJLight = 179,
    EvCATChroma = 180,
    EvCATAutoDegree = 181,
    EvCATContrast = 182,
    EvCATsurr = 183,
    EvCATgamut = 184,
    EvCATMethodalg = 185,
    EvCATRstpro = 186,
    EvCATQbright = 187,
    EvCATQContrast = 188,
    EvCATSChroma = 189,
    EvCATMChroma = 190,
    EvCAThue = 191,
    EvCATCurve1 = 192,
    EvCATCurve2 = 193,
    EvCATCurveMode1 = 194,
    EvCATCurveMode2 = 195,
    EvCATCurve3 = 196,
    EvCATCurveMode3 = 197,
    EvCATdatacie = 198,
    EvCATtonecie = 199,
    EvDPDNredchro = 200,
    EvDPDNbluechro = 201,
    EvDPDNmet = 202,
    EvDemosaicLMMSEIter = 203,
    EvCATbadpix = 204,
    EvCATAutoAdap = 205,
    EvPFCurve = 206,
    EvWBequal = 207,
    EvWBequalbo = 208,
    EvGradientDegree = 209,
    EvGradientEnabled = 210,
    EvPCVignetteStrength = 211,
    EvPCVignetteEnabled = 212,
    EvBWChmixEnabled = 213,
    EvBWred = 214,
    EvBWgreen = 215,
    EvBWblue = 216,
    EvBWredgam = 217,
    EvBWgreengam = 218,
    EvBWbluegam = 219,
    EvBWfilter = 220,
    EvBWsetting = 221,
    EvBWoran = 222,
    EvBWyell = 223,
    EvBWcyan = 224,
    EvBWmag = 225,
    EvBWpur = 226,
    EvBWLuminanceEqual = 227,
    EvBWChmixEnabledLm = 228,
    EvBWmethod = 229,
    EvBWBeforeCurve = 230,
    EvBWBeforeCurveMode = 231,
    EvBWAfterCurve = 232,
    EvBWAfterCurveMode = 233,
    EvAutoch = 234,
//  EvFixedch=235,   -- can be reused --
    EvNeutralBW = 236,
    EvGradientFeather = 237,
    EvGradientStrength = 238,
    EvGradientCenter = 239,
    EvPCVignetteFeather = 240,
    EvPCVignetteRoundness = 241,
    EvVignettingRadius = 242,
    EvVignettingStrenght = 243,
    EvVignettingCenter = 244,
    EvLCLCurve = 245,
    EvLLHCurve = 246,
    EvLHHCurve = 247,
    EvDirPyrEqualizerThreshold = 248,
    EvDPDNenhance = 249,
    EvBWMethodalg = 250,
    EvDirPyrEqualizerSkin = 251,
    EvDirPyrEqlgamutlab = 252,
    EvDirPyrEqualizerHueskin = 253,
    EvDPDNmedian = 254, //  EvDirPyrEqualizeralg=254,
    EvDPDNmedmet = 255,
    EvColorToningEnabled = 256,
    EvColorToningColor = 257,
    EvColorToningOpacity = 258,
    EvColorToningCLCurve = 259, //  EvColorToningTwocolor=259,
    EvColorToningMethod = 260,
    EvColorToningLLCurve = 261,
    EvColorToningredlow = 262,
    EvColorToninggreenlow = 263,
    EvColorToningbluelow = 264,
    EvColorToningredmed = 265,
    EvColorToninggreenmed = 266,
    EvColorToningbluemed = 267,
    EvColorToningredhigh = 268,
    EvColorToninggreenhigh = 269,
    EvColorToningbluehigh = 270,
    EvColorToningbalance = 271,
    EvColorToningNeutral = 272,
    EvColorToningsatlow = 273,
    EvColorToningsathigh = 274,
    EvColorToningTwocolor = 275,
    EvColorToningNeutralcur = 276,
    EvColorToningLumamode = 277,
    EvColorToningShadows = 278,
    EvColorToningHighights = 279,
    EvColorToningSatProtection = 280,
    EvColorToningSatThreshold = 281,
    EvColorToningStrength = 282,
    EvColorToningautosat = 283,
    EvDPDNmetmed = 284,
    EvDPDNrgbmet = 285,
    EvDPDNpasses = 286,
    EvFlatFieldClipControl = 287,
    EvFlatFieldAutoClipControl = 288,
    EvPreProcessExpBlackRed = 289,
    EvPreProcessExpBlackGreen = 290,
    EvPreProcessExpBlackBlue = 291,
    EvFilmSimulationEnabled = 292,
    EvFilmSimulationStrength = 293,
    EvFilmSimulationFilename = 294,
    EvDPDNLCurve = 295,
    EvDPDNsmet = 296,
    EvPreProcessDeadPixel = 297,
    EvDPDNCCCurve = 298,
    EvDPDNautochroma = 299,
    EvDPDNLmet = 300,
    EvDPDNCmet = 301,
    EvDPDNC2met = 302,
    EvWavelet = 303,
    EvWavEnabled = 304,
    EvWavLmet = 305,
    EvWavCLmet = 306,
    EvWavDirmeto = 307,
    EvWavtiles = 308,
    EvWavsky = 309,
    EvWavthres = 310,
    EvWavthr = 311,
    EvWavchroma = 312,
    EvWavmedian = 313,
    EvWavunif = 314,
    EvWavSkin = 315,
    EvWavHueskin = 316,
    EvWavThreshold = 317,
    EvWavlhl = 318,
    EvWavlbl = 319,
    EvWavThreshold2 = 320,
    EvWavavoid = 321,
    EvWavCCCurve = 322,
    EvWavpast = 323,
    EvWavsat = 324,
    EvWavCHmet = 325,
    EvWavHSmet = 326,
    EvWavchro = 327,
    EvWavColor = 328,
    EvWavOpac = 329,
    EvWavsup = 330,
    EvWavTilesmet = 331,
    EvWavrescon = 332,
    EvWavreschro = 333,
    EvWavresconH = 334,
    EvWavthrH = 335,
    EvWavHueskin2 = 336,
    EvWavedgrad = 337,
    EvWavedgval = 338,
    EvWavStrength = 339,
    EvWavdaubcoeffmet = 340,
    EvWavedgreinf = 341,
    EvWaveletch = 342,
    EvWavCHSLmet = 343,
    EvWavedgcont = 344,
    EvWavEDmet = 345,
    EvWavlev0nois = 346,
    EvWavlev1nois = 347,
    EvWavlev2nois = 348,
    EvWavmedianlev = 349,
    EvWavHHCurve = 350,
    EvWavBackmet = 351,
    EvWavedgedetect = 352,
    EvWavlipst = 353,
    EvWavedgedetectthr = 354,
    EvWavedgedetectthr2 = 355,
    EvWavlinkedg = 356,
    EvWavCHCurve = 357,
    EvPreProcessHotDeadThresh = 358,
    EvEPDgamma = 359,
    EvWavtmr = 360,
    EvWavTMmet = 361,
    EvWavtmrs = 362,
    EvWavbalance = 363,
    EvWaviter = 364,
    EvWavgamma = 365,
    EvWavCLCurve = 366,
    EvWavopacity = 367,
    EvWavBAmet = 368,
    EvWavopacityWL = 369,
    EvPrShrEnabled = 370,
    EvPrShrRadius = 371,
    EvPrShrAmount = 372,
    EvPrShrThresh = 373,
    EvPrShrEdgeOnly = 374,
    EvPrShrEdgeRadius = 375,
    EvPrShrEdgeTolerance = 376,
    EvPrShrHaloControl = 377,
    EvPrShrHaloAmount = 378,
    EvPrShrMethod = 379,
    EvPrShrDRadius = 380,
    EvPrShrDAmount = 381,
    EvPrShrDDamping = 382,
    EvPrShrDIterations = 383,
    EvWavcbenab = 384,
    EvWavgreenhigh = 385,
    EvWavbluehigh = 386,
    EvWavgreenmed = 387,
    EvWavbluemed = 388,
    EvWavgreenlow = 389,
    EvWavbluelow = 390,
    EvWavNeutral = 391,
    EvDCPApplyLookTable = 392,
    EvDCPApplyBaselineExposureOffset = 393,
    EvDCPApplyHueSatMap = 394,
    EvWavenacont = 395,
    EvWavenachrom = 396,
    EvWavenaedge = 397,
    EvWavenares = 398,
    EvWavenafin = 399,
    EvWavenatoning = 400,
    EvWavenanoise = 401,
    EvWavedgesensi = 402,
    EvWavedgeampli = 403,
    EvWavlev3nois = 404,
    EvWavNPmet = 405,
    EvretinexMethod = 406,
    EvLneigh = 407,
    EvLgain = 408,
    EvLoffs = 409,
    EvLstr = 410,
    EvLscal = 411,
    EvLvart = 412,
    EvLCDCurve = 413,
    EvRetinextransmission = 414,
    EvRetinexEnabled = 415,
    EvRetinexmedianmap = 416,
    EvLlimd = 417,
    EvretinexColorSpace = 418, // 418 if we want a separate history entry "Retinex - Color space", 406 if we don't
    EvLCDHCurve = 419,
    Evretinexgamma = 420,
    EvLgam = 421,
    EvLslope = 422,
    EvLhighl = 423,
    EvLbaselog = 424,
    EvRetinexlhcurve = 425,
    EvOIntent = 426,
    EvMonitorTransform = 427,
    EvLiter = 428,
    EvLgrad = 429,
    EvLgrads = 430,
    EvLhighlights = 431,
    EvLh_tonalwidth = 432,
    EvLshadows = 433,
    EvLs_tonalwidth = 434,
    EvLradius = 435,
    EvmapMethod = 436,
    EvRetinexmapcurve = 437,
    EvviewMethod = 438,
    EvcbdlMethod = 439,
    EvRetinexgaintransmission = 440,
    EvLskal = 441,
    EvOBPCompens = 442,
    EvlocallabEnabled = 443,
    EvlocallablocY = 444,
    EvlocallablocX = 445,
    EvlocallabCenter = 446,
    EvlocallabDegree = 447,
    Evlocallablightness = 448,
    Evlocallabcontrast = 449,
    Evlocallabchroma = 450,
    Evlocallabtransit = 451,
    Evlocallabavoid = 452,
    EvlocallablocYT = 453,
    EvlocallablocXL = 454,
    EvlocallabSmet = 455,
    Evlocallabinvers = 456,
    Evlocallabradius = 457,
    Evlocallabinversrad = 458,
    Evlocallabstrength = 459,
    Evlocallabsensi = 460,
    EvlocallabretinexMethod = 461,
    Evlocallabstr = 462,
    Evlocallabneigh = 463,
    Evlocallabvart = 464,
    EvlocallabCTgainCurve = 465,
    Evlocallabchrrt = 466,
    Evlocallabinversret = 467,
    Evlocallabsensih = 468,
    Evlocallabnbspot = 469,
    Evlocallabactivlum = 470,
    Evlocallabanbspot = 471,
    Evlocallabsharradius = 472,
    Evlocallabsharamount = 473,
    Evlocallabshardamping = 474,
    Evlocallabshariter = 475,
    Evlocallabsensis = 476,
    Evlocallabinverssha = 477,
    Evlocallabcircrad = 478,
    Evlocallabthres = 479,
    Evlocallabproxi = 480,
    EvlocallabqualityMethod = 481,
    Evlocallabnoiselumf = 482,
    Evlocallabnoiselumc = 483,
    Evlocallabnoisechrof = 484,
    Evlocallabnoisechroc = 485,
    EvlocallabThresho = 486,
    EvlocallabEqualizer = 487,
    Evlocallabsensicb = 488,
    Evlocallabsensibn = 489,
    Evlocallabstren = 490,
    Evlocallabgamma = 491,
    Evlocallabestop = 492,
    Evlocallabscaltm = 493,
    Evlocallabrewei = 494,
    Evlocallabsensitm = 495,
    EvlocallabCTgainCurverab = 496,
    Evlocallabretrab = 497,
    Evlocallabllshape = 498,
    EvLocenacolor = 499,
    EvLocenablur = 500,
    EvLocenatonemap = 501,
    EvLocenareti = 502,
    EvLocenasharp = 503,
    EvLocenacbdl = 504,
    EvLocenadenoi = 505,
    EvlocallabLHshape = 506,
    Evlocallabcurvactiv = 507,
    Evlocallabccshape = 508,
    EvlocallabqualitycurveMethod = 509,
    EvWBtempBias = 510,
    Evlocallabhueref = 511,
    Evlocallabchromaref = 512,
    Evlocallablumaref = 513,

    NUMOFEVENTS


};
}
#endif

