/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_queue;
@class RTPlatform, NSArray, AWDServerConnection, RTManagedConfiguration, NSObject, RTXPCActivityManager;

@interface RTMetricManager : NSObject {

	RTPlatform* _platform;
	NSArray* _configuredMetricClasses;
	AWDServerConnection* _awdServerConnection;
	RTManagedConfiguration* _managedConfigurationManager;
	NSObject*<OS_dispatch_queue> _queue;
	RTXPCActivityManager* _xpcActivityManager;

}

@property (nonatomic,retain) RTPlatform * platform;                                             //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) NSArray * configuredMetricClasses;                                 //@synthesize configuredMetricClasses=_configuredMetricClasses - In the implementation block
@property (nonatomic,retain) AWDServerConnection * awdServerConnection;                         //@synthesize awdServerConnection=_awdServerConnection - In the implementation block
@property (nonatomic,retain) RTManagedConfiguration * managedConfigurationManager;              //@synthesize managedConfigurationManager=_managedConfigurationManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTXPCActivityManager * xpcActivityManager;                         //@synthesize xpcActivityManager=_xpcActivityManager - In the implementation block
+(id)metricForType:(unsigned long long)arg1 ;
+(int)intWithSignificantDigits:(int)arg1 digits:(int)arg2 ;
+(int)doubleToInt:(double)arg1 shifts:(int)arg2 ;
+(double)doubleWithSignificantDigits:(double)arg1 digits:(int)arg2 ;
+(id)productionMetrics;
+(int)roundTimeInterval:(double)arg1 byIntervalUnit:(unsigned long long)arg2 ;
-(RTPlatform *)platform;
-(id)createMetricForType:(unsigned long long)arg1 ;
-(void)shutdown;
-(id)init;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)setManagedConfigurationManager:(RTManagedConfiguration *)arg1 ;
-(void)submitMetric:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_fetchDiagnosticsEnabled:(/*^block*/id)arg1 ;
-(void)submitMetric:(id)arg1 ;
-(void)registerForXPCActivities:(id)arg1 ;
-(void)registerQueriableMetric:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_submitMetric:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(NSArray *)configuredMetricClasses;
-(RTXPCActivityManager *)xpcActivityManager;
-(void)setAwdServerConnection:(AWDServerConnection *)arg1 ;
-(RTManagedConfiguration *)managedConfigurationManager;
-(void)setXpcActivityManager:(RTXPCActivityManager *)arg1 ;
-(BOOL)setupWithConfiguredClasses:(id)arg1 platform:(id)arg2 error:(id*)arg3 ;
-(void)_releaseMetricPlaceholderForMetric:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(AWDServerConnection *)awdServerConnection;
-(void)setConfiguredMetricClasses:(NSArray *)arg1 ;
-(void)_registerQueriableMetric:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithPlatform:(id)arg1 xpcActivityManager:(id)arg2 ;
-(void)fetchDiagnosticsEnabled:(/*^block*/id)arg1 ;
-(BOOL)_routineConfiguredForMetric:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithAWDServerConnection:(id)arg1 configuredClasses:(id)arg2 managedConfigurationManager:(id)arg3 platform:(id)arg4 xpcActivityManager:(id)arg5 ;
@end

