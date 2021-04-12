/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDataCollector.h>

@protocol OS_dispatch_queue;
@class HDPrimaryProfile, HDProfile, NSObject, HKObjectType, HDDeviceEntity, HDSourceEntity, NSString;

@interface HDDataCollector : NSObject <HDHealthDataCollector> {

	HDPrimaryProfile* _primaryProfile;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	double _collectionInterval;
	long long _state;
	HKObjectType* _observedType;
	HDDeviceEntity* _deviceEntity;
	long long _failureRetryCount;
	BOOL _disabled;
	HDSourceEntity* _sourceEntity;

}

@property (assign) double collectionInterval; 
@property (readonly) HDSourceEntity * sourceEntity;                 //@synthesize sourceEntity=_sourceEntity - In the implementation block
@property (assign) BOOL disabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)sensorDatumClass;
+(id)domain;
+(id)observedType;
+(double)defaultCollectionInterval;
+(id)_retrieveContextForKey:(id)arg1 domain:(id)arg2 profile:(id)arg3 ;
+(id)_sensorDatumFromContext:(id)arg1 ;
+(id)secondaryContextClasses;
+(BOOL)_primaryContextExistsForDomain:(id)arg1 profile:(id)arg2 ;
+(id)_lastReceivedSensorDatumForProfile:(id)arg1 ;
-(HDSourceEntity *)sourceEntity;
-(double)collectionInterval;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setCollectionInterval:(double)arg1 ;
-(BOOL)disabled;
-(id)deviceEntity;
-(BOOL)_persistContext:(id)arg1 forKey:(id)arg2 ;
-(id)_retrieveContextForKey:(id)arg1 ;
-(id)_sensorDatumFromContext:(id)arg1 ;
-(void)_queue_resetFailureRetryCounter;
-(void)_performSync:(/*^block*/id)arg1 ;
-(void)_performAsync:(/*^block*/id)arg1 ;
-(BOOL)_queue_disabled;
-(void)stopPerformingUpdatesWithErrorEncountered:(BOOL)arg1 ;
-(void)_queue_beginStreamingIfNecessary;
-(BOOL)_queue_streaming;
-(void)_queue_transitionToStreaming;
-(void)_queue_beginStreaming;
-(void)_queue_retryFromFailure;
-(void)_queue_updateCollectionInterval:(double)arg1 ;
-(void)_queue_transitionToIdle;
-(void)updateHistoricalDataForcedUpdate:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_queue_shouldRetryFromFailure;
-(void)_queue_incrementFailureRetryCounter;
-(void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2 ;
-(void)updateCollectionInterval:(double)arg1 forType:(id)arg2 ;
-(void)collectionStoppedForType:(id)arg1 ;
-(void)updateHistoricalData;
-(void)updateHistoricalDataWithCompletion:(/*^block*/id)arg1 ;
-(id)dataCollectorDiagnosticDescription;
-(id)initWithPrimaryProfile:(id)arg1 ;
-(BOOL)_persistPrimaryContext:(id)arg1 ;
-(BOOL)_persistSecondaryContext:(id)arg1 ;
-(id)_retrievePrimaryContext;
-(id)_retrieveSecondaryContext;
-(id)_contextFromSensorDatum:(id)arg1 ;
-(id)_contextFromDictionary:(id)arg1 ;
-(id)_dictionaryFromContext:(id)arg1 ;
-(void)_queue_receivedData;
-(id)_queue_deviceEntity;
-(void)_queue_transitionToFailure;
@end

