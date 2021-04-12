/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/


@protocol _CRKCardViewControllerTransitionAnimatorDelegate;
@interface _CRKCardViewControllerTransitionAnimator : NSObject {

	id<_CRKCardViewControllerTransitionAnimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_CRKCardViewControllerTransitionAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sectionShuffleTransitionAnimator;
-(id<_CRKCardViewControllerTransitionAnimatorDelegate>)delegate;
-(void)setDelegate:(id<_CRKCardViewControllerTransitionAnimatorDelegate>)arg1 ;
-(void)_prepareAnimationFromCardViewController:(id)arg1 toCardViewController:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)transitionFromCardViewController:(id)arg1 toCardViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
@end

