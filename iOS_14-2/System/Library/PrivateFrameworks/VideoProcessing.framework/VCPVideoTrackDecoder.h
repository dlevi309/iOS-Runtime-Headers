/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class AVAssetTrack;

@interface VCPVideoTrackDecoder : NSObject {

	AVAssetTrack* _track;

}
+(SCD_Struct_VC69)decodeDimensionsForTrack:(id)arg1 ;
-(id)initWithTrack:(id)arg1 ;
-(id)init;
-(id)settings;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(opaqueCMSampleBufferRef)getNextCaptureSampleBuffer;
-(long long)status;
@end

