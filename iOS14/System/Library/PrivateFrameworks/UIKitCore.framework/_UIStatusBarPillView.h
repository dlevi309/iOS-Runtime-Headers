/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarRoundedCornerView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>
#import <UIKitCore/_UIStatusBarPersistentAnimation.h>

@class UIAccessibilityHUDItem, UIVisualEffect, UIColor, UIView, CALayer, UIVisualEffectView, NSString;

@interface _UIStatusBarPillView : _UIStatusBarRoundedCornerView <_UIStatusBarDisplayable, _UIStatusBarPersistentAnimation> {

	BOOL _pulsing;
	UIVisualEffect* _visualEffect;
	UIColor* _pillColor;
	UIView* _subviewForBaselineAlignment;
	CALayer* _pulseLayer;
	UIVisualEffectView* _visualEffectView;
	UIEdgeInsets _alignmentRectInsets;

}

@property (nonatomic,retain) CALayer * pulseLayer;                                                   //@synthesize pulseLayer=_pulseLayer - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                                  //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;                                       //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (assign,nonatomic) BOOL pulsing;                                                           //@synthesize pulsing=_pulsing - In the implementation block
@property (nonatomic,retain) UIVisualEffect * visualEffect;                                          //@synthesize visualEffect=_visualEffect - In the implementation block
@property (nonatomic,retain) UIColor * pillColor;                                                    //@synthesize pillColor=_pillColor - In the implementation block
@property (assign,nonatomic,__weak) UIView * subviewForBaselineAlignment;                            //@synthesize subviewForBaselineAlignment=_subviewForBaselineAlignment - In the implementation block
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVisualEffect:(UIVisualEffect *)arg1 ;
-(BOOL)canBecomeFocused;
-(void)_updateBackgroundColor;
-(void)setPulsing:(BOOL)arg1 ;
-(void)applyStyleAttributes:(id)arg1 ;
-(UIVisualEffect *)visualEffect;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)viewForLastBaselineLayout;
-(void)setPillColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)resumePersistentAnimation;
-(BOOL)isUserInteractionEnabled;
-(UIEdgeInsets)alignmentRectInsets;
-(UIColor *)pillColor;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(UIView *)subviewForBaselineAlignment;
-(void)layoutSubviews;
-(void)setSubviewForBaselineAlignment:(UIView *)arg1 ;
-(BOOL)pulsing;
-(void)setPulseLayer:(CALayer *)arg1 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(CALayer *)pulseLayer;
@end

