/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIVariableGestureContextMenuInteractionDelegate.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <UIKit/UIContextMenuInteractionDelegate_Private.h>
#import <UIKitCore/_UICursorInteractionDelegate.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@class NSMutableArray, UIPointerInteraction, _UICursorInteraction, NSSet, UIContextMenuInteraction, NSString;

@interface UIControl : UIView <_UIVariableGestureContextMenuInteractionDelegate, UIPointerInteractionDelegate, UIContextMenuInteractionDelegate_Private, _UICursorInteractionDelegate, UIContextMenuInteractionDelegate> {

	NSMutableArray* _targetActions;
	CGPoint _previousPoint;
	double _downTime;
	struct {
		unsigned disabled : 1;
		unsigned tracking : 1;
		unsigned touchInside : 1;
		unsigned touchDragged : 1;
		unsigned requiresDisplayOnTracking : 1;
		unsigned highlighted : 1;
		unsigned dontHighlightOnTouchDown : 1;
		unsigned allowActionsToQueue : 1;
		unsigned pendingUnhighlight : 1;
		unsigned selected : 1;
		unsigned verticalAlignment : 3;
		unsigned horizontalAlignment : 3;
		unsigned wasLastHighlightSuccessful : 1;
		unsigned touchHasHighlighted : 1;
		unsigned hasPointerInteraction : 1;
		unsigned hasProxyPointerInteraction : 1;
		unsigned hasContextMenuInteraction : 1;
		unsigned highlightForMenuPresentation : 1;
	}  _controlFlags;
	long long _requiredButtonMask;

}

