/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBRestartManagerDelegate <NSObject>
@optional
-(void)restartManagerWillShutdown:(id)arg1;
-(void)restartManagerWillReboot:(id)arg1;
-(void)restartManager:(id)arg1 willRestartWithTransitionRequest:(id)arg2;
-(void)restartManagerExitImminent:(id)arg1;

@end

