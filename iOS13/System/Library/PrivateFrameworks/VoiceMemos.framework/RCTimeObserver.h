/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


@protocol RCTimeObserver <NSObject>
@optional
-(void)timeController:(id)arg1 didChangeRate:(float)arg2;
-(void)timeController:(id)arg1 didChangeState:(long long)arg2;
-(void)timeController:(id)arg1 didChangeCurrentTime:(double)arg2;
-(void)timeController:(id)arg1 didChangeCurrentTime:(double)arg2 didJumpTime:(BOOL)arg3;
-(void)timeController:(id)arg1 didChangeCurrentTime:(double)arg2 didChangeDuration:(double)arg3;

@end

