/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@class UIView, NSArray, _UIRelationshipGestureRecognizer, _UIClickPresentation, _UIClickPresentationFeedbackGenerator, UIDragInteraction, NSMutableArray, NSString, UIGestureRecognizer;

@interface _UIClickPresentationInteraction : NSObject <_UIClickInteractionDriverDelegate, UIInteraction_Private, UIInteraction_Internal, UIGestureRecognizerDelegate, _UIDragInteractionPresentationDelegate, UIInteraction> {

	unsigned long long _currentState;
	SCD_Struct_UI111 _delegateImplements;
	BOOL _unableToClick;
	long long _statsPresentation;
	BOOL _activatedFeedbackGeneratorForClick;
	BOOL _allowSimultaneousRecognition;
	id<_UIClickPresentationInteractionDelegate> _delegate;
	UIView* _view;
	id<UIInteractionEffect> _interactionEffect;
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
@property (nonatomic,retain) id<UIInteractionEffect> interactionEffect;                                              //@synthesize interactionEffect=_interactionEffect - In the implementation block
@property (nonatomic,__weak,readonly) UIView * view;                                                                 //@synthesize view=_view - In the implementation block
-(UIGestureRecognizer *)gestureRecognizerForExclusionRelationship;
-(BOOL)_isActive;
-(unsigned long long)activationMode;
-(void)setAssociatedDragInteraction:(UIDragInteraction *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setFeedbackGenerator:(_UIClickPresentationFeedbackGenerator *)arg1 ;
-(void)_associateWithActiveDragInteraction;
-(void)_cancelWithReason:(unsigned long long)arg1 alongsideActions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dragInteractionPresentation:(id)arg1 sessionDidEnd:(id)arg2 withoutBeginning:(BOOL)arg3 ;
-(NSString *)debugIdentifier;
-(UIDragInteraction *)associatedDragInteraction;
-(id<_UIClickPresentationInteractionDelegate>)delegate;
-(BOOL)_delegate_shouldAllowDragAfterDismiss;
-(_UIRelationshipGestureRecognizer *)failureRelationshipGestureRecognizer;
-(void)present;
-(void)didMoveToView:(id)arg1 ;
-(id)_candidateInteractionsForAssociation;
-(void)clickDriver:(id)arg1 shouldBegin:(/*^block*/id)arg2 ;
-(void)setExclusionRelationshipGestureRecognizer:(_UIRelationshipGestureRecognizer *)arg1 ;
-(id)_dragInteractionPresentation:(id)arg1 previewForCancellingItem:(id)arg2 defaultPreview:(id)arg3 proposedPreview:(id)arg4 ;
-(void)clickDriver:(id)arg1 didPerformEvent:(unsigned long long)arg2 ;
-(void)setOverrideDrivers:(NSArray *)arg1 ;
-(void)_viewTraitCollectionDidChange:(id)arg1 ;
-(void)endPanInteraction;
-(void)setInteractionEffect:(id<UIInteractionEffect>)arg1 ;
-(_UIRelationshipGestureRecognizer *)exclusionRelationshipGestureRecognizer;
-(_UIClickPresentation *)pendingPresentation;
-(BOOL)_reachedForceThreshold;
-(void)setAllDrivers:(NSArray *)arg1 ;
-(void)_driverClickedDown;
-(_UIClickPresentationFeedbackGenerator *)feedbackGenerator;
-(void)setActiveDriver:(id<_UIClickInteractionDriving>)arg1 ;
-(void)setAllowSimultaneousRecognition:(BOOL)arg1 ;
-(void)_cancelAllDrivers;
-(void)setLatentAssociatedDragInteraction:(UIDragInteraction *)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(unsigned long long)inputPrecision;
-(void)setInitialLocation:(CGPoint)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(CGPoint)initialLocation;
-(id<_UIClickPresentationAssisting>)presentationAssistant;
-(BOOL)_supportsRapidRestart;
-(void)clickDriver:(id)arg1 didUpdateHighlightProgress:(double)arg2 ;
-(BOOL)clickDriver:(id)arg1 shouldDelayGestureRecognizer:(id)arg2 ;
-(UIView *)view;
-(void)cancelInteraction;
-(id)_clickDriverTouch;
-(NSString *)presentationTypeDebugString;
-(NSMutableArray *)activeInteractionEffects;
-(id)initWithDelegate:(id)arg1 ;
-(id<UIInteractionEffect>)interactionEffect;
-(void)_endInteractionWithContext:(const InteractionEndingContext*)arg1 ;
-(void)_attemptDragLiftAtLocation:(CGPoint)arg1 useDefaultLiftAnimation:(BOOL)arg2 ;
-(Class)_primaryDriverClass;
-(BOOL)_canPerformPresentation;
-(void)_performPresentation;
-(void)_dragInteractionPresentation:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3 ;
-(void)setPresentationAssistant:(id<_UIClickPresentationAssisting>)arg1 ;
-(void)_transitionedFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(void)setPendingPresentation:(_UIClickPresentation *)arg1 ;
-(void)_prepareInteractionEffect;
-(void)_endInteractionEffectIfNeeded;
-(UIDragInteraction *)latentAssociatedDragInteraction;
-(BOOL)beginDragIfPossibleWithTouch:(id)arg1 ;
-(void)_driverEnded;
-(void)setFailureRelationshipGestureRecognizer:(_UIRelationshipGestureRecognizer *)arg1 ;
-(void)_performPreviewPresentation;
-(void)_setDelegate:(id)arg1 ;
-(id)_clickDragDriver;
-(void)setActiveInteractionEffects:(NSMutableArray *)arg1 ;
-(id)_activeEffectForPreview:(id)arg1 ;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(void)_delegate_interactionEndedWithContext:(const InteractionEndingContext*)arg1 ;
-(BOOL)allowSimultaneousRecognition;
-(NSArray *)allDrivers;
-(NSArray *)overrideDrivers;
-(void)setPresentationTypeDebugString:(NSString *)arg1 ;
-(void)beginPanInteraction;
-(void)_driverClickedUp;
-(BOOL)_isControlledByCC;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_refreshAllDrivers;
-(id<_UIClickInteractionDriving>)activeDriver;
-(void)dealloc;
@end

