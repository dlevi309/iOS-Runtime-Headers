/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


@class HKHealthStore, HKSleepHealthStore;

@interface HKSPHealthStoreProvider : NSObject {

	HKHealthStore* _healthStore;
	HKSleepHealthStore* _sleepHealthStore;

}

@property (nonatomic,readonly) HKSleepHealthStore * sleepHealthStore;              //@synthesize sleepHealthStore=_sleepHealthStore - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                        //@synthesize healthStore=_healthStore - In the implementation block
+(id)_initializedLocalDeviceHealthStore;
-(HKHealthStore *)healthStore;
-(HKSleepHealthStore *)sleepHealthStore;
-(id)initWithLocalDeviceHealthStore;
-(id)initWithSleepHealthStore:(id)arg1 healthStore:(id)arg2 ;
@end

