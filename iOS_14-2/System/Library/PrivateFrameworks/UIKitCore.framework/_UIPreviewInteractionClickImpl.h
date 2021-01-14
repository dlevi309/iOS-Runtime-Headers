/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIClickInteractionDelegate.h>
#import <UIKit/UIInteraction_Private.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIPreviewInteractionImpl.h>
#import <UIKit/UIInteraction.h>

@protocol UIPreviewInteractionDelegate, UIPreviewInteractionDelegatePrivate, _UIPreviewInteractionTouchForceProviding, UIInteractionEffect;
@class UIView, UIPreviewInteraction, _UIClickInteraction, _UIRelationshipGestureRecognizer, _UIPreviewInteractionPresentationAssistant, _UIPreviewInteractionHighlighter, UIDragInteraction, NSString;

@interface _UIPreviewInteractionClickImpl : NSObject <_UIClickInteractionDelegate, UIInteraction_Private, UIGestureRecognizerDelegate, _UIPreviewInteractionImpl, UIInteraction> {

	unsigned long long _currentState;
	SCD_Struct_UI77 _delegateImplements;
	id<UIPreviewInteractionDelegate> _delegate;
	id<UIPreviewInteractionDelegatePrivate> _privateDelegate;
	UIView* _view;
	id<_UIPreviewInteractionTouchForceProviding> _touchForceProvider;
	UIPreviewInteraction* _previewInteraction;
	id<UIInteractionEffect> _interactionEffect;
	_UIClickInteraction* _previewClickInteraction;
	_UIClickInteraction* _commitClickInteraction;
	_UIRelationshipGestureRecognizer* _exclusionRelationshipGestureRecognizer;
	_UIPreviewInteractionPresentationAssistant* _presentationAssistant;
	_UIPreviewInteractionHighlighter* _highlighter;
	UIDragInteraction* _associatedDragInteraction;

}

@property (nonatomic,__weak,readonly) id<UIPreviewInteractionDelegatePrivate> privateDelegate;                       //@synthesize privateDelegate=_privateDelegate - In the implementation block
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
@property (nonatomic,retain) id<UIInteractionEffect> interactionEffect;                                              //@synthesize interactionEffect=_interactionEffect - In the implementation block
@property (nonatomic,__weak,readonly) UIView * view;                                                                 //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id<UIPreviewInteractionDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider;                        //@synthesize touchForceProvider=_touchForceProvider - In the implementation block
@property (assign,nonatomic,__weak) UIPreviewInteraction * previewInteraction;                                       //@synthesize previewInteraction=_previewInteraction - In the implementation block
-(void)setAssociatedDragInteraction:(UIDragInteraction *)arg1 ;
-(UIDragInteraction *)associatedDragInteraction;
-(id<UIPreviewInteractionDelegate>)delegate;
-(void)didMoveToView:(id)arg1 ;
-(void)setExclusionRelationshipGestureRecognizer:(_UIRelationshipGestureRecognizer *)arg1 ;
-(void)setInteractionEffect:(id<UIInteractionEffect>)arg1 ;
-(_UIRelationshipGestureRecognizer *)exclusionRelationshipGestureRecognizer;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(_UIPreviewInteractionPresentationAssistant *)presentationAssistant;
-(void)setDelegate:(id<UIPreviewInteractionDelegate>)arg1 ;
-(UIView *)view;
-(void)cancelInteraction;
-(id<UIInteractionEffect>)interactionEffect;
-(id<UIPreviewInteractionDelegatePrivate>)privateDelegate;
-(BOOL)_canPerformPresentation;
-(void)setPresentationAssistant:(_UIPreviewInteractionPresentationAssistant *)arg1 ;
-(void)_prepareInteractionEffect;
-(void)_endInteractionEffectIfNeeded;
-(_UIPreviewInteractionHighlighter *)highlighter;
-(UIPreviewInteraction *)previewInteraction;
-(_UIClickInteraction *)previewClickInteraction;
-(void)setHighlighter:(_UIPreviewInteractionHighlighter *)arg1 ;
-(_UIClickInteraction *)commitClickInteraction;
-(void)setPreviewClickInteraction:(_UIClickInteraction *)arg1 ;
-(BOOL)_performPresentationIfPossible;
-(void)setCommitClickInteraction:(_UIClickInteraction *)arg1 ;
-(void)clickInteractionDidClickUp:(id)arg1 ;
-(BOOL)clickInteractionShouldBegin:(id)arg1 ;
-(void)setPreviewInteraction:(UIPreviewInteraction *)arg1 ;
-(void)clickInteractionDidClickDown:(id)arg1 ;
-(void)clickInteractionDidEnd:(id)arg1 ;
-(id)highlightEffectForClickInteraction:(id)arg1 ;
-(id<_UIPreviewInteractionTouchForceProviding>)touchForceProvider;
-(id)initWithView:(id)arg1 previewInteraction:(id)arg2 ;
-(void)setTouchForceProvider:(id<_UIPreviewInteractionTouchForceProviding>)arg1 ;
-(void)_startPreviewAtLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id)_gestureRecognizerForExclusionRelationship;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
@end

