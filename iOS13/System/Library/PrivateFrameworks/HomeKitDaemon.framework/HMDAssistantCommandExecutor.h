/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class HMDAssistantCommand, HMFMessageDispatcher, NSObject, NSMutableArray, NSMutableDictionary, NSString, HMFTimer, HMFLogEventSession;

@interface HMDAssistantCommandExecutor : NSObject <HMFTimerDelegate> {

	HMDAssistantCommand* _initialCommand;
	HMFMessageDispatcher* _msgDispatcher;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _actionResults;
	NSMutableDictionary* _pendingCommands;
	NSString* _clientValidity;
	HMFTimer* _executionTimer;
	/*^block*/id _completionHandler;
	HMFLogEventSession* _logEventSession;

}

@property (nonatomic,retain) HMDAssistantCommand * initialCommand;                //@synthesize initialCommand=_initialCommand - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionResults;                      //@synthesize actionResults=_actionResults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingCommands;               //@synthesize pendingCommands=_pendingCommands - In the implementation block
@property (nonatomic,retain) NSString * clientValidity;                           //@synthesize clientValidity=_clientValidity - In the implementation block
@property (nonatomic,retain) HMFTimer * executionTimer;                           //@synthesize executionTimer=_executionTimer - In the implementation block
@property (nonatomic,copy) id completionHandler;                                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) HMFLogEventSession * logEventSession;                //@synthesize logEventSession=_logEventSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)executorWithCommand:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3 ;
+(id)executorWithCommand:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3 logEventSession:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)_isValid;
-(void)_reportResults:(id)arg1 ;
-(id)_command;
-(void)timerDidFire:(id)arg1 ;
-(HMFLogEventSession *)logEventSession;
-(void)setLogEventSession:(HMFLogEventSession *)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableArray *)actionResults;
-(void)setActionResults:(NSMutableArray *)arg1 ;
-(NSString *)clientValidity;
-(void)setClientValidity:(NSString *)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_sendResponse:(id)arg1 ;
-(NSMutableDictionary *)pendingCommands;
-(void)setPendingCommands:(NSMutableDictionary *)arg1 ;
-(id)initWithCommand:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3 logEventSession:(id)arg4 ;
-(HMFTimer *)executionTimer;
-(void)_startExecutionTimer;
-(void)_reportFailure;
-(BOOL)_initialCommandIsMultipleActions;
-(HMDAssistantCommand *)initialCommand;
-(void)_executeCommand:(id)arg1 ;
-(void)_accumulateActionResultsFromResponse:(id)arg1 command:(id)arg2 ;
-(void)setExecutionTimer:(HMFTimer *)arg1 ;
-(void)setInitialCommand:(HMDAssistantCommand *)arg1 ;
@end

