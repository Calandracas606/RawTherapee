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
#include "paramsedited.h"
#include <cstring>
#include "options.h"
#include "addsetids.h"

ParamsEdited::ParamsEdited (bool value)
{

    set (value);
}

void ParamsEdited::set (bool v)
{

    general.rank         = v;
    general.colorlabel   = v;
    general.intrash      = v;
    toneCurve.curve      = v;
    toneCurve.curve2     = v;
    toneCurve.curveMode  = v;
    toneCurve.curveMode2 = v;
    toneCurve.brightness = v;
    toneCurve.black      = v;
    toneCurve.contrast   = v;
    toneCurve.saturation = v;
    toneCurve.shcompr    = v;
    toneCurve.hlcompr    = v;
    toneCurve.hlcomprthresh = v;
    toneCurve.autoexp    = v;
    toneCurve.clip       = v;
    toneCurve.expcomp    = v;
    toneCurve.hrenabled   = v;
    toneCurve.method    = v;
    retinex.cdcurve    = v;
    retinex.mapcurve    = v;
    retinex.cdHcurve    = v;
    retinex.lhcurve    = v;
    retinex.retinexMethod    = v;
    retinex.mapMethod    = v;
    retinex.viewMethod    = v;
    retinex.retinexcolorspace    = v;
    retinex.gammaretinex    = v;
    retinex.enabled    = v;
    retinex.str    = v;
    retinex.scal    = v;
    retinex.iter    = v;
    retinex.grad    = v;
    retinex.grads    = v;
    retinex.gam    = v;
    retinex.slope    = v;
    retinex.neigh    = v;
    retinex.offs    = v;
    retinex.vart    = v;
    retinex.limd    = v;
    retinex.highl    = v;
    retinex.skal    = v;
    retinex.medianmap = v;
    retinex.transmissionCurve   = v;
    retinex.gaintransmissionCurve   = v;
    retinex.highlights    = v;
    retinex.htonalwidth   = v;
    retinex.shadows       = v;
    retinex.stonalwidth   = v;
    retinex.radius        = v;

    retinex.retinex = v;
    labCurve.lcurve      = v;
    labCurve.acurve      = v;
    labCurve.bcurve      = v;
    labCurve.cccurve     = v;
    labCurve.chcurve     = v;
    labCurve.lhcurve     = v;
    labCurve.hhcurve     = v;
    labCurve.lccurve    = v;
    labCurve.clcurve    = v;
    labCurve.brightness  = v;
    labCurve.contrast    = v;
    labCurve.chromaticity    = v;
    labCurve.avoidcolorshift = v;
    labCurve.rstprotection   = v;
    labCurve.lcredsk         = v;
    rgbCurves.lumamode       = v;
    rgbCurves.rcurve         = v;
    rgbCurves.gcurve         = v;
    rgbCurves.bcurve         = v;
    colorToning.enabled      = v;
    colorToning.autosat      = v;
    colorToning.opacityCurve = v;
    colorToning.colorCurve   = v;
    colorToning.satprotectionthreshold = v;
    colorToning.saturatedopacity       = v;
    colorToning.strength               = v;
    colorToning.shadowsColSat          = v;
    colorToning.hlColSat   = v;
    colorToning.balance    = v;
    colorToning.clcurve    = v;
    colorToning.method     = v;
    colorToning.twocolor   = v;
    colorToning.cl2curve   = v;
    colorToning.redlow     = v;
    colorToning.greenlow   = v;
    colorToning.bluelow    = v;
    colorToning.satlow     = v;
    colorToning.sathigh    = v;
    colorToning.redmed     = v;
    colorToning.greenmed   = v;
    colorToning.bluemed    = v;
    colorToning.redhigh    = v;
    colorToning.greenhigh  = v;
    colorToning.bluehigh   = v;
    colorToning.lumamode   = v;

    sharpening.enabled            = v;
    sharpening.radius             = v;
    sharpening.amount             = v;
    sharpening.threshold          = v;
    sharpening.edgesonly          = v;
    sharpening.edges_radius       = v;
    sharpening.edges_tolerance    = v;
    sharpening.halocontrol        = v;
    sharpening.halocontrol_amount = v;
    sharpening.method         = v;
    sharpening.deconvamount   = v;
    sharpening.deconvradius   = v;
    sharpening.deconviter     = v;
    sharpening.deconvdamping  = v;
    prsharpening.enabled            = v;
    prsharpening.radius             = v;
    prsharpening.amount             = v;
    prsharpening.threshold          = v;
    prsharpening.edgesonly          = v;
    prsharpening.edges_radius       = v;
    prsharpening.edges_tolerance    = v;
    prsharpening.halocontrol        = v;
    prsharpening.halocontrol_amount = v;
    prsharpening.method         = v;
    prsharpening.deconvamount   = v;
    prsharpening.deconvradius   = v;
    prsharpening.deconviter     = v;
    prsharpening.deconvdamping  = v;
    sharpenEdge.enabled       = v;
    sharpenEdge.passes        = v;
    sharpenEdge.amount        = v;
    sharpenEdge.threechannels = v;
    sharpenMicro.enabled      = v;
    sharpenMicro.matrix       = v;
    sharpenMicro.amount       = v;
    sharpenMicro.uniformity   = v;
    vibrance.enabled          = v;
    vibrance.pastels          = v;
    vibrance.saturated        = v;
    vibrance.psthreshold      = v;
    vibrance.protectskins     = v;
    vibrance.avoidcolorshift  = v;
    vibrance.pastsattog       = v;
    vibrance.skintonescurve   = v;
    colorappearance.enabled    = v;
    colorappearance.degree     = v;
    colorappearance.autodegree = v;
    colorappearance.degreeout     = v;
    colorappearance.autodegreeout = v;
    colorappearance.surround     = v;
    colorappearance.surrsrc     = v;
    colorappearance.adapscen    = v;
    colorappearance.autoadapscen = v;
    colorappearance.ybscen    = v;
    colorappearance.autoybscen = v;
    colorappearance.adaplum    = v;
    colorappearance.badpixsl    = v;
    colorappearance.wbmodel    = v;
    colorappearance.algo    = v;

    colorappearance.jlight     = v;
    colorappearance.qbright     = v;
    colorappearance.chroma     = v;
    colorappearance.schroma     = v;
    colorappearance.mchroma     = v;
    colorappearance.contrast     = v;
    colorappearance.qcontrast     = v;
    colorappearance.colorh     = v;
    colorappearance.rstprotection     = v;
    colorappearance.surrsource = v;
    colorappearance.gamut = v;
//  colorappearance.badpix = v;
    colorappearance.datacie = v;
    colorappearance.tonecie = v;
//  colorappearance.sharpcie = v;
    colorappearance.curve      = v;
    colorappearance.curve2     = v;
    colorappearance.curve3     = v;
    colorappearance.curveMode  = v;
    colorappearance.curveMode2 = v;
    colorappearance.curveMode3 = v;
    colorappearance.tempout     = v;
    colorappearance.greenout     = v;
    colorappearance.ybout     = v;
    colorappearance.tempsc     = v;
    colorappearance.greensc     = v;

    //colorBoost.amount         = v;
    //colorBoost.avoidclip      = v;
    //colorBoost.enable_saturationlimiter = v;
    //colorBoost.saturationlimit = v;
    wb.method                  = v;
    wb.green                   = v;
    wb.temperature             = v;
    wb.equal                   = v;
    wb.tempBias                = v;
    //colorShift.a               = v;
    //colorShift.b               = v;
    //lumaDenoise.enabled        = v;
    //lumaDenoise.radius         = v;
    //lumaDenoise.edgetolerance  = v;
    //colorDenoise.enabled       = v;
    //colorDenoise.amount        = v;
    defringe.enabled           = v;
    defringe.radius            = v;
    defringe.threshold         = v;
    defringe.huecurve          = v;
    impulseDenoise.enabled     = v;
    impulseDenoise.thresh      = v;
    dirpyrDenoise.enabled      = v;
    dirpyrDenoise.enhance      = v;
//  dirpyrDenoise.perform      = v;
    dirpyrDenoise.lcurve      = v;
    dirpyrDenoise.cccurve      = v;
    dirpyrDenoise.median      = v;
    dirpyrDenoise.luma         = v;
    dirpyrDenoise.Ldetail      = v;
    dirpyrDenoise.chroma       = v;
    dirpyrDenoise.redchro      = v;
    dirpyrDenoise.bluechro     = v;
    dirpyrDenoise.gamma        = v;
    dirpyrDenoise.passes        = v;
    dirpyrDenoise.dmethod      = v;
    dirpyrDenoise.Lmethod      = v;
    dirpyrDenoise.Cmethod      = v;
    dirpyrDenoise.C2method      = v;
    dirpyrDenoise.smethod      = v;
    dirpyrDenoise.medmethod      = v;
    dirpyrDenoise.methodmed      = v;
    dirpyrDenoise.rgbmethod      = v;
    epd.enabled                = v;
    epd.strength            = v;
    epd.gamma            = v;
    epd.edgeStopping        = v;
    epd.scale               = v;
    epd.reweightingIterates = v;
    sh.enabled       = v;
    sh.hq            = v;
    sh.highlights    = v;
    sh.htonalwidth   = v;
    sh.shadows       = v;
    sh.stonalwidth   = v;
    sh.localcontrast = v;
    sh.radius        = v;
    crop.enabled = v;
    crop.x       = v;
    crop.y       = v;
    crop.w       = v;
    crop.h       = v;
    crop.fixratio = v;
    crop.ratio   = v;
    crop.orientation = v;
    crop.guide   = v;
    coarse.rotate = v;
    coarse.hflip = v;
    coarse.vflip = v;
    commonTrans.autofill = v;
    rotate.degree = v;
    distortion.amount = v;
    lensProf.lcMode = v;
    lensProf.lcpFile = v;
    lensProf.useDist = v;
    lensProf.useVign = v;
    lensProf.useCA = v;
    lensProf.useLensfun = v;
    lensProf.lfAutoMatch = v;
    lensProf.lfCameraMake = v;
    lensProf.lfCameraModel = v;
    lensProf.lfLens = v;
    perspective.horizontal = v;
    perspective.vertical = v;
    gradient.enabled = v;
    gradient.degree = v;
    gradient.feather = v;
    gradient.strength = v;
    gradient.centerX = v;
    gradient.centerY = v;
    locallab.enabled = v;
    locallab.expcolor = v;
    locallab.expexpose = v;
    locallab.expvibrance = v;
    locallab.expblur = v;
    locallab.exptonemap = v;
    locallab.expreti = v;
    locallab.expsharp = v;
    locallab.expcbdl = v;
    locallab.expdenoi = v;
    locallab.degree = v;
    locallab.locY = v;
    locallab.locX = v;
    locallab.locYT = v;
    locallab.locXL = v;
    locallab.centerX = v;
    locallab.centerY = v;
    locallab.circrad = v;
    locallab.centerXbuf = v;
    locallab.centerYbuf = v;
    locallab.adjblur = v;
    locallab.thres = v;
    locallab.proxi = v;
    locallab.qualityMethod = v;
    locallab.qualitycurveMethod = v;
    locallab.lightness = v;
    locallab.contrast = v;
    locallab.chroma = v;
    locallab.expcomp = v;
    locallab.hlcompr = v;
    locallab.hlcomprthresh = v;
    locallab.black = v;
    locallab.shcompr = v;

    locallab.noiselumf = v;
    locallab.noiselumc = v;
    locallab.noisechrof = v;
    locallab.noisechroc = v;
    locallab.sharradius = v;
    locallab.sharamount = v;
    locallab.shardamping = v;
    locallab.shariter = v;
    locallab.sensi = v;
    locallab.sensiex = v;
    locallab.sensih = v;
    locallab.retrab = v;
    locallab.sensicb = v;
    locallab.sensibn = v;
    locallab.sensitm = v;
    locallab.sensisha = v;
    locallab.radius = v;
    locallab.strength = v;
    locallab.stren = v;
    locallab.gamma = v;
    locallab.estop = v;
    locallab.scaltm = v;
    locallab.rewei = v;
    locallab.transit = v;
    locallab.chrrt = v;
    locallab.avoid = v;
    locallab.Smethod = v;
    locallab.retinexMethod = v;
    locallab.invers = v;
    locallab.cutpast = v;
    locallab.curvactiv = v;
    locallab.activlum = v;
    locallab.inversrad = v;
    locallab.inversret = v;
    locallab.inverssha = v;
    locallab.str = v;
    locallab.neigh = v;
    locallab.nbspot = v;
    locallab.anbspot = v;
    locallab.hueref = v;
    locallab.chromaref = v;
    locallab.lumaref = v;
    locallab.vart = v;
    locallab.localTgaincurve = v;
    locallab.localTgaincurverab = v;
    locallab.llcurve = v;
    locallab.cccurve = v;
    locallab.LHcurve = v;
    locallab.HHcurve = v;
    locallab.excurve = v;

    for (int i = 0; i < 5; i++) {
        locallab.mult[i] = v;
    }

    locallab.threshold = v;
    locallab.chromacbdl = v;
    locallab.pastels          = v;
    locallab.saturated        = v;
    locallab.psthreshold      = v;
    locallab.protectskins     = v;
    locallab.avoidcolorshift  = v;
    locallab.pastsattog       = v;
    locallab.skintonescurve   = v;
    locallab.sensiv = v;


    pcvignette.enabled = v;
    pcvignette.strength = v;
    pcvignette.feather = v;
    pcvignette.roundness = v;
    cacorrection.red = v;
    cacorrection.blue = v;
    vignetting.amount = v;
    vignetting.radius = v;
    vignetting.strength = v;
    vignetting.centerX = v;
    vignetting.centerY = v;
    chmixer.red[0] = v;
    chmixer.red[1] = v;
    chmixer.red[2] = v;
    chmixer.green[0] = v;
    chmixer.green[1] = v;
    chmixer.green[2] = v;
    chmixer.blue[0] = v;
    chmixer.blue[1] = v;
    chmixer.blue[2] = v;
    blackwhite.enabled   = v;
    blackwhite.enabledcc   = v;
    blackwhite.mixerRed   = v;
    blackwhite.mixerOrange   = v;
    blackwhite.mixerYellow   = v;
    blackwhite.mixerGreen   = v;
    blackwhite.mixerCyan   = v;
    blackwhite.mixerBlue   = v;
    blackwhite.mixerMagenta   = v;
    blackwhite.mixerPurple   = v;
    blackwhite.gammaRed   = v;
    blackwhite.gammaGreen   = v;
    blackwhite.gammaBlue   = v;
    blackwhite.filter   = v;
    blackwhite.setting   = v;
    blackwhite.method   = v;
    blackwhite.luminanceCurve = v;
    blackwhite.beforeCurve      = v;
    blackwhite.beforeCurveMode  = v;
    blackwhite.afterCurve      = v;
    blackwhite.afterCurveMode  = v;
    blackwhite.autoc    = v;
    blackwhite.algo    = v;


    resize.scale     = v;
    resize.appliesTo = v;
    resize.method    = v;
    resize.dataspec  = v;
    resize.width     = v;
    resize.height    = v;
    resize.enabled   = v;
    icm.input        = v;
    icm.toneCurve = v;
    icm.applyLookTable = v;
    icm.applyBaselineExposureOffset = v;
    icm.applyHueSatMap = v;
    icm.dcpIlluminant = v;
    icm.working      = v;
    icm.output       = v;
    icm.outputIntent = v;
    icm.outputBPC    = v;
    icm.gamma       = v;
    icm.freegamma   = v;
    icm.gampos      = v;
    icm.slpos       = v;
    raw.bayersensor.method = v;
    raw.bayersensor.imageNum = v;
    raw.bayersensor.ccSteps = v;
    raw.bayersensor.exBlack0 = v;
    raw.bayersensor.exBlack1 = v;
    raw.bayersensor.exBlack2 = v;
    raw.bayersensor.exBlack3 = v;
    raw.bayersensor.exTwoGreen = v;
    raw.bayersensor.dcbIterations = v;
    raw.bayersensor.dcbEnhance = v;
    //raw.bayersensor.allEnhance = v;
    raw.bayersensor.lmmseIterations = v;
    raw.bayersensor.pixelShiftMotion = v;
    raw.bayersensor.pixelShiftMotionCorrection = v;
    raw.bayersensor.pixelShiftMotionCorrectionMethod = v;
    raw.bayersensor.pixelShiftStddevFactorGreen = v;
    raw.bayersensor.pixelShiftStddevFactorRed = v;
    raw.bayersensor.pixelShiftStddevFactorBlue = v;
    raw.bayersensor.pixelShiftEperIso = v;
    raw.bayersensor.pixelShiftNreadIso = v;
    raw.bayersensor.pixelShiftPrnu = v;
    raw.bayersensor.pixelShiftSigma = v;
    raw.bayersensor.pixelShiftSum = v;
    raw.bayersensor.pixelShiftRedBlueWeight = v;
    raw.bayersensor.pixelShiftShowMotion = v;
    raw.bayersensor.pixelShiftShowMotionMaskOnly = v;
    raw.bayersensor.pixelShiftAutomatic = v;
    raw.bayersensor.pixelShiftNonGreenHorizontal = v;
    raw.bayersensor.pixelShiftNonGreenVertical = v;
    raw.bayersensor.pixelShiftHoleFill = v;
    raw.bayersensor.pixelShiftMedian = v;
    raw.bayersensor.pixelShiftMedian3 = v;
    raw.bayersensor.pixelShiftGreen = v;
    raw.bayersensor.pixelShiftBlur = v;
    raw.bayersensor.pixelShiftSmooth = v;
    raw.bayersensor.pixelShiftExp0 = v;
    raw.bayersensor.pixelShiftLmmse = v;
    raw.bayersensor.pixelShiftEqualBright = v;
    raw.bayersensor.pixelShiftEqualBrightChannel = v;
    raw.bayersensor.pixelShiftNonGreenCross = v;
    raw.bayersensor.pixelShiftNonGreenCross2 = v;
    raw.bayersensor.pixelShiftNonGreenAmaze = v;
    raw.bayersensor.greenEq = v;
    raw.bayersensor.linenoise = v;
    raw.xtranssensor.method = v;
    raw.xtranssensor.ccSteps = v;
    raw.xtranssensor.exBlackRed = v;
    raw.xtranssensor.exBlackGreen = v;
    raw.xtranssensor.exBlackBlue = v;
    raw.caCorrection = v;
    raw.caBlue  = v;
    raw.caRed   = v;
    raw.hotPixelFilter = v;
    raw.deadPixelFilter = v;
    raw.hotDeadPixelThresh = v;
    raw.darkFrame = v;
    raw.dfAuto = v;
    raw.ff_file = v;
    raw.ff_AutoSelect = v;
    raw.ff_BlurRadius = v;
    raw.ff_BlurType = v;
    raw.ff_AutoClipControl = v;
    raw.ff_clipControl = v;
    raw.exPos = v;
    raw.exPreser = v;
    wavelet.enabled = v;
    wavelet.strength = v;
    wavelet.balance = v;
    wavelet.iter = v;
    wavelet.median = v;
    wavelet.medianlev = v;
    wavelet.linkedg = v;
    wavelet.cbenab = v;
    wavelet.greenhigh = v;
    wavelet.greenmed = v;
    wavelet.greenlow = v;
    wavelet.bluehigh = v;
    wavelet.bluemed = v;
    wavelet.bluelow = v;
    wavelet.lipst = v;
    wavelet.Medgreinf = v;
    wavelet.avoid = v;
    wavelet.tmr = v;
    wavelet.Lmethod = v;
    wavelet.CLmethod = v;
    wavelet.Backmethod = v;
    wavelet.Tilesmethod = v;
    wavelet.daubcoeffmethod = v;
    wavelet.CHmethod = v;
    wavelet.CHSLmethod = v;
    wavelet.EDmethod = v;
    wavelet.NPmethod = v;
    wavelet.BAmethod = v;
    wavelet.TMmethod = v;
    wavelet.HSmethod = v;
    wavelet.Dirmethod = v;
    wavelet.rescon = v;
    wavelet.resconH = v;
    wavelet.reschro = v;
    wavelet.tmrs = v;
    wavelet.gamma = v;
    wavelet.sup = v;
    wavelet.sky = v;
    wavelet.thres = v;
    wavelet.threshold = v;
    wavelet.threshold2 = v;
    wavelet.edgedetect = v;
    wavelet.edgedetectthr = v;
    wavelet.edgedetectthr2 = v;
    wavelet.edgesensi = v;
    wavelet.edgeampli = v;
    wavelet.chroma = v;
    wavelet.chro = v;
    wavelet.contrast = v;
    wavelet.edgrad = v;
    wavelet.edgval = v;
    wavelet.edgthresh = v;
    wavelet.thr = v;
    wavelet.thrH = v;
    wavelet.skinprotect = v;
    wavelet.hueskin = v;
    wavelet.hueskin2 = v;
    wavelet.hllev = v;
    wavelet.bllev = v;
    wavelet.edgcont = v;
    wavelet.level0noise = v;
    wavelet.level1noise = v;
    wavelet.level2noise = v;
    wavelet.level3noise = v;
    wavelet.ccwcurve = v;
    wavelet.opacityCurveRG   = v;
    wavelet.opacityCurveBY   = v;
    wavelet.opacityCurveW   = v;
    wavelet.opacityCurveWL   = v;
    wavelet.hhcurve     = v;
    wavelet.Chcurve     = v;
    wavelet.wavclCurve     = v;

    wavelet.pastlev = v;
    wavelet.satlev = v;
//  wavelet.enacont = v;
//  wavelet.enachrom = v;
//  wavelet.enaedge = v;
//  wavelet.enares = v;
    wavelet.expfinal = v;
    wavelet.expcontrast = v;
    wavelet.expchroma = v;
    wavelet.expedge = v;
    wavelet.expresid = v;
    wavelet.exptoning = v;
    wavelet.expnoise = v;

    for (int i = 0; i < 9; i++) {
        wavelet.c[i] = v;
    }

    for (int i = 0; i < 9; i++) {
        wavelet.ch[i] = v;
    }

    dirpyrequalizer.enabled = v;
    dirpyrequalizer.gamutlab = v;
    dirpyrequalizer.cbdlMethod = v;


    for (int i = 0; i < 6; i++) {
        dirpyrequalizer.mult[i] = v;
    }

    dirpyrequalizer.threshold = v;
    dirpyrequalizer.skinprotect = v;
    dirpyrequalizer.hueskin = v;
    //dirpyrequalizer.algo = v;
    hsvequalizer.hcurve = v;
    hsvequalizer.scurve = v;
    hsvequalizer.vcurve = v;
    filmSimulation.enabled = v;
    filmSimulation.clutFilename = v;
    filmSimulation.strength = v;

    exif = v;
    iptc = v;
}

using namespace rtengine;
using namespace rtengine::procparams;

