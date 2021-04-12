/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@class _UIDragEventSample, UIView, NSMutableSet, NSHashTable, _UIInternalDraggingSessionDestination, _UIInternalDraggingSessionSource, NSSet, _UIDropSessionImpl, UIWindow;

@interface UIDragEvent : UIEvent {

	_UIDragEventSample* _currentSample;
	UIView* _previousEventView;
	UIView* _eventView;
	NSMutableSet* _beginningGestureRecognizers;
	NSMutableSet* _updatingGestureRecognizers;
	NSMutableSet* _exitingGestureRecognizers;
	NSMutableSet* _endingGestureRecognizers;
	NSMutableSet* _ignoredGestureRecognizers;
	NSMutableSet* _dynamicGestureRecognizers;
	NSHashTable* _viewsQueriedForDynamicGestures;
	NSMutableSet* _dynamicInteractions;
	BOOL _ignoreDragEnd;
	BOOL _needsHitTestReset;
	BOOL _dragFailed;
	/*^block*/id _dragFailedCallback;
	unsigned _dragSessionID;
	_UIInternalDraggingSessionDestination* _sessionDestination;
	_UIInternalDraggingSessionSource* _sessionSource;

}

@property (getter=_hitTestedView,nonatomic,readonly) UIView * hitTestedView; 
@property (getter=_dynamicGestureRecognizers,nonatomic,readonly) NSSet * dynamicGestureRecognizers; 
@property (getter=_sessionDestination,nonatomic,readonly) _UIInternalDraggingSessionDestination * sessionDestination;              //@synthesize sessionDestination=_sessionDestination - In the implementation block
@property (getter=_sessionSource,nonatomic,readonly) _UIInternalDraggingSessionSource * sessionSource;                             //@synthesize sessionSource=_sessionSource - In the implementation block
@property (getter=_dropSession,nonatomic,readonly) _UIDropSessionImpl * dropSession; 
@property (nonatomic,readonly) UIWindow * eventWindow; 
@property (nonatomic,readonly) BOOL isPolicyDriven; 
@property (nonatomic,readonly) BOOL hasActiveGestureRecognizers; 
@property (getter=_touchRoutingPolicyContextID,nonatomic,readonly) unsigned touchRoutingPolicyContextID; 
@property (getter=_windowServerHitTestContextID,nonatomic,readonly) unsigned windowServerHitTestContextID; 
@property (nonatomic,readonly) unsigned dragSessionID;                                                                             //@synthesize dragSessionID=_dragSessionID - In the implementation block
@property (nonatomic,readonly) CGPoint locationInSceneReferenceSpace; 
@property (nonatomic,readonly) BOOL isFromAccessibilitySession; 
+(BOOL)_isSessionIDValid:(unsigned)arg1 ;
+(void)_invalidateSessionID:(unsigned)arg1 ;
-(void)dealloc;
-(long long)type;
-(void)_reset;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_windows;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(void)_removeGestureRecognizer:(id)arg1 ;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(id)_dropSession;
-(id)_sessionDestination;
-(id)_dynamicGestureRecognizers;
-(BOOL)isFromAccessibilitySession;
-(UIWindow *)eventWindow;
-(unsigned)dragSessionID;
-(unsigned)_touchRoutingPolicyContextID;
-(BOOL)isPolicyDriven;
-(BOOL)hasActiveGestureRecognizers;
-(void)_sendIfNeeded;
-(void)_setNeedsHitTestReset;
-(void)_dragFailedWithCallback:(/*^block*/id)arg1 ;
-(id)_sessionSource;
-(void)_wasDeliveredToGestureRecognizers;
-(void)_ignoreGestureRecognizer:(id)arg1 ;
-(unsigned)_windowServerHitTestContextID;
-(void)_updateFromCurrentSample;
-(BOOL)_shouldSendEvent;
-(void)_updateGesturesFromCurrentSample;
-(id)_updatingDropGestureRecognizers;
-(void)_ignoreDragEnd;
-(BOOL)_isReadyForReset;
-(id)initWithDragSessionID:(unsigned)arg1 environment:(id)arg2 ;
-(BOOL)_isTouchRoutingPolicyBased;
-(CGPoint)locationInSceneReferenceSpace;
-(id)_hitTestedView;
@end

