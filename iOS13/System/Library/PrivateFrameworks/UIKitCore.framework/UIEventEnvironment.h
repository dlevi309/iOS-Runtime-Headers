/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIApplication, NSMutableArray, UIEvent, UIMotionEvent, UIRemoteControlEvent, NSMutableDictionary, NSMutableSet, UIPressesEvent, UIPhysicalKeyboardEvent, UIWheelEvent, NSMapTable, NSHashTable, NSSet;

@interface UIEventEnvironment : NSObject {

	UIApplication* _application;
	NSMutableArray* _eventQueue;
	UIEvent* _event;
	UIMotionEvent* _motionEvent;
	UIRemoteControlEvent* _remoteControlEvent;
	NSMutableDictionary* _dragEventsByContextAndSessionIDPair;
	BOOL _isSystemApplication;
	double _commitTimeForTouchEvents;
	double _beginTimeForTouchEvents;
	double _deadlineTimeForTouchEvents;
	NSMutableSet* _windowsWithActiveTouchMaps;
	BOOL _hasSeenAnyPencilEvents;
	UIPressesEvent* _fallbackPressesEvent;
	UIPhysicalKeyboardEvent* _fallbackPhysicalKeyboardEvent;
	UIWheelEvent* _fallbackWheelEvent;
	NSMapTable* _eventRegistryByScene;
	NSHashTable* _invalidatedAndDisconnectedScenes;
	NSMapTable* _pressesMapByScene;
	NSMapTable* _currentNudgePressTypeByScene;
	NSMutableDictionary* _physicalButtonPressesMap;
	NSMapTable* _currentTouchByScene;
	long long _disableTouchCoalescingCount;
	NSMutableDictionary* _estimatedTouchRecordsByContextIDAndEstimationIndex;
	NSMutableArray* _estimatedTouchRecordsInIncomingOrder;
	unsigned _genericGestureFocusWindowContextID;
	unsigned _fallbackGenericGestureFocusWindowContextID;

}

@property (assign,nonatomic) UIApplication * application;                                                                                                                                  //@synthesize application=_application - In the implementation block
@property (nonatomic,retain) NSMutableArray * eventQueue;                                                                                                                                  //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,readonly) NSSet * windowsWithActiveTouchMaps;                                                                                                                         //@synthesize windowsWithActiveTouchMaps=_windowsWithActiveTouchMaps - In the implementation block
@property (assign,setter=_setGenericGestureFocusWindowID:,getter=_genericGestureFocusWindowID,nonatomic) unsigned genericGestureFocusWindowContextID;                                      //@synthesize genericGestureFocusWindowContextID=_genericGestureFocusWindowContextID - In the implementation block
@property (assign,setter=_setFallbackGenericGestureFocusWindowID:,getter=_fallbackGenericGestureFocusWindowID,nonatomic) unsigned fallbackGenericGestureFocusWindowContextID;              //@synthesize fallbackGenericGestureFocusWindowContextID=_fallbackGenericGestureFocusWindowContextID - In the implementation block
+(void)_setKeyboardWindowSceneConnected:(BOOL)arg1 ;
+(BOOL)_isKeyboardWindowSceneConnected;
-(void)dealloc;
-(NSMutableArray *)eventQueue;
-(void)setEventQueue:(NSMutableArray *)arg1 ;
-(void)_enqueueHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_touchesEventForWindow:(id)arg1 ;
-(void)sceneDidDisconnect:(id)arg1 ;
-(id)_dragEvents;
-(id)_hoverEventForWindow:(id)arg1 ;
-(id)_pressesEventForWindow:(id)arg1 ;
-(id)_scrollEventForWindow:(id)arg1 ;
-(void)_registerEstimatedTouches:(id)arg1 event:(id)arg2 forTouchable:(id)arg3 ;
-(id)initWithApplication:(id)arg1 ;
-(id)_moveEventForWindow:(id)arg1 ;
-(id)_wheelEventForWindow:(id)arg1 ;
-(id)_gameControllerEventForWindow:(id)arg1 ;
-(id)_physicalKeyboardEventForWindow:(id)arg1 ;
-(id)_pencilEventForWindow:(id)arg1 ;
-(id)_transformEventForWindow:(id)arg1 ;
-(BOOL)_isTrackingAnyTouch;
-(void)_clearTouchesForView:(id)arg1 onWindow:(id)arg2 ;
-(id)_currentTouchForWindow:(id)arg1 ;
-(id)_pressForType:(long long)arg1 window:(id)arg2 ;
-(void)_setPress:(id)arg1 forType:(long long)arg2 window:(id)arg3 ;
-(BOOL)eventWantsLowLatency:(id)arg1 ;
-(id)_physicalKeyboardEventForHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_setFallbackGenericGestureFocusWindowID:(unsigned)arg1 ;
-(void)_setGenericGestureFocusWindowID:(unsigned)arg1 ;
-(void)_sendRemoteControlEvent:(long long)arg1 ;
-(void)_sendMotionCancelled:(long long)arg1 ;
-(void)_sendMotionBegan:(long long)arg1 ;
-(void)_sendMotionEnded:(long long)arg1 ;
-(void)_removeDragEvent:(id)arg1 ;
-(void)_setCurrentTouch:(id)arg1 forWindow:(id)arg2 ;
-(void)_setTouchMap:(CFDictionaryRef)arg1 forWindow:(id)arg2 ;
-(id)UIKitEventForHIDEvent:(IOHIDEventRef)arg1 ;
-(long long)_currentNudgePressTypeForWindow:(id)arg1 ;
-(void)_setCurrentNudgePressType:(long long)arg1 forWindow:(id)arg2 ;
-(BOOL)_isTouchCoalescingDisabled;
-(id)_estimatedTouchRecordForContextID:(id)arg1 estimationIndex:(id)arg2 ;
-(void)_removeEstimatedTouchRecord:(id)arg1 ;
-(void)_dispatchAndRemoveStaleEstimationUpdateRecordsWithEventTime:(double)arg1 upToRecord:(id)arg2 ;
-(void)sceneDidActivate:(id)arg1 ;
-(id)_dragEventForHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_touchesEventForHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_gameControllerEventForHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_scrollEventForHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_wheelEventForHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_transformEventForHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_pressesEventForHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_findTouchesEventWindowSceneForKeyboardWindowSceneIfNeeded:(id)arg1 ;
-(void)_disableTouchCoalescingWithCount:(long long)arg1 ;
-(void)_enableTouchCoalescingWithCount:(long long)arg1 ;
-(id)_moveEventForHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_hoverEventForHIDEvent:(IOHIDEventRef)arg1 ;
-(id)pencilEventForHIDEvent:(IOHIDEventRef)arg1 ;
-(UIApplication *)application;
-(void)setApplication:(UIApplication *)arg1 ;
-(NSSet *)windowsWithActiveTouchMaps;
-(unsigned)_genericGestureFocusWindowID;
-(unsigned)_fallbackGenericGestureFocusWindowID;
@end

