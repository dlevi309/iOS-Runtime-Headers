/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@class NSLock, NSMapTable, HDDataAggregatorConfiguration, HDDataCollectionManager, HKObjectType, NSString;

@interface HDDataAggregator : NSObject <HDHealthDaemonReadyObserver> {

	NSLock* _lock;
	NSMapTable* _lock_collectorRegistry;
	HDDataAggregatorConfiguration* _lock_configuration;
	AB _hasStartedCollectors;
	BOOL _lock_canStartCollectors;
	HDDataCollectionManager* _dataCollectionManager;

}

@property (nonatomic,__weak,readonly) HDDataCollectionManager * dataCollectionManager;              //@synthesize dataCollectionManager=_dataCollectionManager - In the implementation block
@property (copy) HDDataAggregatorConfiguration * configuration; 
@property (nonatomic,copy,readonly) HKObjectType * objectType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(HKObjectType *)objectType;
-(HDDataAggregatorConfiguration *)configuration;
-(id)diagnosticDescription;
-(id)configurationForCollector:(id)arg1 ;
-(HDDataCollectionManager *)dataCollectionManager;
-(id)_keyValueDomain;
-(id)initWithDataCollectionManager:(id)arg1 ;
-(void)resume;
-(void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3 ;
-(void)setConfiguration:(HDDataAggregatorConfiguration *)arg1 ;
-(BOOL)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id*)arg4 ;
-(void)unregisterDataCollector:(id)arg1 ;
-(void)registerDataCollector:(id)arg1 state:(id)arg2 ;
-(void)dataCollector:(id)arg1 didCollectSensorDatum:(id)arg2 device:(id)arg3 ;
-(BOOL)persistForCollector:(id)arg1 usedDatums:(id)arg2 source:(id)arg3 device:(id)arg4 error:(id*)arg5 persistenceHandler:(/*^block*/id)arg6 ;
-(id)allCollectors;
-(void)requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)recomputeCollectorConfiguration;
-(void)dataCollector:(id)arg1 didChangeState:(id)arg2 ;
-(BOOL)persistObjects:(id)arg1 usedDatums:(id)arg2 collector:(id)arg3 source:(id)arg4 device:(id)arg5 resolveAssociations:(BOOL)arg6 error:(id*)arg7 ;
-(void)_considerStartingCollectors;
-(void)_startCollector:(id)arg1 ;
@end

