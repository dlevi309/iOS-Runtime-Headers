/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BKSMousePointerServiceServerToClientInterface.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, BSServiceConnection, NSMutableDictionary, BSCompoundAssertion, NSSet, BKSMousePointerDevicePreferences, NSString;

@interface BKSMousePointerService : NSObject <BKSMousePointerServiceServerToClientInterface> {

	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_semaphore> _connectionActivatedSemaphore;
	BSServiceConnection* _connection;
	NSMutableDictionary* _displayUUIDToPerDisplayInfo;
	BSCompoundAssertion* _deviceConnectionObservers;
	BSCompoundAssertion* _preferencesObservers;
	NSSet* _attachedDevices;
	os_unfair_lock_s _lock;
	BOOL _isObservingDeviceConnection;
	BOOL _isObservingPreferences;

}

@property (copy) BKSMousePointerDevicePreferences * globalDevicePreferences; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)_connectionQueue_setupAndActivate;
-(void)_connectionQueue_invalidate;
-(oneway void)pointingDevicesDidChange:(id)arg1 ;
-(oneway void)pointerGlobalDevicePreferencesDidChange:(id)arg1 ;
-(oneway void)pointerServiceServerIsGoingAway;
-(CGPoint)globalPointerPosition;
-(void)setGlobalPointerPosition:(CGPoint)arg1 ;
-(void)setPointerPosition:(CGPoint)arg1 onDisplay:(id)arg2 withAnimationParameters:(id)arg3 ;
-(void)setContextRelativePointerPosition:(id)arg1 onDisplay:(id)arg2 withAnimationParameters:(id)arg3 restrictingToPID:(int)arg4 ;
-(void)setContextRelativePointerPosition:(id)arg1 withInitialVelocity:(id)arg2 onDisplay:(id)arg3 withDecelerationRate:(double)arg4 restrictingToPID:(int)arg5 ;
-(id)acquireButtonDownPointerRepositionAssertionForReason:(id)arg1 contextRelativePointerPosition:(id)arg2 onDisplay:(id)arg3 restrictingToPID:(int)arg4 ;
-(id)pointerSuppressionAssertionOnDisplay:(id)arg1 forReason:(id)arg2 withOptionsMask:(unsigned long long)arg3 ;
-(id)requestGlobalMouseEventsForDisplay:(id)arg1 targetContextID:(unsigned)arg2 ;
-(id)getTransformFromLayerId:(unsigned long long)arg1 inContextId:(unsigned)arg2 ;
-(void)getHitTestContextsAtPoint:(id)arg1 withAdditionalContexts:(id)arg2 onDisplay:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)addPointerDeviceObserver:(id)arg1 ;
-(BKSMousePointerDevicePreferences *)globalDevicePreferences;
-(void)setGlobalDevicePreferences:(BKSMousePointerDevicePreferences *)arg1 ;
-(id)addPointerPreferencesObserver:(id)arg1 ;
-(id)preferencesForDevice:(id)arg1 ;
-(void)setPreferences:(id)arg1 forDevice:(id)arg2 ;
-(void)_locked_updateObserver:(id)arg1 withPointingDevices:(id)arg2 ;
-(void)_locked_pointingDevicesDidChange:(id)arg1 ;
-(void)_calloutQueue_locked_setMousePointerDeviceObservationEnabled:(BOOL)arg1 ;
-(void)_calloutQueue_locked_setMousePointerPreferencesObservationEnabled:(BOOL)arg1 ;
-(id)_locked_infoForDisplayUUID:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_locked_sendCurrentAssertionParameters:(id)arg1 forDisplayUUID:(id)arg2 ;
-(void)_locked_updateEventRoutesFromContext:(id)arg1 forDisplayUUID:(id)arg2 ;
-(void)_locked_reactivateConnection;
-(void)_performBlockOnActiveConnection:(/*^block*/id)arg1 withTimeout:(double)arg2 timeoutHandler:(/*^block*/id)arg3 ;
@end

