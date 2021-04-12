/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
@class PCCEndpoint, NSObject, PCCGroupJob, NSMutableDictionary;

@interface PCCProxiedDevice : NSObject {

	PCCEndpoint* _endpoint;
	NSObject*<OS_dispatch_queue> _job_queue;
	PCCGroupJob* _groupXferJob;
	NSMutableDictionary* _jobByTracker;
	NSObject*<OS_dispatch_source> _expiryTimer;
	NSObject*<OS_os_transaction> _txn;
	int file_count;
	int msg_count;
	int up_count;
	int job_count;
	int expire_count;
	BOOL _preserveFiles;
	double _jobTimeout;

}

@property (assign) double jobTimeout;               //@synthesize jobTimeout=_jobTimeout - In the implementation block
@property (assign) BOOL preserveFiles;              //@synthesize preserveFiles=_preserveFiles - In the implementation block
-(id)initWithEndpoint:(id)arg1 ;
-(void)startTimer;
-(void)handleConnection:(BOOL)arg1 ;
-(void)ack:(id)arg1 result:(BOOL)arg2 error:(id)arg3 ;
-(void)handleMessage:(id)arg1 from:(id)arg2 ;
-(void)initiate:(id)arg1 transferGroupWithOptions:(id)arg2 job:(id)arg3 ;
-(void)acceptTaskingPayload:(id)arg1 forRouting:(id)arg2 withId:(id)arg3 ;
-(void)initiate:(id)arg1 transferLog:(id)arg2 withOptions:(id)arg3 job:(id)arg4 ;
-(BOOL)doWork:(id)arg1 ;
-(void)finish:(id)arg1 target:(id)arg2 event:(id)arg3 type:(id)arg4 result:(id)arg5 ;
-(void)explore;
-(void)sweepLogs;
-(void)sendDeviceMetadata:(id)arg1 ;
-(double)jobTimeout;
-(void)setJobTimeout:(double)arg1 ;
-(BOOL)preserveFiles;
-(void)setPreserveFiles:(BOOL)arg1 ;
@end

