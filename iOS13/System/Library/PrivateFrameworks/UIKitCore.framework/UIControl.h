/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <UIKitCore/_UICursorInteractionDelegate.h>

@class NSMutableArray, UIPointerInteraction, _UICursorInteraction, NSSet, NSString;

@interface UIControl : UIView <UIPointerInteractionDelegate, _UICursorInteractionDelegate> {

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
		unsigned delayActions : 1;
		unsigned allowActionsToQueue : 1;
		unsigned pendingUnhighlight : 1;
		unsigned selected : 1;
		unsigned verticalAlignment : 3;
		unsigned horizontalAlignment : 3;
		unsigned wasLastHighlightSuccessful : 1;
		unsigned touchHasHighlighted : 1;
		unsigned hasPointerInteraction : 1;
		unsigned hasProxyPointerInteraction : 1;
	}  _controlFlags;
	long long _requiredButtonMask;

}

@property (nonatomic,readonly) long long effectiveContentVerticalAlignment; 
@property (nonatomic,readonly) UIPointerInteraction * pointerInteraction; 
@property (assign,getter=isPointerInteractionEnabled,nonatomic) BOOL pointerInteractionEnabled; 
@property (nonatomic,readonly) UIPointerInteraction * _pointerInteraction; 
@property (setter=_setProxyPointerInteraction:,nonatomic,retain) UIPointerInteraction * _proxyPointerInteraction; 
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_primaryStateForState:(unsigned long long)arg1 ;
+(BOOL)_cursorInteractionEnabled;
+(BOOL)_allowActionsToQueue;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(BOOL)isEnabled;
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)_systemDefaultFocusGroupDescriptor;
-(BOOL)canBecomeFirstResponder;
-(void)setSelected:(BOOL)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3 ;
-(void)setPointerInteractionEnabled:(BOOL)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(void)_setTouchHasHighlighted:(BOOL)arg1 ;
-(void)sendActionsForControlEvents:(unsigned long long)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)setContentHorizontalAlignment:(long long)arg1 ;
-(void)setContentVerticalAlignment:(long long)arg1 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)_setLastHighlightSuccessful:(BOOL)arg1 ;
-(BOOL)isTouchInside;
-(long long)contentVerticalAlignment;
-(_UICursorInteraction *)_cursorInteraction;
-(BOOL)isTracking;
-(void)_setProxyPointerInteraction:(id)arg1 ;
-(UIPointerInteraction *)_proxyPointerInteraction;
-(long long)contentHorizontalAlignment;
-(long long)effectiveContentHorizontalAlignment;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)_clippedHighlightBounds;
-(BOOL)_touchHasHighlighted;
-(double)_highlightCornerRadius;
-(BOOL)_wasLastHighlightSuccessful;
-(void)_invalidatePointerInteraction;
-(long long)effectiveContentVerticalAlignment;
-(_UICursorInteraction *)cursorInteraction;
-(id)_createPointerInteraction;
-(UIPointerInteraction *)_pointerInteraction;
-(void)_installCursorInteractionIfNeeded;
-(BOOL)isPointerInteractionEnabled;
-(void)setTracking:(BOOL)arg1 ;
-(void)_cancelDelayedActions;
-(void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)_unhighlight;
-(BOOL)requiresDisplayOnTracking;
-(long long)_requiredButtonMask;
-(BOOL)shouldTrack;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)cancelTouchTracking;
-(void)_incrementStatisticsForUserActionForEvents:(unsigned long long)arg1 ;
-(void)_sendDelayedActions:(BOOL)arg1 ;
-(void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3 ;
-(void)_beginInteractionDurationStatisticMeasurements;
-(void)_commitInteractionDurationStatisticMeasurements;
-(UIPointerInteraction *)pointerInteraction;
-(BOOL)cancelMouseTracking;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(id)_allTargetActions;
-(NSSet *)allTargets;
-(unsigned long long)allControlEvents;
-(id)actionsForTarget:(id)arg1 forControlEvent:(unsigned long long)arg2 ;
-(BOOL)_hasActionForEventMask:(unsigned long long)arg1 ;
-(void)_setHighlightOnMouseDown:(BOOL)arg1 ;
-(void)_delayActions;
-(void)_sendDelayedActions;
-(BOOL)touchDragged;
-(void)setRequiresDisplayOnTracking:(BOOL)arg1 ;
-(BOOL)hasOneOrMoreTargets;
-(void)removeTarget:(id)arg1 forEvents:(int)arg2 ;
-(void)_diagnoseFocusabilityForReport:(id)arg1 ;
-(long long)_focusedSound;
-(unsigned long long)_stateForFocusUpdateContext:(id)arg1 ;
-(void)_setRequiredButtonMask:(long long)arg1 ;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
-(id)_scalarStatisticsForUserValueChangedEvent;
-(id)__scalarStatisticsForUserTouchUpInsideEvent;
-(id)__scalarStatisticsForUserValueChangedEvent;
-(id)__distributionStatisticsForUserInteractionDuration;
-(id)_scalarStatisticsForUserTouchUpInsideEvent;
-(id)_distributionStatisticsForUserInteractionDuration;
@end