void ParamsEdited::initFrom (const std::vector<rtengine::procparams::ProcParams>& src)
{

    set (true);

    if (src.empty()) {
        return;
    }

    const ProcParams& p = src[0];

    for (size_t i = 1; i < src.size(); i++) {
        const ProcParams& other = src[i];
        toneCurve.curve = toneCurve.curve && p.toneCurve.curve == other.toneCurve.curve;
        toneCurve.curve2 = toneCurve.curve2 && p.toneCurve.curve2 == other.toneCurve.curve2;
        toneCurve.curveMode = toneCurve.curveMode && p.toneCurve.curveMode == other.toneCurve.curveMode;
        toneCurve.curveMode2 = toneCurve.curveMode2 && p.toneCurve.curveMode2 == other.toneCurve.curveMode2;
        toneCurve.brightness = toneCurve.brightness && p.toneCurve.brightness == other.toneCurve.brightness;
        toneCurve.black = toneCurve.black && p.toneCurve.black == other.toneCurve.black;
        toneCurve.contrast = toneCurve.contrast && p.toneCurve.contrast == other.toneCurve.contrast;
        toneCurve.saturation = toneCurve.saturation && p.toneCurve.saturation == other.toneCurve.saturation;
        toneCurve.shcompr = toneCurve.shcompr && p.toneCurve.shcompr == other.toneCurve.shcompr;
        toneCurve.hlcompr = toneCurve.hlcompr && p.toneCurve.hlcompr == other.toneCurve.hlcompr;
        toneCurve.hlcomprthresh = toneCurve.hlcomprthresh && p.toneCurve.hlcomprthresh == other.toneCurve.hlcomprthresh;
        toneCurve.autoexp = toneCurve.autoexp && p.toneCurve.autoexp == other.toneCurve.autoexp;
        toneCurve.clip = toneCurve.clip && p.toneCurve.clip == other.toneCurve.clip;
        toneCurve.expcomp = toneCurve.expcomp && p.toneCurve.expcomp == other.toneCurve.expcomp;
        toneCurve.hrenabled = toneCurve.hrenabled && p.toneCurve.hrenabled == other.toneCurve.hrenabled;
        toneCurve.method = toneCurve.method && p.toneCurve.method == other.toneCurve.method;
        retinex.cdcurve = retinex.cdcurve && p.retinex.cdcurve == other.retinex.cdcurve;
        retinex.mapcurve = retinex.mapcurve && p.retinex.mapcurve == other.retinex.mapcurve;
        retinex.cdHcurve = retinex.cdHcurve && p.retinex.cdHcurve == other.retinex.cdHcurve;
        retinex.lhcurve = retinex.lhcurve && p.retinex.lhcurve == other.retinex.lhcurve;
        retinex.transmissionCurve = retinex.transmissionCurve && p.retinex.transmissionCurve == other.retinex.transmissionCurve;
        retinex.gaintransmissionCurve = retinex.gaintransmissionCurve && p.retinex.gaintransmissionCurve == other.retinex.gaintransmissionCurve;
        retinex.retinexMethod = retinex.retinexMethod && p.retinex.retinexMethod == other.retinex.retinexMethod;
        retinex.mapMethod = retinex.mapMethod && p.retinex.mapMethod == other.retinex.mapMethod;
        retinex.viewMethod = retinex.viewMethod && p.retinex.viewMethod == other.retinex.viewMethod;
        retinex.retinexcolorspace = retinex.retinexcolorspace && p.retinex.retinexcolorspace == other.retinex.retinexcolorspace;
        retinex.gammaretinex = retinex.gammaretinex && p.retinex.gammaretinex == other.retinex.gammaretinex;
        retinex.str = retinex.str && p.retinex.str == other.retinex.str;
        retinex.scal = retinex.scal && p.retinex.scal == other.retinex.scal;
        retinex.iter = retinex.iter && p.retinex.iter == other.retinex.iter;
        retinex.grad = retinex.grad && p.retinex.grad == other.retinex.grad;
        retinex.grads = retinex.grads && p.retinex.grads == other.retinex.grads;
        retinex.gam = retinex.gam && p.retinex.gam == other.retinex.gam;
        retinex.slope = retinex.slope && p.retinex.slope == other.retinex.slope;
        retinex.neigh = retinex.neigh && p.retinex.neigh == other.retinex.neigh;
        retinex.offs = retinex.offs && p.retinex.offs == other.retinex.offs;
        retinex.vart = retinex.vart && p.retinex.vart == other.retinex.vart;
        retinex.limd = retinex.limd && p.retinex.limd == other.retinex.limd;
        retinex.highl = retinex.highl && p.retinex.highl == other.retinex.highl;
        retinex.skal = retinex.skal && p.retinex.skal == other.retinex.skal;
        retinex.medianmap = retinex.medianmap && p.retinex.medianmap == other.retinex.medianmap;
        retinex.highlights = retinex.highlights && p.retinex.highlights == other.retinex.highlights;
        retinex.htonalwidth = retinex.htonalwidth && p.retinex.htonalwidth == other.retinex.htonalwidth;
        retinex.shadows = retinex.shadows && p.retinex.shadows == other.retinex.shadows;
        retinex.stonalwidth = retinex.stonalwidth && p.retinex.stonalwidth == other.retinex.stonalwidth;
        retinex.radius = retinex.radius && p.retinex.radius == other.retinex.radius;

        retinex.enabled = retinex.enabled && p.retinex.enabled == other.retinex.enabled;
        labCurve.lcurve = labCurve.lcurve && p.labCurve.lcurve == other.labCurve.lcurve;
        labCurve.acurve = labCurve.acurve && p.labCurve.acurve == other.labCurve.acurve;
        labCurve.bcurve = labCurve.bcurve && p.labCurve.bcurve == other.labCurve.bcurve;
        labCurve.cccurve = labCurve.cccurve && p.labCurve.cccurve == other.labCurve.cccurve;
        labCurve.chcurve = labCurve.chcurve && p.labCurve.chcurve == other.labCurve.chcurve;
        labCurve.lhcurve = labCurve.lhcurve && p.labCurve.lhcurve == other.labCurve.lhcurve;
        labCurve.hhcurve = labCurve.hhcurve && p.labCurve.hhcurve == other.labCurve.hhcurve;
        labCurve.lccurve = labCurve.lccurve && p.labCurve.lccurve == other.labCurve.lccurve;
        labCurve.clcurve = labCurve.clcurve && p.labCurve.clcurve == other.labCurve.clcurve;
        labCurve.brightness = labCurve.brightness && p.labCurve.brightness == other.labCurve.brightness;
        labCurve.contrast = labCurve.contrast && p.labCurve.contrast == other.labCurve.contrast;
        labCurve.chromaticity = labCurve.chromaticity && p.labCurve.chromaticity == other.labCurve.chromaticity;
        labCurve.avoidcolorshift = labCurve.avoidcolorshift && p.labCurve.avoidcolorshift == other.labCurve.avoidcolorshift;
        labCurve.rstprotection = labCurve.rstprotection && p.labCurve.rstprotection == other.labCurve.rstprotection;
        labCurve.lcredsk = labCurve.lcredsk && p.labCurve.lcredsk == other.labCurve.lcredsk;
        rgbCurves.lumamode = rgbCurves.lumamode && p.rgbCurves.lumamode == other.rgbCurves.lumamode;
        rgbCurves.rcurve = rgbCurves.rcurve && p.rgbCurves.rcurve == other.rgbCurves.rcurve;
        rgbCurves.gcurve = rgbCurves.gcurve && p.rgbCurves.gcurve == other.rgbCurves.gcurve;
        rgbCurves.bcurve = rgbCurves.bcurve && p.rgbCurves.bcurve == other.rgbCurves.bcurve;
        colorToning.enabled = colorToning.enabled && p.colorToning.enabled == other.colorToning.enabled;
        colorToning.twocolor = colorToning.twocolor && p.colorToning.twocolor == other.colorToning.twocolor;
        colorToning.opacityCurve = colorToning.opacityCurve && p.colorToning.opacityCurve == other.colorToning.opacityCurve;
        colorToning.colorCurve = colorToning.colorCurve && p.colorToning.colorCurve == other.colorToning.colorCurve;
        colorToning.autosat = colorToning.autosat && p.colorToning.autosat == other.colorToning.autosat;
        colorToning.satprotectionthreshold = colorToning.satprotectionthreshold && p.colorToning.satProtectionThreshold == other.colorToning.satProtectionThreshold;
        colorToning.saturatedopacity = colorToning.saturatedopacity && p.colorToning.saturatedOpacity == other.colorToning.saturatedOpacity;
        colorToning.strength = colorToning.strength && p.colorToning.strength == other.colorToning.strength;
        colorToning.shadowsColSat = colorToning.shadowsColSat && p.colorToning.shadowsColSat == other.colorToning.shadowsColSat;
        colorToning.hlColSat = colorToning.hlColSat && p.colorToning.hlColSat == other.colorToning.hlColSat;
        colorToning.balance = colorToning.balance && p.colorToning.balance == other.colorToning.balance;
        colorToning.clcurve = colorToning.clcurve && p.colorToning.clcurve == other.colorToning.clcurve;
        colorToning.cl2curve = colorToning.cl2curve && p.colorToning.cl2curve == other.colorToning.cl2curve;
        colorToning.method = colorToning.method && p.colorToning.method == other.colorToning.method;
        colorToning.redlow = colorToning.redlow && p.colorToning.redlow == other.colorToning.redlow;
        colorToning.greenlow = colorToning.greenlow && p.colorToning.greenlow == other.colorToning.greenlow;
        colorToning.bluelow = colorToning.bluelow && p.colorToning.bluelow == other.colorToning.bluelow;
        colorToning.satlow = colorToning.satlow && p.colorToning.satlow == other.colorToning.satlow;
        colorToning.sathigh = colorToning.sathigh && p.colorToning.sathigh == other.colorToning.sathigh;
        colorToning.redmed = colorToning.redmed && p.colorToning.redmed == other.colorToning.redmed;
        colorToning.greenmed = colorToning.greenmed && p.colorToning.greenmed == other.colorToning.greenmed;
        colorToning.bluemed = colorToning.bluemed && p.colorToning.bluemed == other.colorToning.bluemed;
        colorToning.redhigh = colorToning.redhigh && p.colorToning.redhigh == other.colorToning.redhigh;
        colorToning.greenhigh = colorToning.greenhigh && p.colorToning.greenhigh == other.colorToning.greenhigh;
        colorToning.bluehigh = colorToning.bluehigh && p.colorToning.bluehigh == other.colorToning.bluehigh;
        colorToning.lumamode = colorToning.lumamode && p.colorToning.lumamode == other.colorToning.lumamode;
        sharpenEdge.enabled = sharpenEdge.enabled && p.sharpenEdge.enabled == other.sharpenEdge.enabled;
        sharpenEdge.passes = sharpenEdge.passes && p.sharpenEdge.passes == other.sharpenEdge.passes;
        sharpenEdge.amount = sharpenEdge.amount && p.sharpenEdge.amount == other.sharpenEdge.amount;
        sharpenEdge.threechannels = sharpenEdge.threechannels && p.sharpenEdge.threechannels == other.sharpenEdge.threechannels;
        sharpenMicro.enabled = sharpenMicro.enabled && p.sharpenMicro.enabled == other.sharpenMicro.enabled;
        sharpenMicro.matrix = sharpenMicro.matrix && p.sharpenMicro.matrix == other.sharpenMicro.matrix;
        sharpenMicro.amount = sharpenMicro.amount && p.sharpenMicro.amount == other.sharpenMicro.amount;
        sharpenMicro.uniformity = sharpenMicro.uniformity && p.sharpenMicro.uniformity == other.sharpenMicro.uniformity;
        sharpening.enabled = sharpening.enabled && p.sharpening.enabled == other.sharpening.enabled;
        sharpening.radius = sharpening.radius && p.sharpening.radius == other.sharpening.radius;
        sharpening.amount = sharpening.amount && p.sharpening.amount == other.sharpening.amount;
        sharpening.threshold = sharpening.threshold && p.sharpening.threshold == other.sharpening.threshold;
        sharpening.edgesonly = sharpening.edgesonly && p.sharpening.edgesonly == other.sharpening.edgesonly;
        sharpening.edges_radius = sharpening.edges_radius && p.sharpening.edges_radius == other.sharpening.edges_radius;
        sharpening.edges_tolerance = sharpening.edges_tolerance && p.sharpening.edges_tolerance == other.sharpening.edges_tolerance;
        sharpening.halocontrol = sharpening.halocontrol && p.sharpening.halocontrol == other.sharpening.halocontrol;
        sharpening.halocontrol_amount = sharpening.halocontrol_amount && p.sharpening.halocontrol_amount == other.sharpening.halocontrol_amount;
        sharpening.method = sharpening.method && p.sharpening.method == other.sharpening.method;
        sharpening.deconvamount = sharpening.deconvamount && p.sharpening.deconvamount == other.sharpening.deconvamount;
        sharpening.deconvradius = sharpening.deconvradius && p.sharpening.deconvradius == other.sharpening.deconvradius;
        sharpening.deconviter = sharpening.deconviter && p.sharpening.deconviter == other.sharpening.deconviter;
        sharpening.deconvdamping = sharpening.deconvdamping && p.sharpening.deconvdamping == other.sharpening.deconvdamping;
        prsharpening.enabled = prsharpening.enabled && p.prsharpening.enabled == other.prsharpening.enabled;
        prsharpening.radius = prsharpening.radius && p.prsharpening.radius == other.prsharpening.radius;
        prsharpening.amount = prsharpening.amount && p.prsharpening.amount == other.prsharpening.amount;
        prsharpening.threshold = prsharpening.threshold && p.prsharpening.threshold == other.prsharpening.threshold;
        prsharpening.edgesonly = prsharpening.edgesonly && p.prsharpening.edgesonly == other.prsharpening.edgesonly;
        prsharpening.edges_radius = prsharpening.edges_radius && p.prsharpening.edges_radius == other.prsharpening.edges_radius;
        prsharpening.edges_tolerance = prsharpening.edges_tolerance && p.prsharpening.edges_tolerance == other.prsharpening.edges_tolerance;
        prsharpening.halocontrol = prsharpening.halocontrol && p.prsharpening.halocontrol == other.prsharpening.halocontrol;
        prsharpening.halocontrol_amount = prsharpening.halocontrol_amount && p.prsharpening.halocontrol_amount == other.prsharpening.halocontrol_amount;
        prsharpening.method = prsharpening.method && p.prsharpening.method == other.prsharpening.method;
        prsharpening.deconvamount = prsharpening.deconvamount && p.prsharpening.deconvamount == other.prsharpening.deconvamount;
        prsharpening.deconvradius = prsharpening.deconvradius && p.prsharpening.deconvradius == other.prsharpening.deconvradius;
        prsharpening.deconviter = prsharpening.deconviter && p.prsharpening.deconviter == other.prsharpening.deconviter;
        prsharpening.deconvdamping = prsharpening.deconvdamping && p.prsharpening.deconvdamping == other.prsharpening.deconvdamping;
        vibrance.enabled = vibrance.enabled && p.vibrance.enabled == other.vibrance.enabled;
        vibrance.pastels = vibrance.pastels && p.vibrance.pastels == other.vibrance.pastels;
        vibrance.saturated = vibrance.saturated && p.vibrance.saturated == other.vibrance.saturated;
        vibrance.psthreshold = vibrance.psthreshold && p.vibrance.psthreshold == other.vibrance.psthreshold;
        vibrance.protectskins = vibrance.protectskins && p.vibrance.protectskins == other.vibrance.protectskins;
        vibrance.avoidcolorshift = vibrance.avoidcolorshift && p.vibrance.avoidcolorshift == other.vibrance.avoidcolorshift;
        vibrance.pastsattog = vibrance.pastsattog && p.vibrance.pastsattog == other.vibrance.pastsattog;
        vibrance.skintonescurve = vibrance.skintonescurve && p.vibrance.skintonescurve == other.vibrance.skintonescurve;

        colorappearance.enabled = colorappearance.enabled && p.colorappearance.enabled == other.colorappearance.enabled;
        colorappearance.degree = colorappearance.degree && p.colorappearance.degree == other.colorappearance.degree;
        colorappearance.autodegree = colorappearance.autodegree && p.colorappearance.autodegree == other.colorappearance.autodegree;
        colorappearance.degreeout = colorappearance.degreeout && p.colorappearance.degreeout == other.colorappearance.degreeout;
        colorappearance.autodegreeout = colorappearance.autodegreeout && p.colorappearance.autodegreeout == other.colorappearance.autodegreeout;
        colorappearance.surround = colorappearance.surround && p.colorappearance.surround == other.colorappearance.surround;
        colorappearance.surrsrc = colorappearance.surrsrc && p.colorappearance.surrsrc == other.colorappearance.surrsrc;
        colorappearance.adapscen = colorappearance.adapscen && p.colorappearance.adapscen == other.colorappearance.adapscen;
        colorappearance.autoadapscen = colorappearance.autoadapscen && p.colorappearance.autoadapscen == other.colorappearance.autoadapscen;
        colorappearance.ybscen = colorappearance.ybscen && p.colorappearance.ybscen == other.colorappearance.ybscen;
        colorappearance.autoybscen = colorappearance.autoybscen && p.colorappearance.autoybscen == other.colorappearance.autoybscen;
        colorappearance.adaplum = colorappearance.adaplum && p.colorappearance.adaplum == other.colorappearance.adaplum;
        colorappearance.badpixsl = colorappearance.badpixsl && p.colorappearance.badpixsl == other.colorappearance.badpixsl;
        colorappearance.wbmodel = colorappearance.wbmodel && p.colorappearance.wbmodel == other.colorappearance.wbmodel;
        colorappearance.algo = colorappearance.algo && p.colorappearance.algo == other.colorappearance.algo;
        colorappearance.jlight = colorappearance.jlight && p.colorappearance.jlight == other.colorappearance.jlight;
        colorappearance.qbright = colorappearance.qbright && p.colorappearance.qbright == other.colorappearance.qbright;
        colorappearance.chroma = colorappearance.chroma && p.colorappearance.chroma == other.colorappearance.chroma;
        colorappearance.schroma = colorappearance.schroma && p.colorappearance.schroma == other.colorappearance.schroma;
        colorappearance.mchroma = colorappearance.mchroma && p.colorappearance.mchroma == other.colorappearance.mchroma;
        colorappearance.rstprotection = colorappearance.rstprotection && p.colorappearance.rstprotection == other.colorappearance.rstprotection;
        colorappearance.contrast = colorappearance.contrast && p.colorappearance.contrast == other.colorappearance.contrast;
        colorappearance.qcontrast = colorappearance.qcontrast && p.colorappearance.qcontrast == other.colorappearance.qcontrast;
        colorappearance.colorh = colorappearance.colorh && p.colorappearance.colorh == other.colorappearance.colorh;
        colorappearance.surrsource = colorappearance.surrsource && p.colorappearance.surrsource == other.colorappearance.surrsource;
        colorappearance.gamut = colorappearance.gamut && p.colorappearance.gamut == other.colorappearance.gamut;
//       colorappearance.badpix = colorappearance.badpix && p.colorappearance.badpix == other.colorappearance.badpix;
        colorappearance.datacie = colorappearance.datacie && p.colorappearance.datacie == other.colorappearance.datacie;
        colorappearance.tonecie = colorappearance.tonecie && p.colorappearance.tonecie == other.colorappearance.tonecie;
        //     colorappearance.sharpcie = colorappearance.sharpcie && p.colorappearance.sharpcie == other.colorappearance.sharpcie;
        colorappearance.curve = colorappearance.curve && p.colorappearance.curve == other.colorappearance.curve;
        colorappearance.curve3 = colorappearance.curve3 && p.colorappearance.curve3 == other.colorappearance.curve3;
        colorappearance.curve2 = colorappearance.curve2 && p.colorappearance.curve2 == other.colorappearance.curve2;
        colorappearance.curveMode = colorappearance.curveMode && p.colorappearance.curveMode == other.colorappearance.curveMode;
        colorappearance.curveMode2 = colorappearance.curveMode2 && p.colorappearance.curveMode2 == other.colorappearance.curveMode2;
        colorappearance.curveMode3 = colorappearance.curveMode3 && p.colorappearance.curveMode3 == other.colorappearance.curveMode3;
        colorappearance.tempout = colorappearance.tempout && p.colorappearance.tempout == other.colorappearance.tempout;
        colorappearance.greenout = colorappearance.greenout && p.colorappearance.greenout == other.colorappearance.greenout;
        colorappearance.ybout = colorappearance.ybout && p.colorappearance.ybout == other.colorappearance.ybout;
        colorappearance.tempsc = colorappearance.tempsc && p.colorappearance.tempsc == other.colorappearance.tempsc;
        colorappearance.greensc = colorappearance.greensc && p.colorappearance.greensc == other.colorappearance.greensc;

        //colorBoost.amount = colorBoost.amount && p.colorBoost.amount == other.colorBoost.amount;
        //colorBoost.avoidclip = colorBoost.avoidclip && p.colorBoost.avoidclip == other.colorBoost.avoidclip;
        //colorBoost.enable_saturationlimiter = colorBoost.enable_saturationlimiter && p.colorBoost.enable_saturationlimiter == other.colorBoost.enable_saturationlimiter;
        //colorBoost.saturationlimit = colorBoost.saturationlimit && p.colorBoost.saturationlimit == other.colorBoost.saturationlimit;
        wb.method = wb.method && p.wb.method == other.wb.method;
        wb.green = wb.green && p.wb.green == other.wb.green;
        wb.equal = wb.equal && p.wb.equal == other.wb.equal;
        wb.temperature = wb.temperature && p.wb.temperature == other.wb.temperature;
        wb.tempBias = wb.tempBias && p.wb.tempBias == other.wb.tempBias;
        //colorShift.a = colorShift.a && p.colorShift.a == other.colorShift.a;
        //colorShift.b = colorShift.b && p.colorShift.b == other.colorShift.b;
        //lumaDenoise.enabled = lumaDenoise.enabled && p.lumaDenoise.enabled == other.lumaDenoise.enabled;
        //lumaDenoise.radius = lumaDenoise.radius && p.lumaDenoise.radius == other.lumaDenoise.radius;
        //lumaDenoise.edgetolerance = lumaDenoise.edgetolerance && p.lumaDenoise.edgetolerance == other.lumaDenoise.edgetolerance;
        //colorDenoise.enabled = colorDenoise.enabled && p.colorDenoise.enabled == other.colorDenoise.enabled;
        //colorDenoise.amount = colorDenoise.amount && p.colorDenoise.amount == other.colorDenoise.amount;
        defringe.enabled = defringe.enabled && p.defringe.enabled == other.defringe.enabled;
        defringe.radius = defringe.radius && p.defringe.radius == other.defringe.radius;
        defringe.threshold = defringe.threshold && p.defringe.threshold == other.defringe.threshold;
        defringe.huecurve = defringe.huecurve && p.defringe.huecurve == other.defringe.huecurve;

        impulseDenoise.enabled = impulseDenoise.enabled && p.impulseDenoise.enabled == other.impulseDenoise.enabled;
        impulseDenoise.thresh = impulseDenoise.thresh && p.impulseDenoise.thresh == other.impulseDenoise.thresh;

        dirpyrDenoise.enabled = dirpyrDenoise.enabled && p.dirpyrDenoise.enabled == other.dirpyrDenoise.enabled;
        dirpyrDenoise.enhance = dirpyrDenoise.enhance && p.dirpyrDenoise.enhance == other.dirpyrDenoise.enhance;
        dirpyrDenoise.median = dirpyrDenoise.median && p.dirpyrDenoise.median == other.dirpyrDenoise.median;
//       dirpyrDenoise.perform = dirpyrDenoise.perform && p.dirpyrDenoise.perform == other.dirpyrDenoise.perform;
        dirpyrDenoise.luma = dirpyrDenoise.luma && p.dirpyrDenoise.luma == other.dirpyrDenoise.luma;
        dirpyrDenoise.lcurve = dirpyrDenoise.lcurve && p.dirpyrDenoise.lcurve == other.dirpyrDenoise.lcurve;
        dirpyrDenoise.cccurve = dirpyrDenoise.cccurve && p.dirpyrDenoise.cccurve == other.dirpyrDenoise.cccurve;
        dirpyrDenoise.Ldetail = dirpyrDenoise.Ldetail && p.dirpyrDenoise.Ldetail == other.dirpyrDenoise.Ldetail;
        dirpyrDenoise.chroma = dirpyrDenoise.chroma && p.dirpyrDenoise.chroma == other.dirpyrDenoise.chroma;
        dirpyrDenoise.redchro = dirpyrDenoise.redchro && p.dirpyrDenoise.redchro == other.dirpyrDenoise.redchro;
        dirpyrDenoise.bluechro = dirpyrDenoise.bluechro && p.dirpyrDenoise.bluechro == other.dirpyrDenoise.bluechro;
        dirpyrDenoise.gamma = dirpyrDenoise.gamma && p.dirpyrDenoise.gamma == other.dirpyrDenoise.gamma;
        dirpyrDenoise.passes = dirpyrDenoise.passes && p.dirpyrDenoise.passes == other.dirpyrDenoise.passes;
        dirpyrDenoise.dmethod = dirpyrDenoise.dmethod && p.dirpyrDenoise.dmethod == other.dirpyrDenoise.dmethod;
        dirpyrDenoise.Lmethod = dirpyrDenoise.Lmethod && p.dirpyrDenoise.Lmethod == other.dirpyrDenoise.Lmethod;
        dirpyrDenoise.Cmethod = dirpyrDenoise.Cmethod && p.dirpyrDenoise.Cmethod == other.dirpyrDenoise.Cmethod;
        dirpyrDenoise.C2method = dirpyrDenoise.C2method && p.dirpyrDenoise.C2method == other.dirpyrDenoise.C2method;
        dirpyrDenoise.smethod = dirpyrDenoise.smethod && p.dirpyrDenoise.smethod == other.dirpyrDenoise.smethod;
        dirpyrDenoise.medmethod = dirpyrDenoise.medmethod && p.dirpyrDenoise.medmethod == other.dirpyrDenoise.medmethod;
        dirpyrDenoise.methodmed = dirpyrDenoise.methodmed && p.dirpyrDenoise.methodmed == other.dirpyrDenoise.methodmed;
        dirpyrDenoise.rgbmethod = dirpyrDenoise.rgbmethod && p.dirpyrDenoise.rgbmethod == other.dirpyrDenoise.rgbmethod;

        epd.enabled = epd.enabled && p.epd.enabled == other.epd.enabled;
        epd.strength = epd.strength && p.epd.strength == other.epd.strength;
        epd.gamma = epd.gamma && p.epd.gamma == other.epd.gamma;
        epd.edgeStopping = epd.edgeStopping && p.epd.edgeStopping == other.epd.edgeStopping;
        epd.scale = epd.scale && p.epd.scale == other.epd.scale;
        epd.reweightingIterates = epd.reweightingIterates && p.epd.reweightingIterates == other.epd.reweightingIterates;

        sh.enabled = sh.enabled && p.sh.enabled == other.sh.enabled;
        sh.hq = sh.hq && p.sh.hq == other.sh.hq;
        sh.highlights = sh.highlights && p.sh.highlights == other.sh.highlights;
        sh.htonalwidth = sh.htonalwidth && p.sh.htonalwidth == other.sh.htonalwidth;
        sh.shadows = sh.shadows && p.sh.shadows == other.sh.shadows;
        sh.stonalwidth = sh.stonalwidth && p.sh.stonalwidth == other.sh.stonalwidth;
        sh.localcontrast = sh.localcontrast && p.sh.localcontrast == other.sh.localcontrast;
        sh.radius = sh.radius && p.sh.radius == other.sh.radius;
        crop.enabled = crop.enabled && p.crop.enabled == other.crop.enabled;
        crop.x = crop.x && p.crop.x == other.crop.x;
        crop.y = crop.y && p.crop.y == other.crop.y;
        crop.w = crop.w && p.crop.w == other.crop.w;
        crop.h = crop.h && p.crop.h == other.crop.h;
        crop.fixratio = crop.fixratio && p.crop.fixratio == other.crop.fixratio;
        crop.ratio = crop.ratio && p.crop.ratio == other.crop.ratio;
        crop.orientation = crop.orientation && p.crop.orientation == other.crop.orientation;
        crop.guide = crop.guide && p.crop.guide == other.crop.guide;
        coarse.rotate = coarse.rotate && p.coarse.rotate == other.coarse.rotate;
        coarse.hflip = coarse.hflip && p.coarse.hflip == other.coarse.hflip;
        coarse.vflip = coarse.vflip && p.coarse.vflip == other.coarse.vflip;
        commonTrans.autofill = commonTrans.autofill && p.commonTrans.autofill == other.commonTrans.autofill;
        rotate.degree = rotate.degree && p.rotate.degree == other.rotate.degree;
        distortion.amount = distortion.amount && p.distortion.amount == other.distortion.amount;
        lensProf.lcMode = lensProf.lcMode && p.lensProf.lcMode == other.lensProf.lcMode;
        lensProf.lcpFile = lensProf.lcpFile && p.lensProf.lcpFile == other.lensProf.lcpFile;
        lensProf.useDist = lensProf.useDist && p.lensProf.useDist == other.lensProf.useDist;
        lensProf.useVign = lensProf.useVign && p.lensProf.useVign == other.lensProf.useVign;
        lensProf.useCA = lensProf.useCA && p.lensProf.useCA == other.lensProf.useCA;
        lensProf.useLensfun = lensProf.useLensfun && p.lensProf.useLensfun() == other.lensProf.useLensfun();
        lensProf.lfAutoMatch = lensProf.lfAutoMatch && p.lensProf.lfAutoMatch() == other.lensProf.lfAutoMatch();
        lensProf.lfCameraMake = lensProf.lfCameraMake && p.lensProf.lfCameraMake == other.lensProf.lfCameraMake;
        lensProf.lfCameraModel = lensProf.lfCameraModel && p.lensProf.lfCameraModel == other.lensProf.lfCameraModel;
        lensProf.lfLens = lensProf.lfLens && p.lensProf.lfLens == other.lensProf.lfLens;
        perspective.horizontal = perspective.horizontal && p.perspective.horizontal == other.perspective.horizontal;
        perspective.vertical = perspective.vertical && p.perspective.vertical == other.perspective.vertical;
        gradient.enabled = gradient.enabled && p.gradient.enabled == other.gradient.enabled;
        gradient.degree = gradient.degree && p.gradient.degree == other.gradient.degree;
        gradient.feather = gradient.feather && p.gradient.feather == other.gradient.feather;
        gradient.strength = gradient.strength && p.gradient.strength == other.gradient.strength;
        gradient.centerX = gradient.centerX && p.gradient.centerX == other.gradient.centerX;
        gradient.centerY = gradient.centerY && p.gradient.centerY == other.gradient.centerY;
        locallab.enabled = locallab.enabled && p.locallab.enabled == other.locallab.enabled;
        locallab.avoid = locallab.avoid && p.locallab.avoid == other.locallab.avoid;
        locallab.invers = locallab.invers && p.locallab.invers == other.locallab.invers;
        locallab.cutpast = locallab.cutpast && p.locallab.cutpast == other.locallab.cutpast;
        locallab.curvactiv = locallab.curvactiv && p.locallab.curvactiv == other.locallab.curvactiv;
        locallab.activlum = locallab.activlum && p.locallab.activlum == other.locallab.activlum;
        locallab.inversrad = locallab.inversrad && p.locallab.inversrad == other.locallab.inversrad;
        locallab.inversret = locallab.inversret && p.locallab.inversret == other.locallab.inversret;
        locallab.inverssha = locallab.inverssha && p.locallab.inverssha == other.locallab.inverssha;
        locallab.degree = locallab.degree && p.locallab.degree == other.locallab.degree;
        locallab.locY = locallab.locY && p.locallab.locY == other.locallab.locY;
        locallab.locX = locallab.locX && p.locallab.locX == other.locallab.locX;
        locallab.locYT = locallab.locYT && p.locallab.locYT == other.locallab.locYT;
        locallab.locXL = locallab.locXL && p.locallab.locXL == other.locallab.locXL;
        locallab.Smethod = locallab.Smethod && p.locallab.Smethod == other.locallab.Smethod;
        locallab.retinexMethod = locallab.retinexMethod && p.locallab.retinexMethod == other.locallab.retinexMethod;
        locallab.centerX = locallab.centerX && p.locallab.centerX == other.locallab.centerX;
        locallab.centerY = locallab.centerY && p.locallab.centerY == other.locallab.centerY;
        locallab.circrad = locallab.circrad && p.locallab.circrad == other.locallab.circrad;
        locallab.centerXbuf = locallab.centerXbuf && p.locallab.centerXbuf == other.locallab.centerXbuf;
        locallab.centerYbuf = locallab.centerYbuf && p.locallab.centerYbuf == other.locallab.centerYbuf;
        locallab.adjblur = locallab.adjblur && p.locallab.adjblur == other.locallab.adjblur;
        locallab.thres = locallab.thres && p.locallab.thres == other.locallab.thres;
        locallab.proxi = locallab.proxi && p.locallab.proxi == other.locallab.proxi;
        locallab.qualityMethod = locallab.qualityMethod && p.locallab.qualityMethod == other.locallab.qualityMethod;
        locallab.qualitycurveMethod = locallab.qualitycurveMethod && p.locallab.qualitycurveMethod == other.locallab.qualitycurveMethod;
        locallab.lightness = locallab.lightness && p.locallab.lightness == other.locallab.lightness;
        locallab.contrast = locallab.contrast && p.locallab.contrast == other.locallab.contrast;
        locallab.chroma = locallab.chroma && p.locallab.chroma == other.locallab.chroma;
        locallab.expcomp = locallab.expcomp && p.locallab.expcomp == other.locallab.expcomp;
        locallab.hlcompr = locallab.hlcompr && p.locallab.hlcompr == other.locallab.hlcompr;
        locallab.hlcomprthresh = locallab.hlcomprthresh && p.locallab.hlcomprthresh == other.locallab.hlcomprthresh;
        locallab.black = locallab.black && p.locallab.black == other.locallab.black;
        locallab.shcompr = locallab.shcompr && p.locallab.shcompr == other.locallab.shcompr;


        locallab.noiselumf = locallab.noiselumf && p.locallab.noiselumf == other.locallab.noiselumf;
        locallab.noiselumc = locallab.noiselumc && p.locallab.noiselumc == other.locallab.noiselumc;
        locallab.noisechrof = locallab.noisechrof && p.locallab.noisechrof == other.locallab.noisechrof;
        locallab.noisechroc = locallab.noisechroc && p.locallab.noisechroc == other.locallab.noisechroc;
        locallab.sharradius = locallab.sharradius && p.locallab.sharradius == other.locallab.sharradius;
        locallab.sharamount = locallab.sharamount && p.locallab.sharamount == other.locallab.sharamount;
        locallab.shariter = locallab.shariter && p.locallab.shariter == other.locallab.shariter;
        locallab.sensi = locallab.sensi && p.locallab.sensi == other.locallab.sensi;
        locallab.sensiex = locallab.sensiex && p.locallab.sensiex == other.locallab.sensiex;
        locallab.sensih = locallab.sensih && p.locallab.sensih == other.locallab.sensih;
        locallab.retrab = locallab.retrab && p.locallab.retrab == other.locallab.retrab;
        locallab.sensicb = locallab.sensicb && p.locallab.sensicb == other.locallab.sensicb;
        locallab.sensibn = locallab.sensibn && p.locallab.sensibn == other.locallab.sensibn;
        locallab.sensitm = locallab.sensitm && p.locallab.sensitm == other.locallab.sensitm;
        locallab.sensisha = locallab.sensisha && p.locallab.sensisha == other.locallab.sensisha;
        locallab.radius = locallab.radius && p.locallab.radius == other.locallab.radius;
        locallab.strength = locallab.strength && p.locallab.strength == other.locallab.strength;
        locallab.stren = locallab.stren && p.locallab.stren == other.locallab.stren;
        locallab.gamma = locallab.gamma && p.locallab.gamma == other.locallab.gamma;
        locallab.estop = locallab.estop && p.locallab.estop == other.locallab.estop;
        locallab.scaltm = locallab.scaltm && p.locallab.scaltm == other.locallab.scaltm;
        locallab.rewei = locallab.rewei && p.locallab.rewei == other.locallab.rewei;
        locallab.transit = locallab.transit && p.locallab.transit == other.locallab.transit;
        locallab.chrrt = locallab.chrrt && p.locallab.chrrt == other.locallab.chrrt;
        locallab.str = locallab.str && p.locallab.str == other.locallab.str;
        locallab.neigh = locallab.neigh && p.locallab.neigh == other.locallab.neigh;
        locallab.nbspot = locallab.nbspot && p.locallab.nbspot == other.locallab.nbspot;
        locallab.anbspot = locallab.anbspot && p.locallab.anbspot == other.locallab.anbspot;
        locallab.hueref = locallab.hueref && p.locallab.hueref == other.locallab.hueref;
        locallab.chromaref = locallab.chromaref && p.locallab.chromaref == other.locallab.chromaref;
        locallab.lumaref = locallab.lumaref && p.locallab.lumaref == other.locallab.lumaref;
        locallab.vart = locallab.vart && p.locallab.vart == other.locallab.vart;
        locallab.localTgaincurve = locallab.localTgaincurve && p.locallab.localTgaincurve == other.locallab.localTgaincurve;
        locallab.localTgaincurverab = locallab.localTgaincurverab && p.locallab.localTgaincurverab == other.locallab.localTgaincurverab;
        locallab.llcurve = locallab.llcurve && p.locallab.llcurve == other.locallab.llcurve;
        locallab.cccurve = locallab.cccurve && p.locallab.cccurve == other.locallab.cccurve;
        locallab.LHcurve = locallab.LHcurve && p.locallab.LHcurve == other.locallab.LHcurve;
        locallab.HHcurve = locallab.HHcurve && p.locallab.HHcurve == other.locallab.HHcurve;
        locallab.excurve = locallab.excurve && p.locallab.excurve == other.locallab.excurve;
        locallab.expcolor = locallab.expcolor && p.locallab.expcolor == other.locallab.expcolor;
        locallab.expexpose = locallab.expexpose && p.locallab.expexpose == other.locallab.expexpose;
        locallab.expvibrance = locallab.expvibrance && p.locallab.expvibrance == other.locallab.expvibrance;
        locallab.expblur = locallab.expblur && p.locallab.expblur == other.locallab.expblur;
        locallab.exptonemap = locallab.exptonemap && p.locallab.exptonemap == other.locallab.exptonemap;
        locallab.expreti = locallab.expreti && p.locallab.expreti == other.locallab.expreti;
        locallab.expsharp = locallab.expsharp && p.locallab.expsharp == other.locallab.expsharp;
        locallab.expcbdl = locallab.expcbdl && p.locallab.expcbdl == other.locallab.expcbdl;
        locallab.expdenoi = locallab.expdenoi && p.locallab.expdenoi == other.locallab.expdenoi;

        for (int i = 0; i < 5; i++) {
            locallab.mult[i] = locallab.mult[i] && p.locallab.mult[i] == other.locallab.mult[i];
        }

        locallab.threshold = locallab.threshold && p.locallab.threshold == other.locallab.threshold;
        locallab.chromacbdl = locallab.chromacbdl && p.locallab.chromacbdl == other.locallab.chromacbdl;
        locallab.pastels = locallab.pastels && p.locallab.pastels == other.locallab.pastels;
        locallab.saturated = locallab.saturated && p.locallab.saturated == other.locallab.saturated;
        locallab.psthreshold = locallab.psthreshold && p.locallab.psthreshold == other.locallab.psthreshold;
        locallab.protectskins = locallab.protectskins && p.locallab.protectskins == other.locallab.protectskins;
        locallab.avoidcolorshift = locallab.avoidcolorshift && p.locallab.avoidcolorshift == other.locallab.avoidcolorshift;
        locallab.pastsattog = locallab.pastsattog && p.locallab.pastsattog == other.locallab.pastsattog;
        locallab.skintonescurve = locallab.skintonescurve && p.locallab.skintonescurve == other.locallab.skintonescurve;
        locallab.sensiv = locallab.sensiv && p.locallab.sensiv == other.locallab.sensiv;

        pcvignette.enabled = pcvignette.enabled && p.pcvignette.enabled == other.pcvignette.enabled;
        pcvignette.strength = pcvignette.strength && p.pcvignette.strength == other.pcvignette.strength;
        pcvignette.feather = pcvignette.feather && p.pcvignette.feather == other.pcvignette.feather;
        pcvignette.roundness = pcvignette.roundness && p.pcvignette.roundness == other.pcvignette.roundness;
        cacorrection.red = cacorrection.red && p.cacorrection.red == other.cacorrection.red;
        cacorrection.blue = cacorrection.blue && p.cacorrection.blue == other.cacorrection.blue;
        vignetting.amount = vignetting.amount && p.vignetting.amount == other.vignetting.amount;
        vignetting.radius = vignetting.radius && p.vignetting.radius == other.vignetting.radius;
        vignetting.strength = vignetting.strength && p.vignetting.strength == other.vignetting.strength;
        vignetting.centerX = vignetting.centerX && p.vignetting.centerX == other.vignetting.centerX;
        vignetting.centerY = vignetting.centerY && p.vignetting.centerY == other.vignetting.centerY;
        chmixer.red[0] = chmixer.red[0] && p.chmixer.red[0] == other.chmixer.red[0];
        chmixer.red[1] = chmixer.red[1] && p.chmixer.red[1] == other.chmixer.red[1];
        chmixer.red[2] = chmixer.red[2] && p.chmixer.red[2] == other.chmixer.red[2];
        chmixer.green[0] = chmixer.green[0] && p.chmixer.green[0] == other.chmixer.green[0];
        chmixer.green[1] = chmixer.green[1] && p.chmixer.green[1] == other.chmixer.green[1];
        chmixer.green[2] = chmixer.green[2] && p.chmixer.green[2] == other.chmixer.green[2];
        chmixer.blue[0] = chmixer.blue[0] && p.chmixer.blue[0] == other.chmixer.blue[0];
        chmixer.blue[1] = chmixer.blue[1] && p.chmixer.blue[1] == other.chmixer.blue[1];
        chmixer.blue[2] = chmixer.blue[2] && p.chmixer.blue[2] == other.chmixer.blue[2];
        blackwhite.enabledcc = blackwhite.enabledcc && p.blackwhite.enabledcc == other.blackwhite.enabledcc;
        blackwhite.enabled = blackwhite.enabled && p.blackwhite.enabled == other.blackwhite.enabled;
        blackwhite.mixerRed = blackwhite.mixerRed && p.blackwhite.mixerRed == other.blackwhite.mixerRed;
        blackwhite.mixerOrange = blackwhite.mixerOrange && p.blackwhite.mixerOrange == other.blackwhite.mixerOrange;
        blackwhite.mixerYellow = blackwhite.mixerYellow && p.blackwhite.mixerYellow == other.blackwhite.mixerYellow;
        blackwhite.mixerGreen = blackwhite.mixerGreen && p.blackwhite.mixerGreen == other.blackwhite.mixerGreen;
        blackwhite.mixerCyan = blackwhite.mixerCyan && p.blackwhite.mixerCyan == other.blackwhite.mixerCyan;
        blackwhite.mixerBlue = blackwhite.mixerBlue && p.blackwhite.mixerBlue == other.blackwhite.mixerBlue;
        blackwhite.mixerMagenta = blackwhite.mixerMagenta && p.blackwhite.mixerMagenta == other.blackwhite.mixerMagenta;
        blackwhite.mixerPurple = blackwhite.mixerPurple && p.blackwhite.mixerPurple == other.blackwhite.mixerPurple;
        blackwhite.gammaRed = blackwhite.gammaRed && p.blackwhite.gammaRed == other.blackwhite.gammaRed;
        blackwhite.gammaGreen = blackwhite.gammaGreen && p.blackwhite.gammaGreen == other.blackwhite.gammaGreen;
        blackwhite.gammaBlue = blackwhite.gammaBlue && p.blackwhite.gammaBlue == other.blackwhite.gammaBlue;
        blackwhite.filter = blackwhite.filter && p.blackwhite.filter == other.blackwhite.filter;
        blackwhite.setting = blackwhite.setting && p.blackwhite.setting == other.blackwhite.setting;
        blackwhite.luminanceCurve = blackwhite.luminanceCurve && p.blackwhite.luminanceCurve == other.blackwhite.luminanceCurve;
        blackwhite.method = blackwhite.method && p.blackwhite.method == other.blackwhite.method;
        blackwhite.beforeCurve = blackwhite.beforeCurve && p.blackwhite.beforeCurve == other.blackwhite.beforeCurve;
        blackwhite.beforeCurveMode = blackwhite.beforeCurveMode && p.blackwhite.beforeCurveMode == other.blackwhite.beforeCurveMode;
        blackwhite.afterCurve = blackwhite.afterCurve && p.blackwhite.afterCurve == other.blackwhite.afterCurve;
        blackwhite.afterCurveMode = blackwhite.afterCurveMode && p.blackwhite.afterCurveMode == other.blackwhite.afterCurveMode;
        blackwhite.autoc = blackwhite.autoc && p.blackwhite.autoc == other.blackwhite.autoc;
        blackwhite.algo = blackwhite.algo && p.blackwhite.algo == other.blackwhite.algo;
        resize.scale = resize.scale && p.resize.scale == other.resize.scale;
        resize.appliesTo = resize.appliesTo && p.resize.appliesTo == other.resize.appliesTo;
        resize.method = resize.method && p.resize.method == other.resize.method;
        resize.dataspec = resize.dataspec && p.resize.dataspec == other.resize.dataspec;
        resize.width = resize.width && p.resize.width == other.resize.width;
        resize.height = resize.height && p.resize.height == other.resize.height;
        resize.enabled = resize.enabled && p.resize.enabled == other.resize.enabled;
        icm.input = icm.input && p.icm.input == other.icm.input;
        icm.toneCurve = icm.toneCurve && p.icm.toneCurve == other.icm.toneCurve;
        icm.applyLookTable = icm.applyLookTable && p.icm.applyLookTable == other.icm.applyLookTable;
        icm.applyBaselineExposureOffset = icm.applyBaselineExposureOffset && p.icm.applyBaselineExposureOffset == other.icm.applyBaselineExposureOffset;
        icm.applyHueSatMap = icm.applyHueSatMap && p.icm.applyHueSatMap == other.icm.applyHueSatMap;
        icm.dcpIlluminant = icm.dcpIlluminant && p.icm.dcpIlluminant == other.icm.dcpIlluminant;
        icm.working = icm.working && p.icm.working == other.icm.working;
        icm.output = icm.output && p.icm.output == other.icm.output;
        icm.outputIntent = icm.outputIntent && p.icm.outputIntent == other.icm.outputIntent;
        icm.outputBPC = icm.outputBPC && p.icm.outputBPC == other.icm.outputBPC ;
        icm.gamma = icm.gamma && p.icm.gamma == other.icm.gamma;
        icm.freegamma = icm.freegamma && p.icm.freegamma == other.icm.freegamma;
        icm.gampos = icm.gampos && p.icm.gampos == other.icm.gampos;
        icm.slpos = icm.slpos && p.icm.slpos == other.icm.slpos;
        raw.bayersensor.method = raw.bayersensor.method && p.raw.bayersensor.method == other.raw.bayersensor.method;
        raw.bayersensor.imageNum = raw.bayersensor.imageNum && p.raw.bayersensor.imageNum == other.raw.bayersensor.imageNum;
        raw.bayersensor.ccSteps = raw.bayersensor.ccSteps && p.raw.bayersensor.ccSteps == other.raw.bayersensor.ccSteps;
        raw.bayersensor.exBlack0 = raw.bayersensor.exBlack0 && p.raw.bayersensor.black0 == other.raw.bayersensor.black0;
        raw.bayersensor.exBlack1 = raw.bayersensor.exBlack1 && p.raw.bayersensor.black1 == other.raw.bayersensor.black1;
        raw.bayersensor.exBlack2 = raw.bayersensor.exBlack2 && p.raw.bayersensor.black2 == other.raw.bayersensor.black2;
        raw.bayersensor.exBlack3 = raw.bayersensor.exBlack3 && p.raw.bayersensor.black3 == other.raw.bayersensor.black3;
        raw.bayersensor.exTwoGreen = raw.bayersensor.exTwoGreen && p.raw.bayersensor.twogreen == other.raw.bayersensor.twogreen;
        raw.bayersensor.dcbIterations = raw.bayersensor.dcbIterations && p.raw.bayersensor.dcb_iterations == other.raw.bayersensor.dcb_iterations;
        raw.bayersensor.dcbEnhance = raw.bayersensor.dcbEnhance && p.raw.bayersensor.dcb_enhance == other.raw.bayersensor.dcb_enhance;
        //raw.bayersensor.allEnhance = raw.bayersensor.allEnhance && p.raw.bayersensor.all_enhance == other.raw.bayersensor.all_enhance;
        raw.bayersensor.lmmseIterations = raw.bayersensor.lmmseIterations && p.raw.bayersensor.lmmse_iterations == other.raw.bayersensor.lmmse_iterations;
        raw.bayersensor.pixelShiftMotion = raw.bayersensor.pixelShiftMotion && p.raw.bayersensor.pixelShiftMotion == other.raw.bayersensor.pixelShiftMotion;
        raw.bayersensor.pixelShiftMotionCorrection = raw.bayersensor.pixelShiftMotionCorrection && p.raw.bayersensor.pixelShiftMotionCorrection == other.raw.bayersensor.pixelShiftMotionCorrection;
        raw.bayersensor.pixelShiftMotionCorrectionMethod = raw.bayersensor.pixelShiftMotionCorrectionMethod && p.raw.bayersensor.pixelShiftMotionCorrectionMethod == other.raw.bayersensor.pixelShiftMotionCorrectionMethod;
        raw.bayersensor.pixelShiftStddevFactorGreen = raw.bayersensor.pixelShiftStddevFactorGreen && p.raw.bayersensor.pixelShiftStddevFactorGreen == other.raw.bayersensor.pixelShiftStddevFactorGreen;
        raw.bayersensor.pixelShiftStddevFactorRed = raw.bayersensor.pixelShiftStddevFactorRed && p.raw.bayersensor.pixelShiftStddevFactorRed == other.raw.bayersensor.pixelShiftStddevFactorRed;
        raw.bayersensor.pixelShiftStddevFactorBlue = raw.bayersensor.pixelShiftStddevFactorBlue && p.raw.bayersensor.pixelShiftStddevFactorBlue == other.raw.bayersensor.pixelShiftStddevFactorBlue;
        raw.bayersensor.pixelShiftEperIso = raw.bayersensor.pixelShiftEperIso && p.raw.bayersensor.pixelShiftEperIso == other.raw.bayersensor.pixelShiftEperIso;
        raw.bayersensor.pixelShiftNreadIso = raw.bayersensor.pixelShiftNreadIso && p.raw.bayersensor.pixelShiftNreadIso == other.raw.bayersensor.pixelShiftNreadIso;
        raw.bayersensor.pixelShiftPrnu = raw.bayersensor.pixelShiftPrnu && p.raw.bayersensor.pixelShiftPrnu == other.raw.bayersensor.pixelShiftPrnu;
        raw.bayersensor.pixelShiftSigma = raw.bayersensor.pixelShiftSigma && p.raw.bayersensor.pixelShiftSigma == other.raw.bayersensor.pixelShiftSigma;
        raw.bayersensor.pixelShiftSum = raw.bayersensor.pixelShiftSum && p.raw.bayersensor.pixelShiftSum == other.raw.bayersensor.pixelShiftSum;
        raw.bayersensor.pixelShiftRedBlueWeight = raw.bayersensor.pixelShiftRedBlueWeight && p.raw.bayersensor.pixelShiftRedBlueWeight == other.raw.bayersensor.pixelShiftRedBlueWeight;
        raw.bayersensor.pixelShiftShowMotion = raw.bayersensor.pixelShiftShowMotion && p.raw.bayersensor.pixelShiftShowMotion == other.raw.bayersensor.pixelShiftShowMotion;
        raw.bayersensor.pixelShiftShowMotionMaskOnly = raw.bayersensor.pixelShiftShowMotionMaskOnly && p.raw.bayersensor.pixelShiftShowMotionMaskOnly == other.raw.bayersensor.pixelShiftShowMotionMaskOnly;
        raw.bayersensor.pixelShiftAutomatic = raw.bayersensor.pixelShiftAutomatic && p.raw.bayersensor.pixelShiftAutomatic == other.raw.bayersensor.pixelShiftAutomatic;
        raw.bayersensor.pixelShiftNonGreenHorizontal = raw.bayersensor.pixelShiftNonGreenHorizontal && p.raw.bayersensor.pixelShiftNonGreenHorizontal == other.raw.bayersensor.pixelShiftNonGreenHorizontal;
        raw.bayersensor.pixelShiftNonGreenVertical = raw.bayersensor.pixelShiftNonGreenVertical && p.raw.bayersensor.pixelShiftNonGreenVertical == other.raw.bayersensor.pixelShiftNonGreenVertical;
        raw.bayersensor.pixelShiftHoleFill = raw.bayersensor.pixelShiftHoleFill && p.raw.bayersensor.pixelShiftHoleFill == other.raw.bayersensor.pixelShiftHoleFill;
        raw.bayersensor.pixelShiftMedian = raw.bayersensor.pixelShiftMedian && p.raw.bayersensor.pixelShiftMedian == other.raw.bayersensor.pixelShiftMedian;
        raw.bayersensor.pixelShiftMedian3 = raw.bayersensor.pixelShiftMedian3 && p.raw.bayersensor.pixelShiftMedian3 == other.raw.bayersensor.pixelShiftMedian3;
        raw.bayersensor.pixelShiftGreen = raw.bayersensor.pixelShiftGreen && p.raw.bayersensor.pixelShiftGreen == other.raw.bayersensor.pixelShiftGreen;
        raw.bayersensor.pixelShiftBlur = raw.bayersensor.pixelShiftBlur && p.raw.bayersensor.pixelShiftBlur == other.raw.bayersensor.pixelShiftBlur;
        raw.bayersensor.pixelShiftSmooth = raw.bayersensor.pixelShiftSmooth && p.raw.bayersensor.pixelShiftSmoothFactor == other.raw.bayersensor.pixelShiftSmoothFactor;
        raw.bayersensor.pixelShiftExp0 = raw.bayersensor.pixelShiftExp0 && p.raw.bayersensor.pixelShiftExp0 == other.raw.bayersensor.pixelShiftExp0;
        raw.bayersensor.pixelShiftLmmse = raw.bayersensor.pixelShiftLmmse && p.raw.bayersensor.pixelShiftLmmse == other.raw.bayersensor.pixelShiftLmmse;
        raw.bayersensor.pixelShiftEqualBright = raw.bayersensor.pixelShiftEqualBright && p.raw.bayersensor.pixelShiftEqualBright == other.raw.bayersensor.pixelShiftEqualBright;
        raw.bayersensor.pixelShiftEqualBrightChannel = raw.bayersensor.pixelShiftEqualBrightChannel && p.raw.bayersensor.pixelShiftEqualBrightChannel == other.raw.bayersensor.pixelShiftEqualBrightChannel;
        raw.bayersensor.pixelShiftNonGreenCross = raw.bayersensor.pixelShiftNonGreenCross && p.raw.bayersensor.pixelShiftNonGreenCross == other.raw.bayersensor.pixelShiftNonGreenCross;
        raw.bayersensor.pixelShiftNonGreenCross2 = raw.bayersensor.pixelShiftNonGreenCross2 && p.raw.bayersensor.pixelShiftNonGreenCross2 == other.raw.bayersensor.pixelShiftNonGreenCross2;
        raw.bayersensor.pixelShiftNonGreenAmaze = raw.bayersensor.pixelShiftNonGreenAmaze && p.raw.bayersensor.pixelShiftNonGreenAmaze == other.raw.bayersensor.pixelShiftNonGreenAmaze;
        raw.bayersensor.greenEq = raw.bayersensor.greenEq && p.raw.bayersensor.greenthresh == other.raw.bayersensor.greenthresh;
        raw.bayersensor.linenoise = raw.bayersensor.linenoise && p.raw.bayersensor.linenoise == other.raw.bayersensor.linenoise;
        raw.xtranssensor.method = raw.xtranssensor.method && p.raw.xtranssensor.method == other.raw.xtranssensor.method;
        raw.xtranssensor.ccSteps = raw.xtranssensor.ccSteps && p.raw.xtranssensor.ccSteps == other.raw.xtranssensor.ccSteps;
        raw.xtranssensor.exBlackRed = raw.xtranssensor.exBlackRed && p.raw.xtranssensor.blackred == other.raw.xtranssensor.blackred;
        raw.xtranssensor.exBlackGreen = raw.xtranssensor.exBlackGreen && p.raw.xtranssensor.blackgreen == other.raw.xtranssensor.blackgreen;
        raw.xtranssensor.exBlackBlue = raw.xtranssensor.exBlackBlue && p.raw.xtranssensor.blackblue == other.raw.xtranssensor.blackblue;
        raw.caCorrection = raw.caCorrection && p.raw.ca_autocorrect == other.raw.ca_autocorrect;
        raw.caRed = raw.caRed && p.raw.cared == other.raw.cared;
        raw.caBlue = raw.caBlue && p.raw.cablue == other.raw.cablue;
        raw.hotPixelFilter = raw.hotPixelFilter && p.raw.hotPixelFilter == other.raw.hotPixelFilter;
        raw.deadPixelFilter = raw.deadPixelFilter && p.raw.deadPixelFilter == other.raw.deadPixelFilter;
        raw.hotDeadPixelThresh = raw.hotDeadPixelThresh && p.raw.hotdeadpix_thresh == other.raw.hotdeadpix_thresh;
        raw.darkFrame = raw.darkFrame && p.raw.dark_frame == other.raw.dark_frame;
        raw.dfAuto = raw.dfAuto && p.raw.df_autoselect == other.raw.df_autoselect;
        raw.ff_file = raw.ff_file && p.raw.ff_file == other.raw.ff_file;
        raw.ff_AutoSelect = raw.ff_AutoSelect && p.raw.ff_AutoSelect == other.raw.ff_AutoSelect;
        raw.ff_BlurRadius = raw.ff_BlurRadius && p.raw.ff_BlurRadius == other.raw.ff_BlurRadius;
        raw.ff_BlurType = raw.ff_BlurType && p.raw.ff_BlurType == other.raw.ff_BlurType;
        raw.ff_AutoClipControl = raw.ff_AutoClipControl && p.raw.ff_AutoClipControl == other.raw.ff_AutoClipControl;
        raw.ff_clipControl = raw.ff_clipControl && p.raw.ff_clipControl == other.raw.ff_clipControl;
        raw.exPos = raw.exPos && p.raw.expos == other.raw.expos;
        raw.exPreser = raw.exPreser && p.raw.preser == other.raw.preser;
        wavelet.enabled = wavelet.enabled && p.wavelet.enabled == other.wavelet.enabled;
        wavelet.strength = wavelet.strength && p.wavelet.strength == other.wavelet.strength;
        wavelet.balance = wavelet.balance && p.wavelet.balance == other.wavelet.balance;
        wavelet.iter = wavelet.iter && p.wavelet.iter == other.wavelet.iter;
        wavelet.median = wavelet.median && p.wavelet.median == other.wavelet.median;
        wavelet.medianlev = wavelet.medianlev && p.wavelet.medianlev == other.wavelet.medianlev;
        wavelet.linkedg = wavelet.linkedg && p.wavelet.linkedg == other.wavelet.linkedg;
        wavelet.cbenab = wavelet.cbenab && p.wavelet.cbenab == other.wavelet.cbenab;
        wavelet.greenmed = wavelet.greenmed && p.wavelet.greenmed == other.wavelet.greenmed;
        wavelet.bluemed = wavelet.bluemed && p.wavelet.bluemed == other.wavelet.bluemed;
        wavelet.greenhigh = wavelet.greenhigh && p.wavelet.greenhigh == other.wavelet.greenhigh;
        wavelet.bluehigh = wavelet.bluehigh && p.wavelet.bluehigh == other.wavelet.bluehigh;
        wavelet.greenlow = wavelet.greenlow && p.wavelet.greenlow == other.wavelet.greenlow;
        wavelet.bluelow = wavelet.bluelow && p.wavelet.bluelow == other.wavelet.bluelow;
        wavelet.lipst = wavelet.lipst && p.wavelet.lipst == other.wavelet.lipst;
        wavelet.Medgreinf = wavelet.Medgreinf && p.wavelet.Medgreinf == other.wavelet.Medgreinf;
        wavelet.avoid = wavelet.avoid && p.wavelet.avoid == other.wavelet.avoid;
        wavelet.tmr = wavelet.tmr && p.wavelet.tmr == other.wavelet.tmr;
        wavelet.Lmethod = wavelet.Lmethod && p.wavelet.Lmethod == other.wavelet.Lmethod;
        wavelet.CLmethod = wavelet.CLmethod && p.wavelet.CLmethod == other.wavelet.CLmethod;
        wavelet.Backmethod = wavelet.Backmethod && p.wavelet.Backmethod == other.wavelet.Backmethod;
        wavelet.Tilesmethod = wavelet.Tilesmethod && p.wavelet.Tilesmethod == other.wavelet.Tilesmethod;
        wavelet.daubcoeffmethod = wavelet.daubcoeffmethod && p.wavelet.daubcoeffmethod == other.wavelet.daubcoeffmethod;
        wavelet.CHmethod = wavelet.CHmethod && p.wavelet.CHmethod == other.wavelet.CHmethod;
        wavelet.CHSLmethod = wavelet.CHSLmethod && p.wavelet.CHSLmethod == other.wavelet.CHSLmethod;
        wavelet.EDmethod = wavelet.EDmethod && p.wavelet.EDmethod == other.wavelet.EDmethod;
        wavelet.NPmethod = wavelet.NPmethod && p.wavelet.NPmethod == other.wavelet.NPmethod;
        wavelet.BAmethod = wavelet.BAmethod && p.wavelet.BAmethod == other.wavelet.BAmethod;
        wavelet.TMmethod = wavelet.TMmethod && p.wavelet.TMmethod == other.wavelet.TMmethod;
        wavelet.HSmethod = wavelet.HSmethod && p.wavelet.HSmethod == other.wavelet.HSmethod;
        wavelet.Dirmethod = wavelet.Dirmethod && p.wavelet.Dirmethod == other.wavelet.Dirmethod;
        wavelet.rescon = wavelet.rescon && p.wavelet.rescon == other.wavelet.rescon;
        wavelet.resconH = wavelet.resconH && p.wavelet.resconH == other.wavelet.resconH;
        wavelet.reschro = wavelet.reschro && p.wavelet.reschro == other.wavelet.reschro;
        wavelet.tmrs = wavelet.tmrs && p.wavelet.tmrs == other.wavelet.tmrs;
        wavelet.gamma = wavelet.gamma && p.wavelet.gamma == other.wavelet.gamma;
        wavelet.sup = wavelet.sup && p.wavelet.sup == other.wavelet.sup;
        wavelet.sky = wavelet.sky && p.wavelet.sky == other.wavelet.sky;
        wavelet.threshold = wavelet.threshold && p.wavelet.threshold == other.wavelet.threshold;
        wavelet.threshold2 = wavelet.threshold2 && p.wavelet.threshold2 == other.wavelet.threshold2;
        wavelet.edgedetect = wavelet.edgedetect && p.wavelet.edgedetect == other.wavelet.edgedetect;
        wavelet.edgedetectthr = wavelet.edgedetectthr && p.wavelet.edgedetectthr == other.wavelet.edgedetectthr;
        wavelet.edgedetectthr2 = wavelet.edgedetectthr2 && p.wavelet.edgedetectthr2 == other.wavelet.edgedetectthr2;
        wavelet.edgesensi = wavelet.edgesensi && p.wavelet.edgesensi == other.wavelet.edgesensi;
        wavelet.edgeampli = wavelet.edgeampli && p.wavelet.edgeampli == other.wavelet.edgeampli;
        wavelet.thres = wavelet.thres && p.wavelet.thres == other.wavelet.thres;
        wavelet.chroma = wavelet.chroma && p.wavelet.chroma == other.wavelet.chroma;
        wavelet.chro = wavelet.chro && p.wavelet.chro == other.wavelet.chro;
        wavelet.contrast = wavelet.contrast && p.wavelet.contrast == other.wavelet.contrast;
        wavelet.edgrad = wavelet.edgrad && p.wavelet.edgrad == other.wavelet.edgrad;
        wavelet.edgval = wavelet.edgval && p.wavelet.edgval == other.wavelet.edgval;
        wavelet.edgthresh = wavelet.edgthresh && p.wavelet.edgthresh == other.wavelet.edgthresh;
        wavelet.thr = wavelet.thr && p.wavelet.thr == other.wavelet.thr;
        wavelet.thrH = wavelet.thrH && p.wavelet.thrH == other.wavelet.thrH;
        wavelet.hueskin = wavelet.hueskin && p.wavelet.hueskin == other.wavelet.hueskin;
        wavelet.hueskin2 = wavelet.hueskin2 && p.wavelet.hueskin2 == other.wavelet.hueskin2;
        wavelet.hllev = wavelet.hllev && p.wavelet.hllev == other.wavelet.hllev;
        wavelet.bllev = wavelet.bllev && p.wavelet.bllev == other.wavelet.bllev;
        wavelet.edgcont = wavelet.edgcont && p.wavelet.edgcont == other.wavelet.edgcont;
        wavelet.level0noise = wavelet.level0noise && p.wavelet.level0noise == other.wavelet.level0noise;
        wavelet.level1noise = wavelet.level1noise && p.wavelet.level1noise == other.wavelet.level1noise;
        wavelet.level2noise = wavelet.level2noise && p.wavelet.level2noise == other.wavelet.level2noise;
        wavelet.level3noise = wavelet.level3noise && p.wavelet.level3noise == other.wavelet.level3noise;
        wavelet.pastlev = wavelet.pastlev && p.wavelet.pastlev == other.wavelet.pastlev;
        wavelet.satlev = wavelet.satlev && p.wavelet.satlev == other.wavelet.satlev;
        wavelet.ccwcurve = wavelet.ccwcurve && p.wavelet.ccwcurve == other.wavelet.ccwcurve;
        wavelet.opacityCurveRG = wavelet.opacityCurveRG && p.wavelet.opacityCurveRG == other.wavelet.opacityCurveRG;
        wavelet.opacityCurveBY = wavelet.opacityCurveBY && p.wavelet.opacityCurveBY == other.wavelet.opacityCurveBY;
        wavelet.opacityCurveW = wavelet.opacityCurveW && p.wavelet.opacityCurveW == other.wavelet.opacityCurveW;
        wavelet.opacityCurveWL = wavelet.opacityCurveWL && p.wavelet.opacityCurveWL == other.wavelet.opacityCurveWL;
        wavelet.wavclCurve = wavelet.wavclCurve && p.wavelet.wavclCurve == other.wavelet.wavclCurve;
        wavelet.hhcurve = wavelet.hhcurve && p.wavelet.hhcurve == other.wavelet.hhcurve;
        wavelet.Chcurve = wavelet.Chcurve && p.wavelet.Chcurve == other.wavelet.Chcurve;
        wavelet.skinprotect = wavelet.skinprotect && p.wavelet.skinprotect == other.wavelet.skinprotect;
        //    wavelet.enacont = wavelet.enacont && p.wavelet.enacont == other.wavelet.enacont;
        wavelet.expcontrast = wavelet.expcontrast && p.wavelet.expcontrast == other.wavelet.expcontrast;
        wavelet.expchroma = wavelet.expchroma && p.wavelet.expchroma == other.wavelet.expchroma;
        wavelet.expedge = wavelet.expedge && p.wavelet.expedge == other.wavelet.expedge;
        wavelet.expresid = wavelet.expresid && p.wavelet.expresid == other.wavelet.expresid;
        wavelet.expfinal = wavelet.expfinal && p.wavelet.expfinal == other.wavelet.expfinal;
        wavelet.exptoning = wavelet.exptoning && p.wavelet.exptoning == other.wavelet.exptoning;
        wavelet.expnoise = wavelet.expnoise && p.wavelet.expnoise == other.wavelet.expnoise;

        for (int i = 0; i < 9; i++) {
            wavelet.c[i] = wavelet.c[i] && p.wavelet.c[i] == other.wavelet.c[i];
        }

        for (int i = 0; i < 9; i++) {
            wavelet.ch[i] = wavelet.ch[i] && p.wavelet.ch[i] == other.wavelet.ch[i];
        }

        dirpyrequalizer.enabled = dirpyrequalizer.enabled && p.dirpyrequalizer.enabled == other.dirpyrequalizer.enabled;
        dirpyrequalizer.gamutlab = dirpyrequalizer.gamutlab && p.dirpyrequalizer.gamutlab == other.dirpyrequalizer.gamutlab;
        dirpyrequalizer.cbdlMethod = dirpyrequalizer.cbdlMethod && p.dirpyrequalizer.cbdlMethod == other.dirpyrequalizer.cbdlMethod;

        for (int i = 0; i < 6; i++) {
            dirpyrequalizer.mult[i] = dirpyrequalizer.mult[i] && p.dirpyrequalizer.mult[i] == other.dirpyrequalizer.mult[i];
        }

        dirpyrequalizer.threshold = dirpyrequalizer.threshold && p.dirpyrequalizer.threshold == other.dirpyrequalizer.threshold;
        dirpyrequalizer.skinprotect = dirpyrequalizer.skinprotect && p.dirpyrequalizer.skinprotect == other.dirpyrequalizer.skinprotect;
        //    dirpyrequalizer.algo = dirpyrequalizer.algo && p.dirpyrequalizer.algo == other.dirpyrequalizer.algo;
        dirpyrequalizer.hueskin = dirpyrequalizer.hueskin && p.dirpyrequalizer.hueskin == other.dirpyrequalizer.hueskin;
        hsvequalizer.hcurve = hsvequalizer.hcurve && p.hsvequalizer.hcurve == other.hsvequalizer.hcurve;
        hsvequalizer.scurve = hsvequalizer.scurve && p.hsvequalizer.scurve == other.hsvequalizer.scurve;
        hsvequalizer.vcurve = hsvequalizer.vcurve && p.hsvequalizer.vcurve == other.hsvequalizer.vcurve;
        filmSimulation.enabled = filmSimulation.enabled && p.filmSimulation.enabled == other.filmSimulation.enabled;
        filmSimulation.clutFilename = filmSimulation.clutFilename && p.filmSimulation.clutFilename == other.filmSimulation.clutFilename;
        filmSimulation.strength = filmSimulation.strength && p.filmSimulation.strength == other.filmSimulation.strength;

//      How the hell can we handle that???
//      exif = exif && p.exif==other.exif
//      iptc = other.iptc;
    }
}

