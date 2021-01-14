/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUPrimaryStateIconContentView.h>

@class HUShapeLayerView, HUVisualEffectContainerView, UIVisualEffectView, UIViewPropertyAnimator;

@interface HUDoorIconContentView : HUPrimaryStateIconContentView {

	HUShapeLayerView* _frameView;
	HUVisualEffectContainerView* _frameContainerView;
	HUShapeLayerView* _doorView;
	UIVisualEffectView* _doorContainerView;
	UIViewPropertyAnimator* _doorAnimator;

}

@property (nonatomic,retain) HUShapeLayerView * frameView;                                  //@synthesize frameView=_frameView - In the implementation block
@property (nonatomic,retain) HUVisualEffectContainerView * frameContainerView;              //@synthesize frameContainerView=_frameContainerView - In the implementation block
@property (nonatomic,retain) HUShapeLayerView * doorView;                                   //@synthesize doorView=_doorView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * doorContainerView;                        //@synthesize doorContainerView=_doorContainerView - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * doorAnimator;                         //@synthesize doorAnimator=_doorAnimator - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(HUShapeLayerView *)frameView;
-(HUShapeLayerView *)doorView;
-(void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(BOOL)arg3 ;
-(void)updateColorsForDisplayStyle:(unsigned long long)arg1 ;
-(BOOL)wantsManagedVibrancyEffect;
-(id)managedVisualEffectViews;
-(void)setFrameContainerView:(HUVisualEffectContainerView *)arg1 ;
-(HUVisualEffectContainerView *)frameContainerView;
-(void)setFrameView:(HUShapeLayerView *)arg1 ;
-(void)setDoorContainerView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)doorContainerView;
-(void)setDoorView:(HUShapeLayerView *)arg1 ;
-(void)setDoorAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)doorAnimator;
-(CATransform3D)doorTransformForAngle:(double)arg1 ;
@end

