/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class NSHashTable, _UIProgressiveBlurPresentationAnimator, _TVPlaybackFadeAnimator, NSArray, NSString;

@interface TVModalPresenter : NSObject <UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate> {

	NSHashTable* __presentationControllers;
	_UIProgressiveBlurPresentationAnimator* _presentingAnimator;
	_UIProgressiveBlurPresentationAnimator* _dismissingAnimator;
	_TVPlaybackFadeAnimator* _playbackAnimator;

}

@property (nonatomic,readonly) NSHashTable * _presentationControllers; 
@property (nonatomic,copy,readonly) NSArray * presentedViewControllers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_viewControllerForResponder:(id)arg1 ;
-(id)init;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(NSArray *)presentedViewControllers;
-(NSHashTable *)_presentationControllers;
-(void)presentViewController:(id)arg1 fromViewController:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentViewController:(id)arg1 forResponder:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissViewControllerWithResponder:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissAllViewControllersWithAnimation:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

