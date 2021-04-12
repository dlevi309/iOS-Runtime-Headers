/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUViewControllerTransition.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class NSString;

@interface PUModalTransition : PUViewControllerTransition <UIViewControllerTransitioningDelegate> {

	long long __operation;

}

@property (assign,setter=_setOperation:,nonatomic) long long _operation;              //@synthesize _operation=__operation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(long long)_operation;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)presentingViewController;
-(void)finishInteractiveTransition;
-(void)transitionWillPresentInteractively:(BOOL)arg1 ;
-(void)transitionWillDismissInteractively:(BOOL)arg1 ;
-(void)completeInteractivePresentTransitionFinished:(BOOL)arg1 ;
-(void)completeInteractiveDismissTransitionFinished:(BOOL)arg1 ;
-(void)imageModulationIntensityDidChange;
-(void)_setOperation:(long long)arg1 ;
@end

