/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(opaqueCMSampleBufferRef)getNextCaptureSampleBuffer;
-(id)initWithTrack:(id)arg1 timerange:(const SCD_Struct_VC7*)arg2 atInterval:(const SCD_Struct_VC6*)arg3 ;
-(long long)status;
-(void)dealloc;
@end

