/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUPrimaryStateIconContentView.h>

@class HUShapeLayerView, HUVisualEffectContainerView, UIView, UIViewPropertyAnimator;

@interface HUSwitchIconContentView : HUPrimaryStateIconContentView {

	HUShapeLayerView* _frameView;
	HUVisualEffectContainerView* _frameContainerView;
	UIView* _switchBackgroundView;
	UIView* _visibleSwitchView;
	HUShapeLayerView* _switchTopIndicatorView;
	HUVisualEffectContainerView* _switchTopIndicatorContainerView;
	HUShapeLayerView* _switchBottomIndicatorView;
	HUVisualEffectContainerView* _switchBottomIndicatorContainerView;
	UIViewPropertyAnimator* _switchAnimator;

}

@property (nonatomic,retain) HUShapeLayerView * frameView;                                                  //@synthesize frameView=_frameView - In the implementation block
@property (nonatomic,retain) HUVisualEffectContainerView * frameContainerView;                              //@synthesize frameContainerView=_frameContainerView - In the implementation block
@property (nonatomic,retain) UIView * switchBackgroundView;                                                 //@synthesize switchBackgroundView=_switchBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * visibleSwitchView;                                                    //@synthesize visibleSwitchView=_visibleSwitchView - In the implementation block
@property (nonatomic,retain) HUShapeLayerView * switchTopIndicatorView;                                     //@synthesize switchTopIndicatorView=_switchTopIndicatorView - In the implementation block
@property (nonatomic,retain) HUVisualEffectContainerView * switchTopIndicatorContainerView;                 //@synthesize switchTopIndicatorContainerView=_switchTopIndicatorContainerView - In the implementation block
@property (nonatomic,retain) HUShapeLayerView * switchBottomIndicatorView;                                  //@synthesize switchBottomIndicatorView=_switchBottomIndicatorView - In the implementation block
@property (nonatomic,retain) HUVisualEffectContainerView * switchBottomIndicatorContainerView;              //@synthesize switchBottomIndicatorContainerView=_switchBottomIndicatorContainerView - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * switchAnimator;                                       //@synthesize switchAnimator=_switchAnimator - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(HUShapeLayerView *)frameView;
-(void)_setIconState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(BOOL)arg3 ;
-(void)updateColorsForDisplayStyle:(unsigned long long)arg1 ;
-(BOOL)wantsManagedVibrancyEffect;
-(id)managedVisualEffectViews;
-(void)setFrameContainerView:(HUVisualEffectContainerView *)arg1 ;
-(HUVisualEffectContainerView *)frameContainerView;
-(void)setFrameView:(HUShapeLayerView *)arg1 ;
-(void)setSwitchBackgroundView:(UIView *)arg1 ;
-(UIView *)switchBackgroundView;
-(void)setVisibleSwitchView:(UIView *)arg1 ;
-(UIView *)visibleSwitchView;
-(void)setSwitchTopIndicatorContainerView:(HUVisualEffectContainerView *)arg1 ;
-(HUVisualEffectContainerView *)switchTopIndicatorContainerView;
-(void)setSwitchTopIndicatorView:(HUShapeLayerView *)arg1 ;
-(HUShapeLayerView *)switchTopIndicatorView;
-(void)setSwitchBottomIndicatorContainerView:(HUVisualEffectContainerView *)arg1 ;
-(HUVisualEffectContainerView *)switchBottomIndicatorContainerView;
-(void)setSwitchBottomIndicatorView:(HUShapeLayerView *)arg1 ;
-(HUShapeLayerView *)switchBottomIndicatorView;
-(void)setSwitchAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)switchAnimator;
-(CGRect)switchTopIndicatorFrameForVisibleSwitchBounds:(CGRect)arg1 switchOn:(BOOL)arg2 ;
-(CGRect)switchBottomIndicatorFrameForVisibleSwitchBounds:(CGRect)arg1 switchOn:(BOOL)arg2 ;
@end

