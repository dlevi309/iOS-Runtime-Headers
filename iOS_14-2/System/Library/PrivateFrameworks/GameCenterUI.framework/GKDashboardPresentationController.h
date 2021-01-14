/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class NSString;

@interface GKDashboardPresentationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {

	BOOL _presenting;
	double _transitionDuration;

}

@property (assign,nonatomic) BOOL presenting;                        //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic) double transitionDuration;              //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)presentViewController:(id)arg1 presentingViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)setTransitionDuration:(double)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(double)transitionDuration;
-(double)transitionDuration:(id)arg1 ;
-(id)init;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(BOOL)presenting;
-(void)setPresenting:(BOOL)arg1 ;
@end

