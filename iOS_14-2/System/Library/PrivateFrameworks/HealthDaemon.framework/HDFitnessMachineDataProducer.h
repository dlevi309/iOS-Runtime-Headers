/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDWorkoutDataAccumulatorObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, HKQuantity, _HDFTMProducerMetricTracker, HDEurotasData, HDProfile, HDHealthServiceManager, NSString;

@interface HDFitnessMachineDataProducer : NSObject <HDWorkoutDataAccumulatorObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _sessionIdentifier;
	HKQuantity* _totalActiveEnergy;
	HKQuantity* _totalBasalEnergy;
	HKQuantity* _latestHeartRate;
	HKQuantity* _averageHeartRate;
	_HDFTMProducerMetricTracker* _heartRateTracker;
	BOOL _heartRateEnabled;
	HDEurotasData* _previousEurotasData;
	HDProfile* _profile;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                   //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDHealthServiceManager * healthServiceManager; 
@property (nonatomic,readonly) BOOL attached; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfile:(HDProfile *)arg1 ;
-(void)attachHealthServiceSession:(unsigned long long)arg1 ;
-(BOOL)attached;
-(id)initWithProfile:(id)arg1 ;
-(void)_queue_sendEurotasData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HDHealthServiceManager *)healthServiceManager;
-(void)_readHeartRateEnabledPreference;
-(void)sendInitialValues;
-(HDProfile *)profile;
-(void)_queue_updateFitnessMachineWithCompletion:(/*^block*/id)arg1 forcing:(BOOL)arg2 ;
-(void)workoutDataAccumulator:(id)arg1 didUpdateStatistics:(id)arg2 ;
-(void)deliverFinalValuesAndDetachWithCompletion:(/*^block*/id)arg1 ;
-(id)_queue_generateEurotasData;
-(void)_queue_detachHealthServiceSession;
-(void)detachHealthServiceSession;
-(void)resumeCurrentSession;
-(void)_queue_workoutDataAccumulator:(id)arg1 didUpdateStatistics:(id)arg2 ;
-(void)dealloc;
-(void)_queue_updateFitnessMachine;
-(void)pauseCurrentSession;
@end

