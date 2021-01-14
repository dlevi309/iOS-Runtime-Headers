/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@interface TVPPlaybackUtilities : NSObject
+(double)playedThresholdTimeForDuration:(double)arg1 ;
+(double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2 ;
+(double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2 playedThreshold:(id)arg3 ;
+(long long)blueDotStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(BOOL)arg3 playCount:(unsigned long long)arg4 respectPlayCount:(BOOL)arg5 ;
+(long long)blueDotStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(BOOL)arg3 playCount:(unsigned long long)arg4 ;
@end

