/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBLockScreenIdleTimerControlling <NSObject>
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator; 
@optional
-(void)addIdleTimerDisabledAssertionReason:(id)arg1;
-(void)removeIdleTimerDisabledAssertionReason:(id)arg1;
-(id)requestIdleTimerBehaviorForReason:(id)arg1;

@required
-(void)setIdleTimerCoordinator:(id)arg1;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;

@end

