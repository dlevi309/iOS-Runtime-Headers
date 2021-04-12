/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIEvent.h>

@class NSMapTable;

@interface UIHoverEvent : UIEvent {

	NSMapTable* _touchesByContextId;
	NSMapTable* _deliveryTableByTouch;
	BOOL _hasOutstandingUpdates;

}

@property (assign,nonatomic) BOOL hasOutstandingUpdates;              //@synthesize hasOutstandingUpdates=_hasOutstandingUpdates - In the implementation block
-(void)dealloc;
-(long long)type;
-(id)_init;
-(long long)subtype;
-(id)_windows;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
-(id)touchesForWindow:(id)arg1 ;
-(id)allTouches;
-(void)setNeedsUpdate;
-(id)touchesForGestureRecognizer:(id)arg1 ;
-(void)_pointerStateDidChange:(id)arg1 ;
-(void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1 ;
-(void)setNeedsHitTestReset;
-(void)removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2 ;
-(id)touchesForView:(id)arg1 ;
-(void)_cancelAllGestureRecognizers;
-(void)_windowDidDetachContext:(id)arg1 ;
-(id)_deliveryTableByTouchCreateIfNeeded:(id)arg1 ;
-(id)_touchesByContextId:(unsigned)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)hoverTouchForContextId:(unsigned)arg1 pathIndex:(long long)arg2 ;
-(void)setHoverTouch:(id)arg1 forContextId:(unsigned)arg2 pathIndex:(long long)arg3 ;
-(void)removeHoverTouchForContextId:(unsigned)arg1 pathIndex:(long long)arg2 ;
-(BOOL)hasOutstandingUpdates;
-(void)setHasOutstandingUpdates:(BOOL)arg1 ;
@end

