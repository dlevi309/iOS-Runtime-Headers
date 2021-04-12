/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARMLImageProcessingTechnique.h>
#import <ARKit/ARTechniqueBusyState.h>

@class ARImageRotationTechnique, ARImageCroppingTechnique, NSString;

@interface ARDepthEstimationTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState> {

	CVPixelBufferPoolRef _outputPixelBufferPool;
	CVPixelBufferPoolRef _scaledOutputPixelBufferPool;
	CVPixelBufferPoolRef _alphaChannelPixelBufferPool;
	ARImageRotationTechnique* _rotationTechnique;
	ARImageCroppingTechnique* _imageCroppingTechnique;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isBusy; 
-(id)init;
-(void)dealloc;
-(id)_fullDescription;
-(double)requiredTimeInterval;
-(id)createResultDataFromTensors:(SCD_Struct_AR17*)arg1 numberOfOutputTensors:(unsigned long long)arg2 imageDataForNeuralNetwork:(id)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(CGSize)arg6 ;
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
-(void)networkModeDidChange:(id)arg1 toMode:(id)arg2 ;
-(long long)numberOfInputChannelsToExpectInNetwork;
@end

