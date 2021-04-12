/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<HKGymKitMetricsDataSourceDelegate>)delegate;
-(void)setDelegate:(id<HKGymKitMetricsDataSourceDelegate>)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(HKTaskServerProxyProvider *)proxyProvider;
-(void)workoutBuilderDidFinish;
-(id)initWithHealthStore:(id)arg1 workoutConfiguration:(id)arg2 ;
-(void)setProxyProvider:(HKTaskServerProxyProvider *)arg1 ;
-(void)_startTaskServerIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)clientRemote_didReceiveMetrics:(id)arg1 ;
@end

