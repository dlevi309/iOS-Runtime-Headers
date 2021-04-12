/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HDDataCollector.h>

@protocol OS_dispatch_queue;
@class NSObject, HDDataCollectorState, HKDevice, NSError, HKDataCollectorTaskServerConfiguration, NSUUID, HDDataAggregator, HKDataCollectorCollectionConfiguration, NSMutableDictionary, NSString;

@interface HDClientDataCollectionTaskServer : HDStandardTaskServer <HDDataCollector> {

	NSObject*<OS_dispatch_queue> _queue;
	HDDataCollectorState* _dataCollectorState;
	HKDevice* _device;
	NSError* _fatalError;
	HKDataCollectorTaskServerConfiguration* _configuration;
	NSUUID* _registrationUUID;
	HDDataAggregator* _aggregator;
	HKDataCollectorCollectionConfiguration* _collectionConfiguration;
	NSMutableDictionary* _lastDatumByDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(NSString *)description;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(void)connectionConfigured;
-(void)remote_registerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 batchUUID:(id)arg4 registrationUUID:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)remote_synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2 ;
-(void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2 ;
-(id)sourceForDataAggregator:(id)arg1 ;
-(id)identifierForDataAggregator:(id)arg1 ;
-(Class)sensorDatumClassForAggregator:(id)arg1 ;
-(void)dataAggregator:(id)arg1 didPersistDatums:(id)arg2 success:(BOOL)arg3 error:(id)arg4 ;
-(void)dataAggregator:(id)arg1 requestsCollectionThroughDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 batchUUID:(id)arg4 registrationUUID:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)_loggingClientProxy;
-(BOOL)_validateMetadata:(id)arg1 error:(id*)arg2 ;
-(void)_didFinishPersistenceForBatch:(id)arg1 error:(id)arg2 ;
@end

