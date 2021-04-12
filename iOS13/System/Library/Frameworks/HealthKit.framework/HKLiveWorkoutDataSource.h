/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol OS_dispatch_queue;
@class HKWorkoutConfiguration, HKTaskServerProxyProvider, HKHealthStore, NSObject, NSMutableSet, NSMutableDictionary, NSUUID, NSSet, NSString;

@interface HKLiveWorkoutDataSource : NSObject <_HKXPCExportable> {

	HKWorkoutConfiguration* _workoutConfiguration;
	HKTaskServerProxyProvider* _proxyProvider;
	HKHealthStore* _healthStore;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _mutableSampleTypesToCollect;
	NSMutableDictionary* _mutableFiltersBySampleType;
	NSUUID* _identifier;

}

@property (nonatomic,retain) HKTaskServerProxyProvider * proxyProvider;                     //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                   //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableSampleTypesToCollect;                    //@synthesize mutableSampleTypesToCollect=_mutableSampleTypesToCollect - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableFiltersBySampleType;              //@synthesize mutableFiltersBySampleType=_mutableFiltersBySampleType - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSSet * typesToCollect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
+(id)defaultConfigurationWithWorkoutConfiguration:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSUUID *)identifier;
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
-(id)_queue_dataSourceConfiguration;
-(NSSet *)typesToCollect;
-(void)enableCollectionForType:(id)arg1 predicate:(id)arg2 ;
-(void)disableCollectionForType:(id)arg1 ;
-(NSMutableSet *)mutableSampleTypesToCollect;
-(void)setMutableSampleTypesToCollect:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)mutableFiltersBySampleType;
-(void)setMutableFiltersBySampleType:(NSMutableDictionary *)arg1 ;
@end

