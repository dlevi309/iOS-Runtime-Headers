/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVVideoPlaybackAttemptTracking <NSObject>
@property (getter=hasAttemptedPlayback,nonatomic,readonly) BOOL attemptedPlayback; 
@property (setter=onPlaybackAttempt:,nonatomic,copy) id playbackAttemptBlock; 
@required
-(id)playbackAttemptBlock;
-(BOOL)hasAttemptedPlayback;
-(void)onPlaybackAttempt:(/*^block*/id)arg1;

@end

