/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKHealthStore, NSUUID, HKTaskServerProxyProvider, NSString;

@interface HKHealthKitControlTaskClient : NSObject <_HKXPCExportable> {

	HKHealthStore* _healthStore;
	NSUUID* _identifier;
	HKTaskServerProxyProvider* _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
-(void)invalidate;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(id)initWithHealthStore:(id)arg1 ;
-(void)condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)condenseWorkoutWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)condensedWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)condensableWorkoutsWithCompletion:(/*^block*/id)arg1 ;
@end

