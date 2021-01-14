/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <UIKitCore/_UIForcePresentationControllerDelegate.h>
#import <UIKit/UIPreviewInteractionDelegate.h>

@protocol UIPreviewInteractionControllerDelegate, UIForcePresentationController, UIForceTransitioningDelegate, UIViewControllerPreviewing_Internal;
@class UIView, UIViewController, UIPreviewInteraction, UIInteractionProgress, _UIRevealGestureRecognizer, _UIPreviewGestureRecognizer, UIPanGestureRecognizer, _UITouchesObservingGestureRecognizer, _UIDeepPressAnalyzer, UIPresentationController, UIWindow, _UIStatesFeedbackGenerator, UIGestureRecognizer, NSArray, NSString;

@interface UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIInteractionProgressObserver, _UIForcePresentationControllerDelegate, UIPreviewInteractionDelegate> {

	BOOL _isCommitting;
	BOOL _generatorTurnedOn;
	BOOL _statusBarWasHidden;
	BOOL _didSendDelegateWillDismissViewController;
	id<UIPreviewInteractionControllerDelegate> _delegate;
	UIView* _sourceView;
	UIViewController* _presentingViewController;
	UIPreviewInteraction* _previewInteraction;
	UIInteractionProgress* _interactionProgressForCommit;
	_UIRevealGestureRecognizer* _revealGestureRecognizer;
	_UIPreviewGestureRecognizer* _previewGestureRecognizer;
	UIPanGestureRecognizer* _modalPanGestureRecognizer;
	_UITouchesObservingGestureRecognizer* _touchObservingGestureRecognizer;
	_UIDeepPressAnalyzer* _deepPressAnalyzer;
	UIViewController* _currentPreviewViewController;
	UIPresentationController*<UIForcePresentationController> _currentPresentationController;
	id<UIForceTransitioningDelegate> _currentTransitionDelegate;
	UIWindow* _windowForPreviewPresentation;
	id _currentCommitTransition;
	id<UIViewControllerPreviewing_Internal> _previewingContext;
	_UIStatesFeedbackGenerator* _feedbackGenerator;
	UIInteractionProgress* _interactionProgressForPresentation;
	CGPoint _location;

}

