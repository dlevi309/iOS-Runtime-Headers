/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
*/

#import <WelcomeKitUI/WelcomeKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSLayoutConstraint, WLWelcomeViewControllerMetrics, UILayoutGuide;

@interface WLWelcomeGroupViewController : UIViewController {

	NSLayoutConstraint* _hInsetLeftConstraint;
	NSLayoutConstraint* _hInsetRightConstraint;
	NSLayoutConstraint* _hInsetProgressBarLeftConstraint;
	NSLayoutConstraint* _hInsetProgressBarRightConstraint;
	WLWelcomeViewControllerMetrics* _metrics;
	UILayoutGuide* _hInsetLayoutGuide;
	UILayoutGuide* _hInsetProgressBarLayoutGuide;

}

@property (nonatomic,readonly) WLWelcomeViewControllerMetrics * metrics;                  //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * hInsetLayoutGuide;                         //@synthesize hInsetLayoutGuide=_hInsetLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * hInsetProgressBarLayoutGuide;              //@synthesize hInsetProgressBarLayoutGuide=_hInsetProgressBarLayoutGuide - In the implementation block
-(WLWelcomeViewControllerMetrics *)metrics;
-(id)initWithMetrics:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)updateViewConstraints;
-(void)_updateLayoutGuideConstraints;
-(UILayoutGuide *)hInsetLayoutGuide;
-(id)loadTitleViewWithTitle:(id)arg1 ;
-(UILayoutGuide *)hInsetProgressBarLayoutGuide;
@end

