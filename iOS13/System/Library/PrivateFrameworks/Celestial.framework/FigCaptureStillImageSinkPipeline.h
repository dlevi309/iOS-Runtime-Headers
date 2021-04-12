/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/FigCaptureSinkPipeline.h>
#import <libobjc.A.dylib/FigCaptureStillImageSinkPipeline.h>

@class BWFigVideoCaptureDevice, BWStillImageCoordinatorNode, BWStillImageSampleBufferSinkNode, BWStillImageBravoDisparityNode, BWDepthConverterNode, BWPortraitHDRStagingNode, BWSISNode, NSString, NSArray;

@interface FigCaptureStillImageSinkPipeline : FigCaptureSinkPipeline <FigCaptureStillImageSinkPipeline> {

	BWFigVideoCaptureDevice* _captureDevice;
	BWStillImageCoordinatorNode* _stillImageCoordinatorNode;
	BWStillImageSampleBufferSinkNode* _stillImageSinkNode;
	BWStillImageBravoDisparityNode* _stillImageDisparityNode;
	BWDepthConverterNode* _stillImageDepthConverterNode;
	BWPortraitHDRStagingNode* _portraitHDRStagingNode;
	BWSISNode* _legacySISNode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * nodes; 
@property (nonatomic,readonly) NSString * sinkID; 
@property (nonatomic,readonly) BWStillImageCoordinatorNode * stillImageCoordinatorNode; 
@property (nonatomic,readonly) BWStillImageSampleBufferSinkNode * stillImageSinkNode; 
@property (nonatomic,readonly) BWPortraitHDRStagingNode * portraitHDRStagingNode; 
+(void)initialize;
-(void)dealloc;
-(void)enablePrepareTimeAllocationsForDeferredPrepare;
-(BWStillImageCoordinatorNode *)stillImageCoordinatorNode;
-(id)initWithConfiguration:(id)arg1 captureDevice:(id)arg2 sourceOutputsByPortType:(id)arg3 captureStatusDelegate:(id)arg4 inferenceScheduler:(id)arg5 graph:(id)arg6 name:(id)arg7 ;
-(BWStillImageSampleBufferSinkNode *)stillImageSinkNode;
-(BWPortraitHDRStagingNode *)portraitHDRStagingNode;
-(int)_buildStillImageSinkPipelineWithConfiguration:(id)arg1 sourceOutputsByPortType:(id)arg2 captureStatusDelegate:(id)arg3 inferenceScheduler:(id)arg4 graph:(id)arg5 ;
@end

