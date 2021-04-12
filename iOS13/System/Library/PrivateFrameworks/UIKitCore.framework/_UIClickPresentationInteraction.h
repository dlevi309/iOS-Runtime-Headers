/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIClickInteractionDriverDelegate.h>
#import <UIKit/UIInteraction_Private.h>
#import <UIKit/UIInteraction_Internal.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIDragInteractionPresentationDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol _UIClickPresentationInteractionDelegate, UIInteractionEffect, _UIClickInteractionDriving, _UIClickPresentationAssisting;
@class UIView, NSMutableArray, _UIStateMachine, NSArray, _UIRelationshipGestureRecognizer, _UIClickPresentation, _UIClickPresentationFeedbackGenerator, UIDragInteraction, NSString, UIGestureRecognizer;

@interface _UIClickPresentationInteraction : NSObject <_UIClickInteractionDriverDelegate, UIInteraction_Private, UIInteraction_Internal, UIGestureRecognizerDelegate, _UIDragInteractionPresentationDelegate, UIInteraction> {

	SCD_Struct_UI101 _delegateImplements;
	BOOL _unableToClick;
	long long _statsPresentation;
	BOOL _activatedFeedbackGeneratorForClick;
	BOOL _allowSimultaneousRecognition;
	id<_UIClickPresentationInteractionDelegate> _delegate;
	UIView* _view;
	id<UIInteractionEffect> _interactionEffect;
	NSMutableArray* _stateBreadCrumbs;
	_UIStateMachine* _stateMachine;
	id<_UIClickInteractionDriving> _activeDriver;
	NSArray* _allDrivers;
	_UIRelationshipGestureRecognizer* _exclusionRelationshipGestureRecognizer;
	_UIRelationshipGestureRecognizer* _failureRelationshipGestureRecognizer;
	id<_UIClickPresentationAssisting> _presentationAssistant;
	_UIClickPresentation* _pendingPresentation;
	_UIClickPresentationFeedbackGenerator* _feedbackGenerator;
	UIDragInteraction* _latentAssociatedDragInteraction;
	NSMutableArray* _activeInteractionEffects;
	UIDragInteraction* _associatedDragInteraction;
	NSString* _debugIdentifier;
	NSString* _presentationTypeDebugString;
	NSArray* _overrideDrivers;
	CGPoint _initialLocation;

}

