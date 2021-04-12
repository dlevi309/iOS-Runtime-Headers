/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoTrackDecoder.h>

@class AVAssetReader, AVAssetReaderTrackOutput;

@interface VCPVideoTrackSubsamplingDecoder : VCPVideoTrackDecoder {

	AVAssetReader* _assetReader;
	AVAssetReaderTrackOutput* _trackOutput;
	SCD_Struct_VC6 _decodeEnd;
	SCD_Struct_VC6 _sampleDuration;
	SCD_Struct_VC6 _nextSampleTime;
	opaqueCMSampleBufferRef _currentSample;
	opaqueCMSampleBufferRef _nextSample;

}
-(void)dealloc;
-(long long)status;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(opaqueCMSampleBufferRef)getNextCaptureSampleBuffer;
-(id)initWithTrack:(id)arg1 timerange:(const SCD_Struct_VC28*)arg2 atInterval:(const SCD_Struct_VC6*)arg3 ;
@end

