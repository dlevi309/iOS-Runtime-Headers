/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

