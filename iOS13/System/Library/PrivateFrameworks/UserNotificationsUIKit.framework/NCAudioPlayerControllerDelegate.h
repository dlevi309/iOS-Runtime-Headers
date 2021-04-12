/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol NCAudioPlayerControllerDelegate <NSObject>
@optional
-(void)playerController:(id)arg1 didChangeToCurrentTime:(float)arg2;
-(void)playerController:(id)arg1 willChangeToDuration:(double)arg2;
-(void)playerController:(id)arg1 didChangeToDuration:(double)arg2;
-(void)playerController:(id)arg1 willChangeToPlaybackState:(long long)arg2;
-(void)playerController:(id)arg1 didChangeToPlaybackState:(long long)arg2;
-(void)playerController:(id)arg1 willChangeToRate:(float)arg2;
-(void)playerController:(id)arg1 didChangeToRate:(float)arg2;
-(void)playerController:(id)arg1 willChangeToStatus:(long long)arg2;
-(void)playerController:(id)arg1 didChangeToStatus:(long long)arg2;
-(void)playerController:(id)arg1 willSeekToTime:(float)arg2;
-(void)playerController:(id)arg1 didSeekToTime:(float)arg2;

@end

