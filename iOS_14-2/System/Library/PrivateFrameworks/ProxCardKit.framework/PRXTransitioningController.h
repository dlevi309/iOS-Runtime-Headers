/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol PRXPullDismissalProvider;
@class NSString;

@interface PRXTransitioningController : NSObject <UIViewControllerTransitioningDelegate> {

	id<PRXPullDismissalProvider> _pullDismissalProvider;

}

@property (nonatomic,__weak,readonly) id<PRXPullDismissalProvider> pullDismissalProvider;              //@synthesize pullDismissalProvider=_pullDismissalProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)interactionControllerForDismissal:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)initWithPullDismissalProvider:(id)arg1 ;
-(id<PRXPullDismissalProvider>)pullDismissalProvider;
@end

