/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class _UIStatusBarImageView, CAShapeLayer, UIView, NSString, UIAccessibilityHUDItem;

@interface _UIStatusBarVPNDisconnectView : UIView <CAAnimationDelegate, _UIStatusBarDisplayable> {

	_UIStatusBarImageView* _iconView;
	CAShapeLayer* _iconSlashMaskShapeLayer;
	UIView* _slashView;
	CAShapeLayer* _slashShapeLayer;

}

@property (nonatomic,retain) _UIStatusBarImageView * iconView;                                       //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * iconSlashMaskShapeLayer;                                 //@synthesize iconSlashMaskShapeLayer=_iconSlashMaskShapeLayer - In the implementation block
@property (nonatomic,retain) UIView * slashView;                                                     //@synthesize slashView=_slashView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * slashShapeLayer;                                         //@synthesize slashShapeLayer=_slashShapeLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)alignmentRectInsets;
-(id)viewForLastBaselineLayout;
-(void)applyStyleAttributes:(id)arg1 ;
-(void)_setupForStyleAttributes:(id)arg1 ;
-(void)updateFramesForStyleAttributes:(id)arg1 ;
-(void)resetSlashForUpdate:(id)arg1 ;
-(void)animateSlashForUpdate:(id)arg1 ;
-(_UIStatusBarImageView *)iconView;
-(void)setIconView:(_UIStatusBarImageView *)arg1 ;
-(CAShapeLayer *)iconSlashMaskShapeLayer;
-(void)setIconSlashMaskShapeLayer:(CAShapeLayer *)arg1 ;
-(UIView *)slashView;
-(void)setSlashView:(UIView *)arg1 ;
-(CAShapeLayer *)slashShapeLayer;
-(void)setSlashShapeLayer:(CAShapeLayer *)arg1 ;
@end

