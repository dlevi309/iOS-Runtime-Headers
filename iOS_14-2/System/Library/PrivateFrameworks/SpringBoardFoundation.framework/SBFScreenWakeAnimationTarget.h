/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

@class UIView, SBFLockScreenDateView;


@protocol SBFScreenWakeAnimationTarget <NSObject>
@property (nonatomic,readonly) UIView * superviewForDateViewAnimation; 
@property (nonatomic,readonly) SBFLockScreenDateView * dateView; 
@required
-(SBFLockScreenDateView *)dateView;
-(UIView *)superviewForDateViewAnimation;
-(void)updateWakeEffectsForWake:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)updateWakeEffectsForWake:(BOOL)arg1;

@end

