/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDataCollector.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, HDDataCollectorConfiguration, NSArray, NSMutableDictionary, HKHealthService, NSString;

@interface HDBTLEHeartRateDataCollector : NSObject <HDDataCollector> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	long long _state;
	HDDataCollectorConfiguration* _configuration;
	NSArray* _oneShotServices;
	NSMutableDictionary* _pendingSessions;
	HKHealthService* _connectedService;
	unsigned long long _connectedSessionIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)initWithProfile:(id)arg1 ;
-(id)aggregator;
-(void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2 ;
-(void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2 ;
-(id)sourceForDataAggregator:(id)arg1 ;
-(id)identifierForDataAggregator:(id)arg1 ;
-(Class)sensorDatumClassForAggregator:(id)arg1 ;
-(BOOL)canResumeCollectionFromLastSensorDatum;
-(void)startOneShotCollectionForService:(id)arg1 ;
-(id)_queue_currentState;
-(void)_queue_updateForCurrentConfiguration;
-(void)_queue_startHeartRateCollection;
-(void)_queue_stopHeartRateCollection;
-(void)_queue_service:(id)arg1 sessionDidConnect:(unsigned long long)arg2 ;
-(void)_queue_service:(id)arg1 sessionDidDisconnect:(unsigned long long)arg2 ;
-(void)_cancelSessionsWithIdentifiers:(id)arg1 ;
-(void)_queue_stateDidChange;
-(void)_queue_service:(id)arg1 session:(unsigned long long)arg2 statusDidChange:(long long)arg3 finished:(BOOL)arg4 error:(id)arg5 ;
-(void)_queue_handleCharacteristic:(id)arg1 device:(id)arg2 ;
-(id)_heartRatePairingsWithError:(id*)arg1 ;
-(BOOL)_queue_startHeartRateServices:(id)arg1 ;
-(void)_queue_configurationChanged:(id)arg1 ;
@end

