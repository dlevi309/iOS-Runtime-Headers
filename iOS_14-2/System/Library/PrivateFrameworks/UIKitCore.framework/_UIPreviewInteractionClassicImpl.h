/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPreviewInteractionImpl.h>

@protocol _UIPreviewInteractionTouchForceProviding, UIPreviewInteractionDelegate;
@class UIView, _UIPreviewInteractionStateRecognizer, CADisplayLink, _UIDeepPressAnalyzer, _UIStatesFeedbackGenerator, _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerHelper, UIPreviewInteraction, NSString;

@interface _UIPreviewInteractionClassicImpl : NSObject <_UIPreviewInteractionImpl> {

	UIView* _view;
	struct {
		unsigned delegatePreviewInteractionShouldBegin : 1;
		unsigned delegateDidUpdateCommitTransition : 1;
		unsigned delegateShouldFinishTransitionToPreview : 1;
		unsigned delegateShouldAutomaticallyTransitionToPreviewAfterDelay : 1;
		unsigned delegateHighlighterForPreviewTransition : 1;
		unsigned delegateViewControllerPresentationForPresentingViewController : 1;
		unsigned interactive : 1;
		unsigned delegateDidPreventInteraction : 1;
		unsigned interactionRequiresRestart : 1;
		unsigned interactionWasCancelled : 1;
		unsigned previousProgressWasNegativeOrZero : 1;
		unsigned currentState : 3;
		unsigned nextUpdateShouldTransitionToPreview : 1;
		unsigned nextPreviewShouldPreventHapticFeedback : 1;
	}  _previewInteractionFlags;
	id<_UIPreviewInteractionTouchForceProviding> _systemTouchForceProvider;
	_UIPreviewInteractionStateRecognizer* _currentInteractionStateRecognizer;
	CGPoint _sceneReferenceLocationFromLatestUpdate;
	CADisplayLink* _continuousEvaluationDisplayLink;
	_UIDeepPressAnalyzer* _deepPressAnalyzer;
	_UIStatesFeedbackGenerator* _feedbackGenerator;
	BOOL _feedbackGeneratorTurnedOn;
	_UIPreviewInteractionHighlighter* _highlighter;
	_UIPreviewInteractionViewControllerHelper* _viewControllerHelper;
	id _viewControllerPresentationObserver;
	id<UIPreviewInteractionDelegate> _delegate;
	id<_UIPreviewInteractionTouchForceProviding> _touchForceProvider;
	UIPreviewInteraction* _previewInteraction;

}

@property (assign,nonatomic,__weak) id<UIPreviewInteractionDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) UIView * view;                                                       //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider;              //@synthesize touchForceProvider=_touchForceProvider - In the implementation block
@property (assign,nonatomic,__weak) UIPreviewInteraction * previewInteraction;                             //@synthesize previewInteraction=_previewInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_updateInteractionStateRecognizerForTouchForce:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
-(id)init;
-(id<UIPreviewInteractionDelegate>)delegate;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(void)_dismissPreviewViewControllerIfNeeded;
-(void)_endContinuousEvaluation;
-(void)setDelegate:(id<UIPreviewInteractionDelegate>)arg1 ;
-(void)_updateHighlighter:(double)arg1 ;
-(UIView *)view;
-(void)cancelInteraction;
-(void)_endHighlightingIfNeeded;
-(void)_endInteractionIfNeeded;
-(void)_updateForCurrentTouchForceProvider;
-(void)_prepareForInteractionIfNeeded;
-(void)_endUsingFeedbackIfNeeded;
-(void)_endViewControllerPresentationObserving;
-(void)_prepareUsingFeedback;
-(void)_prepareUsingFeedbackIfNeeded;
-(void)_prepareHighlighterIfNeeded;
-(BOOL)_shouldCancelTransitionToState:(long long)arg1 ;
-(void)_actuateFeedbackForStateIfNeeded:(long long)arg1 ;
-(void)_presentPreviewViewControllerIfNeeded;
-(void)_resetAfterInteraction;
-(void)_endInteractiveStateTransitions;
-(void)_updateFeedbackTowardNextState:(long long)arg1 progress:(double)arg2 ;
-(void)_prepareForViewControllerPresentationObserving;
-(UIPreviewInteraction *)previewInteraction;
-(void)setPreviewInteraction:(UIPreviewInteraction *)arg1 ;
-(id<_UIPreviewInteractionTouchForceProviding>)touchForceProvider;
-(id)initWithView:(id)arg1 previewInteraction:(id)arg2 ;
-(void)setTouchForceProvider:(id<_UIPreviewInteractionTouchForceProviding>)arg1 ;
-(void)_startPreviewAtLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id)_gestureRecognizerForExclusionRelationship;
-(void)_updateForContinuousEvaluation:(id)arg1 ;
-(void)dealloc;
-(void)_turnOnFeedbackGenerator;
-(void)_turnOffFeedbackGenerator;
@end

