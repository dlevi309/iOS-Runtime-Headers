/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARMLImageProcessingTechnique.h>

@class ARImageRotationTechnique;

@interface ARSegmentationTechnique : ARMLImageProcessingTechnique {

	CVPixelBufferPoolRef _outputSegmentationPixelBufferPool;
	CVPixelBufferPoolRef _scaledSegmentationOutputPixelBufferPool;
	ARImageRotationTechnique* _segmentationRotationTechnique;
	CVBufferRef _previousSegmentationData;
	int frameCount;

}
-(id)init;
-(void)dealloc;
-(id)_fullDescription;
-(double)requiredTimeInterval;
-(void)_startLoadingMLModelSignpost;
-(void)_endLoadingMLModelSignpost;
-(void)_startMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(CGSize)arg3 ;
-(void)_endMLCreateResultSignpostWithTimestamp:(double)arg1 ;
-(id)resultDataClasses;
-(BOOL)isLoadedModelVersionCorrect:(id)arg1 ;
-(BOOL)preProcessNetworkInputImage:(CVBufferRef)arg1 ;
-(id)createResultDataFromTensors:(SCD_Struct_AR17*)arg1 numberOfOutputTensors:(unsigned long long)arg2 inputImageData:(id)arg3 rotationNeeded:(long long)arg4 regionOfInterest:(CGSize)arg5 ;
-(id)createSegmentationResultDataFromTensors:(SCD_Struct_AR17*)arg1 inputImageData:(id)arg2 rotationNeeded:(long long)arg3 regionOfInterest:(CGSize)arg4 ;
-(id)runNeuralNetworkWithImageData:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(CGSize)arg3 rotationOfResultTensor:(long long)arg4 ;
@end

