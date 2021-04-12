/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/HKHealthServicesClientInterface.h>

@class HKHealthStore, NSMutableDictionary, NSMutableSet, NSString;

@interface HKHealthServicesManager : NSObject <HKHealthServicesClientInterface> {

	HKHealthStore* _healthStore;
	NSMutableDictionary* _discoveries;
	NSMutableSet* _discoveriesEnded;
	NSMutableDictionary* _sessions;
	NSMutableSet* _sessionsEnded;
	/*^block*/id _bluetoothStatusHandler;
	HKHealthServicesManager* _healthServicesManager;

}

@property (assign,nonatomic,__weak) HKHealthStore * healthStore;                             //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * discoveries;                              //@synthesize discoveries=_discoveries - In the implementation block
@property (nonatomic,retain) NSMutableSet * discoveriesEnded;                                //@synthesize discoveriesEnded=_discoveriesEnded - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sessions;                                 //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,retain) NSMutableSet * sessionsEnded;                                   //@synthesize sessionsEnded=_sessionsEnded - In the implementation block
@property (nonatomic,copy) id bluetoothStatusHandler;                                        //@synthesize bluetoothStatusHandler=_bluetoothStatusHandler - In the implementation block
@property (nonatomic,readonly) HKHealthServicesManager * healthServicesManager;              //@synthesize healthServicesManager=_healthServicesManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(NSMutableDictionary *)sessions;
-(void)setSessions:(NSMutableDictionary *)arg1 ;
-(HKHealthServicesManager *)healthServicesManager;
-(void)startHealthServiceDiscovery:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)endHealthServiceDiscovery:(id)arg1 ;
-(void)startHealthServiceSession:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)endHealthServiceSession:(id)arg1 ;
-(void)registerPeripheralIdentifier:(id)arg1 name:(id)arg2 services:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)unregisterPeripheralIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)healthServicePairingsWithHandler:(/*^block*/id)arg1 ;
-(void)healthPeripheralsWithFilter:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)addHealthServicePairing:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeHealthServicePairing:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)clientQueue_handleInterruption;
-(void)clientRemote_deliverBluetoothStatus:(long long)arg1 withError:(id)arg2 ;
-(void)clientRemote_deliverDiscoveryHealthService:(id)arg1 toClient:(unsigned long long)arg2 finished:(BOOL)arg3 withError:(id)arg4 ;
-(void)clientRemote_deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(BOOL)arg3 withError:(id)arg4 ;
-(void)clientRemote_deliverSessionCharacteristics:(id)arg1 forService:(id)arg2 toClient:(unsigned long long)arg3 withError:(id)arg4 ;
-(void)_startHealthServiceExtendedDiscovery:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)discoveries;
-(void)setDiscoveries:(NSMutableDictionary *)arg1 ;
-(void)_addEndedDiscovery:(id)arg1 ;
-(void)_addEndedSession:(id)arg1 ;
-(NSMutableSet *)discoveriesEnded;
-(void)setDiscoveriesEnded:(NSMutableSet *)arg1 ;
-(NSMutableSet *)sessionsEnded;
-(void)setSessionsEnded:(NSMutableSet *)arg1 ;
-(void)startBluetoothStatusUpdates:(/*^block*/id)arg1 ;
-(void)endBluetoothStatusUpdates;
-(void)_fetchSupportedServiceIDsWithCompletion:(/*^block*/id)arg1 ;
-(id)startAllHealthServicesDiscoveryWithHandler:(/*^block*/id)arg1 ;
-(id)activeHealthServiceDiscoveries;
-(id)activeHealthServiceSessions;
-(void)getEnabledStatusForPeripheral:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setEnabledStatus:(BOOL)arg1 forPeripheral:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)getHealthServicePropertyNamesWithHandler:(/*^block*/id)arg1 ;
-(void)getHealthServiceProperty:(id)arg1 forSession:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)performHealthServiceOperation:(id)arg1 onSession:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)bluetoothStatusHandler;
-(void)setBluetoothStatusHandler:(id)arg1 ;
@end

