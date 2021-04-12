/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUIConfirmationAnimatedTransitioningDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class VUIConfirmationAnimatedTransitioning, NSString;

@interface VUIConfirmationTransitioningDelegate : NSObject <VUIConfirmationAnimatedTransitioningDelegate, UIViewControllerTransitioningDelegate> {

	VUIConfirmationAnimatedTransitioning* _presentTransition;
	VUIConfirmationAnimatedTransitioning* _dismissTransition;
	/*^block*/id _presentedHandlerBlock;
	/*^block*/id _dismissedHandlerBlock;

}

@property (nonatomic,copy) id presentedHandlerBlock;                //@synthesize presentedHandlerBlock=_presentedHandlerBlock - In the implementation block
@property (nonatomic,copy) id dismissedHandlerBlock;                //@synthesize dismissedHandlerBlock=_dismissedHandlerBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)init;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)_init;
-(void)setDismissedHandlerBlock:(id)arg1 ;
-(void)confirmationAnimatedTransitioningAnimationDidEnd:(id)arg1 ;
-(id)presentedHandlerBlock;
-(id)dismissedHandlerBlock;
-(void)setPresentedHandlerBlock:(id)arg1 ;
@end

