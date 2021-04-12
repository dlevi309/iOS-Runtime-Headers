/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIDragGestureRecognizerDelegate.h>
#import <UIKit/UIInteraction_Internal.h>
#import <UIKit/UIDragInteraction.h>
#import <UIKitCore/_UIDragSetDownAnimationTarget.h>
#import <UIKit/UIInteraction.h>

@protocol UIDropInteractionDelegate, UIDropInteractionEffect;
@class NSMutableSet, NSMapTable, UIView, UIDropInteractionContextImpl, UIPasteConfiguration, NSString;

@interface UIDropInteraction : NSObject <UIDragGestureRecognizerDelegate, UIInteraction_Internal, UIDragInteraction, _UIDragSetDownAnimationTarget, UIInteraction> {

	NSMutableSet* _activeDragGestureRecognizers;
	NSMapTable* _enteredDropSessionByDraggingSession;
	unsigned long long _potentialDragOperation;
	BOOL _allowsSimultaneousDropSessions;
	BOOL _wantsDefaultVisualBehavior;
	id<UIDropInteractionDelegate> _delegate;
	UIView* _view;
	UIDropInteractionContextImpl* _context;
	UIPasteConfiguration* _pasteConfiguration;
	id<UIDropInteractionEffect> _interactionEffect;

}

@property (assign,nonatomic,__weak) UIView * view;                                                                                                   //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIDropInteractionContextImpl * context;                                                                                 //@synthesize context=_context - In the implementation block
@property (getter=_pasteConfiguration,nonatomic,copy,readonly) UIPasteConfiguration * pasteConfiguration;                                            //@synthesize pasteConfiguration=_pasteConfiguration - In the implementation block
@property (nonatomic,retain) id<UIDropInteractionEffect> interactionEffect;                                                                          //@synthesize interactionEffect=_interactionEffect - In the implementation block
@property (assign,setter=_setWantsDefaultVisualBehavior:,getter=_wantsDefaultVisualBehavior,nonatomic) BOOL wantsDefaultVisualBehavior;              //@synthesize wantsDefaultVisualBehavior=_wantsDefaultVisualBehavior - In the implementation block
@property (nonatomic,__weak,readonly) id<UIDropInteractionDelegate> delegate;                                                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsSimultaneousDropSessions;                                                                                    //@synthesize allowsSimultaneousDropSessions=_allowsSimultaneousDropSessions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIDropInteractionDelegate>)delegate;
-(BOOL)isActive;
-(UIDropInteractionContextImpl *)context;
-(void)setContext:(UIDropInteractionContextImpl *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(id<UIDropInteractionEffect>)interactionEffect;
-(void)setInteractionEffect:(id<UIDropInteractionEffect>)arg1 ;
-(void)_dragDestinationGestureStateChanged:(id)arg1 ;
-(BOOL)_allowsSimultaneousDragWithEvent:(id)arg1 ;
-(BOOL)_canHandleDragEvent:(id)arg1 ;
-(BOOL)allowsSimultaneousDropSessions;
-(void)_dropSessionEntered:(id)arg1 withSessionDestination:(id)arg2 ;
-(id)_pasteConfiguration;
-(unsigned long long)_validateDragOperation:(unsigned long long)arg1 forSelector:(SEL)arg2 delegate:(id)arg3 dropSession:(id)arg4 onSession:(id)arg5 forbidden:(BOOL*)arg6 ;
-(unsigned long long)_setLastDragOperation:(unsigned long long)arg1 forbidden:(BOOL)arg2 precise:(BOOL)arg3 prefersFullSizePreview:(BOOL)arg4 preferredBadgeStyle:(long long)arg5 onSession:(id)arg6 ;
-(void)_prepareItemsInSessionForDrop:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveDragEvent:(id)arg2 ;
-(id)_dynamicGestureRecognizersForEvent:(id)arg1 ;
-(id)_setDownAnimation:(id)arg1 windowSceneForSetDownOfDragItem:(id)arg2 ;
-(id)_setDownAnimation:(id)arg1 prepareForSetDownOfDragItem:(id)arg2 visibleDroppedItem:(id)arg3 ;
-(void)_setDownAnimation:(id)arg1 willAnimateSetDownOfDragItem:(id)arg2 withAnimator:(id)arg3 ;
-(BOOL)_setDownAnimation:(id)arg1 shouldDelaySetDownOfDragItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_initWithPasteConfiguration:(id)arg1 ;
-(void)_setWantsDefaultVisualBehavior:(BOOL)arg1 ;
-(void)_sendSessionDidEnd:(id)arg1 ;
-(void)setAllowsSimultaneousDropSessions:(BOOL)arg1 ;
-(BOOL)_wantsDefaultVisualBehavior;
@end

