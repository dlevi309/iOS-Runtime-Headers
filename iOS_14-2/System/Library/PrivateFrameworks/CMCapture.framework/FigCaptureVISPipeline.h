/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCapturePipeline.h>

@class BWMotionAttachmentsNode, BWVISNode;

@interface FigCaptureVISPipeline : FigCapturePipeline {

	BWMotionAttachmentsNode* _motionAttachmentsNode;
	BWVISNode* _visNode;
	BWVISNode* _sdofVISNode;
	CGRect _irisVISCleanOutputRect;

}

@property (nonatomic,readonly) BWMotionAttachmentsNode * motionAttachmentsNode;              //@synthesize motionAttachmentsNode=_motionAttachmentsNode - In the implementation block
@property (nonatomic,readonly) BWVISNode * visNode;                                          //@synthesize visNode=_visNode - In the implementation block
@property (nonatomic,readonly) BWVISNode * sdofVISNode;                                      //@synthesize sdofVISNode=_sdofVISNode - In the implementation block
@property (nonatomic,readonly) CGRect irisVISCleanOutputRect;                                //@synthesize irisVISCleanOutputRect=_irisVISCleanOutputRect - In the implementation block
+(void)initialize;
+(BOOL)visPipelineIsRequiredForFigCaptureVideoStabilizationType:(int)arg1 ;
-(BWMotionAttachmentsNode *)motionAttachmentsNode;
-(BWVISNode *)sdofVISNode;
-(id)initWithUpstreamOutput:(id)arg1 graph:(id)arg2 name:(id)arg3 parentPipeline:(id)arg4 videoCaptureConnectionConfiguration:(id)arg5 pipelineStage:(id)arg6 sdofPipelineStage:(id)arg7 videoStabilizationType:(int)arg8 motionAttachmentsSource:(int)arg9 fillExtendedRowsOfOutputBuffer:(BOOL)arg10 overCaptureEnabled:(BOOL)arg11 videoStabilizationOverscanOverride:(float)arg12 motionMetadataPreloadingEnabled:(BOOL)arg13 visExecutionMode:(int)arg14 pipelineTraceID:(int)arg15 captureDevice:(id)arg16 outputDimensions:(SCD_Struct_BW2)arg17 P3ToBT2020ConversionEnabled:(BOOL)arg18 ;
-(id)_newVISNodeWithUpstreamOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 videoCaptureConnectionConfiguration:(id)arg4 videoStabilizationType:(int)arg5 motionAttachmentsSource:(int)arg6 fillExtendedRowsOfOutputBuffer:(BOOL)arg7 overCaptureEnabled:(BOOL)arg8 videoStabilizationOverscanOverride:(float)arg9 motionMetadataPreloadingEnabled:(BOOL)arg10 visExecutionMode:(int)arg11 pipelineTraceID:(int)arg12 pipelineStage:(id)arg13 captureDevice:(id)arg14 outputDimensions:(SCD_Struct_BW2)arg15 irisVISCleanOutputRectOut:(CGRect*)arg16 P3ToBT2020ConversionEnabled:(BOOL)arg17 ;
-(id)_buildMotionAttachmentsNodeWithUpstreamOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 horizontalSensorBinningFactor:(int)arg4 verticalSensorBinningFactor:(int)arg5 maxSupportedFrameRate:(float)arg6 pipelineStage:(id)arg7 motionAttachmentsSource:(int)arg8 captureDevice:(id)arg9 isPanorama:(BOOL)arg10 optimizesImagesForOfflineVideoStabilization:(BOOL)arg11 provideSourceVideoWithMotionAttachmentsOutput:(BOOL)arg12 provideOfflineVISMotionDataOutput:(BOOL)arg13 motionAttachmentsNodeOut:(id*)arg14 ;
-(void)_buildVISPipelineWithUpstreamOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 videoCaptureConnectionConfiguration:(id)arg4 pipelineStage:(id)arg5 sdofPipelineStage:(id)arg6 videoStabilizationType:(int)arg7 motionAttachmentsSource:(int)arg8 fillExtendedRowsOfOutputBuffer:(BOOL)arg9 overCaptureEnabled:(BOOL)arg10 videoStabilizationOverscanOverride:(float)arg11 motionMetadataPreloadingEnabled:(BOOL)arg12 visExecutionMode:(int)arg13 pipelineTraceID:(int)arg14 captureDevice:(id)arg15 outputDimensions:(SCD_Struct_BW2)arg16 P3ToBT2020ConversionEnabled:(BOOL)arg17 ;
-(CGRect)irisVISCleanOutputRect;
-(void)dealloc;
-(BWVISNode *)visNode;
@end

