/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoTrackDecoder.h>

@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;
@class AVAssetReader, AVAssetReaderSampleReferenceOutput, NSObject;

@interface VCPVideoTrackSyncDecoder : VCPVideoTrackDecoder {

	AVAssetReader* _assetReader;
	AVAssetReaderSampleReferenceOutput* _trackReader;
	SCD_Struct_VC28 _timerange;
	BOOL _launchOnce;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_dispatch_semaphore> _inputSemaphore;
	NSObject*<OS_dispatch_semaphore> _outputSemaphore;
	BOOL _cancelDecode;
	int _decodeError;
	BOOL _decodeFinished;
	int _decodedFrames;
	int _outputFrameIdx;
	opaqueCMSampleBuffer* _sampleBuffer[2];

}
-(void)dealloc;
-(long long)status;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(id)initWithTrack:(id)arg1 timerange:(const SCD_Struct_VC28*)arg2 ;
-(int)findNextSample:(BOOL)arg1 timerange:(SCD_Struct_VC28*)arg2 ;
-(int)decodeSample:(SCD_Struct_VC28)arg1 sample:(opaqueCMSampleBuffer*)arg2 ;
-(void)decodeTask;
@end

