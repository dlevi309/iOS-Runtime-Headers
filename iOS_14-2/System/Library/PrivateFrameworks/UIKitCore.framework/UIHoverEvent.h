/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIEvent.h>

@class NSMapTable;

@interface UIHoverEvent : UIEvent {

	NSMapTable* _touchesByContextId;
	NSMapTable* _deliveryTableByTouch;
	BOOL _pointerLocked;
	BOOL _hasOutstandingUpdates;

}

@property (assign,nonatomic) BOOL hasOutstandingUpdates;                                                         //@synthesize hasOutstandingUpdates=_hasOutstandingUpdates - In the implementation block
@property (assign,setter=_setPointerLocked:,getter=_isPointerLocked,nonatomic) BOOL _pointerLocked;              //@synthesize pointerLocked=_pointerLocked - In the implementation block
-(long long)subtype;
-(void)_windowDidBecomeHidden:(id)arg1 ;
-(id)_deliveryTableByTouchCreateIfNeeded:(id)arg1 ;
-(id)_touchesByContextId:(unsigned)arg1 createIfNeeded:(BOOL)arg2 ;
-(unsigned long long)_inputPrecision;
-(id)touchesForWindow:(id)arg1 ;
-(void)_pointerStateDidChange:(id)arg1 ;
-(BOOL)_isPointerLocked;
-(void)removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2 ;
-(void)_completelyRemoveHoverTouchAndDeliveryTableForContextIdNumber:(id)arg1 ;
-(void)setNeedsUpdateForWindow:(id)arg1 ;
-(id)_windows;
-(id)allTouches;
-(void)removeHoverTouchForContextId:(unsigned)arg1 pathIndex:(long long)arg2 ;
-(void)setHasOutstandingUpdates:(BOOL)arg1 ;
-(void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1 ;
-(id)touchesForGestureRecognizer:(id)arg1 ;
-(long long)type;
-(void)_cancelAllGestureRecognizers;
-(id)touchesForView:(id)arg1 ;
-(BOOL)hasOutstandingUpdates;
-(id)hoverTouchForContextId:(unsigned)arg1 pathIndex:(long long)arg2 ;
-(void)_setPointerLocked:(BOOL)arg1 ;
-(id)_init;
-(void)_setNeedsUpdateForWindow:(id)arg1 forcingHitTest:(BOOL)arg2 ;
-(void)setNeedsHitTestResetForWindow:(id)arg1 ;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(void)setHoverTouch:(id)arg1 forContextId:(unsigned)arg2 pathIndex:(long long)arg3 ;
-(void)_windowDidDetachContext:(id)arg1 ;
-(void)dealloc;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
@end

