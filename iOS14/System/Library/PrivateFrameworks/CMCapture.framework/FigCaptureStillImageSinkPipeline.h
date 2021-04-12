/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/FigCaptureSinkPipeline.h>
#import <libobjc.A.dylib/FigCaptureStillImageSinkPipeline.h>

@class BWFigVideoCaptureDevice, BWStillImageCoordinatorNode, BWStillImageSampleBufferSinkNode, BWStillImageBravoDisparityNode, BWDepthConverterNode, BWPortraitHDRStagingNode, BWSISNode, NSArray, NSString;

@interface FigCaptureStillImageSinkPipeline : FigCaptureSinkPipeline <FigCaptureStillImageSinkPipeline> {

	BWFigVideoCaptureDevice* _captureDevice;
	BWStillImageCoordinatorNode* _stillImageCoordinatorNode;
	BWStillImageSampleBufferSinkNode* _stillImageSinkNode;
	BWStillImageBravoDisparityNode* _stillImageDisparityNode;
	BWDepthConverterNode* _stillImageDepthConverterNode;
	BWPortraitHDRStagingNode* _portraitHDRStagingNode;
	BWSISNode* _legacySISNode;

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
-(id)initWithConfiguration:(id)arg1 captureDevice:(id)arg2 sourceOutputsByPortType:(id)arg3 captureStatusDelegate:(id)arg4 inferenceScheduler:(id)arg5 graph:(id)arg6 name:(id)arg7 ;
-(void)enablePrepareTimeAllocationsForDeferredPrepare;
-(BWPortraitHDRStagingNode *)portraitHDRStagingNode;
-(int)_buildStillImageSinkPipelineWithConfiguration:(id)arg1 sourceOutputsByPortType:(id)arg2 captureStatusDelegate:(id)arg3 inferenceScheduler:(id)arg4 graph:(id)arg5 ;
-(BWStillImageCoordinatorNode *)stillImageCoordinatorNode;
-(BWStillImageSampleBufferSinkNode *)stillImageSinkNode;
-(void)dealloc;
@end

