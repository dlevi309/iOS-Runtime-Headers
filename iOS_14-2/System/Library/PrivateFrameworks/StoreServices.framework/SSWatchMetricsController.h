/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, SSWatchMetricsConfiguration, NSObject;

@interface SSWatchMetricsController : NSObject {

	SSXPCConnection* _connection;
	SSWatchMetricsConfiguration* _metricsConfiguration;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                      //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,copy) SSWatchMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMetricsConfiguration:(SSWatchMetricsConfiguration *)arg1 ;
-(SSWatchMetricsConfiguration *)metricsConfiguration;
-(BOOL)isEnabled;
-(id)_connection;
-(void)insertEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

