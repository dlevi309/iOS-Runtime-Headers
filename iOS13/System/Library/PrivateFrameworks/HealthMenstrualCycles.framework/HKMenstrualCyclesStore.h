/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
#import <libobjc.A.dylib/HKMenstrualCyclesStoreInterface.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, HKHealthStore, NSString;

@interface HKMenstrualCyclesStore : NSObject <HKMenstrualCyclesStoreInterface, _HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)exportedInterface;
-(HKHealthStore *)healthStore;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(/*^block*/id)_actionCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)saveDaySummaries:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchScheduledNotificationsWithCompletion:(/*^block*/id)arg1 ;
-(void)saveDaySummary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveMenstrualFlow:(long long)arg1 dayIndex:(long long)arg2 updateAdjacentDays:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)saveMenstrualFlowByDayIndex:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveLastMenstrualPeriodWithDayIndexRange:(SCD_Struct_HK0)arg1 completion:(/*^block*/id)arg2 ;
-(void)savePeriodNotYetStartedWithCompletion:(/*^block*/id)arg1 ;
-(void)savePeriodNotYetEndedWithCompletion:(/*^block*/id)arg1 ;
-(void)savePeriodStartedOnDayIndex:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)savePeriodStartedOnDayIndex:(long long)arg1 endedOnDayIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)savePeriodEndedOnDayIndex:(long long)arg1 completion:(/*^block*/id)arg2 ;
@end

