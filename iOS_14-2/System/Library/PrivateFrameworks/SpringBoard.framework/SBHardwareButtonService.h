/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSystemServiceServerHardwareButtonDelegate.h>

@class FBServiceClientAuthenticator, RBSProcessMonitor, NSMutableArray, BSMutableIntegerMap, NSString;

@interface SBHardwareButtonService : NSObject <SBSystemServiceServerHardwareButtonDelegate> {

	FBServiceClientAuthenticator* _serviceClientHomeHardwareButtonHintSuppressionEntitlementAuthenticator;
	FBServiceClientAuthenticator* _serviceClientEventConsumerEntitlement;
	RBSProcessMonitor* _processMonitor;
	NSMutableArray* _observers;
	BSMutableIntegerMap* _eventMaskPerKind;
	BSMutableIntegerMap* _registrationsByButtonKind;
	BSMutableIntegerMap* _clientsByPID;

}

@property (nonatomic,retain) BSMutableIntegerMap * registrationsByButtonKind;              //@synthesize registrationsByButtonKind=_registrationsByButtonKind - In the implementation block
@property (nonatomic,retain) BSMutableIntegerMap * clientsByPID;                           //@synthesize clientsByPID=_clientsByPID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)addObserver:(id)arg1 ;
-(BOOL)consumeHomeButtonTriplePressUpWithPriority:(long long)arg1 ;
-(BOOL)consumeLockButtonDoublePressUpWithPriority:(long long)arg1 ;
-(BOOL)consumeVolumeIncreaseButtonSinglePressUpWithPriority:(long long)arg1 ;
-(void)setRegistrationsByButtonKind:(BSMutableIntegerMap *)arg1 ;
-(void)_reconfigureProcessMonitorForPredicates:(id)arg1 ;
-(id)init;
-(void)_setSystemServiceClient:(id)arg1 buttonKind:(long long)arg2 eventMask:(unsigned long long)arg3 priority:(long long)arg4 ;
-(BOOL)consumeLockButtonSinglePressUpWithPriority:(long long)arg1 ;
-(id)_applicationForClientInfo:(id)arg1 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setEventMask:(unsigned long long)arg3 buttonKind:(long long)arg4 priority:(long long)arg5 ;
-(BOOL)consumeRingerSwitchToggleStateOnWithPriority:(long long)arg1 ;
-(void)_addRegistration:(id)arg1 toClient:(id)arg2 ;
-(BOOL)hasConsumersForHomeButtonPresses;
-(BOOL)consumeHomeButtonSinglePressUpWithPriority:(long long)arg1 ;
-(BOOL)hasConsumersForLockButtonPresses;
-(BOOL)consumeHeadsetPlayPauseSinglePressDownWithPriority:(long long)arg1 continuation:(out /*^block*/id*)arg2 ;
-(BOOL)consumeVolumeIncreaseButtonSinglePressDownWithPriority:(long long)arg1 continuation:(out /*^block*/id*)arg2 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 fetchHapticTypeForButtonKind:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_sendEvent:(long long)arg1 buttonKind:(long long)arg2 withPriority:(long long)arg3 ;
-(void)setClientsByPID:(BSMutableIntegerMap *)arg1 ;
-(BOOL)consumeHeadsetPlayPauseSinglePressUpWithPriority:(long long)arg1 ;
-(void)_removeRegistration:(id)arg1 fromClient:(id)arg2 ;
-(void)_sendXPCMessageForEvent:(long long)arg1 buttonKind:(long long)arg2 priority:(long long)arg3 toClient:(id)arg4 ;
-(void)_performButtonRegistrationChangeAndNotifyObservers:(/*^block*/id)arg1 ;
-(BOOL)consumeHomeButtonDoublePressDownWithPriority:(long long)arg1 ;
-(id)_mutableRegistrationsForButtonKind:(long long)arg1 createIfNecessary:(BOOL)arg2 ;
-(BSMutableIntegerMap *)clientsByPID;
-(BOOL)hasConsumersForHomeButtonSinglePress;
-(BOOL)consumeRingerSwitchToggleStateOffWithPriority:(long long)arg1 ;
-(BOOL)consumeLockButtonLongPressWithPriority:(long long)arg1 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setHapticType:(long long)arg3 buttonKind:(long long)arg4 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 acquireAssertionOfType:(long long)arg3 forReason:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(BOOL)hasConsumersForLockButtonDoublePressUp;
-(BOOL)consumeHomeButtonLongPressWithPriority:(long long)arg1 ;
-(void)_updateAllButtonEventMasks;
-(BOOL)_sendEvent:(long long)arg1 buttonKind:(long long)arg2 withPriority:(long long)arg3 continuation:(out /*^block*/id*)arg4 ;
-(id)_mutableRegistrationsForButtonKind:(long long)arg1 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 requestsHIDEvents:(BOOL)arg3 token:(id)arg4 forButtonKind:(long long)arg5 ;
-(id)_init;
-(void)_reconfigureProcessMonitor;
-(void)_process:(id)arg1 stateDidUpdate:(id)arg2 ;
-(BSMutableIntegerMap *)registrationsByButtonKind;
-(void)systemServiceServer:(id)arg1 clientDidDisconnect:(id)arg2 ;
-(void)_updateEventMasksForButtonKind:(long long)arg1 ;
-(BOOL)consumeVolumeDecreaseButtonSinglePressUpWithPriority:(long long)arg1 ;
-(BOOL)consumeVolumeDecreaseButtonSinglePressDownWithPriority:(long long)arg1 continuation:(out /*^block*/id*)arg2 ;
-(id)_registrationsForButtonKind:(long long)arg1 ;
@end

