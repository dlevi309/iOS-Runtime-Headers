/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <libobjc.A.dylib/_UIClickPresentationTransition.h>

@protocol UIViewControllerTransitioningDelegate;
@class UITargetedPreview, UIViewPropertyAnimator, _PLViewControllerOneToOneTransitionContext, PLViewControllerAnimator, MTMaterialView, NSString;

@interface PLClickPresentationTransition : NSObject <_UIClickPresentationTransition> {

	id<UIViewControllerTransitioningDelegate> _transitionDelegate;
	_PLViewControllerOneToOneTransitionContext* _transitionContext;
	PLViewControllerAnimator* _animator;
	/*^block*/id _completion;
	BOOL _propagatesPresentingViewTransform;
	MTMaterialView* _backgroundView;

}

@property (assign,nonatomic,__weak) MTMaterialView * backgroundView;                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) BOOL propagatesPresentingViewTransform;                 //@synthesize propagatesPresentingViewTransform=_propagatesPresentingViewTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) UITargetedPreview * sourcePreview; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
-(MTMaterialView *)backgroundView;
-(void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)transitionDidEnd:(BOOL)arg1 ;
-(void)setBackgroundView:(MTMaterialView *)arg1 ;
-(id)_animator;
-(UIViewPropertyAnimator *)customAnimator;
-(id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setPropagatesPresentingViewTransform:(BOOL)arg1 ;
-(void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)updateBackgroundViewForTransition;
-(id)_newAnimator;
-(BOOL)propagatesPresentingViewTransform;
@end

