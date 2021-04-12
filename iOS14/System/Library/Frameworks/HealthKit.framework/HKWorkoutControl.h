/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKWorkoutControlClient.h>

@class HKProxyProvider, NSString;

@interface HKWorkoutControl : NSObject <_HKXPCExportable, HKWorkoutControlClient> {

	HKProxyProvider* _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)connectionInvalidated;
-(void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithHealthStore:(id)arg1 ;
-(id)exportedInterface;
-(void)generatePauseOrResumeRequest:(/*^block*/id)arg1 ;
-(void)finishAllWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)generateWorkoutMarkerWithCompletion:(/*^block*/id)arg1 ;
-(id)remoteInterface;
@end

