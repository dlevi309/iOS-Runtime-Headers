/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureRemoteQueueSinkPipeline.h>

@class BWDepthConverterNode, BWNodeOutput, BWPipelineStage, NSString;

@interface FigCaptureDepthDataPipeline : FigCaptureRemoteQueueSinkPipeline {

	BWDepthConverterNode* _depthDataConverterNode;
	BWNodeOutput* _videoAndConvertedDepthDataOutput;
	BWPipelineStage* _pipelineStage;
	NSString* _sourceID;
	int _sourceDeviceType;

}

@property (nonatomic,readonly) NSString * sourceID;                                          //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;                                         //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
@property (nonatomic,readonly) BWPipelineStage * pipelineStage;                              //@synthesize pipelineStage=_pipelineStage - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * videoAndConvertedDepthDataOutput;              //@synthesize videoAndConvertedDepthDataOutput=_videoAndConvertedDepthDataOutput - In the implementation block
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 name:(id)arg4 delegate:(id)arg5 ;
-(BWNodeOutput *)videoAndConvertedDepthDataOutput;
-(NSString *)sourceID;
-(int)sourceDeviceType;
-(int)_buildDepthPipelineWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 delegate:(id)arg4 ;
-(int)_buildDepthConversionPipelineWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 convertedDepthOutputsOut:(id*)arg4 ;
-(int)_buildDepthDataSinkPipeline:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 clientAuditToken:(SCD_Struct_Fi80)arg4 delegate:(id)arg5 ;
-(BWPipelineStage *)pipelineStage;
-(void)dealloc;
@end

