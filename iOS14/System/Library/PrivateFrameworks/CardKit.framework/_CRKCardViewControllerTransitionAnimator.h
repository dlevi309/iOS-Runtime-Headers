/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

