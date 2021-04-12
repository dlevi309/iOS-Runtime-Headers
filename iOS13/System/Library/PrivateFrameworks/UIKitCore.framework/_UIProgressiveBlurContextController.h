/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class UIViewController, NSString;

@interface _UIProgressiveBlurContextController : UIViewController <UIViewControllerTransitioningDelegate> {

	UIViewController* _presentedViewController;
	long long _blurStyle;

}

@property (assign,nonatomic) long long blurStyle;                   //@synthesize blurStyle=_blurStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(long long)blurStyle;
-(void)setBlurStyle:(long long)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 ;
@end

