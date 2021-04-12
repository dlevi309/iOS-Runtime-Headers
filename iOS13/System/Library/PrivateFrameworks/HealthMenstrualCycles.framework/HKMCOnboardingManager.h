/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/


@class HKHealthStore, HKMenstrualCyclesStore, HKKeyValueDomain, NSDate, HKQuantity;

@interface HKMCOnboardingManager : NSObject {

	HKHealthStore* _healthStore;
	HKMenstrualCyclesStore* _menstrualCyclesStore;
	HKKeyValueDomain* _keyValueDomain;

}

@property (getter=isOnboardingCompleted,nonatomic,readonly) BOOL onboardingCompleted; 
@property (nonatomic,copy,readonly) NSDate * onboardingFirstCompletedDate; 
@property (nonatomic,readonly) HKQuantity * userEnteredCycleLength; 
@property (nonatomic,readonly) HKQuantity * userEnteredPeriodLength; 
-(id)initWithHealthStore:(id)arg1 ;
-(BOOL)isOnboardingCompleted;
-(NSDate *)onboardingFirstCompletedDate;
-(HKQuantity *)userEnteredCycleLength;
-(HKQuantity *)userEnteredPeriodLength;
-(void)setOnboardingCompletedWithUserEnteredCycleLength:(id)arg1 userEnteredPeriodLength:(id)arg2 userEnteredLastPeriodStartDay:(id)arg3 ;
-(void)resetOnboarding;
@end

