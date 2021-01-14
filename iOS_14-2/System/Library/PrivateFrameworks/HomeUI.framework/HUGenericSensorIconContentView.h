/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUPrimaryStateIconContentView.h>

@class HUShapeLayerView, HUVisualEffectContainerView, NSArray, UIView, HUAnimationApplier;

@interface HUGenericSensorIconContentView : HUPrimaryStateIconContentView {

	HUShapeLayerView* _bodyView;
	HUVisualEffectContainerView* _bodyContainerView;
	NSArray* _indicatorViews;
	NSArray* _indicatorContainerViews;
	UIView* _indicatorClippingView;
	HUAnimationApplier* _animationApplier;

}

@property (nonatomic,retain) HUShapeLayerView * bodyView;                                  //@synthesize bodyView=_bodyView - In the implementation block
@property (nonatomic,retain) HUVisualEffectContainerView * bodyContainerView;              //@synthesize bodyContainerView=_bodyContainerView - In the implementation block
@property (nonatomic,retain) NSArray * indicatorViews;                                     //@synthesize indicatorViews=_indicatorViews - In the implementation block
@property (nonatomic,retain) NSArray * indicatorContainerViews;                            //@synthesize indicatorContainerViews=_indicatorContainerViews - In the implementation block
@property (nonatomic,retain) UIView * indicatorClippingView;                               //@synthesize indicatorClippingView=_indicatorClippingView - In the implementation block
@property (nonatomic,retain) HUAnimationApplier * animationApplier;                        //@synthesize animationApplier=_animationApplier - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(HUShapeLayerView *)bodyView;
-(void)layoutSubviews;
-(void)setBodyView:(HUShapeLayerView *)arg1 ;
-(void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(BOOL)arg3 ;
-(void)updateColorsForDisplayStyle:(unsigned long long)arg1 ;
-(BOOL)wantsManagedVibrancyEffect;
-(id)managedVisualEffectViews;
-(void)setBodyContainerView:(HUVisualEffectContainerView *)arg1 ;
-(HUVisualEffectContainerView *)bodyContainerView;
-(void)setIndicatorClippingView:(UIView *)arg1 ;
-(UIView *)indicatorClippingView;
-(void)setIndicatorViews:(NSArray *)arg1 ;
-(void)setIndicatorContainerViews:(NSArray *)arg1 ;
-(void)_updateIndicatorAlpha;
-(NSArray *)indicatorContainerViews;
-(HUAnimationApplier *)animationApplier;
-(void)_layoutIndicatorViewsShowingIndicators:(BOOL)arg1 ;
-(id)_animationSettingsForShowingIndicators:(BOOL)arg1 ;
-(void)setAnimationApplier:(HUAnimationApplier *)arg1 ;
-(NSArray *)indicatorViews;
-(BOOL)showIndicators;
-(CGRect)_frameForIndicatorContainerViewInPosition:(unsigned long long)arg1 ;
-(CGAffineTransform)_transformForIndicatorContainerViewInPosition:(unsigned long long)arg1 ;
-(CGRect)_frameForIndicatorViewInPosition:(unsigned long long)arg1 showIndicators:(BOOL)arg2 ;
@end

