/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BKHIDSystemInterfacing.h>

@protocol OS_dispatch_queue, BKHIDSystemDelegate, OS_dispatch_mach, BKHIDEventProcessor, BKHIDDisplayChangeObserving, BKHIDEventDispatcherProviding;
@class BKHIDEventDeliveryManager, BKHIDEventSenderCache, BKHIDClientConnectionManager, NSObject, NSString;

@interface BKHIDSystem : NSObject <BKHIDSystemInterfacing> {

	IOHIDEventSystemRef _HIDEventSystem;
	IOHIDEventSystemClientRef _HIDEventSystemClient;
	NSObject*<OS_dispatch_queue> _gsEventQueue;
	BOOL _fullyInitialized;
	id<BKHIDSystemDelegate> _delegate;
	BKHIDEventDeliveryManager* _deliveryManager;
	BKHIDEventSenderCache* _senderCache;
	NSObject*<OS_dispatch_mach> _HIDSystemChannel;
	id<BKHIDEventProcessor> _eventProcessor;
	id<BKHIDDisplayChangeObserving> _mainDisplayObserver;
	id<BKHIDEventDispatcherProviding> _dispatcherProvider;

}

@property (getter=isFullyInitialized) BOOL fullyInitialized;                                          //@synthesize fullyInitialized=_fullyInitialized - In the implementation block
@property (getter=HIDSystemChannel,retain) NSObject*<OS_dispatch_mach> HIDSystemChannel;              //@synthesize HIDSystemChannel=_HIDSystemChannel - In the implementation block
@property (nonatomic,readonly) id<BKHIDEventProcessor> eventProcessor;                                //@synthesize eventProcessor=_eventProcessor - In the implementation block
@property (nonatomic,retain) id<BKHIDDisplayChangeObserving> mainDisplayObserver;                     //@synthesize mainDisplayObserver=_mainDisplayObserver - In the implementation block
@property (nonatomic,retain) id<BKHIDEventDispatcherProviding> dispatcherProvider;                    //@synthesize dispatcherProvider=_dispatcherProvider - In the implementation block
@property (__weak) id<BKHIDSystemDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BKHIDEventDeliveryManager * deliveryManager;                                     //@synthesize deliveryManager=_deliveryManager - In the implementation block
@property (readonly) BKHIDEventSenderCache * senderCache;                                             //@synthesize senderCache=_senderCache - In the implementation block
@property (readonly) BKHIDClientConnectionManager * clientConnectionManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id<BKHIDEventDispatcherProviding>)dispatcherProvider;
-(void)setDispatcherProvider:(id<BKHIDEventDispatcherProviding>)arg1 ;
-(NSObject*<OS_dispatch_mach>)HIDSystemChannel;
-(id)init;
-(id<BKHIDSystemDelegate>)delegate;
-(id<BKHIDDisplayChangeObserving>)mainDisplayObserver;
-(void)injectGSEvent:(GSEventRef)arg1 ;
-(void)startEventRouting;
-(void)registerIOHIDServicesCallback:(/*function pointer*/void*)arg1 matchingDictionary:(id)arg2 target:(void*)arg3 refCon:(void*)arg4 ;
-(id)systemPropertyForKey:(id)arg1 ;
-(void)unregisterIOHIDServicesCallback:(/*function pointer*/void*)arg1 matchingDictionary:(id)arg2 target:(void*)arg3 refCon:(void*)arg4 ;
-(id)IOHIDServicesMatching:(id)arg1 ;
-(void)_performSynchronized:(/*^block*/id)arg1 ;
-(BKHIDClientConnectionManager *)clientConnectionManager;
-(void)setDelegate:(id<BKHIDSystemDelegate>)arg1 ;
-(void)setFullyInitialized:(BOOL)arg1 ;
-(BKHIDEventDeliveryManager *)deliveryManager;
-(void)setSystemProperty:(id)arg1 forKey:(id)arg2 ;
-(void)injectHIDEvent:(IOHIDEventRef)arg1 ;
-(void)startEventProcessor:(id)arg1 mainDisplayObserver:(id)arg2 deliveryManager:(id)arg3 dispatcherProvider:(id)arg4 ;
-(void)setMainDisplayObserver:(id<BKHIDDisplayChangeObserving>)arg1 ;
-(id<BKHIDEventProcessor>)eventProcessor;
-(void)setHIDSystemChannel:(NSObject*<OS_dispatch_mach>)arg1 ;
-(BKHIDEventSenderCache *)senderCache;
-(BOOL)isFullyInitialized;
-(void)startHIDSystem;
-(void)startServerWithChannel:(id)arg1 ;
-(IOHIDEventRef)systemEventOfType:(unsigned)arg1 matchingEvent:(IOHIDEventRef)arg2 options:(unsigned)arg3 ;
-(void)dealloc;
-(void)_beginHandlingEvents;
@end

