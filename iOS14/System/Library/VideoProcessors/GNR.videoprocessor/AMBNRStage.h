/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@class PyramidStage, DenoiseRemixStage, PyramidStorage;

@interface AMBNRStage : NSObject {

	PyramidStage* _pyramidStage;
	DenoiseRemixStage* _denoiseRemixStage;
	AmbnrConfiguration _ambnrConf[4];
	PyramidStorage* _pyramid;
	PyramidFilterParams _pyrFilters[3];
	BOOL _pyramidOffsetsMatchStock;

}
-(void)selectBlurKernelSize:(AmbnrConfiguration*)arg1 ;
-(void)computeConfiguration:(exposureParameters*)arg1 tuningParams:(id)arg2 highGainTuningParams:(id)arg3 correctBias:(BOOL)arg4 ;
-(id)init:(id)arg1 onlySingleImageDenoising:(BOOL)arg2 ;
-(int)setResourcesWithPyramid:(id)arg1 laplacianPyramid:(id)arg2 denoisedPyramid:(id)arg3 ;
-(int)run:(CVBufferRef)arg1 metalContext:(id)arg2 exposure:(exposureParameters*)arg3 tuningParams:(id)arg4 highGainTuningParams:(id)arg5 ltmBuffers:(id)arg6 correctBias:(BOOL)arg7 ;
@end