void ParamsEdited::combine (rtengine::procparams::ProcParams& toEdit, const rtengine::procparams::ProcParams& mods, bool forceSet)
{

    bool dontforceSet = !forceSet;

    if (toneCurve.curve) {
        toEdit.toneCurve.curve      = mods.toneCurve.curve;
    }

    if (toneCurve.curve2) {
        toEdit.toneCurve.curve2     = mods.toneCurve.curve2;
    }

    if (toneCurve.curveMode) {
        toEdit.toneCurve.curveMode  = mods.toneCurve.curveMode;
    }

    if (toneCurve.curveMode2) {
        toEdit.toneCurve.curveMode2 = mods.toneCurve.curveMode2;
    }

    if (toneCurve.brightness) {
        toEdit.toneCurve.brightness = dontforceSet && options.baBehav[ADDSET_TC_BRIGHTNESS] ? toEdit.toneCurve.brightness + mods.toneCurve.brightness : mods.toneCurve.brightness;
    }

    if (toneCurve.black) {
        toEdit.toneCurve.black        = dontforceSet && options.baBehav[ADDSET_TC_BLACKLEVEL] ? toEdit.toneCurve.black + mods.toneCurve.black : mods.toneCurve.black;
    }

    if (toneCurve.contrast) {
        toEdit.toneCurve.contrast     = dontforceSet && options.baBehav[ADDSET_TC_CONTRAST] ? toEdit.toneCurve.contrast + mods.toneCurve.contrast : mods.toneCurve.contrast;
    }

    if (toneCurve.saturation) {
        toEdit.toneCurve.saturation = dontforceSet && options.baBehav[ADDSET_TC_SATURATION] ? toEdit.toneCurve.saturation + mods.toneCurve.saturation : mods.toneCurve.saturation;
    }

    if (toneCurve.shcompr) {
        toEdit.toneCurve.shcompr  = dontforceSet && options.baBehav[ADDSET_TC_SHCOMP] ? toEdit.toneCurve.shcompr + mods.toneCurve.shcompr : mods.toneCurve.shcompr;
    }

    if (toneCurve.autoexp) {
        toEdit.toneCurve.autoexp  = mods.toneCurve.autoexp;
    }

    if (toneCurve.clip) {
        toEdit.toneCurve.clip         = mods.toneCurve.clip;
    }

    if (toneCurve.expcomp) {
        toEdit.toneCurve.expcomp  = dontforceSet && options.baBehav[ADDSET_TC_EXPCOMP] ? toEdit.toneCurve.expcomp + mods.toneCurve.expcomp : mods.toneCurve.expcomp;
    }

    if (toneCurve.hlcompr) {
        toEdit.toneCurve.hlcompr  = dontforceSet && options.baBehav[ADDSET_TC_HLCOMPAMOUNT] ? toEdit.toneCurve.hlcompr + mods.toneCurve.hlcompr : mods.toneCurve.hlcompr;
    }

    if (toneCurve.hlcomprthresh) {
        toEdit.toneCurve.hlcomprthresh   = dontforceSet && options.baBehav[ADDSET_TC_HLCOMPTHRESH] ? toEdit.toneCurve.hlcomprthresh + mods.toneCurve.hlcomprthresh : mods.toneCurve.hlcomprthresh;
    }

    if (toneCurve.hrenabled) {
        toEdit.toneCurve.hrenabled    = mods.toneCurve.hrenabled;
    }

    if (toneCurve.method) {
        toEdit.toneCurve.method   = mods.toneCurve.method;
    }

    if (retinex.enabled) {
        toEdit.retinex.enabled        = mods.retinex.enabled;
    }

    if (retinex.cdcurve) {
        toEdit.retinex.cdcurve    = mods.retinex.cdcurve;
    }

    if (retinex.mapcurve) {
        toEdit.retinex.mapcurve    = mods.retinex.mapcurve;
    }

    if (retinex.cdHcurve) {
        toEdit.retinex.cdHcurve    = mods.retinex.cdHcurve;
    }

    if (retinex.lhcurve) {
        toEdit.retinex.lhcurve    = mods.retinex.lhcurve;
    }

    if (retinex.transmissionCurve) {
        toEdit.retinex.transmissionCurve    = mods.retinex.transmissionCurve;
    }

    if (retinex.gaintransmissionCurve) {
        toEdit.retinex.gaintransmissionCurve    = mods.retinex.gaintransmissionCurve;
    }

    if (retinex.retinexMethod) {
        toEdit.retinex.retinexMethod    = mods.retinex.retinexMethod;
    }

    if (retinex.mapMethod) {
        toEdit.retinex.mapMethod    = mods.retinex.mapMethod;
    }

    if (retinex.viewMethod) {
        toEdit.retinex.viewMethod    = mods.retinex.viewMethod;
    }

    if (retinex.retinexcolorspace) {
        toEdit.retinex.retinexcolorspace    = mods.retinex.retinexcolorspace;
    }

    if (retinex.gammaretinex) {
        toEdit.retinex.gammaretinex    = mods.retinex.gammaretinex;
    }

    if (retinex.gam) {
        toEdit.retinex.gam   = dontforceSet && options.baBehav[ADDSET_RETI_GAM] ? toEdit.retinex.gam + mods.retinex.gam : mods.retinex.gam;
    }

    if (retinex.slope) {
        toEdit.retinex.slope   = dontforceSet && options.baBehav[ADDSET_RETI_SLO] ? toEdit.retinex.slope + mods.retinex.slope : mods.retinex.slope;
    }

    if (retinex.str) {
        toEdit.retinex.str   = dontforceSet && options.baBehav[ADDSET_RETI_STR] ? toEdit.retinex.str + mods.retinex.str : mods.retinex.str;
    }

    if (retinex.scal) {
        toEdit.retinex.scal    = mods.retinex.scal;
    }

    if (retinex.iter) {
        toEdit.retinex.iter    = mods.retinex.iter;
    }

    if (retinex.grad) {
        toEdit.retinex.grad    = mods.retinex.grad;
    }

    if (retinex.grads) {
        toEdit.retinex.grads    = mods.retinex.grads;
    }

//    if (retinex.scal) {
//        toEdit.retinex.scal   = dontforceSet && options.baBehav[ADDSET_RETI_SCAL] ? toEdit.retinex.scal + mods.retinex.scal : mods.retinex.scal;
//    }

    if (retinex.medianmap) {
        toEdit.retinex.medianmap  = mods.retinex.medianmap;
    }

    if (retinex.neigh) {
        toEdit.retinex.neigh   = dontforceSet && options.baBehav[ADDSET_RETI_NEIGH] ? toEdit.retinex.neigh + mods.retinex.neigh : mods.retinex.neigh;
    }

    if (retinex.limd) {
        toEdit.retinex.limd   = dontforceSet && options.baBehav[ADDSET_RETI_LIMD] ? toEdit.retinex.limd + mods.retinex.limd : mods.retinex.limd;
    }

    if (retinex.highl) {
        toEdit.retinex.highl   = mods.retinex.highl;
    }

    if (retinex.skal) {
        toEdit.retinex.skal   = mods.retinex.skal;
    }

    if (retinex.offs) {
        toEdit.retinex.offs   = dontforceSet && options.baBehav[ADDSET_RETI_OFFS] ? toEdit.retinex.offs + mods.retinex.offs : mods.retinex.offs;
    }

    if (retinex.vart) {
        toEdit.retinex.vart   = dontforceSet && options.baBehav[ADDSET_RETI_VART] ? toEdit.retinex.vart + mods.retinex.vart : mods.retinex.vart;
    }

    if (retinex.highlights) {
        toEdit.retinex.highlights     = mods.retinex.highlights;
    }

    if (retinex.htonalwidth) {
        toEdit.retinex.htonalwidth     = mods.retinex.htonalwidth;
    }

    if (retinex.shadows) {
        toEdit.retinex.shadows     = mods.retinex.shadows;

    }

    if (retinex.stonalwidth) {
        toEdit.retinex.stonalwidth     = mods.retinex.stonalwidth;
    }

    if (retinex.radius) {
        toEdit.retinex.radius      = mods.retinex.radius;
    }


    if (labCurve.lcurve) {
        toEdit.labCurve.lcurve        = mods.labCurve.lcurve;
    }

    if (labCurve.acurve) {
        toEdit.labCurve.acurve        = mods.labCurve.acurve;
    }

    if (labCurve.bcurve) {
        toEdit.labCurve.bcurve        = mods.labCurve.bcurve;
    }

    if (labCurve.cccurve) {
        toEdit.labCurve.cccurve     = mods.labCurve.cccurve;
    }

    if (labCurve.chcurve) {
        toEdit.labCurve.chcurve     = mods.labCurve.chcurve;
    }

    if (labCurve.lhcurve) {
        toEdit.labCurve.lhcurve     = mods.labCurve.lhcurve;
    }

    if (labCurve.hhcurve) {
        toEdit.labCurve.hhcurve     = mods.labCurve.hhcurve;
    }

    if (labCurve.lccurve) {
        toEdit.labCurve.lccurve    = mods.labCurve.lccurve;
    }

    if (labCurve.clcurve) {
        toEdit.labCurve.clcurve    = mods.labCurve.clcurve;
    }

    if (labCurve.brightness) {
        toEdit.labCurve.brightness   = dontforceSet && options.baBehav[ADDSET_LC_BRIGHTNESS] ? toEdit.labCurve.brightness + mods.labCurve.brightness : mods.labCurve.brightness;
    }

    if (labCurve.contrast) {
        toEdit.labCurve.contrast     = dontforceSet && options.baBehav[ADDSET_LC_CONTRAST] ? toEdit.labCurve.contrast + mods.labCurve.contrast : mods.labCurve.contrast;
    }

    if (labCurve.chromaticity) {
        toEdit.labCurve.chromaticity = dontforceSet && options.baBehav[ADDSET_LC_CHROMATICITY] ? toEdit.labCurve.chromaticity + mods.labCurve.chromaticity : mods.labCurve.chromaticity;
    }

    if (labCurve.avoidcolorshift) {
        toEdit.labCurve.avoidcolorshift = mods.labCurve.avoidcolorshift;
    }

    if (labCurve.rstprotection) {
        toEdit.labCurve.rstprotection = mods.labCurve.rstprotection;
    }

    if (labCurve.lcredsk) {
        toEdit.labCurve.lcredsk     = mods.labCurve.lcredsk;
    }

    if (rgbCurves.lumamode) {
        toEdit.rgbCurves.lumamode   = mods.rgbCurves.lumamode;
    }

    if (rgbCurves.rcurve) {
        toEdit.rgbCurves.rcurve     = mods.rgbCurves.rcurve;
    }

    if (rgbCurves.gcurve) {
        toEdit.rgbCurves.gcurve     = mods.rgbCurves.gcurve;
    }

    if (rgbCurves.bcurve) {
        toEdit.rgbCurves.bcurve     = mods.rgbCurves.bcurve;
    }

    if (colorToning.enabled) {
        toEdit.colorToning.enabled  = mods.colorToning.enabled;
    }

    if (colorToning.twocolor) {
        toEdit.colorToning.twocolor = mods.colorToning.twocolor;
    }

    if (colorToning.opacityCurve) {
        toEdit.colorToning.opacityCurve   = mods.colorToning.opacityCurve;
    }

    if (colorToning.colorCurve) {
        toEdit.colorToning.colorCurve = mods.colorToning.colorCurve;
    }

    if (colorToning.enabled) {
        toEdit.colorToning.enabled        = mods.colorToning.enabled;
    }

    if (colorToning.opacityCurve) {
        toEdit.colorToning.opacityCurve   = mods.colorToning.opacityCurve;
    }

    if (colorToning.satprotectionthreshold) {
        toEdit.colorToning.satProtectionThreshold = dontforceSet && options.baBehav[ADDSET_COLORTONING_SATTHRESHOLD] ? toEdit.colorToning.satProtectionThreshold + mods.colorToning.satProtectionThreshold : mods.colorToning.satProtectionThreshold;
    }

    if (colorToning.autosat) {
        toEdit.colorToning.autosat        = mods.colorToning.autosat;
    }

    if (colorToning.saturatedopacity) {
        toEdit.colorToning.saturatedOpacity = dontforceSet && options.baBehav[ADDSET_COLORTONING_SATOPACITY] ? toEdit.colorToning.saturatedOpacity + mods.colorToning.saturatedOpacity : mods.colorToning.saturatedOpacity;
    }

    if (colorToning.strength) {
        toEdit.colorToning.strength       = dontforceSet && options.baBehav[ADDSET_COLORTONING_STRENGTH] ? toEdit.colorToning.strength + mods.colorToning.strength : mods.colorToning.strength;
    }

    if (colorToning.shadowsColSat) {
        toEdit.colorToning.shadowsColSat  = mods.colorToning.shadowsColSat;
    }

    if (colorToning.hlColSat) {
        toEdit.colorToning.hlColSat   = mods.colorToning.hlColSat;
    }

    if (colorToning.balance) {
        toEdit.colorToning.balance    = dontforceSet && options.baBehav[ADDSET_COLORTONING_BALANCE] ? toEdit.colorToning.balance + mods.colorToning.balance : mods.colorToning.balance;
    }

    if (colorToning.clcurve) {
        toEdit.colorToning.clcurve    = mods.colorToning.clcurve;
    }

    if (colorToning.method) {
        toEdit.colorToning.method = mods.colorToning.method;
    }

    if (colorToning.cl2curve) {
        toEdit.colorToning.cl2curve   = mods.colorToning.cl2curve;
    }

    if (colorToning.lumamode) {
        toEdit.colorToning.lumamode   = mods.colorToning.lumamode;
    }

    if (colorToning.satlow) {
        toEdit.colorToning.satlow = dontforceSet && options.baBehav[ADDSET_COLORTONING_SPLIT] ? toEdit.colorToning.satlow + mods.colorToning.satlow : mods.colorToning.satlow;
    }

    if (colorToning.sathigh) {
        toEdit.colorToning.sathigh    = dontforceSet && options.baBehav[ADDSET_COLORTONING_SPLIT] ? toEdit.colorToning.sathigh + mods.colorToning.sathigh : mods.colorToning.sathigh;
    }

    if (colorToning.redlow) {
        toEdit.colorToning.redlow = dontforceSet && options.baBehav[ADDSET_COLORTONING_SPLIT] ? toEdit.colorToning.redlow + mods.colorToning.redlow : mods.colorToning.redlow;
    }

    if (colorToning.greenlow) {
        toEdit.colorToning.greenlow   = dontforceSet && options.baBehav[ADDSET_COLORTONING_SPLIT] ? toEdit.colorToning.greenlow + mods.colorToning.greenlow : mods.colorToning.greenlow;
    }

    if (colorToning.bluelow) {
        toEdit.colorToning.bluelow    = dontforceSet && options.baBehav[ADDSET_COLORTONING_SPLIT] ? toEdit.colorToning.bluelow + mods.colorToning.bluelow : mods.colorToning.bluelow;
    }

    if (colorToning.redmed) {
        toEdit.colorToning.redmed = dontforceSet && options.baBehav[ADDSET_COLORTONING_SPLIT] ? toEdit.colorToning.redmed + mods.colorToning.redmed : mods.colorToning.redmed;
    }

    if (colorToning.greenmed) {
        toEdit.colorToning.greenmed   = dontforceSet && options.baBehav[ADDSET_COLORTONING_SPLIT] ? toEdit.colorToning.greenmed + mods.colorToning.greenmed : mods.colorToning.greenmed;
    }

    if (colorToning.bluemed) {
        toEdit.colorToning.bluemed    = dontforceSet && options.baBehav[ADDSET_COLORTONING_SPLIT] ? toEdit.colorToning.bluemed + mods.colorToning.bluemed : mods.colorToning.bluemed;
    }

    if (colorToning.redhigh) {
        toEdit.colorToning.redhigh    = dontforceSet && options.baBehav[ADDSET_COLORTONING_SPLIT] ? toEdit.colorToning.redhigh + mods.colorToning.redhigh : mods.colorToning.redhigh;
    }

    if (colorToning.greenhigh) {
        toEdit.colorToning.greenhigh = dontforceSet && options.baBehav[ADDSET_COLORTONING_SPLIT] ? toEdit.colorToning.greenhigh + mods.colorToning.greenhigh : mods.colorToning.greenhigh;
    }

    if (colorToning.bluehigh) {
        toEdit.colorToning.bluehigh   = dontforceSet && options.baBehav[ADDSET_COLORTONING_SPLIT] ? toEdit.colorToning.bluehigh + mods.colorToning.bluehigh : mods.colorToning.bluehigh;
    }

    if (sharpenEdge.enabled) {
        toEdit.sharpenEdge.enabled    = mods.sharpenEdge.enabled;
    }

    if (sharpenEdge.passes) {
        toEdit.sharpenEdge.passes = dontforceSet && options.baBehav[ADDSET_SHARPENEDGE_PASS] ? toEdit.sharpenEdge.passes + mods.sharpenEdge.passes : mods.sharpenEdge.passes;
    }

    if (sharpenEdge.amount) {
        toEdit.sharpenEdge.amount = dontforceSet && options.baBehav[ADDSET_SHARPENEDGE_AMOUNT] ? toEdit.sharpenEdge.amount + mods.sharpenEdge.amount : mods.sharpenEdge.amount;
    }

    if (sharpenEdge.threechannels) {
        toEdit.sharpenEdge.threechannels  = mods.sharpenEdge.threechannels;
    }

    if (sharpenMicro.enabled) {
        toEdit.sharpenMicro.enabled   = mods.sharpenMicro.enabled;
    }

    if (sharpenMicro.matrix) {
        toEdit.sharpenMicro.matrix    = mods.sharpenMicro.matrix;
    }

    if (sharpenMicro.amount) {
        toEdit.sharpenMicro.amount    = dontforceSet && options.baBehav[ADDSET_SHARPENMICRO_AMOUNT] ? toEdit.sharpenMicro.amount + mods.sharpenMicro.amount : mods.sharpenMicro.amount;
    }

    if (sharpenMicro.uniformity) {
        toEdit.sharpenMicro.uniformity    = dontforceSet && options.baBehav[ADDSET_SHARPENMICRO_UNIFORMITY] ? toEdit.sharpenMicro.uniformity + mods.sharpenMicro.uniformity : mods.sharpenMicro.uniformity;
    }

    if (sharpening.enabled) {
        toEdit.sharpening.enabled     = mods.sharpening.enabled;
    }

    if (sharpening.radius) {
        toEdit.sharpening.radius  = dontforceSet && options.baBehav[ADDSET_SHARP_RADIUS] ? toEdit.sharpening.radius + mods.sharpening.radius : mods.sharpening.radius;
    }

    if (sharpening.amount) {
        toEdit.sharpening.amount  = dontforceSet && options.baBehav[ADDSET_SHARP_AMOUNT] ? toEdit.sharpening.amount + mods.sharpening.amount : mods.sharpening.amount;
    }

    if (sharpening.threshold) {
        toEdit.sharpening.threshold = mods.sharpening.threshold;
    }

    if (sharpening.edgesonly) {
        toEdit.sharpening.edgesonly   = mods.sharpening.edgesonly;
    }

    if (sharpening.edges_radius) {
        toEdit.sharpening.edges_radius = dontforceSet && options.baBehav[ADDSET_SHARP_RADIUS] ? toEdit.sharpening.edges_radius + mods.sharpening.edges_radius : mods.sharpening.edges_radius;
    }

    if (sharpening.edges_tolerance) {
        toEdit.sharpening.edges_tolerance = dontforceSet && options.baBehav[ADDSET_SHARP_EDGETOL] ? toEdit.sharpening.edges_tolerance + mods.sharpening.edges_tolerance : mods.sharpening.edges_tolerance;
    }

    if (sharpening.halocontrol) {
        toEdit.sharpening.halocontrol = mods.sharpening.halocontrol;
    }

    if (sharpening.halocontrol_amount) {
        toEdit.sharpening.halocontrol_amount = dontforceSet && options.baBehav[ADDSET_SHARP_HALOCTRL] ? toEdit.sharpening.halocontrol_amount + mods.sharpening.halocontrol_amount : mods.sharpening.halocontrol_amount;
    }

    if (sharpening.method) {
        toEdit.sharpening.method      = mods.sharpening.method;
    }

    if (sharpening.deconvamount) {
        toEdit.sharpening.deconvamount  = dontforceSet && options.baBehav[ADDSET_SHARP_AMOUNT] ? toEdit.sharpening.deconvamount + mods.sharpening.deconvamount : mods.sharpening.deconvamount;
    }

    if (sharpening.deconvradius) {
        toEdit.sharpening.deconvradius  = dontforceSet && options.baBehav[ADDSET_SHARP_RADIUS] ? toEdit.sharpening.deconvradius + mods.sharpening.deconvradius : mods.sharpening.deconvradius;
    }

    if (sharpening.deconviter) {
        toEdit.sharpening.deconviter    = dontforceSet && options.baBehav[ADDSET_SHARP_ITER] ? toEdit.sharpening.deconviter + mods.sharpening.deconviter : mods.sharpening.deconviter;
    }

    if (sharpening.deconvdamping) {
        toEdit.sharpening.deconvdamping = dontforceSet && options.baBehav[ADDSET_SHARP_DAMPING] ? toEdit.sharpening.deconvdamping + mods.sharpening.deconvdamping : mods.sharpening.deconvdamping;
    }

    if (prsharpening.enabled) {
        toEdit.prsharpening.enabled   = mods.prsharpening.enabled;
    }

    if (prsharpening.radius) {
        toEdit.prsharpening.radius  = dontforceSet && options.baBehav[ADDSET_SHARP_RADIUS] ? toEdit.prsharpening.radius + mods.prsharpening.radius : mods.prsharpening.radius;
    }

    if (prsharpening.amount) {
        toEdit.prsharpening.amount    = dontforceSet && options.baBehav[ADDSET_SHARP_AMOUNT] ? toEdit.prsharpening.amount + mods.prsharpening.amount : mods.prsharpening.amount;
    }

    if (prsharpening.threshold) {
        toEdit.prsharpening.threshold = mods.prsharpening.threshold;
    }

    if (prsharpening.edgesonly) {
        toEdit.prsharpening.edgesonly     = mods.prsharpening.edgesonly;
    }

    if (prsharpening.edges_radius) {
        toEdit.prsharpening.edges_radius  = dontforceSet && options.baBehav[ADDSET_SHARP_RADIUS] ? toEdit.prsharpening.edges_radius + mods.prsharpening.edges_radius : mods.prsharpening.edges_radius;
    }

    if (prsharpening.edges_tolerance) {
        toEdit.prsharpening.edges_tolerance = dontforceSet && options.baBehav[ADDSET_SHARP_EDGETOL] ? toEdit.prsharpening.edges_tolerance + mods.prsharpening.edges_tolerance : mods.prsharpening.edges_tolerance;
    }

    if (prsharpening.halocontrol) {
        toEdit.prsharpening.halocontrol        = mods.prsharpening.halocontrol;
    }

    if (prsharpening.halocontrol_amount) {
        toEdit.prsharpening.halocontrol_amount = dontforceSet && options.baBehav[ADDSET_SHARP_HALOCTRL] ? toEdit.prsharpening.halocontrol_amount + mods.prsharpening.halocontrol_amount : mods.prsharpening.halocontrol_amount;
    }

    if (prsharpening.method) {
        toEdit.prsharpening.method        = mods.prsharpening.method;
    }

    if (prsharpening.deconvamount) {
        toEdit.prsharpening.deconvamount  = dontforceSet && options.baBehav[ADDSET_SHARP_AMOUNT] ? toEdit.prsharpening.deconvamount + mods.prsharpening.deconvamount : mods.prsharpening.deconvamount;
    }

    if (prsharpening.deconvradius) {
        toEdit.prsharpening.deconvradius  = dontforceSet && options.baBehav[ADDSET_SHARP_RADIUS] ? toEdit.prsharpening.deconvradius + mods.prsharpening.deconvradius : mods.prsharpening.deconvradius;
    }

    if (prsharpening.deconviter) {
        toEdit.prsharpening.deconviter    = dontforceSet && options.baBehav[ADDSET_SHARP_ITER] ? toEdit.prsharpening.deconviter + mods.prsharpening.deconviter : mods.prsharpening.deconviter;
    }

    if (prsharpening.deconvdamping) {
        toEdit.prsharpening.deconvdamping = dontforceSet && options.baBehav[ADDSET_SHARP_DAMPING] ? toEdit.prsharpening.deconvdamping + mods.prsharpening.deconvdamping : mods.prsharpening.deconvdamping;
    }

    if (vibrance.enabled) {
        toEdit.vibrance.enabled           = mods.vibrance.enabled;
    }

    if (vibrance.pastels) {
        toEdit.vibrance.pastels           = dontforceSet && options.baBehav[ADDSET_VIBRANCE_PASTELS] ? toEdit.vibrance.pastels + mods.vibrance.pastels : mods.vibrance.pastels;
    }

    if (vibrance.saturated) {
        toEdit.vibrance.saturated     = dontforceSet && options.baBehav[ADDSET_VIBRANCE_SATURATED] ? toEdit.vibrance.saturated + mods.vibrance.saturated : mods.vibrance.saturated;
    }

    if (vibrance.psthreshold) {
        toEdit.vibrance.psthreshold       = mods.vibrance.psthreshold;
    }

    if (vibrance.protectskins) {
        toEdit.vibrance.protectskins  = mods.vibrance.protectskins;
    }

    if (vibrance.avoidcolorshift) {
        toEdit.vibrance.avoidcolorshift   = mods.vibrance.avoidcolorshift;
    }

    if (vibrance.pastsattog) {
        toEdit.vibrance.pastsattog        = mods.vibrance.pastsattog;
    }

    if (vibrance.skintonescurve) {
        toEdit.vibrance.skintonescurve    = mods.vibrance.skintonescurve;
    }

    //if (colorBoost.amount)                    toEdit.colorBoost.amount        = dontforceSet && options.baBehav[ADDSET_CBOOST_AMOUNT] ? toEdit.colorBoost.amount + mods.colorBoost.amount : mods.colorBoost.amount;
    //if (colorBoost.avoidclip)             toEdit.colorBoost.avoidclip     = mods.colorBoost.avoidclip;
    //if (colorBoost.enable_saturationlimiter)toEdit.colorBoost.enable_saturationlimiter    = mods.colorBoost.enable_saturationlimiter;
    //if (colorBoost.saturationlimit)           toEdit.colorBoost.saturationlimit   = mods.colorBoost.saturationlimit;
    if (wb.method) {
        toEdit.wb.method  = mods.wb.method;
    }

    if (wb.equal) {
        toEdit.wb.equal   = dontforceSet && options.baBehav[ADDSET_WB_EQUAL] ? toEdit.wb.equal + mods.wb.equal : mods.wb.equal;
    }

    if (wb.tempBias) {
        toEdit.wb.tempBias   = dontforceSet && options.baBehav[ADDSET_WB_TEMPBIAS] ? toEdit.wb.tempBias + mods.wb.tempBias : mods.wb.tempBias;
    }

    if (wb.green) {
        toEdit.wb.green   = dontforceSet && options.baBehav[ADDSET_WB_GREEN] ? toEdit.wb.green + mods.wb.green : mods.wb.green;
    }

    if (wb.temperature) {
        toEdit.wb.temperature     = dontforceSet && options.baBehav[ADDSET_WB_TEMPERATURE] ? toEdit.wb.temperature + mods.wb.temperature : mods.wb.temperature;
    }

    //if (colorShift.a)                     toEdit.colorShift.a     = dontforceSet && options.baBehav[ADDSET_CS_BLUEYELLOW] ? toEdit.colorShift.a + mods.colorShift.a : mods.colorShift.a;
    //if (colorShift.b)                     toEdit.colorShift.b     = dontforceSet && options.baBehav[ADDSET_CS_GREENMAGENTA] ? toEdit.colorShift.b + mods.colorShift.b : mods.colorShift.b;
    //if (lumaDenoise.enabled)              toEdit.lumaDenoise.enabled  = mods.lumaDenoise.enabled;
    //if (lumaDenoise.radius)                   toEdit.lumaDenoise.radius   = mods.lumaDenoise.radius;
    //if (lumaDenoise.edgetolerance)            toEdit.lumaDenoise.edgetolerance    = dontforceSet && options.baBehav[ADDSET_LD_EDGETOLERANCE] ? toEdit.lumaDenoise.edgetolerance + mods.lumaDenoise.edgetolerance : mods.lumaDenoise.edgetolerance;
    //if (colorDenoise.enabled)             toEdit.colorDenoise.enabled     = mods.colorDenoise.enabled;
    //if (colorDenoise.amount)              toEdit.colorDenoise.amount  = mods.colorDenoise.amount;

    if (defringe.enabled) {
        toEdit.defringe.enabled   = mods.defringe.enabled;
    }

    if (defringe.radius) {
        toEdit.defringe.radius    = mods.defringe.radius;
    }

    if (defringe.threshold) {
        toEdit.defringe.threshold = mods.defringe.threshold;
    }

    if (defringe.huecurve) {
        toEdit.defringe.huecurve  = mods.defringe.huecurve;
    }

    if (colorappearance.curve) {
        toEdit.colorappearance.curve      = mods.colorappearance.curve;
    }

    if (colorappearance.curve2) {
        toEdit.colorappearance.curve2     = mods.colorappearance.curve2;
    }

    if (colorappearance.curve3) {
        toEdit.colorappearance.curve3     = mods.colorappearance.curve3;
    }

    if (colorappearance.curveMode) {
        toEdit.colorappearance.curveMode  = mods.colorappearance.curveMode;
    }

    if (colorappearance.curveMode2) {
        toEdit.colorappearance.curveMode2 = mods.colorappearance.curveMode2;
    }

    if (colorappearance.curveMode3) {
        toEdit.colorappearance.curveMode3 = mods.colorappearance.curveMode3;
    }

    if (colorappearance.enabled) {
        toEdit.colorappearance.enabled        = mods.colorappearance.enabled;
    }

    if (colorappearance.degree) {
        toEdit.colorappearance.degree     = dontforceSet && options.baBehav[ADDSET_CAT_DEGREE] ? toEdit.colorappearance.degree + mods.colorappearance.degree : mods.colorappearance.degree;
    }

    if (colorappearance.autodegree) {
        toEdit.colorappearance.autodegree = mods.colorappearance.autodegree;
    }

    if (colorappearance.degreeout) {
        toEdit.colorappearance.degreeout     = mods.colorappearance.degreeout;
    }

    if (colorappearance.autodegreeout) {
        toEdit.colorappearance.autodegreeout = mods.colorappearance.autodegreeout;
    }

    if (colorappearance.surround) {
        toEdit.colorappearance.surround       = mods.colorappearance.surround;
    }

    if (colorappearance.surrsrc) {
        toEdit.colorappearance.surrsrc       = mods.colorappearance.surrsrc;
    }

    if (colorappearance.autoadapscen) {
        toEdit.colorappearance.autoadapscen   = mods.colorappearance.autoadapscen;
    }

    if (colorappearance.adapscen) {
        toEdit.colorappearance.adapscen   = dontforceSet && options.baBehav[ADDSET_CAT_ADAPTSCENE] ? toEdit.colorappearance.adapscen + mods.colorappearance.adapscen : mods.colorappearance.adapscen;
    }

    if (colorappearance.autoybscen) {
        toEdit.colorappearance.autoybscen   = mods.colorappearance.autoybscen;
    }

    if (colorappearance.ybscen) {
        toEdit.colorappearance.ybscen   = mods.colorappearance.ybscen;
    }

    if (colorappearance.adaplum) {
        toEdit.colorappearance.adaplum        = dontforceSet && options.baBehav[ADDSET_CAT_ADAPTVIEWING] ? toEdit.colorappearance.adaplum + mods.colorappearance.adaplum : mods.colorappearance.adaplum;
    }

    if (colorappearance.badpixsl) {
        toEdit.colorappearance.badpixsl       = dontforceSet && options.baBehav[ADDSET_CAT_BADPIX] ? toEdit.colorappearance.badpixsl + mods.colorappearance.badpixsl : mods.colorappearance.badpixsl;
    }

    if (colorappearance.wbmodel) {
        toEdit.colorappearance.wbmodel        = mods.colorappearance.wbmodel;
    }

    if (colorappearance.algo) {
        toEdit.colorappearance.algo       = mods.colorappearance.algo;
    }

    if (colorappearance.tempout) {
        toEdit.colorappearance.tempout       = mods.colorappearance.tempout;
    }

    if (colorappearance.greenout) {
        toEdit.colorappearance.greenout       = mods.colorappearance.greenout;
    }

    if (colorappearance.tempsc) {
        toEdit.colorappearance.tempsc       = mods.colorappearance.tempsc;
    }

    if (colorappearance.greensc) {
        toEdit.colorappearance.greensc       = mods.colorappearance.greensc;
    }

    if (colorappearance.ybout) {
        toEdit.colorappearance.ybout       = mods.colorappearance.ybout;
    }

    if (colorappearance.jlight) {
        toEdit.colorappearance.jlight     = dontforceSet && options.baBehav[ADDSET_CAT_LIGHT] ? toEdit.colorappearance.jlight + mods.colorappearance.jlight : mods.colorappearance.jlight;
    }

    if (colorappearance.qbright) {
        toEdit.colorappearance.qbright        = dontforceSet && options.baBehav[ADDSET_CAT_BRIGHT] ? toEdit.colorappearance.qbright + mods.colorappearance.qbright : mods.colorappearance.qbright;
    }

    if (colorappearance.chroma) {
        toEdit.colorappearance.chroma     = dontforceSet && options.baBehav[ADDSET_CAT_CHROMA] ? toEdit.colorappearance.chroma + mods.colorappearance.chroma : mods.colorappearance.chroma;
    }

    if (colorappearance.schroma) {
        toEdit.colorappearance.schroma        = dontforceSet && options.baBehav[ADDSET_CAT_CHROMA_S] ? toEdit.colorappearance.schroma + mods.colorappearance.schroma : mods.colorappearance.schroma;
    }

    if (colorappearance.mchroma) {
        toEdit.colorappearance.mchroma        = dontforceSet && options.baBehav[ADDSET_CAT_CHROMA_M] ? toEdit.colorappearance.mchroma + mods.colorappearance.mchroma : mods.colorappearance.mchroma;
    }

    if (colorappearance.contrast) {
        toEdit.colorappearance.contrast       = dontforceSet && options.baBehav[ADDSET_CAT_CONTRAST] ? toEdit.colorappearance.contrast + mods.colorappearance.contrast : mods.colorappearance.contrast;
    }

    if (colorappearance.qcontrast) {
        toEdit.colorappearance.qcontrast  = dontforceSet && options.baBehav[ADDSET_CAT_CONTRAST_Q] ? toEdit.colorappearance.qcontrast + mods.colorappearance.qcontrast : mods.colorappearance.qcontrast;
    }

    if (colorappearance.colorh) {
        toEdit.colorappearance.colorh     = dontforceSet && options.baBehav[ADDSET_CAT_HUE] ? toEdit.colorappearance.colorh + mods.colorappearance.colorh : mods.colorappearance.colorh;
    }

    if (colorappearance.rstprotection) {
        toEdit.colorappearance.rstprotection = dontforceSet && options.baBehav[ADDSET_CAT_RSTPRO] ? toEdit.colorappearance.rstprotection + mods.colorappearance.rstprotection : mods.colorappearance.rstprotection;
    }

    if (colorappearance.surrsource) {
        toEdit.colorappearance.surrsource = mods.colorappearance.surrsource;
    }

    if (colorappearance.gamut) {
        toEdit.colorappearance.gamut = mods.colorappearance.gamut;
    }

//  if (colorappearance.badpix)             toEdit.colorappearance.badpix = mods.colorappearance.badpix;
    if (colorappearance.datacie) {
        toEdit.colorappearance.datacie = mods.colorappearance.datacie;
    }

    if (colorappearance.tonecie) {
        toEdit.colorappearance.tonecie = mods.colorappearance.tonecie;
    }

//  if (colorappearance.sharpcie)           toEdit.colorappearance.sharpcie = mods.colorappearance.sharpcie;
    if (impulseDenoise.enabled) {
        toEdit.impulseDenoise.enabled     = mods.impulseDenoise.enabled;
    }

    if (impulseDenoise.thresh) {
        toEdit.impulseDenoise.thresh  = mods.impulseDenoise.thresh;
    }

    if (dirpyrDenoise.enabled) {
        toEdit.dirpyrDenoise.enabled  = mods.dirpyrDenoise.enabled;
    }

    if (dirpyrDenoise.enhance) {
        toEdit.dirpyrDenoise.enhance  = mods.dirpyrDenoise.enhance;
    }

    if (dirpyrDenoise.median) {
        toEdit.dirpyrDenoise.median   = mods.dirpyrDenoise.median;
    }

    if (dirpyrDenoise.luma) {
        toEdit.dirpyrDenoise.luma     = dontforceSet && options.baBehav[ADDSET_DIRPYRDN_LUMA] ? toEdit.dirpyrDenoise.luma + mods.dirpyrDenoise.luma : mods.dirpyrDenoise.luma;
    }

    if (dirpyrDenoise.lcurve) {
        toEdit.dirpyrDenoise.lcurve       = mods.dirpyrDenoise.lcurve;
    }

    if (dirpyrDenoise.cccurve) {
        toEdit.dirpyrDenoise.cccurve      = mods.dirpyrDenoise.cccurve;
    }

    if (dirpyrDenoise.Ldetail) {
        toEdit.dirpyrDenoise.Ldetail  = dontforceSet && options.baBehav[ADDSET_DIRPYRDN_LUMDET] ? toEdit.dirpyrDenoise.Ldetail + mods.dirpyrDenoise.Ldetail : mods.dirpyrDenoise.Ldetail;
    }

    if (dirpyrDenoise.chroma) {
        toEdit.dirpyrDenoise.chroma       = dontforceSet && options.baBehav[ADDSET_DIRPYRDN_CHROMA] ? toEdit.dirpyrDenoise.chroma + mods.dirpyrDenoise.chroma : mods.dirpyrDenoise.chroma;
    }

    if (dirpyrDenoise.redchro) {
        toEdit.dirpyrDenoise.redchro  = dontforceSet && options.baBehav[ADDSET_DIRPYRDN_CHROMARED] ? toEdit.dirpyrDenoise.redchro + mods.dirpyrDenoise.redchro : mods.dirpyrDenoise.redchro;
    }

    if (dirpyrDenoise.bluechro) {
        toEdit.dirpyrDenoise.bluechro = dontforceSet && options.baBehav[ADDSET_DIRPYRDN_CHROMABLUE] ? toEdit.dirpyrDenoise.bluechro + mods.dirpyrDenoise.bluechro : mods.dirpyrDenoise.bluechro;
    }

    if (dirpyrDenoise.gamma) {
        toEdit.dirpyrDenoise.gamma        = dontforceSet && options.baBehav[ADDSET_DIRPYRDN_GAMMA] ? toEdit.dirpyrDenoise.gamma + mods.dirpyrDenoise.gamma : mods.dirpyrDenoise.gamma;
    }

    if (dirpyrDenoise.passes) {
        toEdit.dirpyrDenoise.passes       = dontforceSet && options.baBehav[ADDSET_DIRPYRDN_PASSES] ? toEdit.dirpyrDenoise.passes + mods.dirpyrDenoise.passes : mods.dirpyrDenoise.passes;
    }

//  if (dirpyrDenoise.perform)              toEdit.dirpyrDenoise.perform    = mods.dirpyrDenoise.perform;
    if (dirpyrDenoise.dmethod) {
        toEdit.dirpyrDenoise.dmethod      = mods.dirpyrDenoise.dmethod;
    }

    if (dirpyrDenoise.Lmethod) {
        toEdit.dirpyrDenoise.Lmethod      = mods.dirpyrDenoise.Lmethod;
    }

    if (dirpyrDenoise.Cmethod) {
        toEdit.dirpyrDenoise.Cmethod      = mods.dirpyrDenoise.Cmethod;
    }

    if (dirpyrDenoise.C2method) {
        toEdit.dirpyrDenoise.C2method     = mods.dirpyrDenoise.C2method;
    }

    if (dirpyrDenoise.smethod) {
        toEdit.dirpyrDenoise.smethod      = mods.dirpyrDenoise.smethod;
    }

    if (dirpyrDenoise.medmethod) {
        toEdit.dirpyrDenoise.medmethod        = mods.dirpyrDenoise.medmethod;
    }

    if (dirpyrDenoise.methodmed) {
        toEdit.dirpyrDenoise.methodmed        = mods.dirpyrDenoise.methodmed;
    }

    if (dirpyrDenoise.rgbmethod) {
        toEdit.dirpyrDenoise.rgbmethod        = mods.dirpyrDenoise.rgbmethod;
    }

    if (epd.enabled) {
        toEdit.epd.enabled                = mods.epd.enabled;
    }

    if (epd.strength) {
        toEdit.epd.strength               = mods.epd.strength;
    }

    if (epd.gamma) {
        toEdit.epd.gamma              = mods.epd.gamma;
    }

    if (epd.edgeStopping) {
        toEdit.epd.edgeStopping           = mods.epd.edgeStopping;
    }

    if (epd.scale) {
        toEdit.epd.scale              = mods.epd.scale;
    }

    if (epd.reweightingIterates) {
        toEdit.epd.reweightingIterates    = mods.epd.reweightingIterates;
    }

    if (sh.enabled) {
        toEdit.sh.enabled         = mods.sh.enabled;
    }

    if (sh.hq) {
        toEdit.sh.hq          = mods.sh.hq;
    }

    if (sh.highlights) {
        toEdit.sh.highlights  = dontforceSet && options.baBehav[ADDSET_SH_HIGHLIGHTS] ? toEdit.sh.highlights + mods.sh.highlights : mods.sh.highlights;
    }

    if (sh.htonalwidth) {
        toEdit.sh.htonalwidth     = mods.sh.htonalwidth;
    }

    if (sh.shadows) {
        toEdit.sh.shadows         = dontforceSet && options.baBehav[ADDSET_SH_SHADOWS] ? toEdit.sh.shadows + mods.sh.shadows : mods.sh.shadows;
    }

    if (sh.stonalwidth) {
        toEdit.sh.stonalwidth     = mods.sh.stonalwidth;
    }

    if (sh.localcontrast) {
        toEdit.sh.localcontrast = dontforceSet && options.baBehav[ADDSET_SH_LOCALCONTRAST] ? toEdit.sh.localcontrast + mods.sh.localcontrast : mods.sh.localcontrast;
    }

    if (sh.radius) {
        toEdit.sh.radius      = mods.sh.radius;
    }

    if (crop.enabled) {
        toEdit.crop.enabled = mods.crop.enabled;
    }

    if (crop.x) {
        toEdit.crop.x         = mods.crop.x;
    }

    if (crop.y) {
        toEdit.crop.y         = mods.crop.y;
    }

    if (crop.w) {
        toEdit.crop.w         = mods.crop.w;
    }

    if (crop.h) {
        toEdit.crop.h         = mods.crop.h;
    }

    if (crop.fixratio) {
        toEdit.crop.fixratio  = mods.crop.fixratio;
    }

    if (crop.ratio) {
        toEdit.crop.ratio         = mods.crop.ratio;
    }

    if (crop.orientation) {
        toEdit.crop.orientation = mods.crop.orientation;
    }

    if (crop.guide) {
        toEdit.crop.guide         = mods.crop.guide;
    }

    if (coarse.rotate) {
        toEdit.coarse.rotate  = mods.coarse.rotate;
    }

    if (coarse.hflip) {
        toEdit.coarse.hflip   = mods.coarse.hflip;
    }

    if (coarse.vflip) {
        toEdit.coarse.vflip   = mods.coarse.vflip;
    }

    if (commonTrans.autofill) {
        toEdit.commonTrans.autofill       = mods.commonTrans.autofill;
    }

    if (rotate.degree) {
        toEdit.rotate.degree          = dontforceSet && options.baBehav[ADDSET_ROTATE_DEGREE] ? toEdit.rotate.degree + mods.rotate.degree : mods.rotate.degree;
    }

    if (distortion.amount) {
        toEdit.distortion.amount      = dontforceSet && options.baBehav[ADDSET_DIST_AMOUNT] ? toEdit.distortion.amount + mods.distortion.amount : mods.distortion.amount;
    }

    if (lensProf.lcMode) {
        toEdit.lensProf.lcMode         = mods.lensProf.lcMode;
    }

    if (lensProf.lcpFile) {
        toEdit.lensProf.lcpFile         = mods.lensProf.lcpFile;
    }

    if (lensProf.useDist) {
        toEdit.lensProf.useDist         = mods.lensProf.useDist;
    }

    if (lensProf.useVign) {
        toEdit.lensProf.useVign         = mods.lensProf.useVign;
    }

    if (lensProf.useCA) {
        toEdit.lensProf.useCA           = mods.lensProf.useCA;
    }

    if (lensProf.lfCameraMake) {
        toEdit.lensProf.lfCameraMake = mods.lensProf.lfCameraMake;
    }

    if (lensProf.lfCameraModel) {
        toEdit.lensProf.lfCameraModel = mods.lensProf.lfCameraModel;
    }

    if (lensProf.lfLens) {
        toEdit.lensProf.lfLens = mods.lensProf.lfLens;
    }

    if (perspective.horizontal) {
        toEdit.perspective.horizontal     = dontforceSet && options.baBehav[ADDSET_PERSPECTIVE] ? toEdit.perspective.horizontal + mods.perspective.horizontal : mods.perspective.horizontal;
    }

    if (perspective.vertical) {
        toEdit.perspective.vertical   = dontforceSet && options.baBehav[ADDSET_PERSPECTIVE] ? toEdit.perspective.vertical + mods.perspective.vertical : mods.perspective.vertical;
    }

    if (gradient.enabled) {
        toEdit.gradient.enabled   = mods.gradient.enabled;
    }

    if (gradient.degree) {
        toEdit.gradient.degree    = dontforceSet && options.baBehav[ADDSET_GRADIENT_DEGREE] ? toEdit.gradient.degree + mods.gradient.degree : mods.gradient.degree;
    }

    if (gradient.feather) {
        toEdit.gradient.feather   = dontforceSet && options.baBehav[ADDSET_GRADIENT_FEATHER] ? toEdit.gradient.feather + mods.gradient.feather : mods.gradient.feather;
    }

    if (gradient.strength) {
        toEdit.gradient.strength  = dontforceSet && options.baBehav[ADDSET_GRADIENT_STRENGTH] ? toEdit.gradient.strength + mods.gradient.strength : mods.gradient.strength;
    }

    if (gradient.centerX) {
        toEdit.gradient.centerX   = dontforceSet && options.baBehav[ADDSET_GRADIENT_CENTER] ? toEdit.gradient.centerX + mods.gradient.centerX : mods.gradient.centerX;
    }

    if (gradient.centerY) {
        toEdit.gradient.centerY   = dontforceSet && options.baBehav[ADDSET_GRADIENT_CENTER] ? toEdit.gradient.centerY + mods.gradient.centerY : mods.gradient.centerY;
    }

    if (locallab.enabled) {
        toEdit.locallab.enabled   = mods.locallab.enabled;
    }

    if (locallab.expcolor) {
        toEdit.locallab.expcolor   = mods.locallab.expcolor;
    }

    if (locallab.expexpose) {
        toEdit.locallab.expexpose   = mods.locallab.expexpose;
    }

    if (locallab.expvibrance) {
        toEdit.locallab.expvibrance   = mods.locallab.expvibrance;
    }

    if (locallab.expblur) {
        toEdit.locallab.expblur   = mods.locallab.expblur;
    }

    if (locallab.exptonemap) {
        toEdit.locallab.exptonemap   = mods.locallab.exptonemap;
    }

    if (locallab.expreti) {
        toEdit.locallab.expreti   = mods.locallab.expreti;
    }

    if (locallab.expsharp) {
        toEdit.locallab.expsharp   = mods.locallab.expsharp;
    }

    if (locallab.expcbdl) {
        toEdit.locallab.expcbdl   = mods.locallab.expcbdl;
    }

    if (locallab.expdenoi) {
        toEdit.locallab.expdenoi   = mods.locallab.expdenoi;
    }

    if (locallab.avoid) {
        toEdit.locallab.avoid     = mods.locallab.avoid;
    }

    if (locallab.invers) {
        toEdit.locallab.invers    = mods.locallab.invers;
    }

    if (locallab.cutpast) {
        toEdit.locallab.cutpast    = mods.locallab.cutpast;
    }

    if (locallab.curvactiv) {
        toEdit.locallab.curvactiv    = mods.locallab.curvactiv;
    }

    if (locallab.activlum) {
        toEdit.locallab.activlum    = mods.locallab.activlum;
    }

    if (locallab.inversrad) {
        toEdit.locallab.inversrad     = mods.locallab.inversrad;
    }

    if (locallab.inverssha) {
        toEdit.locallab.inverssha     = mods.locallab.inverssha;
    }

    if (locallab.inversret) {
        toEdit.locallab.inversret     = mods.locallab.inversret;
    }

    if (locallab.degree) {
        toEdit.locallab.degree        = mods.locallab.degree; //dontforceSet && options.baBehav[ADDSET_LOCALLAB_DEGREE] ? toEdit.locallab.degree + mods.locallab.degree : mods.locallab.degree;
    }

    if (locallab.locY) {
        toEdit.locallab.locY  = mods.locallab.locY;
    }

    if (locallab.locX) {
        toEdit.locallab.locX  = mods.locallab.locX;
    }

    if (locallab.locYT) {
        toEdit.locallab.locYT     = mods.locallab.locYT;
    }

    if (locallab.locXL) {
        toEdit.locallab.locXL     = mods.locallab.locXL;
    }

    if (locallab.Smethod) {
        toEdit.locallab.Smethod   = mods.locallab.Smethod;
    }

    if (locallab.retinexMethod) {
        toEdit.locallab.retinexMethod   = mods.locallab.retinexMethod;
    }

    if (locallab.qualityMethod) {
        toEdit.locallab.qualityMethod   = mods.locallab.qualityMethod;
    }

    if (locallab.qualitycurveMethod) {
        toEdit.locallab.qualitycurveMethod   = mods.locallab.qualitycurveMethod;
    }

    if (locallab.centerX) {
        toEdit.locallab.centerX   = mods.locallab.centerX;
    }

    if (locallab.centerY) {
        toEdit.locallab.centerY   = mods.locallab.centerY;
    }

    if (locallab.circrad) {
        toEdit.locallab.circrad   = mods.locallab.circrad;
    }

    if (locallab.centerXbuf) {
        toEdit.locallab.centerXbuf   = mods.locallab.centerXbuf;
    }

    if (locallab.centerYbuf) {
        toEdit.locallab.centerYbuf   = mods.locallab.centerYbuf;
    }

    if (locallab.adjblur) {
        toEdit.locallab.adjblur   = mods.locallab.adjblur;
    }

    if (locallab.thres) {
        toEdit.locallab.thres   = mods.locallab.thres;
    }

    if (locallab.proxi) {
        toEdit.locallab.proxi   = mods.locallab.proxi;
    }

    if (locallab.lightness) {
        toEdit.locallab.lightness     = mods.locallab.lightness;
    }

    if (locallab.contrast) {
        toEdit.locallab.contrast  = mods.locallab.contrast;
    }

    if (locallab.chroma) {
        toEdit.locallab.chroma    = mods.locallab.chroma;
    }

    if (locallab.expcomp) {
        toEdit.locallab.expcomp     = mods.locallab.expcomp;
    }

    if (locallab.hlcompr) {
        toEdit.locallab.hlcompr     = mods.locallab.hlcompr;
    }

    if (locallab.hlcomprthresh) {
        toEdit.locallab.hlcomprthresh     = mods.locallab.hlcomprthresh;
    }

    if (locallab.black) {
        toEdit.locallab.black     = mods.locallab.black;
    }

    if (locallab.shcompr) {
        toEdit.locallab.shcompr     = mods.locallab.shcompr;
    }

    if (locallab.pastels) {
        toEdit.locallab.pastels           = mods.locallab.pastels;
    }

    if (locallab.saturated) {
        toEdit.locallab.saturated           = mods.locallab.saturated;
    }

    if (locallab.psthreshold) {
        toEdit.locallab.psthreshold       = mods.locallab.psthreshold;
    }

    if (locallab.protectskins) {
        toEdit.locallab.protectskins  = mods.locallab.protectskins;
    }

    if (locallab.avoidcolorshift) {
        toEdit.locallab.avoidcolorshift   = mods.locallab.avoidcolorshift;
    }

    if (locallab.pastsattog) {
        toEdit.locallab.pastsattog        = mods.locallab.pastsattog;
    }

    if (locallab.skintonescurve) {
        toEdit.locallab.skintonescurve    = mods.locallab.skintonescurve;
    }

    if (locallab.sensiv) {
        toEdit.locallab.sensiv     = mods.locallab.sensiv;
    }

    if (locallab.sensiex) {
        toEdit.locallab.sensiex     = mods.locallab.sensiex;
    }

    if (locallab.noiselumf) {
        toEdit.locallab.noiselumf    = mods.locallab.noiselumf;
    }

    if (locallab.noiselumc) {
        toEdit.locallab.noiselumc    = mods.locallab.noiselumc;
    }

    if (locallab.noisechrof) {
        toEdit.locallab.noisechrof    = mods.locallab.noisechrof;
    }

    if (locallab.noisechroc) {
        toEdit.locallab.noisechroc    = mods.locallab.noisechroc;
    }

    if (locallab.sharradius) {
        toEdit.locallab.sharradius    = mods.locallab.sharradius;
    }

    if (locallab.sharamount) {
        toEdit.locallab.sharamount    = mods.locallab.sharamount;
    }

    if (locallab.shardamping) {
        toEdit.locallab.shardamping    = mods.locallab.shardamping;
    }

    if (locallab.shariter) {
        toEdit.locallab.shariter    = mods.locallab.shariter;
    }

    if (locallab.sensi) {
        toEdit.locallab.sensi     = mods.locallab.sensi;
    }

    if (locallab.sensitm) {
        toEdit.locallab.sensitm     = mods.locallab.sensitm;
    }

    if (locallab.sensih) {
        toEdit.locallab.sensih     = mods.locallab.sensih;
    }

    if (locallab.retrab) {
        toEdit.locallab.retrab     = mods.locallab.retrab;
    }


    if (locallab.sensicb) {
        toEdit.locallab.sensicb     = mods.locallab.sensicb;
    }

    if (locallab.sensibn) {
        toEdit.locallab.sensibn     = mods.locallab.sensibn;
    }

    if (locallab.sensisha) {
        toEdit.locallab.sensisha     = mods.locallab.sensisha;
    }

    if (locallab.radius) {
        toEdit.locallab.radius    = mods.locallab.radius;
    }

    if (locallab.strength) {
        toEdit.locallab.strength  = mods.locallab.strength;
    }

    if (locallab.stren) {
        toEdit.locallab.stren  = mods.locallab.stren;
    }

    if (locallab.gamma) {
        toEdit.locallab.gamma  = mods.locallab.gamma;
    }

    if (locallab.estop) {
        toEdit.locallab.estop  = mods.locallab.estop;
    }

    if (locallab.scaltm) {
        toEdit.locallab.scaltm  = mods.locallab.scaltm;
    }

    if (locallab.rewei) {
        toEdit.locallab.rewei  = mods.locallab.rewei;
    }

    if (locallab.transit) {
        toEdit.locallab.transit   = mods.locallab.transit;
    }

    if (locallab.chrrt) {
        toEdit.locallab.chrrt   = mods.locallab.chrrt;
    }

    if (locallab.str) {
        toEdit.locallab.str   = mods.locallab.str;
    }

    if (locallab.neigh) {
        toEdit.locallab.neigh   = mods.locallab.neigh;
    }

    if (locallab.nbspot) {
        toEdit.locallab.nbspot   = mods.locallab.nbspot;
    }

    if (locallab.anbspot) {
        toEdit.locallab.anbspot   = mods.locallab.anbspot;
    }

    if (locallab.hueref) {
        toEdit.locallab.hueref   = mods.locallab.hueref;
    }

    if (locallab.chromaref) {
        toEdit.locallab.chromaref   = mods.locallab.chromaref;
    }

    if (locallab.lumaref) {
        toEdit.locallab.lumaref   = mods.locallab.lumaref;
    }

    if (locallab.vart) {
        toEdit.locallab.vart   = mods.locallab.vart;
    }

    if (locallab.localTgaincurve) {
        toEdit.locallab.localTgaincurve   = mods.locallab.localTgaincurve;
    }

    if (locallab.llcurve) {
        toEdit.locallab.llcurve   = mods.locallab.llcurve;
    }

    if (locallab.cccurve) {
        toEdit.locallab.cccurve   = mods.locallab.cccurve;
    }

    if (locallab.LHcurve) {
        toEdit.locallab.LHcurve   = mods.locallab.LHcurve;
    }

    if (locallab.excurve) {
        toEdit.locallab.excurve   = mods.locallab.excurve;
    }

    if (locallab.HHcurve) {
        toEdit.locallab.HHcurve   = mods.locallab.HHcurve;
    }

    if (locallab.localTgaincurverab) {
        toEdit.locallab.localTgaincurverab   = mods.locallab.localTgaincurverab;
    }

    for (int i = 0; i < 5; i++) {
        if (locallab.mult[i]) {
            toEdit.locallab.mult[i]    = mods.locallab.mult[i];
        }
    }

    if (locallab.threshold) {
        toEdit.locallab.threshold = mods.locallab.threshold;
    }

    if (locallab.chromacbdl) {
        toEdit.locallab.chromacbdl = mods.locallab.chromacbdl;
    }

    if (pcvignette.enabled) {
        toEdit.pcvignette.enabled     = mods.pcvignette.enabled;
    }

    if (pcvignette.strength) {
        toEdit.pcvignette.strength  = dontforceSet && options.baBehav[ADDSET_PCVIGNETTE_STRENGTH] ? toEdit.pcvignette.strength + mods.pcvignette.strength : mods.pcvignette.strength;
    }

    if (pcvignette.feather) {
        toEdit.pcvignette.feather   = dontforceSet && options.baBehav[ADDSET_PCVIGNETTE_FEATHER] ? toEdit.pcvignette.feather + mods.pcvignette.feather : mods.pcvignette.feather;
    }

    if (pcvignette.roundness) {
        toEdit.pcvignette.roundness = dontforceSet && options.baBehav[ADDSET_PCVIGNETTE_ROUNDNESS] ? toEdit.pcvignette.roundness + mods.pcvignette.roundness : mods.pcvignette.roundness;
    }

    if (cacorrection.red) {
        toEdit.cacorrection.red   = dontforceSet && options.baBehav[ADDSET_CA] ? toEdit.cacorrection.red + mods.cacorrection.red : mods.cacorrection.red;
    }

    if (cacorrection.blue) {
        toEdit.cacorrection.blue  = dontforceSet && options.baBehav[ADDSET_CA] ? toEdit.cacorrection.blue + mods.cacorrection.blue : mods.cacorrection.blue;
    }

    if (vignetting.amount) {
        toEdit.vignetting.amount  = dontforceSet && options.baBehav[ADDSET_VIGN_AMOUNT] ? toEdit.vignetting.amount + mods.vignetting.amount : mods.vignetting.amount;
    }

    if (vignetting.radius) {
        toEdit.vignetting.radius  = dontforceSet && options.baBehav[ADDSET_VIGN_RADIUS] ? toEdit.vignetting.radius + mods.vignetting.radius : mods.vignetting.radius;
    }

    if (vignetting.strength) {
        toEdit.vignetting.strength = dontforceSet && options.baBehav[ADDSET_VIGN_STRENGTH] ? toEdit.vignetting.strength + mods.vignetting.strength : mods.vignetting.strength;
    }

    if (vignetting.centerX) {
        toEdit.vignetting.centerX = dontforceSet && options.baBehav[ADDSET_VIGN_CENTER] ? toEdit.vignetting.centerX + mods.vignetting.centerX : mods.vignetting.centerX;
    }

    if (vignetting.centerY) {
        toEdit.vignetting.centerY = dontforceSet && options.baBehav[ADDSET_VIGN_CENTER] ? toEdit.vignetting.centerY + mods.vignetting.centerY : mods.vignetting.centerY;
    }

    for (int i = 0; i < 3; i++) {
        if (chmixer.red[i]) {
            toEdit.chmixer.red[i]     = dontforceSet && options.baBehav[ADDSET_CHMIXER] ? toEdit.chmixer.red[i] + mods.chmixer.red[i] : mods.chmixer.red[i];
        }

        if (chmixer.green[i]) {
            toEdit.chmixer.green[i]   = dontforceSet && options.baBehav[ADDSET_CHMIXER] ? toEdit.chmixer.green[i] + mods.chmixer.green[i] : mods.chmixer.green[i];
        }

        if (chmixer.blue[i]) {
            toEdit.chmixer.blue[i]    = dontforceSet && options.baBehav[ADDSET_CHMIXER] ? toEdit.chmixer.blue[i] + mods.chmixer.blue[i] : mods.chmixer.blue[i];
        }
    }

    if (blackwhite.enabled) {
        toEdit.blackwhite.enabled         = mods.blackwhite.enabled;
    }

    if (blackwhite.method) {
        toEdit.blackwhite.method          = mods.blackwhite.method;
    }

    if (blackwhite.luminanceCurve) {
        toEdit.blackwhite.luminanceCurve  = mods.blackwhite.luminanceCurve;
    }

    if (blackwhite.autoc) {
        toEdit.blackwhite.autoc               = mods.blackwhite.autoc;
    }

    if (blackwhite.setting) {
        toEdit.blackwhite.setting         = mods.blackwhite.setting;
    }

    if (blackwhite.enabledcc) {
        toEdit.blackwhite.enabledcc           = mods.blackwhite.enabledcc;
    }

    if (blackwhite.filter) {
        toEdit.blackwhite.filter          = mods.blackwhite.filter;
    }

    if (blackwhite.mixerRed) {
        toEdit.blackwhite.mixerRed            = dontforceSet && options.baBehav[ADDSET_BLACKWHITE_HUES] ? toEdit.blackwhite.mixerRed + mods.blackwhite.mixerRed : mods.blackwhite.mixerRed;
    }

    if (blackwhite.mixerOrange) {
        toEdit.blackwhite.mixerOrange         = dontforceSet && options.baBehav[ADDSET_BLACKWHITE_HUES] ? toEdit.blackwhite.mixerOrange + mods.blackwhite.mixerOrange : mods.blackwhite.mixerOrange;
    }

    if (blackwhite.mixerYellow) {
        toEdit.blackwhite.mixerYellow         = dontforceSet && options.baBehav[ADDSET_BLACKWHITE_HUES] ? toEdit.blackwhite.mixerYellow + mods.blackwhite.mixerYellow : mods.blackwhite.mixerYellow;
    }

    if (blackwhite.mixerGreen) {
        toEdit.blackwhite.mixerGreen      = dontforceSet && options.baBehav[ADDSET_BLACKWHITE_HUES] ? toEdit.blackwhite.mixerGreen + mods.blackwhite.mixerGreen : mods.blackwhite.mixerGreen;
    }

    if (blackwhite.mixerCyan) {
        toEdit.blackwhite.mixerCyan       = dontforceSet && options.baBehav[ADDSET_BLACKWHITE_HUES] ? toEdit.blackwhite.mixerCyan + mods.blackwhite.mixerCyan : mods.blackwhite.mixerCyan;
    }

    if (blackwhite.mixerBlue) {
        toEdit.blackwhite.mixerBlue       = dontforceSet && options.baBehav[ADDSET_BLACKWHITE_HUES] ? toEdit.blackwhite.mixerBlue + mods.blackwhite.mixerBlue : mods.blackwhite.mixerBlue;
    }

    if (blackwhite.mixerMagenta) {
        toEdit.blackwhite.mixerMagenta        = dontforceSet && options.baBehav[ADDSET_BLACKWHITE_HUES] ? toEdit.blackwhite.mixerMagenta + mods.blackwhite.mixerMagenta : mods.blackwhite.mixerMagenta;
    }

    if (blackwhite.mixerPurple) {
        toEdit.blackwhite.mixerPurple         = dontforceSet && options.baBehav[ADDSET_BLACKWHITE_HUES] ? toEdit.blackwhite.mixerPurple + mods.blackwhite.mixerPurple : mods.blackwhite.mixerPurple;
    }

    if (blackwhite.gammaRed) {
        toEdit.blackwhite.gammaRed            = dontforceSet && options.baBehav[ADDSET_BLACKWHITE_GAMMA] ? toEdit.blackwhite.gammaRed + mods.blackwhite.gammaRed : mods.blackwhite.gammaRed;
    }

    if (blackwhite.gammaGreen) {
        toEdit.blackwhite.gammaGreen      = dontforceSet && options.baBehav[ADDSET_BLACKWHITE_GAMMA] ? toEdit.blackwhite.gammaGreen + mods.blackwhite.gammaGreen : mods.blackwhite.gammaGreen;
    }

    if (blackwhite.gammaBlue) {
        toEdit.blackwhite.gammaBlue       = dontforceSet && options.baBehav[ADDSET_BLACKWHITE_GAMMA] ? toEdit.blackwhite.gammaBlue + mods.blackwhite.gammaBlue : mods.blackwhite.gammaBlue;
    }

    if (blackwhite.beforeCurve) {
        toEdit.blackwhite.beforeCurve     = mods.blackwhite.beforeCurve;
    }

    if (blackwhite.beforeCurveMode) {
        toEdit.blackwhite.beforeCurveMode = mods.blackwhite.beforeCurveMode;
    }

    if (blackwhite.afterCurve) {
        toEdit.blackwhite.afterCurve      = mods.blackwhite.afterCurve;
    }

    if (blackwhite.afterCurveMode) {
        toEdit.blackwhite.afterCurveMode  = mods.blackwhite.afterCurveMode;
    }

    if (blackwhite.algo) {
        toEdit.blackwhite.algo                = mods.blackwhite.algo;
    }

    if (resize.scale) {
        toEdit.resize.scale   = dontforceSet && options.baBehav[ADDSET_RESIZE_SCALE] ? toEdit.resize.scale + mods.resize.scale : mods.resize.scale;
    }

    if (resize.appliesTo) {
        toEdit.resize.appliesTo = mods.resize.appliesTo;
    }

    if (resize.method) {
        toEdit.resize.method  = mods.resize.method;
    }

    if (resize.dataspec) {
        toEdit.resize.dataspec    = mods.resize.dataspec;
    }

    if (resize.width) {
        toEdit.resize.width   = mods.resize.width;
    }

    if (resize.height) {
        toEdit.resize.height  = mods.resize.height;
    }

    if (resize.enabled) {
        toEdit.resize.enabled     = mods.resize.enabled;
    }

    if (icm.input) {
        toEdit.icm.input      = mods.icm.input;
    }

    if (icm.toneCurve) {
        toEdit.icm.toneCurve = mods.icm.toneCurve;
    }

    if (icm.applyLookTable) {
        toEdit.icm.applyLookTable = mods.icm.applyLookTable;
    }

    if (icm.applyBaselineExposureOffset) {
        toEdit.icm.applyBaselineExposureOffset = mods.icm.applyBaselineExposureOffset;
    }

    if (icm.applyHueSatMap) {
        toEdit.icm.applyHueSatMap = mods.icm.applyHueSatMap;
    }

    if (icm.dcpIlluminant) {
        toEdit.icm.dcpIlluminant = mods.icm.dcpIlluminant;
    }

    if (icm.working) {
        toEdit.icm.working        = mods.icm.working;
    }

    if (icm.output) {
        toEdit.icm.output       = mods.icm.output;
    }

    if (icm.outputIntent) {
        toEdit.icm.outputIntent = mods.icm.outputIntent;
    }

    if (icm.outputBPC) {
        toEdit.icm.outputBPC = mods.icm.outputBPC;
    }

    if (icm.gampos) {
        toEdit.icm.gampos     = dontforceSet && options.baBehav[ADDSET_FREE_OUPUT_GAMMA] ? toEdit.icm.gampos + mods.icm.gampos : mods.icm.gampos;
    }

    if (icm.slpos) {
        toEdit.icm.slpos      = dontforceSet && options.baBehav[ADDSET_FREE_OUTPUT_SLOPE] ? toEdit.icm.slpos + mods.icm.slpos : mods.icm.slpos;
    }

    if (icm.gamma) {
        toEdit.icm.gamma        = mods.icm.gamma;
    }

    if (icm.freegamma) {
        toEdit.icm.freegamma    = mods.icm.freegamma;
    }

    if (raw.bayersensor.method) {
        toEdit.raw.bayersensor.method           = mods.raw.bayersensor.method;
    }

    if (raw.bayersensor.imageNum) {
        toEdit.raw.bayersensor.imageNum         = mods.raw.bayersensor.imageNum;
    }

    if (raw.bayersensor.ccSteps) {
        toEdit.raw.bayersensor.ccSteps          = mods.raw.bayersensor.ccSteps;
    }

    if (raw.bayersensor.exBlack0) {
        toEdit.raw.bayersensor.black0           = dontforceSet && options.baBehav[ADDSET_RAWEXPOS_BLACKS] ? toEdit.raw.bayersensor.black0 + mods.raw.bayersensor.black0 : mods.raw.bayersensor.black0;
    }

    if (raw.bayersensor.exBlack1) {
        toEdit.raw.bayersensor.black1           = dontforceSet && options.baBehav[ADDSET_RAWEXPOS_BLACKS] ? toEdit.raw.bayersensor.black1 + mods.raw.bayersensor.black1 : mods.raw.bayersensor.black1;
    }

    if (raw.bayersensor.exBlack2) {
        toEdit.raw.bayersensor.black2           = dontforceSet && options.baBehav[ADDSET_RAWEXPOS_BLACKS] ? toEdit.raw.bayersensor.black2 + mods.raw.bayersensor.black2 : mods.raw.bayersensor.black2;
    }

    if (raw.bayersensor.exBlack3) {
        toEdit.raw.bayersensor.black3           = dontforceSet && options.baBehav[ADDSET_RAWEXPOS_BLACKS] ? toEdit.raw.bayersensor.black3 + mods.raw.bayersensor.black3 : mods.raw.bayersensor.black3;
    }

    if (raw.bayersensor.exTwoGreen) {
        toEdit.raw.bayersensor.twogreen         = mods.raw.bayersensor.twogreen;
    }

    if (raw.bayersensor.dcbIterations) {
        toEdit.raw.bayersensor.dcb_iterations   = mods.raw.bayersensor.dcb_iterations;
    }

    if (raw.bayersensor.dcbEnhance) {
        toEdit.raw.bayersensor.dcb_enhance      = mods.raw.bayersensor.dcb_enhance;
    }

    if (raw.bayersensor.lmmseIterations) {
        toEdit.raw.bayersensor.lmmse_iterations = mods.raw.bayersensor.lmmse_iterations;
    }

    if (raw.bayersensor.pixelShiftMotion) {
        toEdit.raw.bayersensor.pixelShiftMotion = mods.raw.bayersensor.pixelShiftMotion;
    }

    if (raw.bayersensor.pixelShiftMotionCorrection) {
        toEdit.raw.bayersensor.pixelShiftMotionCorrection = mods.raw.bayersensor.pixelShiftMotionCorrection;
    }

    if (raw.bayersensor.pixelShiftMotionCorrectionMethod) {
        toEdit.raw.bayersensor.pixelShiftMotionCorrectionMethod = mods.raw.bayersensor.pixelShiftMotionCorrectionMethod;
    }

    if (raw.bayersensor.pixelShiftStddevFactorGreen) {
        toEdit.raw.bayersensor.pixelShiftStddevFactorGreen = mods.raw.bayersensor.pixelShiftStddevFactorGreen;
    }

    if (raw.bayersensor.pixelShiftStddevFactorRed) {
        toEdit.raw.bayersensor.pixelShiftStddevFactorRed = mods.raw.bayersensor.pixelShiftStddevFactorRed;
    }

    if (raw.bayersensor.pixelShiftStddevFactorBlue) {
        toEdit.raw.bayersensor.pixelShiftStddevFactorBlue = mods.raw.bayersensor.pixelShiftStddevFactorBlue;
    }

    if (raw.bayersensor.pixelShiftEperIso) {
        toEdit.raw.bayersensor.pixelShiftEperIso = mods.raw.bayersensor.pixelShiftEperIso;
    }

    if (raw.bayersensor.pixelShiftNreadIso) {
        toEdit.raw.bayersensor.pixelShiftNreadIso = mods.raw.bayersensor.pixelShiftNreadIso;
    }

    if (raw.bayersensor.pixelShiftPrnu) {
        toEdit.raw.bayersensor.pixelShiftPrnu = mods.raw.bayersensor.pixelShiftPrnu;
    }

    if (raw.bayersensor.pixelShiftSigma) {
        toEdit.raw.bayersensor.pixelShiftSigma = mods.raw.bayersensor.pixelShiftSigma;
    }

    if (raw.bayersensor.pixelShiftSum) {
        toEdit.raw.bayersensor.pixelShiftSum = mods.raw.bayersensor.pixelShiftSum;
    }

    if (raw.bayersensor.pixelShiftRedBlueWeight) {
        toEdit.raw.bayersensor.pixelShiftRedBlueWeight = mods.raw.bayersensor.pixelShiftRedBlueWeight;
    }

    if (raw.bayersensor.pixelShiftShowMotion) {
        toEdit.raw.bayersensor.pixelShiftShowMotion = mods.raw.bayersensor.pixelShiftShowMotion;
    }

    if (raw.bayersensor.pixelShiftShowMotionMaskOnly) {
        toEdit.raw.bayersensor.pixelShiftShowMotionMaskOnly = mods.raw.bayersensor.pixelShiftShowMotionMaskOnly;
    }

    if (raw.bayersensor.pixelShiftAutomatic) {
        toEdit.raw.bayersensor.pixelShiftAutomatic = mods.raw.bayersensor.pixelShiftAutomatic;
    }

    if (raw.bayersensor.pixelShiftNonGreenHorizontal) {
        toEdit.raw.bayersensor.pixelShiftNonGreenHorizontal = mods.raw.bayersensor.pixelShiftNonGreenHorizontal;
    }

    if (raw.bayersensor.pixelShiftNonGreenVertical) {
        toEdit.raw.bayersensor.pixelShiftNonGreenVertical = mods.raw.bayersensor.pixelShiftNonGreenVertical;
    }

    if (raw.bayersensor.pixelShiftHoleFill) {
        toEdit.raw.bayersensor.pixelShiftHoleFill = mods.raw.bayersensor.pixelShiftHoleFill;
    }

    if (raw.bayersensor.pixelShiftMedian) {
        toEdit.raw.bayersensor.pixelShiftMedian = mods.raw.bayersensor.pixelShiftMedian;
    }

    if (raw.bayersensor.pixelShiftMedian3) {
        toEdit.raw.bayersensor.pixelShiftMedian3 = mods.raw.bayersensor.pixelShiftMedian3;
    }

    if (raw.bayersensor.pixelShiftGreen) {
        toEdit.raw.bayersensor.pixelShiftGreen = mods.raw.bayersensor.pixelShiftGreen;
    }

    if (raw.bayersensor.pixelShiftBlur) {
        toEdit.raw.bayersensor.pixelShiftBlur = mods.raw.bayersensor.pixelShiftBlur;
    }

    if (raw.bayersensor.pixelShiftSmooth) {
        toEdit.raw.bayersensor.pixelShiftSmoothFactor = mods.raw.bayersensor.pixelShiftSmoothFactor;
    }

    if (raw.bayersensor.pixelShiftExp0) {
        toEdit.raw.bayersensor.pixelShiftExp0 = mods.raw.bayersensor.pixelShiftExp0;
    }

    if (raw.bayersensor.pixelShiftLmmse) {
        toEdit.raw.bayersensor.pixelShiftLmmse = mods.raw.bayersensor.pixelShiftLmmse;
    }

    if (raw.bayersensor.pixelShiftEqualBright) {
        toEdit.raw.bayersensor.pixelShiftEqualBright = mods.raw.bayersensor.pixelShiftEqualBright;
    }

    if (raw.bayersensor.pixelShiftEqualBrightChannel) {
        toEdit.raw.bayersensor.pixelShiftEqualBrightChannel = mods.raw.bayersensor.pixelShiftEqualBrightChannel;
    }

    if (raw.bayersensor.pixelShiftNonGreenCross) {
        toEdit.raw.bayersensor.pixelShiftNonGreenCross = mods.raw.bayersensor.pixelShiftNonGreenCross;
    }

    if (raw.bayersensor.pixelShiftNonGreenCross2) {
        toEdit.raw.bayersensor.pixelShiftNonGreenCross2 = mods.raw.bayersensor.pixelShiftNonGreenCross2;
    }

    if (raw.bayersensor.pixelShiftNonGreenAmaze) {
        toEdit.raw.bayersensor.pixelShiftNonGreenAmaze = mods.raw.bayersensor.pixelShiftNonGreenAmaze;
    }

    if (raw.bayersensor.greenEq) {
        toEdit.raw.bayersensor.greenthresh      = dontforceSet && options.baBehav[ADDSET_PREPROCESS_GREENEQUIL] ? toEdit.raw.bayersensor.greenthresh + mods.raw.bayersensor.greenthresh : mods.raw.bayersensor.greenthresh;
    }

    if (raw.bayersensor.linenoise) {
        toEdit.raw.bayersensor.linenoise        = dontforceSet && options.baBehav[ADDSET_PREPROCESS_LINEDENOISE] ? toEdit.raw.bayersensor.linenoise + mods.raw.bayersensor.linenoise : mods.raw.bayersensor.linenoise;
    }

    if (raw.xtranssensor.method) {
        toEdit.raw.xtranssensor.method          = mods.raw.xtranssensor.method;
    }

    if (raw.xtranssensor.ccSteps) {
        toEdit.raw.xtranssensor.ccSteps         = mods.raw.xtranssensor.ccSteps;
    }

    if (raw.xtranssensor.exBlackRed) {
        toEdit.raw.xtranssensor.blackred        = dontforceSet && options.baBehav[ADDSET_RAWEXPOS_BLACKS] ? toEdit.raw.xtranssensor.blackred + mods.raw.xtranssensor.blackred : mods.raw.xtranssensor.blackred;
    }

    if (raw.xtranssensor.exBlackGreen) {
        toEdit.raw.xtranssensor.blackgreen      = dontforceSet && options.baBehav[ADDSET_RAWEXPOS_BLACKS] ? toEdit.raw.xtranssensor.blackgreen + mods.raw.xtranssensor.blackgreen : mods.raw.xtranssensor.blackgreen;
    }

    if (raw.xtranssensor.exBlackBlue) {
        toEdit.raw.xtranssensor.blackblue       = dontforceSet && options.baBehav[ADDSET_RAWEXPOS_BLACKS] ? toEdit.raw.xtranssensor.blackblue + mods.raw.xtranssensor.blackblue : mods.raw.xtranssensor.blackblue;
    }

    if (raw.caCorrection) {
        toEdit.raw.ca_autocorrect  = mods.raw.ca_autocorrect;
    }

    if (raw.caRed) {
        toEdit.raw.cared           = dontforceSet && options.baBehav[ADDSET_RAWCACORR] ? toEdit.raw.cared + mods.raw.cared : mods.raw.cared;
    }

    if (raw.caBlue) {
        toEdit.raw.cablue          = dontforceSet && options.baBehav[ADDSET_RAWCACORR] ? toEdit.raw.cablue + mods.raw.cablue : mods.raw.cablue;
    }

    if (raw.exPos) {
        toEdit.raw.expos           = dontforceSet && options.baBehav[ADDSET_RAWEXPOS_LINEAR] ? toEdit.raw.expos + mods.raw.expos : mods.raw.expos;
    }

    if (raw.exPreser) {
        toEdit.raw.preser          = dontforceSet && options.baBehav[ADDSET_RAWEXPOS_PRESER] ? toEdit.raw.preser + mods.raw.preser : mods.raw.preser;
    }

    if (raw.hotPixelFilter) {
        toEdit.raw.hotPixelFilter    = mods.raw.hotPixelFilter;
    }

    if (raw.deadPixelFilter) {
        toEdit.raw.deadPixelFilter   = mods.raw.deadPixelFilter;
    }

    if (raw.hotDeadPixelThresh) {
        toEdit.raw.hotdeadpix_thresh = mods.raw.hotdeadpix_thresh;
    }

    if (raw.darkFrame) {
        toEdit.raw.dark_frame        = mods.raw.dark_frame;
    }

    if (raw.dfAuto) {
        toEdit.raw.df_autoselect     = mods.raw.df_autoselect;
    }

    if (raw.ff_file) {
        toEdit.raw.ff_file            = mods.raw.ff_file;
    }

    if (raw.ff_AutoSelect) {
        toEdit.raw.ff_AutoSelect      = mods.raw.ff_AutoSelect;
    }

    if (raw.ff_BlurRadius) {
        toEdit.raw.ff_BlurRadius      = mods.raw.ff_BlurRadius;
    }

    if (raw.ff_BlurType) {
        toEdit.raw.ff_BlurType        = mods.raw.ff_BlurType;
    }

    if (raw.ff_AutoClipControl) {
        toEdit.raw.ff_AutoClipControl = mods.raw.ff_AutoClipControl;
    }

    if (raw.ff_clipControl) {
        toEdit.raw.ff_clipControl     = dontforceSet && options.baBehav[ADDSET_RAWFFCLIPCONTROL] ? toEdit.raw.ff_clipControl + mods.raw.ff_clipControl : mods.raw.ff_clipControl;
    }

    if (wavelet.enabled) {
        toEdit.wavelet.enabled   = mods.wavelet.enabled;
    }

    if (wavelet.strength) {
        toEdit.wavelet.strength   = mods.wavelet.strength;
    }

    if (wavelet.balance) {
        toEdit.wavelet.balance   = mods.wavelet.balance;
    }

    if (wavelet.iter) {
        toEdit.wavelet.iter   = mods.wavelet.iter;
    }

    if (wavelet.median) {
        toEdit.wavelet.median   = mods.wavelet.median;
    }

    if (wavelet.medianlev) {
        toEdit.wavelet.medianlev   = mods.wavelet.medianlev;
    }

    if (wavelet.linkedg) {
        toEdit.wavelet.linkedg   = mods.wavelet.linkedg;
    }

    if (wavelet.cbenab) {
        toEdit.wavelet.cbenab   = mods.wavelet.cbenab;
    }

    if (wavelet.greenhigh) {
        toEdit.wavelet.greenhigh   = mods.wavelet.greenhigh;
    }

    if (wavelet.bluehigh) {
        toEdit.wavelet.bluehigh   = mods.wavelet.bluehigh;
    }

    if (wavelet.greenmed) {
        toEdit.wavelet.greenmed   = mods.wavelet.greenmed;
    }

    if (wavelet.bluemed) {
        toEdit.wavelet.bluemed   = mods.wavelet.bluemed;
    }

    if (wavelet.greenlow) {
        toEdit.wavelet.greenlow   = mods.wavelet.greenlow;
    }

    if (wavelet.bluelow) {
        toEdit.wavelet.bluelow   = mods.wavelet.bluelow;
    }

    if (wavelet.lipst) {
        toEdit.wavelet.lipst   = mods.wavelet.lipst;
    }

    if (wavelet.Medgreinf) {
        toEdit.wavelet.Medgreinf   = mods.wavelet.Medgreinf;
    }

    if (wavelet.avoid) {
        toEdit.wavelet.avoid   = mods.wavelet.avoid;
    }

    if (wavelet.tmr) {
        toEdit.wavelet.tmr   = mods.wavelet.tmr;
    }

    if (wavelet.Lmethod) {
        toEdit.wavelet.Lmethod        = mods.wavelet.Lmethod;
    }

    if (wavelet.CLmethod) {
        toEdit.wavelet.CLmethod       = mods.wavelet.CLmethod;
    }

    if (wavelet.Backmethod) {
        toEdit.wavelet.Backmethod     = mods.wavelet.Backmethod;
    }

    if (wavelet.Tilesmethod) {
        toEdit.wavelet.Tilesmethod        = mods.wavelet.Tilesmethod;
    }

    if (wavelet.daubcoeffmethod) {
        toEdit.wavelet.daubcoeffmethod        = mods.wavelet.daubcoeffmethod;
    }

    if (wavelet.CHmethod) {
        toEdit.wavelet.CHmethod       = mods.wavelet.CHmethod;
    }

    if (wavelet.CHSLmethod) {
        toEdit.wavelet.CHSLmethod     = mods.wavelet.CHSLmethod;
    }

    if (wavelet.EDmethod) {
        toEdit.wavelet.EDmethod       = mods.wavelet.EDmethod;
    }

    if (wavelet.NPmethod) {
        toEdit.wavelet.NPmethod       = mods.wavelet.NPmethod;
    }

    if (wavelet.BAmethod) {
        toEdit.wavelet.BAmethod       = mods.wavelet.BAmethod;
    }

    if (wavelet.TMmethod) {
        toEdit.wavelet.TMmethod       = mods.wavelet.TMmethod;
    }

    if (wavelet.HSmethod) {
        toEdit.wavelet.HSmethod       = mods.wavelet.HSmethod;
    }

    if (wavelet.Dirmethod) {
        toEdit.wavelet.Dirmethod      = mods.wavelet.Dirmethod;
    }

    if (wavelet.edgthresh) {
        toEdit.wavelet.edgthresh      = mods.wavelet.edgthresh;
    }

    if (wavelet.sky) {
        toEdit.wavelet.sky = dontforceSet && options.baBehav[ADDSET_WA_SKYPROTECT] ? toEdit.wavelet.sky + mods.wavelet.sky : mods.wavelet.sky;
    }

    if (wavelet.thr) {
        toEdit.wavelet.thr = dontforceSet && options.baBehav[ADDSET_WA_THRR] ? toEdit.wavelet.thr + mods.wavelet.thr : mods.wavelet.thr;
    }

    if (wavelet.thrH) {
        toEdit.wavelet.thrH = dontforceSet && options.baBehav[ADDSET_WA_THRRH] ? toEdit.wavelet.thrH + mods.wavelet.thrH : mods.wavelet.thrH;
    }

    if (wavelet.sup) {
        toEdit.wavelet.sup        = mods.wavelet.sup;
    }

    if (wavelet.hllev) {
        toEdit.wavelet.hllev  = mods.wavelet.hllev;
    }

    if (wavelet.bllev) {
        toEdit.wavelet.bllev  = mods.wavelet.bllev;
    }

    if (wavelet.edgcont) {
        toEdit.wavelet.edgcont    = mods.wavelet.edgcont;
    }

    if (wavelet.level0noise) {
        toEdit.wavelet.level0noise    = mods.wavelet.level0noise;
    }

    if (wavelet.level1noise) {
        toEdit.wavelet.level1noise    = mods.wavelet.level1noise;
    }

    if (wavelet.level2noise) {
        toEdit.wavelet.level2noise    = mods.wavelet.level2noise;
    }

    if (wavelet.level3noise) {
        toEdit.wavelet.level3noise    = mods.wavelet.level3noise;
    }

    if (wavelet.pastlev) {
        toEdit.wavelet.pastlev    = mods.wavelet.pastlev;
    }

    if (wavelet.satlev) {
        toEdit.wavelet.satlev = mods.wavelet.satlev;
    }

    if (wavelet.ccwcurve) {
        toEdit.wavelet.ccwcurve   = mods.wavelet.ccwcurve;
    }

    if (wavelet.opacityCurveRG) {
        toEdit.wavelet.opacityCurveRG = mods.wavelet.opacityCurveRG;
    }

    if (wavelet.opacityCurveBY) {
        toEdit.wavelet.opacityCurveBY = mods.wavelet.opacityCurveBY;
    }

    if (wavelet.opacityCurveW) {
        toEdit.wavelet.opacityCurveW  = mods.wavelet.opacityCurveW;
    }

    if (wavelet.opacityCurveWL) {
        toEdit.wavelet.opacityCurveWL = mods.wavelet.opacityCurveWL;
    }

    if (wavelet.hhcurve) {
        toEdit.wavelet.hhcurve    = mods.wavelet.hhcurve;
    }

    if (wavelet.Chcurve) {
        toEdit.wavelet.Chcurve    = mods.wavelet.Chcurve;
    }

    if (wavelet.wavclCurve) {
        toEdit.wavelet.wavclCurve = mods.wavelet.wavclCurve;
    }

    //if (wavelet.enacont)  toEdit.wavelet.enacont   = mods.wavelet.enacont;
    if (wavelet.expcontrast) {
        toEdit.wavelet.expcontrast   = mods.wavelet.expcontrast;
    }

    if (wavelet.expchroma) {
        toEdit.wavelet.expchroma   = mods.wavelet.expchroma;
    }

    if (wavelet.expedge) {
        toEdit.wavelet.expedge   = mods.wavelet.expedge;
    }

    if (wavelet.expresid) {
        toEdit.wavelet.expresid   = mods.wavelet.expresid;
    }

    if (wavelet.expfinal) {
        toEdit.wavelet.expfinal   = mods.wavelet.expfinal;
    }

    if (wavelet.exptoning) {
        toEdit.wavelet.exptoning   = mods.wavelet.exptoning;
    }

    if (wavelet.expnoise) {
        toEdit.wavelet.expnoise   = mods.wavelet.expnoise;
    }

    for (int i = 0; i < 9; i++) {
        if (wavelet.c[i]) {
            toEdit.wavelet.c[i] = dontforceSet && options.baBehav[ADDSET_WA] ? toEdit.wavelet.c[i] + mods.wavelet.c[i] : mods.wavelet.c[i];
        }
    }

    for (int i = 0; i < 9; i++) {
        if (wavelet.ch[i]) {
            toEdit.wavelet.ch[i] = dontforceSet && options.baBehav[ADDSET_WA] ? toEdit.wavelet.ch[i] + mods.wavelet.ch[i] : mods.wavelet.ch[i];
        }
    }

    if (wavelet.skinprotect) {
        toEdit.wavelet.skinprotect = dontforceSet && options.baBehav[ADDSET_WA_SKINPROTECT] ? toEdit.wavelet.skinprotect + mods.wavelet.skinprotect : mods.wavelet.skinprotect;
    }

    if (wavelet.hueskin) {
        toEdit.wavelet.hueskin    = mods.wavelet.hueskin;
    }

    if (wavelet.hueskin2) {
        toEdit.wavelet.hueskin2   = mods.wavelet.hueskin2;
    }

    if (wavelet.edgesensi) {
        toEdit.wavelet.edgesensi  = mods.wavelet.edgesensi;
    }

    if (wavelet.edgeampli) {
        toEdit.wavelet.edgeampli  = mods.wavelet.edgeampli;
    }

    if (wavelet.resconH) {
        toEdit.wavelet.resconH = dontforceSet && options.baBehav[ADDSET_WA_RESCONH] ? toEdit.wavelet.resconH + mods.wavelet.resconH : mods.wavelet.resconH;
    }

    if (wavelet.reschro) {
        toEdit.wavelet.reschro = dontforceSet && options.baBehav[ADDSET_WA_RESCHRO] ? toEdit.wavelet.reschro + mods.wavelet.reschro : mods.wavelet.reschro;
    }

    if (wavelet.tmrs) {
        toEdit.wavelet.tmrs = dontforceSet && options.baBehav[ADDSET_WA_TMRS] ? toEdit.wavelet.tmrs + mods.wavelet.tmrs : mods.wavelet.tmrs;
    }

    if (wavelet.gamma) {
        toEdit.wavelet.gamma = dontforceSet && options.baBehav[ADDSET_WA_GAMMA] ? toEdit.wavelet.gamma + mods.wavelet.gamma : mods.wavelet.gamma;
    }

    if (wavelet.rescon) {
        toEdit.wavelet.rescon = dontforceSet && options.baBehav[ADDSET_WA_RESCON] ? toEdit.wavelet.rescon + mods.wavelet.rescon : mods.wavelet.rescon;
    }

    if (wavelet.thres) {
        toEdit.wavelet.thres = dontforceSet && options.baBehav[ADDSET_WA_THRES] ? toEdit.wavelet.thres + mods.wavelet.thres : mods.wavelet.thres;
    }

    if (wavelet.threshold) {
        toEdit.wavelet.threshold = dontforceSet && options.baBehav[ADDSET_WA_THRESHOLD] ? toEdit.wavelet.threshold + mods.wavelet.threshold : mods.wavelet.threshold;
    }

    if (wavelet.threshold2) {
        toEdit.wavelet.threshold2 = dontforceSet && options.baBehav[ADDSET_WA_THRESHOLD2] ? toEdit.wavelet.threshold2 + mods.wavelet.threshold2 : mods.wavelet.threshold2;
    }

    if (wavelet.edgedetect) {
        toEdit.wavelet.edgedetect = dontforceSet && options.baBehav[ADDSET_WA_EDGEDETECT] ? toEdit.wavelet.edgedetect + mods.wavelet.edgedetect : mods.wavelet.edgedetect;
    }

    if (wavelet.edgedetectthr) {
        toEdit.wavelet.edgedetectthr = dontforceSet && options.baBehav[ADDSET_WA_EDGEDETECTTHR] ? toEdit.wavelet.edgedetectthr + mods.wavelet.edgedetectthr : mods.wavelet.edgedetectthr;
    }

    if (wavelet.edgedetectthr2) {
        toEdit.wavelet.edgedetectthr2 = dontforceSet && options.baBehav[ADDSET_WA_EDGEDETECTTHR2] ? toEdit.wavelet.edgedetectthr2 + mods.wavelet.edgedetectthr2 : mods.wavelet.edgedetectthr2;
    }

    if (wavelet.chro) {
        toEdit.wavelet.chro = dontforceSet && options.baBehav[ADDSET_WA_CHRO] ? toEdit.wavelet.chro + mods.wavelet.chro : mods.wavelet.chro;
    }

    if (wavelet.chroma) {
        toEdit.wavelet.chroma = dontforceSet && options.baBehav[ADDSET_WA_CHROMA] ? toEdit.wavelet.chroma + mods.wavelet.chroma : mods.wavelet.chroma;
    }

    if (wavelet.contrast) {
        toEdit.wavelet.contrast = dontforceSet && options.baBehav[ADDSET_WA_CONTRAST] ? toEdit.wavelet.contrast + mods.wavelet.contrast : mods.wavelet.contrast;
    }

    if (wavelet.edgrad) {
        toEdit.wavelet.edgrad = dontforceSet && options.baBehav[ADDSET_WA_EDGRAD] ? toEdit.wavelet.edgrad + mods.wavelet.edgrad : mods.wavelet.edgrad;
    }

    if (wavelet.edgval) {
        toEdit.wavelet.edgval = dontforceSet && options.baBehav[ADDSET_WA_EDGVAL] ? toEdit.wavelet.edgval + mods.wavelet.edgval : mods.wavelet.edgval;
    }

    if (wavelet.strength) {
        toEdit.wavelet.strength = dontforceSet && options.baBehav[ADDSET_WA_STRENGTH] ? toEdit.wavelet.strength + mods.wavelet.strength : mods.wavelet.strength;
    }


    if (dirpyrequalizer.enabled) {
        toEdit.dirpyrequalizer.enabled    = mods.dirpyrequalizer.enabled;
    }

    if (dirpyrequalizer.gamutlab) {
        toEdit.dirpyrequalizer.gamutlab   = mods.dirpyrequalizer.gamutlab;
    }

    if (dirpyrequalizer.cbdlMethod) {
        toEdit.dirpyrequalizer.cbdlMethod   = mods.dirpyrequalizer.cbdlMethod;
    }

    for (int i = 0; i < 6; i++) {
        if (dirpyrequalizer.mult[i]) {
            toEdit.dirpyrequalizer.mult[i]    = dontforceSet && options.baBehav[ADDSET_DIRPYREQ] ? toEdit.dirpyrequalizer.mult[i] + mods.dirpyrequalizer.mult[i] : mods.dirpyrequalizer.mult[i];
        }
    }

    if (dirpyrequalizer.threshold) {
        toEdit.dirpyrequalizer.threshold = dontforceSet && options.baBehav[ADDSET_DIRPYREQ_THRESHOLD] ? toEdit.dirpyrequalizer.threshold + mods.dirpyrequalizer.threshold : mods.dirpyrequalizer.threshold;
    }

    if (dirpyrequalizer.skinprotect) {
        toEdit.dirpyrequalizer.skinprotect = dontforceSet && options.baBehav[ADDSET_DIRPYREQ_SKINPROTECT] ? toEdit.dirpyrequalizer.skinprotect + mods.dirpyrequalizer.skinprotect : mods.dirpyrequalizer.skinprotect;
    }

    if (dirpyrequalizer.hueskin) {
        toEdit.dirpyrequalizer.hueskin    = mods.dirpyrequalizer.hueskin;
    }

//  if (dirpyrequalizer.algo)       toEdit.dirpyrequalizer.algo     = mods.dirpyrequalizer.algo;
    if (hsvequalizer.hcurve) {
        toEdit.hsvequalizer.hcurve        = mods.hsvequalizer.hcurve;
    }

    if (hsvequalizer.scurve) {
        toEdit.hsvequalizer.scurve        = mods.hsvequalizer.scurve;
    }

    if (hsvequalizer.vcurve) {
        toEdit.hsvequalizer.vcurve        = mods.hsvequalizer.vcurve;
    }

    if (filmSimulation.enabled) {
        toEdit.filmSimulation.enabled     = mods.filmSimulation.enabled;
    }

    if (filmSimulation.clutFilename) {
        toEdit.filmSimulation.clutFilename    = mods.filmSimulation.clutFilename;
    }

    if (filmSimulation.strength) {
        toEdit.filmSimulation.strength        = dontforceSet && options.baBehav[ADDSET_FILMSIMULATION_STRENGTH] ? toEdit.filmSimulation.strength + mods.filmSimulation.strength : mods.filmSimulation.strength;
    }


    // Exif changes are added to the existing ones
    if (exif)
        for (procparams::ExifPairs::const_iterator i = mods.exif.begin(); i != mods.exif.end(); ++i) {
            toEdit.exif[i->first] = i->second;
        }

    // IPTC changes are added to the existing ones
    if (iptc)
        for (procparams::IPTCPairs::const_iterator i = mods.iptc.begin(); i != mods.iptc.end(); ++i) {
            toEdit.iptc[i->first] = i->second;
        }
}

