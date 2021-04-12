/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKWorkoutDataSource.h>

@class NSUUID, HKTaskServerProxyProvider, HKHealthStore, NSString;

@interface HKGymKitDataSource : NSObject <_HKXPCExportable, HKWorkoutDataSource> {

	NSUUID* _identifier;
	HKTaskServerProxyProvider* _proxyProvider;
	HKHealthStore* _healthStore;

}

@property (nonatomic,retain) NSUUID * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) HKTaskServerProxyProvider * proxyProvider;              //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                            //@synthesize healthStore=_healthStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
+(id)defaultConfigurationWithWorkoutConfiguration:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)exportedInterface;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)connectionInvalidated;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(HKTaskServerProxyProvider *)proxyProvider;
-(void)_startTaskServerIfNeeded;
-(void)workoutBuilderDidFinish;
-(id)initWithHealthStore:(id)arg1 workoutConfiguration:(id)arg2 ;
-(void)setProxyProvider:(HKTaskServerProxyProvider *)arg1 ;
@end

