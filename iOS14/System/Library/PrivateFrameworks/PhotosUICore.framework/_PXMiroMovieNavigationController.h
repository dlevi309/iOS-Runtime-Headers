/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class UIViewController, NSString;

@interface _PXMiroMovieNavigationController : UINavigationController <UIViewControllerTransitioningDelegate> {

	UIViewController* _miroMoviePresentingViewController;

}

@property (nonatomic,retain) UIViewController * miroMoviePresentingViewController;              //@synthesize miroMoviePresentingViewController=_miroMoviePresentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(UIViewController *)miroMoviePresentingViewController;
-(void)setMiroMoviePresentingViewController:(UIViewController *)arg1 ;
-(id)_transitionForPresentedOrDismissedViewController:(id)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)dismiss:(id)arg1 ;
@end