bool RAWParamsEdited::BayerSensor::isUnchanged() const
{
    return  method && imageNum && dcbIterations && dcbEnhance && lmmseIterations/*&& allEnhance*/ &&  greenEq
            && pixelShiftMotion && pixelShiftMotionCorrection && pixelShiftMotionCorrectionMethod && pixelShiftStddevFactorGreen && pixelShiftStddevFactorRed && pixelShiftStddevFactorBlue && pixelShiftEperIso
            && pixelShiftNreadIso && pixelShiftPrnu && pixelShiftSigma && pixelShiftSum && pixelShiftRedBlueWeight && pixelShiftShowMotion && pixelShiftShowMotionMaskOnly
            && pixelShiftAutomatic && pixelShiftNonGreenHorizontal && pixelShiftNonGreenVertical && pixelShiftHoleFill && pixelShiftMedian && pixelShiftMedian3 && pixelShiftNonGreenCross && pixelShiftNonGreenCross2 && pixelShiftNonGreenAmaze && pixelShiftGreen && pixelShiftBlur && pixelShiftSmooth && pixelShiftExp0 && pixelShiftLmmse && pixelShiftEqualBright && pixelShiftEqualBrightChannel
            && linenoise && exBlack0 && exBlack1 && exBlack2 && exBlack3 && exTwoGreen;
}

bool RAWParamsEdited::XTransSensor::isUnchanged() const
{
    return method && exBlackRed && exBlackGreen && exBlackBlue;
}

bool RAWParamsEdited::isUnchanged() const
{
    return  bayersensor.isUnchanged() && xtranssensor.isUnchanged() && caCorrection && caRed && caBlue && hotPixelFilter && deadPixelFilter && hotDeadPixelThresh && darkFrame
            && dfAuto && ff_file && ff_AutoSelect && ff_BlurRadius && ff_BlurType && exPos && exPreser && ff_AutoClipControl && ff_clipControl;
}

bool LensProfParamsEdited::isUnchanged() const
{
    return lcMode && lcpFile && useVign && lfLens;
}

bool RetinexParamsEdited::isUnchanged() const
{
    return enabled && retinexcolorspace && gammaretinex && gam && slope;
}
