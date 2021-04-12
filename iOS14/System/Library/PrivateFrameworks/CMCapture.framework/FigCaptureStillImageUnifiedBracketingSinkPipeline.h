/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/FigCaptureSinkPipeline.h>
#import <libobjc.A.dylib/FigCaptureStillImageSinkPipeline.h>

@class NSArray, NSString, BWStillImageCoordinatorNode, BWStillImageSampleBufferSinkNode, BWPortraitHDRStagingNode, BWStillImageBravoDisparityNode, BWDepthConverterNode;

@interface FigCaptureStillImageUnifiedBracketingSinkPipeline : FigCaptureSinkPipeline <FigCaptureStillImageSinkPipeline> {

	unsigned _pipelineStagePriority;
	unsigned _inferencePriority;
	BWStillImageCoordinatorNode* _stillImageCoordinatorNode;
	BWStillImageSampleBufferSinkNode* _stillImageSinkNode;
	BWStillImageBravoDisparityNode* _stillImageDisparityNode;
	BWDepthConverterNode* _stillImageDepthConverterNode;
	BWPortraitHDRStagingNode* _portraitHDRStagingNode;

}

@property (nonatomic,readonly) NSArray * nodes; 
@property (nonatomic,readonly) NSString * sinkID; 
@property (nonatomic,readonly) BWStillImageCoordinatorNode * stillImageCoordinatorNode; 
@property (nonatomic,readonly) BWStillImageSampleBufferSinkNode * stillImageSinkNode; 
@property (nonatomic,readonly) BWPortraitHDRStagingNode * portraitHDRStagingNode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)enablePrepareTimeAllocationsForDeferredPrepare;
-(BWPortraitHDRStagingNode *)portraitHDRStagingNode;
-(id)initWithConfiguration:(id)arg1 captureDevice:(id)arg2 sourceOutputsByPortType:(id)arg3 pointCloudCaptureDevice:(id)arg4 pointCloudSourceOutput:(id)arg5 captureStatusDelegate:(id)arg6 inferenceScheduler:(id)arg7 graph:(id)arg8 name:(id)arg9 ;
-(int)_buildStillImageSinkPipelineWithConfiguration:(id)arg1 captureDevice:(id)arg2 sourceOutputsByPortType:(id)arg3 pointCloudCaptureDevice:(id)arg4 pointCloudSourceOutput:(id)arg5 captureStatusDelegate:(id)arg6 inferenceScheduler:(id)arg7 graph:(id)arg8 ;
-(int)_buildRedEyeReductionSubPipelineWithName:(id)arg1 pipelineStage:(id)arg2 graph:(id)arg3 sensorConfigurationsByPortType:(id)arg4 inferenceScheduler:(id)arg5 captureDevice:(id)arg6 subPipelineInputOut:(id*)arg7 subPipelineOutputOut:(id*)arg8 ;
-(int)_addLandmarksInferenceToNode:(id)arg1 ;
-(int)_addMattingInferenceToNode:(id)arg1 withVersion:(unsigned)arg2 refinedDepthEnabled:(BOOL)arg3 downsamplingFactor:(int)arg4 enabledSemantics:(unsigned)arg5 metalCommandQueue:(id)arg6 mattingsensorConfigurationsByPortType:(id)arg7 clientIsCameraOrDerivative:(BOOL)arg8 ;
-(int)_buildScaleAndEncodeSubPipelineWithName:(id)arg1 pipelineStage:(id)arg2 graph:(id)arg3 nodeConfiguration:(id)arg4 stillImageSinkPipelineWithConfiguration:(id)arg5 sensorConfigurationsByPortType:(id)arg6 supportsScaling:(BOOL)arg7 provideMeteorHeadroom:(BOOL)arg8 providePostEncodeInferences:(BOOL)arg9 semanticDevelopmentVersion:(int)arg10 constituentPhotoDeliveryEnabled:(BOOL)arg11 inferenceScheduler:(id)arg12 subPipelineInputOut:(id*)arg13 subPipelineOutputOut:(id*)arg14 captureDevice:(id)arg15 ;
-(BWStillImageCoordinatorNode *)stillImageCoordinatorNode;
-(BWStillImageSampleBufferSinkNode *)stillImageSinkNode;
-(void)dealloc;
@end

