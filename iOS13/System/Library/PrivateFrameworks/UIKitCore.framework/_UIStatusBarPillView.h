/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarRoundedCornerView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>
#import <UIKitCore/_UIStatusBarPersistentAnimation.h>

@class UIAccessibilityHUDItem, UIColor, UIView, CALayer, NSString;

@interface _UIStatusBarPillView : _UIStatusBarRoundedCornerView <_UIStatusBarDisplayable, _UIStatusBarPersistentAnimation> {

	BOOL _pulsing;
	UIColor* _pillColor;
	UIView* _subviewForBaselineAlignment;
	CALayer* _pulseLayer;
	UIEdgeInsets _alignmentRectInsets;

}

@property (nonatomic,retain) CALayer * pulseLayer;                                                   //@synthesize pulseLayer=_pulseLayer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;                                       //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (assign,nonatomic) BOOL pulsing;                                                           //@synthesize pulsing=_pulsing - In the implementation block
@property (nonatomic,retain) UIColor * pillColor;                                                    //@synthesize pillColor=_pillColor - In the implementation block
@property (assign,nonatomic,__weak) UIView * subviewForBaselineAlignment;                            //@synthesize subviewForBaselineAlignment=_subviewForBaselineAlignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(id)viewForLastBaselineLayout;
-(BOOL)isUserInteractionEnabled;
-(void)_updateBackgroundColor;
-(void)resumePersistentAnimation;
-(UIColor *)pillColor;
-(void)applyStyleAttributes:(id)arg1 ;
-(UIView *)subviewForBaselineAlignment;
-(void)setPillColor:(UIColor *)arg1 ;
-(void)setPulsing:(BOOL)arg1 ;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(BOOL)pulsing;
-(void)setSubviewForBaselineAlignment:(UIView *)arg1 ;
-(CALayer *)pulseLayer;
-(void)setPulseLayer:(CALayer *)arg1 ;
@end

