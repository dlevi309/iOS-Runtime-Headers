/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIView, NSString;

@interface WFSpringBoardZoomAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	UIView* _originalView;
	/*function pointer*/void* _snapshotter;
	BOOL _presenting;
	UIView* _morphView;
	UIView* _shadowView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presentAnimatorWithOriginalView:(id)arg1 snapshotter:(/*function pointer*/void*)arg2 ;
+(id)dismissAnimatorWithOriginalView:(id)arg1 snapshotter:(/*function pointer*/void*)arg2 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)initWithOriginalView:(id)arg1 snapshotter:(/*function pointer*/void*)arg2 presenting:(BOOL)arg3 ;
-(id)lessStiffSpringAnimation;
-(id)stiffSpringAnimation;
-(id)centralAnimation;
-(id)morphAnimation;
-(id)crossfadeAnimation;
-(id)radiusAnimation;
-(void)configureViews:(id)arg1 ;
-(void)startAnimations:(id)arg1 ;
-(void)completeAnimations:(id)arg1 ;
@end

