/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class NSString, NSThread, NSMutableArray, NSArray;

@interface AXEventProcessor : NSObject {

	BOOL _shouldRunHIDReceiveThreadRunloop;
	BOOL _shouldNotifyUserEventOccurred;
	BOOL _handlingHIDEvents;
	BOOL _ignoreAllSystemEvents;
	BOOL _handlingSystemEvents;
	int _HIDEventTapPriority;
	int _systemEventTapPriority;
	NSString* _HIDEventTapIdentifier;
	NSThread* _HIDEventReceiveThread;
	/*^block*/id _HIDEventHandler;
	unsigned long long _HIDEventFilterMask;
	/*^block*/id _failedToHandleEventInTime;
	NSString* _systemEventTapIdentifier;
	/*^block*/id _systemEventHandler;
	NSMutableArray* _hidActualEventTapEnabledReasons;
	NSMutableArray* _systemActualEventTapEnabledReasons;

}

@property (nonatomic,retain) NSString * HIDEventTapIdentifier;                                     //@synthesize HIDEventTapIdentifier=_HIDEventTapIdentifier - In the implementation block
@property (assign,nonatomic) int HIDEventTapPriority;                                              //@synthesize HIDEventTapPriority=_HIDEventTapPriority - In the implementation block
@property (nonatomic,retain) NSThread * HIDEventReceiveThread;                                     //@synthesize HIDEventReceiveThread=_HIDEventReceiveThread - In the implementation block
@property (assign,getter=isHandlingHIDEvents,nonatomic) BOOL handlingHIDEvents;                    //@synthesize handlingHIDEvents=_handlingHIDEvents - In the implementation block
@property (nonatomic,retain) NSMutableArray * hidActualEventTapEnabledReasons;                     //@synthesize hidActualEventTapEnabledReasons=_hidActualEventTapEnabledReasons - In the implementation block
@property (nonatomic,retain) NSString * systemEventTapIdentifier;                                  //@synthesize systemEventTapIdentifier=_systemEventTapIdentifier - In the implementation block
@property (assign,nonatomic) int systemEventTapPriority;                                           //@synthesize systemEventTapPriority=_systemEventTapPriority - In the implementation block
@property (assign,getter=isHandlingSystemEvents,nonatomic) BOOL handlingSystemEvents;              //@synthesize handlingSystemEvents=_handlingSystemEvents - In the implementation block
@property (nonatomic,retain) NSMutableArray * systemActualEventTapEnabledReasons;                  //@synthesize systemActualEventTapEnabledReasons=_systemActualEventTapEnabledReasons - In the implementation block
@property (assign,nonatomic) BOOL shouldNotifyUserEventOccurred;                                   //@synthesize shouldNotifyUserEventOccurred=_shouldNotifyUserEventOccurred - In the implementation block
@property (nonatomic,copy) id HIDEventHandler;                                                     //@synthesize HIDEventHandler=_HIDEventHandler - In the implementation block
@property (assign,nonatomic) unsigned long long HIDEventFilterMask;                                //@synthesize HIDEventFilterMask=_HIDEventFilterMask - In the implementation block
@property (nonatomic,copy) id failedToHandleEventInTime;                                           //@synthesize failedToHandleEventInTime=_failedToHandleEventInTime - In the implementation block
@property (nonatomic,readonly) NSArray * hidEventTapEnabledReasons; 
@property (nonatomic,copy) id systemEventHandler;                                                  //@synthesize systemEventHandler=_systemEventHandler - In the implementation block
@property (assign,nonatomic) BOOL ignoreAllSystemEvents;                                           //@synthesize ignoreAllSystemEvents=_ignoreAllSystemEvents - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * systemEventTapEnabledReasons; 
-(id)initWithHIDTapIdentifier:(id)arg1 HIDEventTapPriority:(int)arg2 systemEventTapIdentifier:(id)arg3 systemEventTapPriority:(int)arg4 ;
-(void)setHandlingSystemEvents:(BOOL)arg1 ;
-(void)beginHandlingSystemEventsForReason:(id)arg1 ;
-(void)setHIDEventReceiveThread:(NSThread *)arg1 ;
-(NSThread *)HIDEventReceiveThread;
-(void)_uninstallHIDEventFilter;
-(id)init;
-(NSArray *)hidEventTapEnabledReasons;
-(void)setIgnoreAllSystemEvents:(BOOL)arg1 ;
-(BOOL)isHandlingHIDEvents;
-(int)systemEventTapPriority;
-(void)endHandlingHIDEventsForReason:(id)arg1 ;
-(id)HIDEventHandler;
-(BOOL)shouldNotifyUserEventOccurred;
-(void)setSystemActualEventTapEnabledReasons:(NSMutableArray *)arg1 ;
-(void)_installSystemEventFilter;
-(NSMutableArray *)hidActualEventTapEnabledReasons;
-(void)setSystemEventTapIdentifier:(NSString *)arg1 ;
-(id)systemEventHandler;
-(void)_threadStop;
-(void)setHIDEventHandler:(id)arg1 ;
-(void)setSystemEventTapPriority:(int)arg1 ;
-(void)setShouldNotifyUserEventOccurred:(BOOL)arg1 ;
-(BOOL)isHandlingSystemEvents;
-(void)beginHandlingHIDEventsForReason:(id)arg1 ;
-(void)setHIDEventFilterMask:(unsigned long long)arg1 ;
-(void)raiseSystemEventTapPriorityToMaximum;
-(void)cleanup;
-(void)_installHIDEventFilter;
-(void)setHandlingHIDEvents:(BOOL)arg1 ;
-(NSArray *)systemEventTapEnabledReasons;
-(id)failedToHandleEventInTime;
-(NSMutableArray *)systemActualEventTapEnabledReasons;
-(void)setHIDEventTapIdentifier:(NSString *)arg1 ;
-(BOOL)ignoreAllSystemEvents;
-(void)setSystemEventHandler:(id)arg1 ;
-(void)_uninstallSystemEventFilter;
-(void)raiseHIDEventTapPriorityToMaximum;
-(NSString *)HIDEventTapIdentifier;
-(void)endHandlingSystemEventsForReason:(id)arg1 ;
-(void)_runHIDEventReceiveThread;
-(void)setFailedToHandleEventInTime:(id)arg1 ;
-(void)restoreSystemEventTapPriorityToDefault;
-(void)restoreHIDEventTapPriorityToDefault;
-(NSString *)systemEventTapIdentifier;
-(void)setHIDEventTapPriority:(int)arg1 ;
-(int)HIDEventTapPriority;
-(unsigned long long)HIDEventFilterMask;
-(void)dealloc;
-(void)setHidActualEventTapEnabledReasons:(NSMutableArray *)arg1 ;
@end

