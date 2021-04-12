/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


#import <AVKit/AVKit-Structs.h>
@class AVAssetTrack, NSMutableArray;

@interface AVTimecodeController : NSObject {

	long long _frameCount;
	AVAssetTrack* _videoTrack;
	AVAssetTrack* _timecodeTrack;
	NSMutableArray* _timecodes;
	CVSMPTETime _maxTimecode;
	long long _maxFrameNumber;
	id _timeObserver;
	SCD_Struct_AV10 _observationInterval;

}

@property (nonatomic,retain) AVAssetTrack * timecodeTrack;                       //@synthesize timecodeTrack=_timecodeTrack - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AV10 observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
-(id)initWithTimecodeTrack:(id)arg1 videoTrack:(id)arg2 ;
-(void)calculateMaxFrameAndTimecode;
-(id)maxTimecodeString;
-(id)maxFrameCountString;
-(long long)calculateFrameNumberAtCMTime:(SCD_Struct_AV10)arg1 ;
-(id)calculateTimecodeAtFrame:(long long)arg1 ;
-(id)timecodeForFrameNumber32UsingFormatDescription:(opaqueCMFormatDescriptionRef)arg1 timecodeStartFrame:(long long)arg2 ;
-(CVSMPTETime)timecodeForFrameNumber64UsingCachedDescription:(long long)arg1 ;
-(CVSMPTETime)timecodeForOffset:(long long)arg1 from:(long long)arg2 timecode:(id)arg3 ;
-(long long)calculateFrameNumberAtTimeInterval:(double)arg1 ;
-(double)timeIntervalForFrameNumber:(long long)arg1 ;
-(void)cacheTimecodeDescriptionForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)validateCMTime:(SCD_Struct_AV10)arg1 ;
-(BOOL)readTimecodes;
-(BOOL)timecodeAvailable;
-(AVAssetTrack *)timecodeTrack;
-(void)setTimecodeTrack:(AVAssetTrack *)arg1 ;
-(SCD_Struct_AV10)observationInterval;
@end

