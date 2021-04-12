/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/

#import <NewsSubscription/NewsSubscription-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@interface NPHardPaywallViewController : UIViewController <UIScrollViewDelegate, UITextViewDelegate> {

	 styler;
	 eventHandler;
	??? viewModel;
	 paywallModel;
	 hardPaywallView;
	 renderer;
	 layoutAttributesFactory;
	 purchasingSpinnerViewControllerFactory;
	 $__lazy_storage_$_verifyingSpinnerViewController;
	 paywallApplicationStateMonitor;
	 eventHandlerDelegate;

}

@property (assign,nonatomic) CGRect accessibilityFrame; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(CGRect)accessibilityFrame;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

