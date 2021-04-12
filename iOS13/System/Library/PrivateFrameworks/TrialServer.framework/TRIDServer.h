/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol OS_dispatch_queue;
@class TRIClient, NSObject, TRITaskQueue, TRIControlManager;

@interface TRIDServer : NSObject {

	TRIClient* _client;
	BOOL _isRunning;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	TRITaskQueue* _taskQueue;
	TRIControlManager* _controlManager;

}

@property (readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) TRITaskQueue * taskQueue;                                //@synthesize taskQueue=_taskQueue - In the implementation block
@property (readonly) TRIControlManager * controlManager;                      //@synthesize controlManager=_controlManager - In the implementation block
@property (readonly) TRIClient * client;                                      //@synthesize client=_client - In the implementation block
@property (readonly) BOOL isRunning;                                          //@synthesize isRunning=_isRunning - In the implementation block
+(id)sharedServer;
-(id)init;
-(BOOL)shouldContinue;
-(void)start;
-(BOOL)isRunning;
-(TRIClient *)client;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(TRITaskQueue *)taskQueue;
-(BOOL)makeDataVaultAtPath:(id)arg1 ;
-(void)updateSystemInfo;
-(void)dispatchIfUnlocked:(/*^block*/id)arg1 ;
-(TRIControlManager *)controlManager;
-(void)asyncStartWithMetrics:(id)arg1 ;
-(void)_registerXpcStreamEventHandler;
-(void)_registerFetchExperimentsActivity;
-(void)_registerPostUpgradeActivity;
-(void)_registerPlaceholderTaskQueueActivity;
-(void)logMetrics:(id)arg1 stopwatch:(id)arg2 ;
-(void)_scheduleDaemonExitWithDelaySeconds:(double)arg1 ;
-(unsigned long long)getDiskUsageInBytes;
@end

