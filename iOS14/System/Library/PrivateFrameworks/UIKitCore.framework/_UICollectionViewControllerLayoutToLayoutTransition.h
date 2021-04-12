/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UICollectionViewLayout, UIPercentDrivenInteractiveTransition, NSString;

@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _crossFadeNavigationBar;
	BOOL _crossFadeBottomBars;
	BOOL _interactionAborted;
	UICollectionViewLayout* _toLayout;
	UIPercentDrivenInteractiveTransition* _interactionController;
	long long _operation;

}

@property (nonatomic,retain) UICollectionViewLayout * toLayout;                                         //@synthesize toLayout=_toLayout - In the implementation block
@property (assign,nonatomic) BOOL crossFadeNavigationBar;                                               //@synthesize crossFadeNavigationBar=_crossFadeNavigationBar - In the implementation block
@property (assign,nonatomic) BOOL crossFadeBottomBars;                                                  //@synthesize crossFadeBottomBars=_crossFadeBottomBars - In the implementation block
@property (assign,nonatomic) UIPercentDrivenInteractiveTransition * interactionController;              //@synthesize interactionController=_interactionController - In the implementation block
@property (assign,nonatomic) BOOL interactionAborted;                                                   //@synthesize interactionAborted=_interactionAborted - In the implementation block
@property (assign,nonatomic) long long operation;                                                       //@synthesize operation=_operation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(void)setOperation:(long long)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)setToLayout:(UICollectionViewLayout *)arg1 ;
-(void)setInteractionAborted:(BOOL)arg1 ;
-(long long)operation;
-(UIPercentDrivenInteractiveTransition *)interactionController;
-(void)setInteractionController:(UIPercentDrivenInteractiveTransition *)arg1 ;
-(BOOL)interactionAborted;
-(BOOL)_shouldCrossFadeNavigationBar;
-(void)setCrossFadeNavigationBar:(BOOL)arg1 ;
-(void)setCrossFadeBottomBars:(BOOL)arg1 ;
-(BOOL)crossFadeNavigationBar;
-(BOOL)_shouldCrossFadeBottomBars;
-(BOOL)crossFadeBottomBars;
-(UICollectionViewLayout *)toLayout;
@end

