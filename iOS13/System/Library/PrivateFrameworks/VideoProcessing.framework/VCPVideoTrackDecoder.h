/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class AVAssetTrack;

@interface VCPVideoTrackDecoder : NSObject {

	AVAssetTrack* _track;

}
+(SCD_Struct_VC61)decodeDimensionsForTrack:(id)arg1 ;
-(id)init;
-(long long)status;
-(id)settings;
-(id)initWithTrack:(id)arg1 ;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(opaqueCMSampleBufferRef)getNextCaptureSampleBuffer;
@end

