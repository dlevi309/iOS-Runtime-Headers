/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKHealthServicesServerInterface.h>

@protocol OS_dispatch_queue;
@class HDHealthServiceManager, NSObject, HDIdentifierTable, NSMutableDictionary, NSMutableSet, NSString;

@interface HDHealthServicesServer : HDStandardTaskServer <HKHealthServicesServerInterface> {

	HDHealthServiceManager* _healthServiceManager;
	NSObject*<OS_dispatch_queue> _queue;
	HDIdentifierTable* _healthServiceDiscoveryServerIDs;
	NSMutableDictionary* _healthServiceDiscoveryClientIDs;
	HDIdentifierTable* _healthDeviceSessionServerIDs;
	NSMutableDictionary* _healthServiceSessionClientIDs;
	NSMutableSet* _healthServiceClosedSessionServerIDs;
	NSMutableSet* _healthServiceClosedSessionClientIDs;

}

@property (nonatomic,readonly) HDHealthServiceManager * healthServiceManager;                    //@synthesize healthServiceManager=_healthServiceManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) HDIdentifierTable * healthServiceDiscoveryServerIDs;                //@synthesize healthServiceDiscoveryServerIDs=_healthServiceDiscoveryServerIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * healthServiceDiscoveryClientIDs;              //@synthesize healthServiceDiscoveryClientIDs=_healthServiceDiscoveryClientIDs - In the implementation block
@property (nonatomic,retain) HDIdentifierTable * healthDeviceSessionServerIDs;                   //@synthesize healthDeviceSessionServerIDs=_healthDeviceSessionServerIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * healthServiceSessionClientIDs;                //@synthesize healthServiceSessionClientIDs=_healthServiceSessionClientIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * healthServiceClosedSessionServerIDs;                 //@synthesize healthServiceClosedSessionServerIDs=_healthServiceClosedSessionServerIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * healthServiceClosedSessionClientIDs;                 //@synthesize healthServiceClosedSessionClientIDs=_healthServiceClosedSessionClientIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5 ;
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id)exportedInterface;
-(HDHealthServiceManager *)healthServiceManager;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)remote_endHealthServiceSession:(unsigned long long)arg1 ;
-(void)remote_fetchSupportedServiceIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_endHealthServiceDiscovery:(unsigned long long)arg1 ;
-(void)remote_endBluetoothStatusUpdates;
-(void)remote_beginBluetoothStatusUpdates:(/*^block*/id)arg1 ;
-(void)remote_startHealthServiceDiscovery:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_startHealthServiceSession:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_getHealthPeripheralsWithFilter:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)remote_addPairingForHealthService:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_removePairingForHealthService:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_getSupportedPropertyNamesWithHandler:(/*^block*/id)arg1 ;
-(void)remote_getHealthServiceProperty:(id)arg1 forSession:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)remote_addPeripheral:(id)arg1 name:(id)arg2 forServices:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)remote_performHealthServiceOperation:(id)arg1 onSession:(unsigned long long)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_removePeripheral:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_getEnabledStatusForPeripheral:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_setEnabledStatus:(BOOL)arg1 forPeripheral:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)_healthDeviceClientDiscoveryIdentifier:(unsigned long long)arg1 ;
-(void)_closeDiscoveryBetweenServer:(unsigned long long)arg1 andClient:(unsigned long long)arg2 ;
-(unsigned long long)_discoveryServerIdentifierForClientIdentifier:(unsigned long long)arg1 ;
-(BOOL)_isServerSessionValid:(unsigned long long)arg1 ;
-(unsigned long long)_healthDeviceClientSessionIdentifier:(unsigned long long)arg1 ;
-(void)_closeSessionBetweenServer:(unsigned long long)arg1 andClient:(unsigned long long)arg2 ;
-(BOOL)_isClientSessionValid:(unsigned long long)arg1 ;
-(unsigned long long)_sessionServerIdentifierForClientIdentifier:(unsigned long long)arg1 ;
-(id)_filterOnlyUserManageablePeripheralsFromServices:(id)arg1 ;
-(unsigned long long)_sessionClientIdentifierForServerIdentifier:(unsigned long long)arg1 ;
-(HDIdentifierTable *)healthServiceDiscoveryServerIDs;
-(void)setHealthServiceDiscoveryServerIDs:(HDIdentifierTable *)arg1 ;
-(NSMutableDictionary *)healthServiceDiscoveryClientIDs;
-(void)setHealthServiceDiscoveryClientIDs:(NSMutableDictionary *)arg1 ;
-(HDIdentifierTable *)healthDeviceSessionServerIDs;
-(void)setHealthDeviceSessionServerIDs:(HDIdentifierTable *)arg1 ;
-(NSMutableDictionary *)healthServiceSessionClientIDs;
-(void)setHealthServiceSessionClientIDs:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)healthServiceClosedSessionServerIDs;
-(void)setHealthServiceClosedSessionServerIDs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)healthServiceClosedSessionClientIDs;
-(void)setHealthServiceClosedSessionClientIDs:(NSMutableSet *)arg1 ;
@end

