/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
*/

#import <libobjc.A.dylib/HKSleepHealthStoreInterface.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, HKHealthStore, NSString;

@interface HKSleepHealthStore : NSObject <HKSleepHealthStoreInterface, _HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(HKHealthStore *)healthStore;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(void)stopSleepTrackingSession;
-(void)updateCurrentSleepSchedules:(id)arg1 sleepDurationGoal:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)saveSleepTrackingSamples:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startSleepTrackingSession;
@end

