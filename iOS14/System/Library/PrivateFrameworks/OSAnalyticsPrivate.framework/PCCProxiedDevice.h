/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
*/

#import <OSAnalyticsPrivate/OSASyncProxyHandler.h>

@protocol OS_dispatch_source, OS_os_transaction, OS_dispatch_queue;
@class PCCEndpoint, PCCGroupJob, NSMutableDictionary, NSObject, NSString;

@interface PCCProxiedDevice : NSObject <OSASyncProxyHandler> {

	PCCEndpoint* _endpoint;
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
	NSObject*<OS_dispatch_queue> _job_queue;
	double _jobTimeout;

}

@property (assign) double jobTimeout;                                               //@synthesize jobTimeout=_jobTimeout - In the implementation block
@property (assign) BOOL preserveFiles;                                              //@synthesize preserveFiles=_preserveFiles - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> initializationQueue;              //@synthesize job_queue=_job_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startTimer;
-(id)initWithEndpoint:(id)arg1 ;
-(void)handleConnection:(BOOL)arg1 ;
-(BOOL)doWork:(id)arg1 ;
-(void)explore;
-(void)handleFile:(id)arg1 metadata:(id)arg2 ;
-(void)ack:(id)arg1 result:(BOOL)arg2 error:(id)arg3 ;
-(void)handleMessage:(id)arg1 from:(id)arg2 ;
-(void)initiate:(id)arg1 transferGroupWithOptions:(id)arg2 job:(id)arg3 ;
-(void)acceptTaskingPayload:(id)arg1 forRouting:(id)arg2 withId:(id)arg3 ;
-(void)initiate:(id)arg1 transferLog:(id)arg2 withOptions:(id)arg3 job:(id)arg4 ;
-(void)finish:(id)arg1 target:(id)arg2 event:(id)arg3 type:(id)arg4 result:(id)arg5 ;
-(NSObject*<OS_dispatch_queue>)initializationQueue;
-(void)sweepLogs;
-(void)sendDeviceMetadata:(id)arg1 ;
-(double)jobTimeout;
-(void)setJobTimeout:(double)arg1 ;
-(BOOL)preserveFiles;
-(void)setPreserveFiles:(BOOL)arg1 ;
@end

