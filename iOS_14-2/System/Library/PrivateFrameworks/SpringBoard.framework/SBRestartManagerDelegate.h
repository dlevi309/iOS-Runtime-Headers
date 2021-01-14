/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBRestartManagerDelegate <NSObject>
@optional
-(void)restartManagerExitImminent:(id)arg1;
-(void)restartManagerWillReboot:(id)arg1;
-(void)restartManager:(id)arg1 willRestartWithTransitionRequest:(id)arg2;
-(void)restartManagerWillShutdown:(id)arg1;

@end