@property (assign,nonatomic) CGPoint location;                                                                                    //@synthesize location=_location - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                                                                          //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                                                  //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) UIPreviewInteraction * previewInteraction;                                                           //@synthesize previewInteraction=_previewInteraction - In the implementation block
@property (nonatomic,retain) UIInteractionProgress * interactionProgressForCommit;                                                //@synthesize interactionProgressForCommit=_interactionProgressForCommit - In the implementation block
@property (nonatomic,retain) _UIRevealGestureRecognizer * revealGestureRecognizer;                                                //@synthesize revealGestureRecognizer=_revealGestureRecognizer - In the implementation block
@property (nonatomic,retain) _UIPreviewGestureRecognizer * previewGestureRecognizer;                                              //@synthesize previewGestureRecognizer=_previewGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * modalPanGestureRecognizer;                                                  //@synthesize modalPanGestureRecognizer=_modalPanGestureRecognizer - In the implementation block
@property (nonatomic,retain) _UITouchesObservingGestureRecognizer * touchObservingGestureRecognizer;                              //@synthesize touchObservingGestureRecognizer=_touchObservingGestureRecognizer - In the implementation block
@property (nonatomic,retain) _UIDeepPressAnalyzer * deepPressAnalyzer;                                                            //@synthesize deepPressAnalyzer=_deepPressAnalyzer - In the implementation block
@property (nonatomic,retain) UIViewController * currentPreviewViewController;                                                     //@synthesize currentPreviewViewController=_currentPreviewViewController - In the implementation block
@property (nonatomic,retain) UIPresentationController*<UIForcePresentationController> currentPresentationController;              //@synthesize currentPresentationController=_currentPresentationController - In the implementation block
@property (nonatomic,retain) id<UIForceTransitioningDelegate> currentTransitionDelegate;                                          //@synthesize currentTransitionDelegate=_currentTransitionDelegate - In the implementation block
@property (nonatomic,retain) UIWindow * windowForPreviewPresentation;                                                             //@synthesize windowForPreviewPresentation=_windowForPreviewPresentation - In the implementation block
@property (assign,nonatomic) BOOL statusBarWasHidden;                                                                             //@synthesize statusBarWasHidden=_statusBarWasHidden - In the implementation block
@property (nonatomic,retain) id currentCommitTransition;                                                                          //@synthesize currentCommitTransition=_currentCommitTransition - In the implementation block
@property (assign,nonatomic) BOOL didSendDelegateWillDismissViewController;                                                       //@synthesize didSendDelegateWillDismissViewController=_didSendDelegateWillDismissViewController - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerPreviewing_Internal> previewingContext;                                    //@synthesize previewingContext=_previewingContext - In the implementation block
@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackGenerator;                                                      //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (nonatomic,retain) UIInteractionProgress * interactionProgressForPresentation;                                          //@synthesize interactionProgressForPresentation=_interactionProgressForPresentation - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * presentationGestureRecognizer; 
@property (nonatomic,readonly) UIGestureRecognizer * beginPreviewGestureRecognizer; 
@property (assign,nonatomic,__weak) id<UIPreviewInteractionControllerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * gestureRecognizers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
-(void)configureRevealTransformWithInteractionProgress:(id)arg1 forLocation:(CGPoint)arg2 inView:(id)arg3 containerView:(id)arg4 ;
-(BOOL)configureRevealTransformSourceViewSnapshotSuppressionFromLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)init;
-(void)setSourceView:(UIView *)arg1 ;
-(id<UIPreviewInteractionControllerDelegate>)delegate;
-(CGPoint)location;
-(_UIStatesFeedbackGenerator *)feedbackGenerator;
-(UIView *)sourceView;
-(UIViewController *)presentingViewController;
-(_UIPreviewGestureRecognizer *)previewGestureRecognizer;
-(void)setLocation:(CGPoint)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)forcePresentationTransitionWillBegin:(id)arg1 ;
-(void)setDelegate:(id<UIPreviewInteractionControllerDelegate>)arg1 ;
-(void)forcePresentationControllerWillDismiss:(id)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id<UIViewControllerPreviewing_Internal>)previewingContext;
-(void)setPreviewingContext:(id<UIViewControllerPreviewing_Internal>)arg1 ;
-(void)_activateFeedbackIfNeeded;
-(void)_deactivateFeedbackIfNeeded;
-(UIInteractionProgress *)interactionProgressForPresentation;
-(UIGestureRecognizer *)beginPreviewGestureRecognizer;
-(UIGestureRecognizer *)presentationGestureRecognizer;
-(UIPresentationController*<UIForcePresentationController>)currentPresentationController;
-(void)_setStatusBarHidden:(BOOL)arg1 ;
-(void)setInteractionProgressForPresentation:(UIInteractionProgress *)arg1 ;
-(UIPreviewInteraction *)previewInteraction;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(BOOL)previewInteractionShouldBegin:(id)arg1 ;
-(void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(BOOL)arg3 ;
-(void)previewInteractionDidCancel:(id)arg1 ;
-(void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3 ;
-(void)setPreviewInteraction:(UIPreviewInteraction *)arg1 ;
-(NSArray *)gestureRecognizers;
-(id)initWithView:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(_UITouchesObservingGestureRecognizer *)touchObservingGestureRecognizer;
-(void)initGestureRecognizers;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(_UIRevealGestureRecognizer *)revealGestureRecognizer;
-(UIViewController *)currentPreviewViewController;
-(BOOL)_viewControllerIsChildOfExpandedSplitViewController:(id)arg1 ;
-(BOOL)_previewingIsPossibleForView:(id)arg1 ;
-(void)_activateFeedback;
-(BOOL)statusBarWasHidden;
-(id)_transitionDelegateForPreviewViewController:(id)arg1 atPosition:(CGPoint)arg2 inView:(id)arg3 ;
-(void)setCurrentTransitionDelegate:(id<UIForceTransitioningDelegate>)arg1 ;
-(BOOL)_usesPreviewInteraction;
-(void)setCurrentPreviewViewController:(UIViewController *)arg1 ;
-(void)setCurrentPresentationController:(UIPresentationController*<UIForcePresentationController>)arg1 ;
-(void)_configureCommitInteractionProgressForView:(id)arg1 ;
-(void)setStatusBarWasHidden:(BOOL)arg1 ;
-(BOOL)_usesPreviewPresentationController;
-(UIWindow *)windowForPreviewPresentation;
-(void)setWindowForPreviewPresentation:(UIWindow *)arg1 ;
-(void)_setCalloutBarHidden:(BOOL)arg1 ;
-(BOOL)startInteractivePreviewAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_previewPresentationControllerDidScheduleDismiss;
-(_UIDeepPressAnalyzer *)deepPressAnalyzer;
-(void)forcePresentationControllerDidDismiss:(id)arg1 ;
-(void)setCurrentCommitTransition:(id)arg1 ;
-(UIInteractionProgress *)interactionProgressForCommit;
-(void)setInteractionProgressForCommit:(UIInteractionProgress *)arg1 ;
-(void)commitInteractivePreview;
-(void)_resetCustomPresentationHooks;
-(void)_finalizeInteractivePreview;
-(void)_handleRevealGesture:(id)arg1 ;
-(void)setRevealGestureRecognizer:(_UIRevealGestureRecognizer *)arg1 ;
-(void)dealloc;
-(void)_handleTouchObservingGesture:(id)arg1 ;
-(void)setTouchObservingGestureRecognizer:(_UITouchesObservingGestureRecognizer *)arg1 ;
-(void)setPreviewGestureRecognizer:(_UIPreviewGestureRecognizer *)arg1 ;
-(BOOL)startInteractivePreviewWithGestureRecognizer:(id)arg1 ;
-(void)_turnOnFeedbackGenerator;
-(void)cancelInteractivePreview;
-(BOOL)didSendDelegateWillDismissViewController;
-(UIPanGestureRecognizer *)modalPanGestureRecognizer;
-(void)setDidSendDelegateWillDismissViewController:(BOOL)arg1 ;
-(void)setDeepPressAnalyzer:(_UIDeepPressAnalyzer *)arg1 ;
-(void)setModalPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)_turnOffFeedbackGenerator;
-(void)forcePresentationController:(id)arg1 didSelectMenuItem:(id)arg2 ;
-(void)forcePresentationControllerWantsToCommit:(id)arg1 ;
-(id)currentCommitTransition;
-(id<UIForceTransitioningDelegate>)currentTransitionDelegate;
@end

