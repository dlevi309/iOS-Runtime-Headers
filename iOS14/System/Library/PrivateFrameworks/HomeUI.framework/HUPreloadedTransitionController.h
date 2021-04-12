/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id)init;
-(NAFuture *)completionFuture;
@end

