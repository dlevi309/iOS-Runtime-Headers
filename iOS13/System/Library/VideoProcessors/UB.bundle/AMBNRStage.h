/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


#import <UB/UB-Structs.h>
@class PyramidStorage, PyramidStage, DenoiseRemixStage, FigMetalContext, DefringeStage;

@interface AMBNRStage : NSObject {

	AmbnrConfiguration _ambnrConf[4];
	PyramidStorage* _pyramid;
	PyramidStorage* _noiseMapPyramid;
	PyramidStorage* _sharpeningPyramid;
	PyramidFilterParams _pyrFilters[3];
	PyramidStage* _pyramidStage;
	DenoiseRemixStage* _denoiseRemixStage;
	FigMetalContext* _metalContext;
	BOOL _enableDefringingStage;
	PyramidStorage* _defringePyramid;
	DefringeStage* _defringeStage;
	BOOL _inputPyramidGenerationEnabled;
	BOOL _upsampleOffsetEnabled;

}

@property (assign,nonatomic) BOOL inputPyramidGenerationEnabled;              //@synthesize inputPyramidGenerationEnabled=_inputPyramidGenerationEnabled - In the implementation block
@property (assign,nonatomic) BOOL upsampleOffsetEnabled;                      //@synthesize upsampleOffsetEnabled=_upsampleOffsetEnabled - In the implementation block
-(id)createAliasedPyramidFromLumaPyramid:(id)arg1 chromaPyramid:(id)arg2 ;
-(void)selectBlurKernelSize:(AmbnrConfiguration*)arg1 ;
-(int)computeConfiguration:(const exposureParameters*)arg1 staticScene:(BOOL)arg2 dasPlist:(id)arg3 nmPlist:(id)arg4 isLowLight:(BOOL)arg5 ;
-(id)initWithContext:(id)arg1 denoisingOptions:(const DenoiseRemixStageOptions*)arg2 ;
-(int)setResourcesWithPyramid:(id)arg1 denoisedPyramid:(id)arg2 noiseMapPyramid:(id)arg3 sharpeningPyramid:(id)arg4 localGainMapTex:(id)arg5 ;
-(int)runWithExposure:(const exposureParameters*)arg1 staticScene:(BOOL)arg2 dasPlist:(id)arg3 nmPlist:(id)arg4 defringingTuning:(id)arg5 skinMask:(id)arg6 skinMaskExtent:(CGRect)arg7 isLowLight:(BOOL)arg8 ;
-(BOOL)inputPyramidGenerationEnabled;
-(void)setInputPyramidGenerationEnabled:(BOOL)arg1 ;
-(BOOL)upsampleOffsetEnabled;
-(void)setUpsampleOffsetEnabled:(BOOL)arg1 ;
@end

