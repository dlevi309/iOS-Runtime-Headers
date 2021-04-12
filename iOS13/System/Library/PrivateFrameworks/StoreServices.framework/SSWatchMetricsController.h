/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_connection;
-(BOOL)isEnabled;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)insertEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(SSWatchMetricsConfiguration *)metricsConfiguration;
-(void)setMetricsConfiguration:(SSWatchMetricsConfiguration *)arg1 ;
@end

