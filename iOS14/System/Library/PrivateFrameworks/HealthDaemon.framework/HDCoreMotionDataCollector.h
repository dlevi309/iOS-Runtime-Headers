/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDataCollector.h>

@protocol HDCoreMotionDataSource, OS_dispatch_queue;
@class NSSet, HDDataCollectorMultiplexer, NSMutableDictionary, HDDataCollectorState, NSObject, HDProfile, NSString;

@interface HDCoreMotionDataCollector : NSObject <HDDataCollector> {

	NSSet* _quantityTypes;
	HDDataCollectorMultiplexer* _multiplexer;
	NSMutableDictionary* _lastCMDatumByType;
	id<HDCoreMotionDataSource> _dataSource;
	HDDataCollectorState* _state;
	long long _errorCount;
	NSObject*<OS_dispatch_queue> _queue;
	HDProfile* _profile;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)collectedTypes;
-(id)initWithProfile:(id)arg1 ;
-(id)identifierForDataAggregator:(id)arg1 ;
-(Class)coreMotionDatumClass;
-(id)sourceForDataAggregator:(id)arg1 ;
-(void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2 ;
-(double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3 ;
-(id)persistentIdentifier;
-(HDProfile *)profile;
-(id)queue_newDataSource;
-(NSObject*<OS_dispatch_queue>)queue;
-(Class)sensorDatumClassForAggregator:(id)arg1 ;
-(unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)arg1 ;
-(void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2 ;
-(void)dealloc;
-(void)registerWithAggregators;
-(void)_accessToFitnessDataDidChange:(id)arg1 ;
-(id)_queue_diagnosticDescription;
-(void)_queue_beginUpdatesWithTargetCollectionType:(unsigned long long)arg1 ;
-(void)_queue_updateCollectionType:(unsigned long long)arg1 ;
-(id)coreMotionDatumFromSensorDatum:(id)arg1 ;
-(void)_queue_forwardCoreMotionData:(id)arg1 forType:(id)arg2 ;
-(void)_queue_forwardCoreMotionData:(id)arg1 ;
-(void)queue_recomputeCurrentState;
-(id)_migrateDataCollectionContextForType:(id)arg1 error:(id*)arg2 ;
-(id)_queue_lastPersistedSensorDatumForType:(id)arg1 ;
-(void)_queue_populateLastDatumDictionary;
-(void)didReceiveCoreMotionData:(id)arg1 startingDatum:(id)arg2 error:(id)arg3 ;
@end

