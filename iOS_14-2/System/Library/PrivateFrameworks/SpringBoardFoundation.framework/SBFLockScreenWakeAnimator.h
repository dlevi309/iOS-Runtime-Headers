/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFScreenWakeAnimationTarget.h>

@class UIView, SBFLockScreenDateView, UIVisualEffectView, NSString;

@interface SBFLockScreenWakeAnimator : NSObject <SBFScreenWakeAnimationTarget> {

	long long _wakeState;
	UIVisualEffectView* _wakeEffectView;
	UIView* _superviewForDateViewAnimation;
	SBFLockScreenDateView* _dateView;

}

@property (assign,nonatomic) long long wakeState;                                     //@synthesize wakeState=_wakeState - In the implementation block
@property (assign,nonatomic,__weak) UIVisualEffectView * wakeEffectView;              //@synthesize wakeEffectView=_wakeEffectView - In the implementation block
@property (nonatomic,retain) UIView * superviewForDateViewAnimation;                  //@synthesize superviewForDateViewAnimation=_superviewForDateViewAnimation - In the implementation block
@property (nonatomic,retain) SBFLockScreenDateView * dateView;                        //@synthesize dateView=_dateView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBFLockScreenDateView *)dateView;
-(void)setDateView:(SBFLockScreenDateView *)arg1 ;
-(UIView *)superviewForDateViewAnimation;
-(long long)wakeState;
-(UIVisualEffectView *)wakeEffectView;
-(void)setWakeEffectView:(UIVisualEffectView *)arg1 ;
-(void)updateWakeEffectsForWake:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(long long)_targetWakeStateForFadeIn:(BOOL)arg1 ;
-(void)setWakeState:(long long)arg1 ;
-(id)_wakeEffectsForAnimatingWakeState:(long long)arg1 ;
-(id)_wakeEffectsForPersistentWakeState:(long long)arg1 ;
-(void)updateWakeEffectsForWake:(BOOL)arg1 ;
-(void)setSuperviewForDateViewAnimation:(UIView *)arg1 ;
@end

