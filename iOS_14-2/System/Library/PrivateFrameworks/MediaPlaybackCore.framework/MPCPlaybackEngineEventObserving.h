/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCPlaybackEngineEventObserving <NSObject>
@optional
-(void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;
-(void)engine:(id)arg1 didReachEndOfQueueWithReason:(id)arg2;
-(void)engine:(id)arg1 didAchieveLikelyToKeepUpWithItem:(id)arg2;
-(void)engineDidLoseMediaServices:(id)arg1;
-(void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
-(void)engineWillBeginStateRestoration:(id)arg1;
-(void)engine:(id)arg1 didChangeAccounts:(id)arg2;
-(void)engine:(id)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3;
-(void)engineDidEndStateRestoration:(id)arg1;
-(void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
-(void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;
-(void)engineDidResetMediaServices:(id)arg1;
-(void)engine:(id)arg1 didChangeActionAtQueueEnd:(long long)arg2;
-(void)engine:(id)arg1 didEndPlaybackOfItem:(id)arg2;
-(void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;
-(void)engine:(id)arg1 didChangeToItem:(id)arg2;
-(void)engine:(id)arg1 didResetQueueWithPlaybackContext:(id)arg2 error:(id)arg3;

@end

