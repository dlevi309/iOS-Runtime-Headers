/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIApplication, NSMutableArray, UIEvent, UIMotionEvent, UIRemoteControlEvent, NSMutableDictionary, NSMutableSet, UIPressesEvent, UIPhysicalKeyboardEvent, UIWheelEvent, NSMapTable, NSHashTable;

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

@property (assign,nonatomic) UIApplication * application;              //@synthesize application=_application - In the implementation block
@property (nonatomic,retain) NSMutableArray * eventQueue;              //@synthesize eventQueue=_eventQueue - In the implementation block
-(void)setApplication:(UIApplication *)arg1 ;
-(NSMutableArray *)eventQueue;
-(id)initWithApplication:(id)arg1 ;
-(id)_hoverEventForWindow:(id)arg1 ;
-(void)_enqueueHIDEvent:(IOHIDEventRef)arg1 ;
-(void)sceneDidActivate:(id)arg1 ;
-(void)setEventQueue:(NSMutableArray *)arg1 ;
-(UIApplication *)application;
-(void)sceneDidDisconnect:(id)arg1 ;
-(void)dealloc;
-(void)pointerLockStateDidChange:(id)arg1 ;
@end

