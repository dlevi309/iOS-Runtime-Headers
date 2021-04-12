/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIClickInteractionDelegate.h>
#import <UIKit/UIInteraction_Private.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIPreviewInteractionImpl.h>
#import <UIKit/UIInteraction.h>

@protocol UIPreviewInteractionDelegate, UIPreviewInteractionDelegatePrivate, _UIPreviewInteractionTouchForceProviding, UIInteractionEffect;
@class UIView, UIPreviewInteraction, _UIStateMachine, _UIClickInteraction, _UIRelationshipGestureRecognizer, _UIPreviewInteractionPresentationAssistant, _UIPreviewInteractionHighlighter, UIDragInteraction, NSString;

@interface _UIPreviewInteractionClickImpl : NSObject <_UIClickInteractionDelegate, UIInteraction_Private, UIGestureRecognizerDelegate, _UIPreviewInteractionImpl, UIInteraction> {

	SCD_Struct_UI66 _delegateImplements;
	id<UIPreviewInteractionDelegate> _delegate;
	id<UIPreviewInteractionDelegatePrivate> _privateDelegate;
	UIView* _view;
	id<_UIPreviewInteractionTouchForceProviding> _touchForceProvider;
	UIPreviewInteraction* _previewInteraction;
	id<UIInteractionEffect> _interactionEffect;
	_UIStateMachine* _stateMachine;
	_UIClickInteraction* _previewClickInteraction;
	_UIClickInteraction* _commitClickInteraction;
	_UIRelationshipGestureRecognizer* _exclusionRelationshipGestureRecognizer;
	_UIPreviewInteractionPresentationAssistant* _presentationAssistant;
	_UIPreviewInteractionHighlighter* _highlighter;
	UIDragInteraction* _associatedDragInteraction;

}

@property (nonatomic,__weak,readonly) id<UIPreviewInteractionDelegatePrivate> privateDelegate;                       //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (nonatomic,retain) _UIStateMachine * stateMachine;                                                         //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) unsigned long long currentState; 
@property (nonatomic,retain) _UIClickInteraction * previewClickInteraction;                                          //@synthesize previewClickInteraction=_previewClickInteraction - In the implementation block
@property (nonatomic,retain) _UIClickInteraction * commitClickInteraction;                                           //@synthesize commitClickInteraction=_commitClickInteraction - In the implementation block
@property (nonatomic,retain) _UIRelationshipGestureRecognizer * exclusionRelationshipGestureRecognizer;              //@synthesize exclusionRelationshipGestureRecognizer=_exclusionRelationshipGestureRecognizer - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionPresentationAssistant * presentationAssistant;                     //@synthesize presentationAssistant=_presentationAssistant - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionHighlighter * highlighter;                                         //@synthesize highlighter=_highlighter - In the implementation block
@property (assign,nonatomic,__weak) UIDragInteraction * associatedDragInteraction;                                   //@synthesize associatedDragInteraction=_associatedDragInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                                                 //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) id<UIInteractionEffect> interactionEffect;                                              //@synthesize interactionEffect=_interactionEffect - In the implementation block
@property (assign,nonatomic,__weak) id<UIPreviewInteractionDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider;                        //@synthesize touchForceProvider=_touchForceProvider - In the implementation block
@property (assign,nonatomic,__weak) UIPreviewInteraction * previewInteraction;                                       //@synthesize previewInteraction=_previewInteraction - In the implementation block
-(void)dealloc;
-(id<UIPreviewInteractionDelegate>)delegate;
-(void)setDelegate:(id<UIPreviewInteractionDelegate>)arg1 ;
-(BOOL)_isPaused;
-(unsigned long long)currentState;
-(UIView *)view;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(_UIStateMachine *)stateMachine;
-(void)setStateMachine:(_UIStateMachine *)arg1 ;
-(void)_prepareStateMachine;
-(void)cancelInteraction;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(id<UIInteractionEffect>)interactionEffect;
-(void)setInteractionEffect:(id<UIInteractionEffect>)arg1 ;
-(id<UIPreviewInteractionDelegatePrivate>)privateDelegate;
-(UIPreviewInteraction *)previewInteraction;
-(_UIClickInteraction *)previewClickInteraction;
-(void)_endInteractionDidComplete:(BOOL)arg1 wasCancelledByClient:(BOOL)arg2 ;
-(_UIClickInteraction *)commitClickInteraction;
-(_UIRelationshipGestureRecognizer *)exclusionRelationshipGestureRecognizer;
-(void)setPreviewClickInteraction:(_UIClickInteraction *)arg1 ;
-(void)setExclusionRelationshipGestureRecognizer:(_UIRelationshipGestureRecognizer *)arg1 ;
-(void)_prepareInteractionEffect;
-(_UIPreviewInteractionPresentationAssistant *)presentationAssistant;
-(BOOL)_canPerformPresentation;
-(void)setPresentationAssistant:(_UIPreviewInteractionPresentationAssistant *)arg1 ;
-(_UIPreviewInteractionHighlighter *)highlighter;
-(void)setHighlighter:(_UIPreviewInteractionHighlighter *)arg1 ;
-(void)_endInteractionEffectIfNeeded;
-(void)_delegateUpdatePreviewTransitionWithProgress:(double)arg1 ended:(BOOL)arg2 ;
-(void)_delegateUpdateCommitTransitionWithProgress:(double)arg1 ended:(BOOL)arg2 ;
-(unsigned long long)_handleTransitionToActive;
-(void)_toBeRemoved_CreateHighlighterIfPossible;
-(void)_toBeRemoved_CallHighlighterCompletion;
-(unsigned long long)_handleTransitionToHighlight;
-(unsigned long long)_handleTransitionToPreview;
-(void)_handleDidTransitionToPreview;
-(unsigned long long)_handleTransitionToPossibleByCommitting;
-(unsigned long long)_handleTransitionToPossibleByEndingWithContext:(id)arg1 ;
-(void)setAssociatedDragInteraction:(UIDragInteraction *)arg1 ;
-(BOOL)_performPresentationIfPossible;
-(void)setCommitClickInteraction:(_UIClickInteraction *)arg1 ;
-(UIDragInteraction *)associatedDragInteraction;
-(void)clickInteractionDidClickUp:(id)arg1 ;
-(BOOL)clickInteractionShouldBegin:(id)arg1 ;
-(void)clickInteractionDidClickDown:(id)arg1 ;
-(id)highlightEffectForClickInteraction:(id)arg1 ;
-(void)clickInteractionDidEnd:(id)arg1 ;
-(id)initWithView:(id)arg1 previewInteraction:(id)arg2 ;
-(void)_startPreviewAtLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id<_UIPreviewInteractionTouchForceProviding>)touchForceProvider;
-(void)setTouchForceProvider:(id<_UIPreviewInteractionTouchForceProviding>)arg1 ;
-(void)setPreviewInteraction:(UIPreviewInteraction *)arg1 ;
-(id)_gestureRecognizerForExclusionRelationship;
@end

