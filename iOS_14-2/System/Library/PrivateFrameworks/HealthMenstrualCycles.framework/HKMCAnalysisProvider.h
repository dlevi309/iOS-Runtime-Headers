/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/


@protocol OS_dispatch_queue;
@class HKObserverSet, NSObject, HKMCAnalysisQuery, HKMCAnalysis, HKHealthStore;

@interface HKMCAnalysisProvider : NSObject {

	HKObserverSet* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	HKMCAnalysisQuery* _analysisQuery;
	HKMCAnalysis* _analysis;
	BOOL _didUpdate;
	HKHealthStore* _healthStore;
	HKMCAnalysis* __test_analysis;

}

@property (nonatomic,retain) HKMCAnalysis * _test_analysis;              //@synthesize _test_analysis=__test_analysis - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
-(HKHealthStore *)healthStore;
-(id)initWithHealthStore:(id)arg1 ;
-(void)addObserver:(id)arg1 queue:(id)arg2 ;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(id)initWithHealthStore:(id)arg1 initialAnalysisForTest:(id)arg2 ;
-(void)_startAnalysisQuery;
-(HKMCAnalysis *)_test_analysis;
-(void)_updateAnalysis:(id)arg1 ;
-(void)set_test_analysis:(HKMCAnalysis *)arg1 ;
@end

