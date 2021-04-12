/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <UIKit/UIForcePresentationController.h>

@protocol _UIForcePresentationControllerDelegate;
@class UIGestureRecognizer, UIView, _UIStatesFeedbackGenerator, _UIKeyboardLayoutAlignmentView, UIAlertVisualStyleUpdatableConstraints, NSLayoutConstraint, NSString;

@interface _UIAlertControllerPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate, UIForcePresentationController> {

	UIView* _dimmingView;
	_UIKeyboardLayoutAlignmentView* keyboardLayoutAlignmentView;
	UIView* keyboardLayoutAlignmentAvailableSpaceView;
	UIAlertVisualStyleUpdatableConstraints* _visualStyleUpdatableConstraints;
	NSLayoutConstraint* _topAvailableSpaceConstraint;
	NSLayoutConstraint* _bottomAvailableSpaceConstraint;
	BOOL constraintsPrepared;
	BOOL _sourceViewSnapshotAndScaleTransformSuppressed;
	BOOL _chromeHidden;
	BOOL __isCurrentContext;
	BOOL __shouldRespectNearestCurrentContextPresenter;
	UIGestureRecognizer* _panningGestureRecognizer;
	/*^block*/id _presentationPhaseCompletionBlock;
	id<_UIForcePresentationControllerDelegate> _forcePresentationControllerDelegate;
	UIView* _revealContainerView;
	_UIStatesFeedbackGenerator* _feedbackGenerator;

}

@property (readonly) UIView * _dimmingView;                                                                                         //@synthesize dimmingView=_dimmingView - In the implementation block
@property (setter=_setIsCurrentContext:) BOOL _isCurrentContext;                                                                    //@synthesize _isCurrentContext=__isCurrentContext - In the implementation block
@property (setter=_setShouldRespectNearestCurrentContextPresenter:) BOOL _shouldRespectNearestCurrentContextPresenter;              //@synthesize _shouldRespectNearestCurrentContextPresenter=__shouldRespectNearestCurrentContextPresenter - In the implementation block
@property (assign,setter=_setChromeHidden:,getter=_isChromeHidden,nonatomic) BOOL _chromeHidden;                                    //@synthesize chromeHidden=_chromeHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id presentationPhaseCompletionBlock;                                                                     //@synthesize presentationPhaseCompletionBlock=_presentationPhaseCompletionBlock - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * panningGestureRecognizer;                                                        //@synthesize panningGestureRecognizer=_panningGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL _sourceViewSnapshotAndScaleTransformSuppressed;                                                   //@synthesize sourceViewSnapshotAndScaleTransformSuppressed=_sourceViewSnapshotAndScaleTransformSuppressed - In the implementation block
@property (nonatomic,readonly) UIView * _revealContainerView;                                                                       //@synthesize revealContainerView=_revealContainerView - In the implementation block
@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackGenerator;                                                        //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic,__weak) id<_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate;                 //@synthesize forcePresentationControllerDelegate=_forcePresentationControllerDelegate - In the implementation block
-(void)containerViewWillLayoutSubviews;
-(void)setFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(long long)adaptivePresentationStyle;
-(BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)_setShouldRespectNearestCurrentContextPresenter:(BOOL)arg1 ;
-(void)set_sourceViewSnapshotAndScaleTransformSuppressed:(BOOL)arg1 ;
-(BOOL)_sourceViewSnapshotAndScaleTransformSuppressed;
-(UIView *)_dimmingView;
-(BOOL)_shouldRespectNearestCurrentContextPresenter;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(void)_willRunTransitionForCurrentStateDeferred:(BOOL)arg1 ;
-(void)setForcePresentationControllerDelegate:(id<_UIForcePresentationControllerDelegate>)arg1 ;
-(_UIStatesFeedbackGenerator *)feedbackGenerator;
-(void)setPresentationPhaseCompletionBlock:(id)arg1 ;
-(void)containerViewDidLayoutSubviews;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)presentationPhaseCompletionBlock;
-(id<_UIForcePresentationControllerDelegate>)forcePresentationControllerDelegate;
-(void)setDelegate:(id)arg1 ;
-(void)_presentedAlertControllerDidAdapt;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)shouldPresentInFullscreen;
-(void)_prepareDimmingViewIfNecessary;
-(void)_prepareConstraintsIfNecessary;
-(BOOL)_preserveResponderAcrossWindows;
-(void)_updateConstraintsIfNecessary;
-(BOOL)_shouldOccludeDuringPresentation;
-(BOOL)_isChromeHidden;
-(void)setPanningGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(id)_presentedAlertController;
-(UIGestureRecognizer *)panningGestureRecognizer;
-(void)presentationTransitionWillBegin;
-(BOOL)_isCurrentContext;
-(void)_setChromeHidden:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_setIsCurrentContext:(BOOL)arg1 ;
-(UIView *)_revealContainerView;
-(BOOL)_canCommitPresentation;
-(BOOL)_canDismissPresentation;
@end

