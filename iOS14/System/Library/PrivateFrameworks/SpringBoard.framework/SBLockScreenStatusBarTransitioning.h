/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBLockScreenStatusBarTransitioning <NSObject>
@property (nonatomic,readonly) BOOL shouldShowLockStatusBarTime; 
@required
-(void)updateStatusBarForLockScreenTeardown;
-(void)updateStatusBarForLockScreenComeback;
-(BOOL)shouldShowLockStatusBarTime;

@end

