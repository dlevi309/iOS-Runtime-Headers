/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BKSMousePointerServiceServerToClientInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, BSServiceConnection, NSMutableDictionary, BSCompoundAssertion, NSSet, BKSMousePointerDevicePreferences, NSString;

@interface BKSMousePointerService : NSObject <BKSMousePointerServiceServerToClientInterface> {

	NSObject*<OS_dispatch_queue> _connectionQueue;
	os_unfair_lock_s _lock;
	BSServiceConnection* _connection;
	NSMutableDictionary* _displayUUIDToPerDisplayInfo;
	BSCompoundAssertion* _deviceConnectionObservers;
	BSCompoundAssertion* _preferencesObservers;
	NSSet* _attachedDevices;
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
-(void)_locked_reactivateConnection;
-(void)_locked_setMousePointerPreferencesObservationEnabled:(BOOL)arg1 ;
-(void)_locked_pointingDevicesDidChange:(id)arg1 ;
-(id)init;
-(void)_locked_updateServerWithPreferencesObservationState;
-(id)_locked_infoForDisplayUUID:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)getHitTestContextsAtPoint:(id)arg1 withAdditionalContexts:(id)arg2 onDisplay:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)_unlocked_serverTarget;
-(id)requestGlobalMouseEventsForDisplay:(id)arg1 targetContextID:(unsigned)arg2 ;
-(void)_activateServerConnection;
-(oneway void)pointingDevicesDidChange:(id)arg1 ;
-(id)pointerSuppressionAssertionOnDisplay:(id)arg1 forReason:(id)arg2 withOptionsMask:(unsigned long long)arg3 ;
-(void)_locked_setMousePointerDeviceObservationEnabled:(BOOL)arg1 ;
-(id)addPointerPreferencesObserver:(id)arg1 ;
-(id)addPointerDeviceObserver:(id)arg1 ;
-(void)setPreferences:(id)arg1 forDevice:(id)arg2 ;
-(oneway void)pointerGlobalDevicePreferencesDidChange:(id)arg1 ;
-(id)acquireButtonDownPointerRepositionAssertionForReason:(id)arg1 contextRelativePointerPosition:(id)arg2 onDisplay:(id)arg3 restrictingToPID:(int)arg4 ;
-(void)setPointerPosition:(CGPoint)arg1 onDisplay:(id)arg2 withAnimationParameters:(id)arg3 ;
-(void)setContextRelativePointerPosition:(id)arg1 onDisplay:(id)arg2 withAnimationParameters:(id)arg3 restrictingToPID:(int)arg4 ;
-(id)_locked_serverTarget;
-(CGPoint)globalPointerPosition;
-(id)_init;
-(void)_locked_updateObserver:(id)arg1 withPointingDevices:(id)arg2 ;
-(void)_locked_updateServerWithPointerDeviceObservationState;
-(BKSMousePointerDevicePreferences *)globalDevicePreferences;
-(id)preferencesForDevice:(id)arg1 ;
-(void)setGlobalDevicePreferences:(BKSMousePointerDevicePreferences *)arg1 ;
-(void)_locked_sendCurrentAssertionParameters:(id)arg1 forDisplayUUID:(id)arg2 ;
-(void)setGlobalPointerPosition:(CGPoint)arg1 ;
-(void)setContextRelativePointerPosition:(id)arg1 withInitialVelocity:(id)arg2 onDisplay:(id)arg3 withDecelerationRate:(double)arg4 restrictingToPID:(int)arg5 ;
-(void)dealloc;
-(void)_locked_updateEventRoutesFromContext:(id)arg1 forDisplayUUID:(id)arg2 ;
@end

