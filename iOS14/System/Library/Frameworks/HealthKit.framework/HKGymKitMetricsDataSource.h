/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKWorkoutDataSource.h>

@protocol HKGymKitMetricsDataSourceDelegate;
@class HKHealthStore, HKWorkoutConfiguration, NSUUID, HKTaskServerProxyProvider, NSString;

@interface HKGymKitMetricsDataSource : NSObject <_HKXPCExportable, HKWorkoutDataSource> {

	HKHealthStore* _healthStore;
	HKWorkoutConfiguration* _workoutConfiguration;
	id<HKGymKitMetricsDataSourceDelegate> _delegate;
	NSUUID* _identifier;
	HKTaskServerProxyProvider* _proxyProvider;

}

@property (nonatomic,retain) NSUUID * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) HKTaskServerProxyProvider * proxyProvider;                          //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (assign,nonatomic,__weak) id<HKGymKitMetricsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
-(void)connectionInvalidated;
-(id<HKGymKitMetricsDataSourceDelegate>)delegate;
-(id)exportedInterface;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)setDelegate:(id<HKGymKitMetricsDataSourceDelegate>)arg1 ;
-(void)_startTaskServerIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)clientRemote_didReceiveMetrics:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(HKTaskServerProxyProvider *)proxyProvider;
-(id)initWithHealthStore:(id)arg1 workoutConfiguration:(id)arg2 ;
-(void)setProxyProvider:(HKTaskServerProxyProvider *)arg1 ;
-(void)workoutBuilderDidFinish;
@end

