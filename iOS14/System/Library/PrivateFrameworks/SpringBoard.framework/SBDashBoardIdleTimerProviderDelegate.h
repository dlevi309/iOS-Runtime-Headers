/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBDashBoardIdleTimerProviderDelegate
@required
-(void)idleTimerWillRefresh:(id)arg1;
-(void)idleTimerDidRefresh:(id)arg1;
-(id)dashBoardIdleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 reason:(id)arg3;
-(void)idleTimerDidExpire:(id)arg1;
-(void)idleTimerDidChange:(id)arg1;
-(void)idleTimerDidWarn:(id)arg1;

@end