@property (nonatomic,retain) _UIStateMachine * stateMachine;                                                         //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) id<_UIClickInteractionDriving> activeDriver;                                            //@synthesize activeDriver=_activeDriver - In the implementation block
@property (nonatomic,retain) NSArray * allDrivers;                                                                   //@synthesize allDrivers=_allDrivers - In the implementation block
@property (nonatomic,retain) _UIRelationshipGestureRecognizer * exclusionRelationshipGestureRecognizer;              //@synthesize exclusionRelationshipGestureRecognizer=_exclusionRelationshipGestureRecognizer - In the implementation block
@property (nonatomic,retain) _UIRelationshipGestureRecognizer * failureRelationshipGestureRecognizer;                //@synthesize failureRelationshipGestureRecognizer=_failureRelationshipGestureRecognizer - In the implementation block
@property (nonatomic,retain) id<_UIClickPresentationAssisting> presentationAssistant;                                //@synthesize presentationAssistant=_presentationAssistant - In the implementation block
@property (nonatomic,retain) _UIClickPresentation * pendingPresentation;                                             //@synthesize pendingPresentation=_pendingPresentation - In the implementation block
@property (assign,nonatomic) CGPoint initialLocation;                                                                //@synthesize initialLocation=_initialLocation - In the implementation block
@property (nonatomic,retain) _UIClickPresentationFeedbackGenerator * feedbackGenerator;                              //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (nonatomic,retain) UIDragInteraction * latentAssociatedDragInteraction;                                    //@synthesize latentAssociatedDragInteraction=_latentAssociatedDragInteraction - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeInteractionEffects;                                              //@synthesize activeInteractionEffects=_activeInteractionEffects - In the implementation block
@property (assign,nonatomic,__weak) UIDragInteraction * associatedDragInteraction;                                   //@synthesize associatedDragInteraction=_associatedDragInteraction - In the implementation block
@property (nonatomic,readonly) NSMutableArray * stateBreadCrumbs;                                                    //@synthesize stateBreadCrumbs=_stateBreadCrumbs - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                                                               //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (nonatomic,copy) NSString * presentationTypeDebugString;                                                   //@synthesize presentationTypeDebugString=_presentationTypeDebugString - In the implementation block
@property (nonatomic,readonly) unsigned long long activationMode; 
@property (nonatomic,readonly) unsigned long long inputPrecision; 
@property (nonatomic,retain) NSArray * overrideDrivers;                                                              //@synthesize overrideDrivers=_overrideDrivers - In the implementation block
@property (getter=_reachedForceThreshold,nonatomic,readonly) BOOL reachedForceThreshold; 
@property (nonatomic,__weak,readonly) id<_UIClickPresentationInteractionDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * gestureRecognizerForExclusionRelationship; 
@property (assign,nonatomic) BOOL allowSimultaneousRecognition;                                                      //@synthesize allowSimultaneousRecognition=_allowSimultaneousRecognition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                                                 //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) id<UIInteractionEffect> interactionEffect;                                              //@synthesize interactionEffect=_interactionEffect - In the implementation block
-(void)dealloc;
-(id<_UIClickPresentationInteractionDelegate>)delegate;
-(BOOL)_isPaused;
-(BOOL)_isActive;
-(unsigned long long)_currentState;
-(id)initWithDelegate:(id)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(UIView *)view;
-(CGPoint)locationInView:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setFeedbackGenerator:(_UIClickPresentationFeedbackGenerator *)arg1 ;
-(_UIClickPresentationFeedbackGenerator *)feedbackGenerator;
-(void)present;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(unsigned long long)activationMode;
-(void)clickDriver:(id)arg1 didUpdateHighlightProgress:(double)arg2 ;
-(BOOL)clickDriver:(id)arg1 shouldDelayGestureRecognizer:(id)arg2 ;
-(void)clickDriver:(id)arg1 didPerformEvent:(unsigned long long)arg2 ;
-(_UIStateMachine *)stateMachine;
-(void)setStateMachine:(_UIStateMachine *)arg1 ;
-(void)_prepareStateMachine;
-(void)cancelInteraction;
-(void)clickDriver:(id)arg1 shouldBegin:(/*^block*/id)arg2 ;
-(unsigned long long)inputPrecision;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(CGPoint)initialLocation;
-(void)setInitialLocation:(CGPoint)arg1 ;
-(id<UIInteractionEffect>)interactionEffect;
-(void)_dragInteractionPresentation:(id)arg1 sessionDidEnd:(id)arg2 withoutBeginning:(BOOL)arg3 ;
-(id)_dragInteractionPresentation:(id)arg1 previewForCancellingItem:(id)arg2 defaultPreview:(id)arg3 proposedPreview:(id)arg4 ;
-(void)_dragInteractionPresentation:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3 ;
-(void)setInteractionEffect:(id<UIInteractionEffect>)arg1 ;
-(void)_viewTraitCollectionDidChange:(id)arg1 ;
-(_UIRelationshipGestureRecognizer *)exclusionRelationshipGestureRecognizer;
-(void)setExclusionRelationshipGestureRecognizer:(_UIRelationshipGestureRecognizer *)arg1 ;
-(void)_prepareInteractionEffect;
-(id<_UIClickPresentationAssisting>)presentationAssistant;
-(BOOL)_canPerformPresentation;
-(void)setPresentationAssistant:(id<_UIClickPresentationAssisting>)arg1 ;
-(void)_endInteractionEffectIfNeeded;
-(unsigned long long)_handleTransitionToActive;
-(unsigned long long)_handleTransitionToHighlight;
-(unsigned long long)_handleTransitionToPreview;
-(void)_handleDidTransitionToPreview;
-(unsigned long long)_handleTransitionToPossibleByEndingWithContext:(id)arg1 ;
-(void)setAssociatedDragInteraction:(UIDragInteraction *)arg1 ;
-(UIDragInteraction *)associatedDragInteraction;
-(void)setActiveInteractionEffects:(NSMutableArray *)arg1 ;
-(void)_refreshAllDrivers;
-(_UIRelationshipGestureRecognizer *)failureRelationshipGestureRecognizer;
-(NSMutableArray *)stateBreadCrumbs;
-(void)_endInteractionDidComplete:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performPreviewPresentation;
-(void)_cancelWithReason:(unsigned long long)arg1 alongsideActions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_beginDragIfPossibleWithTouch:(id)arg1 previewProvider:(/*^block*/id)arg2 fenceHandler:(/*^block*/id)arg3 ;
-(id<_UIClickInteractionDriving>)activeDriver;
-(NSArray *)allDrivers;
-(void)setFailureRelationshipGestureRecognizer:(_UIRelationshipGestureRecognizer *)arg1 ;
-(void)setPendingPresentation:(_UIClickPresentation *)arg1 ;
-(_UIClickPresentation *)pendingPresentation;
-(id)_clickDriverTouch;
-(void)_endInteractionWithContext:(id)arg1 ;
-(BOOL)_supportsRapidRestart;
-(void)setActiveDriver:(id<_UIClickInteractionDriving>)arg1 ;
-(void)_driverClickedDown;
-(void)_driverClickedUp;
-(void)_driverEnded;
-(NSArray *)overrideDrivers;
-(void)setAllDrivers:(NSArray *)arg1 ;
-(Class)_primaryDriverClass;
-(id)_clickDragDriver;
-(void)_attemptDragLiftAtLocation:(CGPoint)arg1 useDefaultLiftAnimation:(BOOL)arg2 ;
-(void)_handleDidTransitionToActive;
-(void)_handleDidTransitionToHighlight;
-(void)_handleDidTransitionToPossibleFromState:(unsigned long long)arg1 context:(id)arg2 ;
-(void)_associateWithActiveDragInteraction;
-(void)_performPresentation;
-(BOOL)_delegate_shouldAllowDragAfterDismiss;
-(void)setLatentAssociatedDragInteraction:(UIDragInteraction *)arg1 ;
-(void)_delegate_interactionEndedWithContext:(id)arg1 ;
-(void)_cancelAllDrivers;
-(id)_activeEffectForPreview:(id)arg1 ;
-(NSMutableArray *)activeInteractionEffects;
-(BOOL)_isControlledByCC;
-(BOOL)allowSimultaneousRecognition;
-(UIDragInteraction *)latentAssociatedDragInteraction;
-(UIGestureRecognizer *)gestureRecognizerForExclusionRelationship;
-(void)beginPanInteraction;
-(void)endPanInteraction;
-(void)beginDragWithTouch:(id)arg1 previewProvider:(/*^block*/id)arg2 fenceHandler:(/*^block*/id)arg3 ;
-(BOOL)_reachedForceThreshold;
-(NSString *)presentationTypeDebugString;
-(void)setOverrideDrivers:(NSArray *)arg1 ;
-(void)setAllowSimultaneousRecognition:(BOOL)arg1 ;
-(NSString *)debugIdentifier;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(void)setPresentationTypeDebugString:(NSString *)arg1 ;
@end

