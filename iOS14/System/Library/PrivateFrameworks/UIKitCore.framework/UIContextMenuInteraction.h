/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIClickPresentationInteractionDelegateInternal.h>
#import <UIKitCore/_UIPreviewPlatterPresentationControllerDelegate.h>
#import <UIKitCore/_UIContextMenuPresentationAnimationDelegate.h>
#import <UIKit/UIDeferredMenuElementDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol UIContextMenuInteractionDelegate;
@class UIView, UIContextMenuConfiguration, NSMutableDictionary, _UIClickPresentationInteraction, UITargetedPreview, _UIContextMenuAnimator, UIGestureRecognizer, NSString;

@interface UIContextMenuInteraction : NSObject <_UIClickPresentationInteractionDelegateInternal, _UIPreviewPlatterPresentationControllerDelegate, _UIContextMenuPresentationAnimationDelegate, UIDeferredMenuElementDelegate, UIInteraction> {

	SCD_Struct_UI167 _delegateImplements;
	UIView* _view;
	id<UIContextMenuInteractionDelegate> _delegate;
	UIContextMenuConfiguration* _pendingConfiguration;
	NSMutableDictionary* _configurationsByIdentifier;
	NSMutableDictionary* _presentationsByIdentifier;
	_UIClickPresentationInteraction* _presentationInteraction;
	UITargetedPreview* _stashedPreview;
	_UIContextMenuAnimator* _pendingCommitAnimator;

}

