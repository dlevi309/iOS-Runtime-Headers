/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientPNRDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class NSHashTable, NSMutableDictionary, IMSystemMonitor, CoreTelephonyClient, IDSCTAdapterCache, NSString;

@interface IDSCTAdapter : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientPNRDelegate, CoreTelephonyClientCarrierBundleDelegate, IMSystemMonitorListener> {

	NSHashTable* _listeners;
	id _coreTelephonyClient;
	id _cache;
	NSMutableDictionary* _registrationStateByLabelID;
	os_unfair_lock_s _lock;
	IMSystemMonitor* _systemMonitor;

}

@property (nonatomic,retain) NSHashTable * listeners;                                       //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;                     //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,retain) IDSCTAdapterCache * cache;                                     //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                                         //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registrationStateByLabelID;              //@synthesize registrationStateByLabelID=_registrationStateByLabelID - In the implementation block
@property (nonatomic,retain) IMSystemMonitor * systemMonitor;                               //@synthesize systemMonitor=_systemMonitor - In the implementation block
@property (nonatomic,readonly) BOOL dualSIMCapabilityEnabled; 
@property (nonatomic,readonly) BOOL isAnySIMUsable; 
@property (nonatomic,readonly) BOOL isAnySIMInserted; 
@property (nonatomic,readonly) BOOL supportsIdentification; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isPhoneNumber:(id)arg1 equivalentToExistingPhoneNumber:(id)arg2 ;
-(void)addListener:(id)arg1 ;
-(void)subscriptionInfoDidChange;
-(void)carrierBundleChange:(id)arg1 ;
-(void)phoneNumberChanged:(id)arg1 ;
-(BOOL)isAnySIMInserted;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(id)carrierBundleValueFromAllSIMsForKey:(id)arg1 ofType:(Class)arg2 withFallback:(id)arg3 ;
-(NSHashTable *)listeners;
-(IDSCTAdapterCache *)cache;
-(BOOL)dualSIMCapabilityEnabled;
-(id)carrierBundleValueFromSIM:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3 withFallback:(id)arg4 ;
-(void)_iterateListenersForSelector:(SEL)arg1 block:(/*^block*/id)arg2 ;
-(IMSystemMonitor *)systemMonitor;
-(void)setListeners:(NSHashTable *)arg1 ;
-(void)setCache:(IDSCTAdapterCache *)arg1 ;
-(void)systemApplicationDidBecomeActive;
-(os_unfair_lock_s)lock;
-(BOOL)_legacy_supportsSMSIdentification;
-(void)operatorBundleChange:(id)arg1 ;
-(id)_unlocked_currentSIMsWithError:(id*)arg1 ;
-(void)_locked_accessCache:(/*^block*/id)arg1 ;
-(id)contextForSim:(id)arg1 ;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(void)_checkRegistrationStateForContext:(id)arg1 ;
-(BOOL)isAnySIMUsable;
-(void)pnrReadyStateNotification:(id)arg1 regState:(BOOL)arg2 ;
-(void)_unlocked_iterateListenersForSelector:(SEL)arg1 block:(/*^block*/id)arg2 ;
-(void)setSystemMonitor:(IMSystemMonitor *)arg1 ;
-(void)removeListener:(id)arg1 ;
-(id)SIMForIdentifier:(id)arg1 ;
-(void)dualSimCapabilityDidChange;
-(BOOL)supportsIdentification;
-(id)currentSIMsWithError:(id*)arg1 ;
-(NSMutableDictionary *)registrationStateByLabelID;
-(void)SIMStatusDidChange:(id)arg1 status:(id)arg2 ;
-(void)context:(id)arg1 pnrSupportChanged:(BOOL)arg2 ;
-(id)initWithCoreTelephonyClient:(id)arg1 systemMonitor:(id)arg2 ;
-(id)CTPNRForSIM:(id)arg1 ;
-(void)setRegistrationStateByLabelID:(NSMutableDictionary *)arg1 ;
-(BOOL)isPNRNumber:(id)arg1 andPhoneBookNumber:(id)arg2 differentEnoughFromSIMIdentifier:(id)arg3 toReregisterWithNewNumber:(id*)arg4 ;
-(BOOL)isPhoneNumberEmergencyNumber:(id)arg1 ;
-(void)dealloc;
@end

