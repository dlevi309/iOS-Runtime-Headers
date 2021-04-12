/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUIconContentView.h>

@class UIImageView, HUNonAnimatingTintImageView, UIVisualEffectView, HUDynamicStateAnimationApplier;

@interface HUFanIconContentView : HUIconContentView {

	UIImageView* _baseView;
	HUNonAnimatingTintImageView* _bladesView;
	UIVisualEffectView* _baseVisualEffectView;
	UIVisualEffectView* _bladesVisualEffectView;
	unsigned long long _rotationState;
	double _rotationSpeed;
	HUDynamicStateAnimationApplier* _speedRampApplier;

}

@property (nonatomic,retain) UIImageView * baseView;                                         //@synthesize baseView=_baseView - In the implementation block
@property (nonatomic,retain) HUNonAnimatingTintImageView * bladesView;                       //@synthesize bladesView=_bladesView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * baseVisualEffectView;                      //@synthesize baseVisualEffectView=_baseVisualEffectView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * bladesVisualEffectView;                    //@synthesize bladesVisualEffectView=_bladesVisualEffectView - In the implementation block
@property (assign,nonatomic) unsigned long long rotationState;                               //@synthesize rotationState=_rotationState - In the implementation block
@property (assign,nonatomic) double rotationSpeed;                                           //@synthesize rotationSpeed=_rotationSpeed - In the implementation block
@property (nonatomic,retain) HUDynamicStateAnimationApplier * speedRampApplier;              //@synthesize speedRampApplier=_speedRampApplier - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setRotationState:(unsigned long long)arg1 ;
-(unsigned long long)rotationState;
-(void)_updateImages;
-(void)setVibrancyEffect:(id)arg1 ;
-(void)setIconSize:(unsigned long long)arg1 ;
-(UIImageView *)baseView;
-(BOOL)wantsManagedVibrancyEffect;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setDisableContinuousAnimation:(BOOL)arg1 ;
-(BOOL)shouldFlipForRTL;
-(void)setBaseVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)baseVisualEffectView;
-(void)setBladesVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)bladesVisualEffectView;
-(void)setBaseView:(UIImageView *)arg1 ;
-(void)setBladesView:(HUNonAnimatingTintImageView *)arg1 ;
-(HUNonAnimatingTintImageView *)bladesView;
-(void)setRotationSpeed:(double)arg1 ;
-(void)_updateRotationAnimationFromState:(unsigned long long)arg1 shouldRampSpeed:(BOOL)arg2 ;
-(void)_updateVisualEffects;
-(void)_setBladesLayerSpeed:(float)arg1 ;
-(double)rotationSpeed;
-(void)_rampBladesLayerToRotationSpeedAnimated:(BOOL)arg1 ;
-(HUDynamicStateAnimationApplier *)speedRampApplier;
-(void)setSpeedRampApplier:(HUDynamicStateAnimationApplier *)arg1 ;
@end