@property (nonatomic,retain) UIContextMenuConfiguration * pendingConfiguration;                             //@synthesize pendingConfiguration=_pendingConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * configurationsByIdentifier;                              //@synthesize configurationsByIdentifier=_configurationsByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * presentationsByIdentifier;                               //@synthesize presentationsByIdentifier=_presentationsByIdentifier - In the implementation block
@property (nonatomic,retain) _UIClickPresentationInteraction * presentationInteraction;                     //@synthesize presentationInteraction=_presentationInteraction - In the implementation block
@property (nonatomic,copy) UITargetedPreview * stashedPreview;                                              //@synthesize stashedPreview=_stashedPreview - In the implementation block
@property (nonatomic,retain) _UIContextMenuAnimator * pendingCommitAnimator;                                //@synthesize pendingCommitAnimator=_pendingCommitAnimator - In the implementation block
@property (assign,nonatomic) BOOL allowSimultaneousRecognition; 
@property (nonatomic,readonly) UIGestureRecognizer * gestureRecognizerForFailureRelationships; 
@property (nonatomic,readonly) unsigned long long _inputPrecision; 
@property (nonatomic,__weak,readonly) id<UIContextMenuInteractionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long menuAppearance; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                                        //@synthesize view=_view - In the implementation block
+(id)_deferredMenuPlaceholder;
-(BOOL)_delegate_failedToBeginForSecondaryClickAtLocation:(CGPoint)arg1 ;
-(id)_liveDragPreviewForConfiguration:(id)arg1 dragItem:(id)arg2 ;
-(_UIContextMenuAnimator *)pendingCommitAnimator;
-(void)_previewPlatterPresentationControllerDidBeginPanInteraction:(id)arg1 ;
-(id)_delegate_previewForDismissingForConfiguration:(id)arg1 clientReturnedPreview:(BOOL*)arg2 ;
-(void)dismissMenu;
-(unsigned long long)_inputPrecision;
-(void)setPresentationInteraction:(_UIClickPresentationInteraction *)arg1 ;
-(BOOL)_clickPresentationInteractionShouldAllowRapidRestart:(id)arg1 ;
-(id)_fulfilledConfigurationForConfiguration:(id)arg1 activationMode:(unsigned long long)arg2 atLocation:(CGPoint)arg3 inCoordinateSpace:(id)arg4 ;
-(id)_previewPlatterPresentationController:(id)arg1 willDisplayMenu:(id)arg2 ;
-(id<UIContextMenuInteractionDelegate>)delegate;
-(void)setPresentationsByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)_previewPlatterPresentationControllerDidEndPanInteraction:(id)arg1 ;
-(void)setPendingConfiguration:(UIContextMenuConfiguration *)arg1 ;
-(id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(void)_previewPlatterPresentationController:(id)arg1 didSelectMenuLeaf:(id)arg2 ;
-(UIGestureRecognizer *)gestureRecognizerForFailureRelationships;
-(BOOL)_clickPresentationInteractionShouldAllowDragAfterDismiss:(id)arg1 ;
-(id)_clickPresentationInteraction:(id)arg1 previewForCancellingDragItem:(id)arg2 ;
-(void)setAllowSimultaneousRecognition:(BOOL)arg1 ;
-(void)_delegate_tappedPreviewForConfiguration:(id)arg1 withAnimator:(id)arg2 ;
-(void)setPendingCommitAnimator:(_UIContextMenuAnimator *)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)deferredMenuElementWasFulfilled:(id)arg1 ;
-(id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(id)_delegate_contextMenuInteractionWillDisplayForConfiguration:(id)arg1 ;
-(void)_updateVisibleMenuWithBlock:(/*^block*/id)arg1 ;
-(void)_performCleanupForConfigurationWithIdentifier:(id)arg1 ;
-(UIView *)view;
-(id)_proxySender;
-(id)_delegate_previewForHighlightingForConfiguration:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_dragMorphDidCompleteForConfiguration:(id)arg1 ;
-(unsigned long long)_currentActivationMode;
-(void)_previewPlatterPresentationControllerDidTapPreview:(id)arg1 ;
-(id)_interactionDrivers;
-(id)_delegate_configurationForMenuAtLocation:(CGPoint)arg1 ;
-(void)setConfigurationsByIdentifier:(NSMutableDictionary *)arg1 ;
-(unsigned long long)_actualLayoutForPreferredLayout:(unsigned long long)arg1 withConfiguration:(id)arg2 ;
-(NSMutableDictionary *)presentationsByIdentifier;
-(_UIClickPresentationInteraction *)presentationInteraction;
-(UITargetedPreview *)stashedPreview;
-(void)_clickPresentationInteractionEnded:(id)arg1 forPresentation:(id)arg2 reason:(unsigned long long)arg3 ;
-(void)_clickPresentationInteraction:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3 ;
-(void)_clickPresentationInteraction:(id)arg1 dragSessionDidEndForItems:(id)arg2 ;
-(UIContextMenuConfiguration *)pendingConfiguration;
-(id)_delegate_contextMenuInteractionWillEndForConfiguration:(id)arg1 presentation:(id)arg2 ;
-(BOOL)_previewPlatterPresentationControllerShouldHandlePreviewAction:(id)arg1 ;
-(void)setStashedPreview:(UITargetedPreview *)arg1 ;
-(NSMutableDictionary *)configurationsByIdentifier;
-(id)_accessoryViewsForPreviewPlatterPresentationController:(id)arg1 ;
-(BOOL)allowSimultaneousRecognition;
-(id)targetedPreviewForAnimator:(id)arg1 dismissingWithStyle:(unsigned long long)arg2 clientReturnedPreview:(BOOL*)arg3 ;
-(void)_updateInteractionDrivers;
-(void)_previewPlatterPresentationController:(id)arg1 beginDragWithTouch:(id)arg2 ;
-(BOOL)_shouldKeepInputViewVisibleForLayout:(unsigned long long)arg1 ;
-(void)_previewPlatterPresentationControllerWantsToBeDismissed:(id)arg1 withReason:(unsigned long long)arg2 alongsideActions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_menuPreparedForDisplayWithMenu:(id)arg1 ;
-(id)_clickPresentationInteraction:(id)arg1 interactionEffectForTargetedPreview:(id)arg2 ;
-(void)_presentMenuAtLocation:(CGPoint)arg1 ;
-(long long)menuAppearance;
-(id)_overrideTargetedPreviewForCompactStyle:(id)arg1 ;
-(id)_suggestedMenuForConfiguration:(id)arg1 atLocation:(CGPoint)arg2 inCoordinateSpace:(id)arg3 ;
-(id)actualPlatterContainerViewForPresentationController:(id)arg1 ;
-(void)dealloc;
-(id)_clickPresentationInteraction:(id)arg1 liveDragPreviewForPresentation:(id)arg2 ;
-(void)_clickPresentationInteraction:(id)arg1 shouldBegin:(/*^block*/id)arg2 ;
-(void)_willBeginWithConfiguration:(id)arg1 ;
-(void)updateVisibleMenuWithBlock:(/*^block*/id)arg1 ;
-(void)_interactionShouldBeginAtLocation:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
@end

