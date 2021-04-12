/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCapturePipeline.h>

@class BWVISNode;

@interface FigCaptureVISPipeline : FigCapturePipeline {

	BWVISNode* _visNode;
	BWVISNode* _sdofVISNode;
	CGRect _irisVISCleanOutputRect;

}

@property (nonatomic,readonly) BWVISNode * visNode;                        //@synthesize visNode=_visNode - In the implementation block
@property (nonatomic,readonly) BWVISNode * sdofVISNode;                    //@synthesize sdofVISNode=_sdofVISNode - In the implementation block
@property (nonatomic,readonly) CGRect irisVISCleanOutputRect;              //@synthesize irisVISCleanOutputRect=_irisVISCleanOutputRect - In the implementation block
+(void)initialize;
+(BOOL)visPipelineIsRequiredForFigCaptureVideoStabilizationType:(int)arg1 ;
-(void)dealloc;
-(void)_buildVISPipelineWithUpstreamOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 videoCaptureConnectionConfiguration:(id)arg4 pipelineStage:(id)arg5 sdofPipelineStage:(id)arg6 videoStabilizationType:(int)arg7 motionAttachmentsSource:(int)arg8 fillExtendedRowsOfOutputBuffer:(BOOL)arg9 overCaptureEnabled:(BOOL)arg10 overCaptureVideoStitchingEnabled:(BOOL)arg11 videoStabilizationOverscanOverride:(float)arg12 motionMetadataPreloadingEnabled:(BOOL)arg13 visExecutionMode:(int)arg14 pipelineTraceID:(int)arg15 captureDevice:(id)arg16 ;
-(id)_buildMotionAttachmentsNodeWithUpstreamOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 horizontalSensorBinningFactor:(int)arg4 verticalSensorBinningFactor:(int)arg5 maxSupportedFrameRate:(float)arg6 pipelineStage:(id)arg7 motionAttachmentsSource:(int)arg8 captureDevice:(id)arg9 isPanorama:(BOOL)arg10 optimizesImagesForOfflineVideoStabilization:(BOOL)arg11 provideSourceVideoWithMotionAttachmentsOutput:(BOOL)arg12 provideOfflineVISMotionDataOutput:(BOOL)arg13 attachedMediaKeyToProcess:(id)arg14 ;
-(id)_newVISNodeWithUpstreamOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 videoCaptureConnectionConfiguration:(id)arg4 videoStabilizationType:(int)arg5 motionAttachmentsSource:(int)arg6 fillExtendedRowsOfOutputBuffer:(BOOL)arg7 overCaptureEnabled:(BOOL)arg8 overCaptureVideoStitchingEnabled:(BOOL)arg9 videoStabilizationOverscanOverride:(float)arg10 motionMetadataPreloadingEnabled:(BOOL)arg11 visExecutionMode:(int)arg12 pipelineTraceID:(int)arg13 pipelineStage:(id)arg14 captureDevice:(id)arg15 irisVISCleanOutputRectOut:(CGRect*)arg16 ;
-(id)initWithUpstreamOutput:(id)arg1 graph:(id)arg2 name:(id)arg3 parentPipeline:(id)arg4 videoCaptureConnectionConfiguration:(id)arg5 pipelineStage:(id)arg6 sdofPipelineStage:(id)arg7 videoStabilizationType:(int)arg8 motionAttachmentsSource:(int)arg9 fillExtendedRowsOfOutputBuffer:(BOOL)arg10 overCaptureEnabled:(BOOL)arg11 overCaptureVideoStitchingEnabled:(BOOL)arg12 videoStabilizationOverscanOverride:(float)arg13 motionMetadataPreloadingEnabled:(BOOL)arg14 visExecutionMode:(int)arg15 pipelineTraceID:(int)arg16 captureDevice:(id)arg17 ;
-(BWVISNode *)visNode;
-(BWVISNode *)sdofVISNode;
-(CGRect)irisVISCleanOutputRect;
@end

