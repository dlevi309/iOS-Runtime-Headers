/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PLClickPresentationTransition.h>

@class PLClickPresentationPresentationTransition;

@interface PLClickPresentationDismissalTransition : PLClickPresentationTransition {

	PLClickPresentationPresentationTransition* _presentationTransition;

}

@property (assign,nonatomic,__weak) PLClickPresentationPresentationTransition * presentationTransition;              //@synthesize presentationTransition=_presentationTransition - In the implementation block
-(PLClickPresentationPresentationTransition *)presentationTransition;
-(void)setPresentationTransition:(PLClickPresentationPresentationTransition *)arg1 ;
-(id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)updateBackgroundViewForTransition;
-(id)_newAnimator;
@end

