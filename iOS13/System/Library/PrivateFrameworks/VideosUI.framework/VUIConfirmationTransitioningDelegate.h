/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class VUIConfirmationAnimatedTransitioning, NSString;

@interface VUIConfirmationTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate> {

	VUIConfirmationAnimatedTransitioning* _presentTransition;
	VUIConfirmationAnimatedTransitioning* _dismissTransition;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
@end

