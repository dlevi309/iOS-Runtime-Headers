/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoTrackDecoder.h>

@class AVAssetReader, AVAssetReaderTrackOutput;

@interface VCPVideoTrackStandardDecoder : VCPVideoTrackDecoder {

	AVAssetReader* _assetReader;
	AVAssetReaderTrackOutput* _trackOutput;
	opaqueCMSampleBufferRef _nextSample;
	long long _status;

}
-(void)dealloc;
-(long long)status;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(id)initWithTrack:(id)arg1 timerange:(const SCD_Struct_VC28*)arg2 ;
@end