@property (nonatomic,readonly) long long effectiveContentVerticalAlignment; 
@property (nonatomic,readonly) UIPointerInteraction * pointerInteraction; 
@property (assign,getter=isPointerInteractionEnabled,nonatomic) BOOL pointerInteractionEnabled; 
@property (nonatomic,readonly) UIPointerInteraction * _pointerInteraction; 
@property (setter=_setProxyPointerInteraction:,nonatomic,retain) UIPointerInteraction * _proxyPointerInteraction; 
@property (assign,setter=_setProxySender:,nonatomic,__weak) id _proxySender; 
@property (assign,getter=isContextMenuEnabled,nonatomic) BOOL contextMenuEnabled; 
@property (assign,nonatomic) BOOL contextMenuIsPrimary; 
@property (assign,setter=_setRequiredButtonMask:,nonatomic) long long _requiredButtonMask;                                     //@synthesize requiredButtonMask=_requiredButtonMask - In the implementation block
@property (nonatomic,readonly) _UICursorInteraction * cursorInteraction; 
@property (nonatomic,readonly) _UICursorInteraction * _cursorInteraction; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) long long contentVerticalAlignment; 
@property (assign,nonatomic) long long contentHorizontalAlignment; 
@property (nonatomic,readonly) long long effectiveContentHorizontalAlignment; 
@property (nonatomic,readonly) unsigned long long state; 
@property (getter=isTracking,nonatomic,readonly) BOOL tracking; 
@property (getter=isTouchInside,nonatomic,readonly) BOOL touchInside; 
@property (nonatomic,readonly) NSSet * allTargets; 
@property (nonatomic,readonly) unsigned long long allControlEvents; 
@property (nonatomic,readonly) UIContextMenuInteraction * contextMenuInteraction; 
@property (assign,getter=isContextMenuInteractionEnabled,nonatomic) BOOL contextMenuInteractionEnabled; 
@property (assign,nonatomic) BOOL showsMenuAsPrimaryAction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_cursorInteractionEnabled;
+(BOOL)_allowActionsToQueue;
+(unsigned long long)_primaryStateForState:(unsigned long long)arg1 ;
-(UIPointerInteraction *)pointerInteraction;
-(BOOL)canBecomeFocused;
-(void)setTracking:(BOOL)arg1 ;
-(void)_cancelDelayedActions;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(UIContextMenuInteraction *)contextMenuInteraction;
-(void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2 ;
-(BOOL)isTracking;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_setProxySender:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)_contextMenuInteraction:(id)arg1 interactionEffectForTargetedPreview:(id)arg2 ;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_systemDefaultFocusGroupDescriptor;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(BOOL)isSelected;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(NSSet *)allTargets;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)shouldTrack;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)_createPointerInteraction;
-(unsigned long long)allControlEvents;
-(void)_unhighlight;
-(BOOL)cancelTouchTracking;
-(CGPoint)menuAttachmentPointForConfiguration:(id)arg1 ;
-(void)_installCursorInteractionIfNeeded;
-(id)_allTargetActions;
-(BOOL)isPointerInteractionEnabled;
-(long long)_requiredButtonMask;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2 ;
-(BOOL)requiresDisplayOnTracking;
-(void)_addControlTargetAction:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)hasOneOrMoreTargets;
-(void)_sendDelayedActions:(BOOL)arg1 ;
-(void)_incrementStatisticsForUserActionForEvents:(unsigned long long)arg1 ;
-(void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3 ;
-(void)enumerateEventHandlers:(/*^block*/id)arg1 ;
-(void)_beginInteractionDurationStatisticMeasurements;
-(void)_commitInteractionDurationStatisticMeasurements;
-(BOOL)isContextMenuInteractionEnabled;
-(BOOL)cancelMouseTracking;
-(void)_contextMenuInteraction:(id)arg1 willBeginWithConfiguration:(id)arg2 ;
-(void)removeAction:(id)arg1 forControlEvents:(unsigned long long)arg2 ;
-(void)_sendDelayedActions;
-(void)removeActionForIdentifier:(id)arg1 forControlEvents:(unsigned long long)arg2 ;
-(id)actionsForTarget:(id)arg1 forControlEvent:(unsigned long long)arg2 ;
-(BOOL)_hasActionForEventMask:(unsigned long long)arg1 ;
-(void)_setHighlightOnMouseDown:(BOOL)arg1 ;
-(void)setRequiresDisplayOnTracking:(BOOL)arg1 ;
-(BOOL)isContextMenuEnabled;
-(void)removeTarget:(id)arg1 forEvents:(int)arg2 ;
-(BOOL)contextMenuIsPrimary;
-(_UICursorInteraction *)cursorInteraction;
-(void)_diagnoseFocusabilityForReport:(id)arg1 ;
-(unsigned long long)_stateForFocusUpdateContext:(id)arg1 ;
-(void)setContextMenuEnabled:(BOOL)arg1 ;
-(void)_setRequiredButtonMask:(long long)arg1 ;
-(id)_proxySender;
-(void)_setProxyPointerInteraction:(id)arg1 ;
-(UIPointerInteraction *)_proxyPointerInteraction;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(double)_highlightCornerRadius;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(void)sendActionsForControlEvents:(unsigned long long)arg1 ;
-(BOOL)isHighlighted;
-(_UICursorInteraction *)_cursorInteraction;
-(void)setContextMenuInteractionEnabled:(BOOL)arg1 ;
-(id)_contextMenuInteraction;
-(void)setPointerInteractionEnabled:(BOOL)arg1 ;
-(void)sendAction:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setContentHorizontalAlignment:(long long)arg1 ;
-(unsigned long long)state;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
-(id)_scalarStatisticsForUserValueChangedEvent;
-(long long)contentVerticalAlignment;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(BOOL)touchDragged;
-(BOOL)isTouchInside;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isEnabled;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)addAction:(id)arg1 forControlEvents:(unsigned long long)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3 ;
-(void)_delayActions;
-(long long)_focusedSound;
-(void)setShowsMenuAsPrimaryAction:(BOOL)arg1 ;
-(void)_commonInitForPrimaryAction:(id)arg1 ;
-(BOOL)_touchHasHighlighted;
-(id)initWithFrame:(CGRect)arg1 primaryAction:(id)arg2 ;
-(long long)contentHorizontalAlignment;
-(long long)effectiveContentHorizontalAlignment;
-(UIPointerInteraction *)_pointerInteraction;
-(BOOL)showsMenuAsPrimaryAction;
-(void)setContextMenuIsPrimary:(BOOL)arg1 ;
-(CGRect)_clippedHighlightBounds;
-(void)setContentVerticalAlignment:(long long)arg1 ;
-(id)__scalarStatisticsForUserTouchUpInsideEvent;
-(id)__scalarStatisticsForUserValueChangedEvent;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(id)__distributionStatisticsForUserInteractionDuration;
-(id)_scalarStatisticsForUserTouchUpInsideEvent;
-(id)_distributionStatisticsForUserInteractionDuration;
-(BOOL)_wasLastHighlightSuccessful;
-(void)_willMoveToWindow:(id)arg1 ;
-(void)_setLastHighlightSuccessful:(BOOL)arg1 ;
-(void)_invalidatePointerInteraction;
-(long long)effectiveContentVerticalAlignment;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(long long)_sceneDraggingBehaviorOnPan;
-(void)_setTouchHasHighlighted:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

