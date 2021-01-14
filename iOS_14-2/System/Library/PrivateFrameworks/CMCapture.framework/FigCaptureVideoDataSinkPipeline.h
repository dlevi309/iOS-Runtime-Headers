/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/FigCaptureRemoteQueueSinkPipeline.h>

@class BWFigVideoCaptureDevice, FigCaptureVISPipeline, BWPixelTransferNode, BWNodeOutput, NSString;

@interface FigCaptureVideoDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {

	BWFigVideoCaptureDevice* _captureDevice;
	FigCaptureVISPipeline* _visPipeline;
	BWPixelTransferNode* _videoDataConverterRotatorNode;
	BWNodeOutput* _faceTrackingVideoCaptureOutput;
	BWNodeOutput* _offlineVISMotionDataCaptureOutput;
	NSString* _sourceID;
	int _sourceDeviceType;

}

@property (nonatomic,readonly) NSString * sourceID;                                           //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;                                          //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * faceTrackingVideoCaptureOutput;                 //@synthesize faceTrackingVideoCaptureOutput=_faceTrackingVideoCaptureOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * offlineVISMotionDataCaptureOutput;              //@synthesize offlineVISMotionDataCaptureOutput=_offlineVISMotionDataCaptureOutput - In the implementation block
+(void)initialize;
-(int)_buildVideoDataSinkPipelineWithConfiguration:(id)arg1 sourceVideoOutput:(id)arg2 captureDevice:(id)arg3 graph:(id)arg4 delegate:(id)arg5 ;
-(BWNodeOutput *)faceTrackingVideoCaptureOutput;
-(BWNodeOutput *)offlineVISMotionDataCaptureOutput;
-(id)initWithConfiguration:(id)arg1 sourceVideoOutput:(id)arg2 captureDevice:(id)arg3 graph:(id)arg4 name:(id)arg5 delegate:(id)arg6 ;
-(NSString *)sourceID;
-(int)sourceDeviceType;
-(void)dealloc;
@end

