/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPanGestureRecognizer, NSLayoutConstraint, UIView, NSString;

@interface CPSBannerContainerView : UIView <UIGestureRecognizerDelegate> {

	UIPanGestureRecognizer* _dismissGesture;
	NSLayoutConstraint* _verticalPositionConstraintForDismissGesture;
	NSLayoutConstraint* _verticalPositionConstraintWhenVisible;
	NSLayoutConstraint* _verticalPositionConstraintWhenHidden;
	double _verticalPositionOffsetForDismissGesture;
	BOOL _bannerCrossFading;
	double _widthDuringLastBannerAnimation;
	BOOL _bannerHidden;
	BOOL _bannerHasAccessibilityFocus;
	UIView* _bannerView;

}

@property (assign,getter=isBannerHidden,nonatomic) BOOL bannerHidden;                                                //@synthesize bannerHidden=_bannerHidden - In the implementation block
@property (assign,nonatomic) BOOL bannerHasAccessibilityFocus;                                                       //@synthesize bannerHasAccessibilityFocus=_bannerHasAccessibilityFocus - In the implementation block
@property (nonatomic,retain) UIView * bannerView;                                                                    //@synthesize bannerView=_bannerView - In the implementation block
@property (getter=isTrackingBannerDismissGesture,nonatomic,readonly) BOOL trackingBannerDismissGesture; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBannerView:(UIView *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithBannerView:(id)arg1 ;
-(void)updateConstraints;
-(void)willMoveToWindow:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(UIView *)bannerView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setBannerHidden:(BOOL)arg1 animated:(BOOL)arg2 animationCompletion:(/*^block*/id)arg3 ;
-(BOOL)isBannerHidden;
-(BOOL)isTrackingBannerDismissGesture;
-(BOOL)bannerHasAccessibilityFocus;
-(void)_installBannerViewIfNeeded;
-(void)_dismissGestureRecognized:(id)arg1 ;
-(void)setBannerHasAccessibilityFocus:(BOOL)arg1 ;
-(void)_accessibilityElementFocusDidChange:(id)arg1 ;
-(void)_updateBannerContentSizeCategory;
-(void)_removeBannerAnimationsIfNeeded;
-(void)setBannerHidden:(BOOL)arg1 ;
@end

