/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCPlaybackEngineEventObserving <NSObject>
@optional
-(void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
-(void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
-(void)engine:(id)arg1 didChangeToItem:(id)arg2;
-(void)engine:(id)arg1 didAchieveLikelyToKeepUpWithItem:(id)arg2;
-(void)engine:(id)arg1 didEndPlaybackOfItem:(id)arg2;
-(void)engine:(id)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3;
-(void)engine:(id)arg1 didResetQueueWithPlaybackContext:(id)arg2 error:(id)arg3;
-(void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;
-(void)engine:(id)arg1 didReachEndOfQueueWithReason:(id)arg2;
-(void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;
-(void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;
-(void)engine:(id)arg1 didChangeAccounts:(id)arg2;
-(void)engineWillBeginStateRestoration:(id)arg1;
-(void)engineDidEndStateRestoration:(id)arg1;

@end

