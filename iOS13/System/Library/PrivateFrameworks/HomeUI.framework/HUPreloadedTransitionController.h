/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NAFuture, NSString;

@interface HUPreloadedTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {

	NAFuture* _completionFuture;

}

@property (nonatomic,readonly) NAFuture * completionFuture;              //@synthesize completionFuture=_completionFuture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(NAFuture *)completionFuture;
@end

