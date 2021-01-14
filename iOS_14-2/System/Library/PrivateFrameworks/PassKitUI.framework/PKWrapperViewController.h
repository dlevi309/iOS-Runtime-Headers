/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController;

@interface PKWrapperViewController : UIViewController {

	long long _type;
	UIViewController* _wrappedViewController;

}

@property (nonatomic,readonly) UIViewController * wrappedViewController;              //@synthesize wrappedViewController=_wrappedViewController - In the implementation block
-(void)viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)_updatePreferredContentSize;
-(id)initWithWrappedViewController:(id)arg1 type:(long long)arg2 ;
-(UIViewController *)wrappedViewController;
-(unsigned long long)edgesForExtendedLayout;
-(BOOL)extendedLayoutIncludesOpaqueBars;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)_canShowWhileLocked;
-(long long)preferredUserInterfaceStyle;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForStatusBarHidden;
-(void)loadView;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

