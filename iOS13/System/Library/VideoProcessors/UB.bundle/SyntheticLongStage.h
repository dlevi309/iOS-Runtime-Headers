/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol SidecarWriter;
#import <UB/UB-Structs.h>
@class FigMetalContext, SyntheticLongShaders;

@interface SyntheticLongStage : NSObject {

	FigMetalContext* _metal;
	SyntheticLongShaders* _shaders;
	id<SidecarWriter> _sidecarWriter;

}

@property (assign,nonatomic,__weak) id<SidecarWriter> sidecarWriter;              //@synthesize sidecarWriter=_sidecarWriter - In the implementation block
+(int)prewarmShaders:(id)arg1 ;
+(int)_fillConstants:(SyntheticLongFuseBandsConsts*)arg1 slPlist:(id)arg2 ev0ExposureParams:(const exposureParameters*)arg3 ;
+(int)_fillConstantsForBand:(int)arg1 consts:(SyntheticLongFuseBandsConsts*)arg2 slPlist:(id)arg3 ev0ExposureParams:(const exposureParameters*)arg4 ;
-(void)dealloc;
-(id)initWithMetalContext:(id)arg1 ;
-(void)purgeResources;
-(int)pyramidDownscale:(id)arg1 cscParams:(const ColorSpaceConversionParameters*)arg2 ;
-(void)setSidecarWriter:(id<SidecarWriter>)arg1 ;
-(int)doSyntheticLongWithBands:(id)arg1 slFuseEv0Plist:(id)arg2 slFuseLongPlist:(id)arg3 slParameters:(const SyntheticLongParameters*)arg4 intermediatePyramid:(id)arg5 fusedPyramid:(id)arg6 noiseDivisorTex:(id)arg7 realLongNoiseDivisorTex:(id)arg8 lscGainsTex:(id)arg9 intermediateMetadata:(id)arg10 ;
-(id<SidecarWriter>)sidecarWriter;
-(int)_fuse3Ev0:(id)arg1 slParameters:(const SyntheticLongParameters*)arg2 slPlist:(id)arg3 lscGainsTex:(id)arg4 outputPyramid:(id)arg5 outputWeightsPyramid:(id)arg6 ;
-(int)_fuseInLong:(id)arg1 slParameters:(const SyntheticLongParameters*)arg2 slPlist:(id)arg3 lscGainsTex:(id)arg4 fusedEv0sPyramid:(id)arg5 outputFusedPyramid:(id)arg6 noiseDivisorTex:(id)arg7 realLongNoiseDivisorTex:(id)arg8 ;
-(int)_do3Ev0PlusRealLongWithBands:(id)arg1 slFuseEv0Plist:(id)arg2 slFuseLongPlist:(id)arg3 slParameters:(const SyntheticLongParameters*)arg4 intermediatePyramid:(id)arg5 fusedPyramid:(id)arg6 noiseDivisorTex:(id)arg7 realLongNoiseDivisorTex:(id)arg8 lscGainsTex:(id)arg9 intermediateMetadata:(id)arg10 ;
-(int)_doSyntheticLongWithBands:(id)arg1 slPlist:(id)arg2 slParameters:(const SyntheticLongParameters*)arg3 fusedPyramid:(id)arg4 noiseDivisorTex:(id)arg5 lscGainsTex:(id)arg6 intermediateMetadata:(id)arg7 ;
@end

