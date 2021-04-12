/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

@class UIView, SBFLockScreenDateView;


@protocol SBFScreenWakeAnimationTarget <NSObject>
@property (nonatomic,readonly) UIView * superviewForDateViewAnimation; 
@property (nonatomic,readonly) SBFLockScreenDateView * dateView; 
@required
-(SBFLockScreenDateView *)dateView;
-(void)updateWakeEffectsForWake:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)updateWakeEffectsForWake:(BOOL)arg1;
-(UIView *)superviewForDateViewAnimation;

@end

