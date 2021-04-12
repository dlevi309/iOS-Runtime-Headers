/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)init;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(NSArray *)presentedViewControllers;
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSHashTable *)_presentationControllers;
-(void)presentViewController:(id)arg1 fromViewController:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentViewController:(id)arg1 forResponder:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissViewControllerWithResponder:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissAllViewControllersWithAnimation:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

