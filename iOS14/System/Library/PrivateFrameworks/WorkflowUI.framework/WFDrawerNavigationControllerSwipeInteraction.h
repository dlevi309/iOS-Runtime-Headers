/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIInteraction.h>

@class UIView, UINavigationController, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition, NSString;

@interface WFDrawerNavigationControllerSwipeInteraction : NSObject <UINavigationControllerDelegate, UIInteraction> {

	UIView* view;
	UINavigationController* _navigationController;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIPercentDrivenInteractiveTransition* _currentTransition;

}

@property (nonatomic,readonly) UINavigationController * navigationController;                       //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                         //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPercentDrivenInteractiveTransition * currentTransition;              //@synthesize currentTransition=_currentTransition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view; 
-(void)pan:(id)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)didMoveToView:(id)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(UIView *)view;
-(void)setCurrentTransition:(UIPercentDrivenInteractiveTransition *)arg1 ;
-(UIPercentDrivenInteractiveTransition *)currentTransition;
-(id)initWithNavigationController:(id)arg1 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(UINavigationController *)navigationController;
@end

