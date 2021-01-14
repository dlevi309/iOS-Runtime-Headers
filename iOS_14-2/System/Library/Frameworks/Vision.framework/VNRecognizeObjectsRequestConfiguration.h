/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNRecognizeObjectsRequestConfiguration : VNImageBasedRequestConfiguration {

	unsigned long long _imageCropAndScaleOption;
	BOOL _useImageAnalyzerScaling;
	float _modelMinimumDetectionConfidence;
	float _modelNonMaximumSuppressionThreshold;

}

@property (assign) unsigned long long imageCropAndScaleOption;              //@synthesize imageCropAndScaleOption=_imageCropAndScaleOption - In the implementation block
@property (assign) BOOL useImageAnalyzerScaling;                            //@synthesize useImageAnalyzerScaling=_useImageAnalyzerScaling - In the implementation block
@property (assign) float modelMinimumDetectionConfidence;                   //@synthesize modelMinimumDetectionConfidence=_modelMinimumDetectionConfidence - In the implementation block
@property (assign) float modelNonMaximumSuppressionThreshold;               //@synthesize modelNonMaximumSuppressionThreshold=_modelNonMaximumSuppressionThreshold - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(BOOL)useImageAnalyzerScaling;
-(void)setUseImageAnalyzerScaling:(BOOL)arg1 ;
-(float)modelMinimumDetectionConfidence;
-(void)setModelMinimumDetectionConfidence:(float)arg1 ;
-(float)modelNonMaximumSuppressionThreshold;
-(void)setModelNonMaximumSuppressionThreshold:(float)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

