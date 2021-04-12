/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController;

@interface PKWrapperViewController : UIViewController {

	long long _type;
	UIViewController* _wrappedViewController;

}

@property (nonatomic,readonly) UIViewController * wrappedViewController;              //@synthesize wrappedViewController=_wrappedViewController - In the implementation block
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)_updatePreferredContentSize;
-(BOOL)_canShowWhileLocked;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(BOOL)extendedLayoutIncludesOpaqueBars;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(long long)preferredUserInterfaceStyle;
-(id)initWithWrappedViewController:(id)arg1 type:(long long)arg2 ;
-(UIViewController *)wrappedViewController;
@end

