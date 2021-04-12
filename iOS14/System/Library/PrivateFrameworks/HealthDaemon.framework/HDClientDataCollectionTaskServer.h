/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKDataCollectorTaskServerInterface.h>
#import <libobjc.A.dylib/HDDataCollector.h>

@protocol OS_dispatch_queue;
@class NSObject, HDDataCollectorState, HKDevice, NSError, HKDataCollectorTaskServerConfiguration, NSUUID, HDDataAggregator, HKDataCollectorCollectionConfiguration, NSMutableDictionary, HKSource, NSString;

@interface HDClientDataCollectionTaskServer : HDStandardTaskServer <HKDataCollectorTaskServerInterface, HDDataCollector> {

	NSObject*<OS_dispatch_queue> _queue;
	HDDataCollectorState* _dataCollectorState;
	HKDevice* _device;
	NSError* _fatalError;
	HKDataCollectorTaskServerConfiguration* _configuration;
	NSUUID* _registrationUUID;
	HDDataAggregator* _aggregator;
	HKDataCollectorCollectionConfiguration* _collectionConfiguration;
	NSMutableDictionary* _lastDatumByDevice;
	HKSource* _clientSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
-(void)connectionInvalidated;
-(void)connectionConfigured;
-(id)identifierForDataAggregator:(id)arg1 ;
-(id)sourceForDataAggregator:(id)arg1 ;
-(id)exportedInterface;
-(BOOL)_validateMetadata:(id)arg1 error:(id*)arg2 ;
-(void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2 ;
-(id)remoteInterface;
-(void)remote_registerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canResumeCollectionFromLastSensorDatum;
-(NSString *)description;
-(void)_queue_insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 batchUUID:(id)arg4 registrationUUID:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)dataAggregator:(id)arg1 requestsCollectionThroughDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(Class)sensorDatumClassForAggregator:(id)arg1 ;
-(void)dataAggregator:(id)arg1 didPersistDatums:(id)arg2 success:(BOOL)arg3 error:(id)arg4 ;
-(void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2 ;
-(id)_loggingClientProxy;
-(void)_didFinishPersistenceForBatch:(id)arg1 error:(id)arg2 ;
-(void)remote_insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 batchUUID:(id)arg4 registrationUUID:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

