/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDHome, NSObject, HMFMessageDispatcher, NSMutableArray, NSArray, HMFLogEventSession, NSString;

@interface HMDAssistantCommandHelper : HMFObject <HMFMessageReceiver, HMFLogging> {

	BOOL _executingActionSet;
	/*^block*/id _responseHandler;
	/*^block*/id _mediaResponseHandler;
	NSUUID* _messageId;
	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _queue;
	HMFMessageDispatcher* _msgDispatcher;
	NSUUID* _uuid;
	NSMutableArray* _responses;
	unsigned long long _numErrors;
	NSArray* _requests;
	NSArray* _mediaRequests;
	NSMutableArray* _mediaResponses;
	HMFLogEventSession* _logEventSession;

}

@property (nonatomic,copy) id responseHandler;                                                //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,copy) id mediaResponseHandler;                                           //@synthesize mediaResponseHandler=_mediaResponseHandler - In the implementation block
@property (nonatomic,retain) NSUUID * messageId;                                              //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * responses;                                      //@synthesize responses=_responses - In the implementation block
@property (assign,nonatomic) unsigned long long numErrors;                                    //@synthesize numErrors=_numErrors - In the implementation block
@property (assign,nonatomic) BOOL executingActionSet;                                         //@synthesize executingActionSet=_executingActionSet - In the implementation block
@property (nonatomic,retain) NSArray * requests;                                              //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSArray * mediaRequests;                                         //@synthesize mediaRequests=_mediaRequests - In the implementation block
@property (nonatomic,retain) NSMutableArray * mediaResponses;                                 //@synthesize mediaResponses=_mediaResponses - In the implementation block
@property (nonatomic,retain) HMFLogEventSession * logEventSession;                            //@synthesize logEventSession=_logEventSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(HMDHome *)home;
-(NSArray *)requests;
-(NSUUID *)messageId;
-(void)setMessageId:(NSUUID *)arg1 ;
-(void)setRequests:(NSArray *)arg1 ;
-(NSMutableArray *)responses;
-(void)setResponses:(NSMutableArray *)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(HMFLogEventSession *)logEventSession;
-(void)setLogEventSession:(HMFLogEventSession *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)_register;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)addActionSetRequest:(id)arg1 actionSet:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addMediaWriteRequests:(id)arg1 withRequestProperty:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addReadRequests:(id)arg1 home:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addWriteRequests:(id)arg1 home:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeResponses:(id)arg1 ;
-(id)initWithQueue:(id)arg1 msgDispatcher:(id)arg2 logEventSession:(id)arg3 ;
-(void)timeoutAndReportResults;
-(void)reportOperationStartedForAccessory:(id)arg1 ;
-(void)__handleAccessoryCharacteristicsChangedNotification:(id)arg1 ;
-(NSArray *)mediaRequests;
-(void)_reportResponsesForMediaRequests;
-(void)_reportResponses;
-(id)mediaResponseHandler;
-(void)setMediaResponseHandler:(id)arg1 ;
-(NSMutableArray *)mediaResponses;
-(BOOL)executingActionSet;
-(unsigned long long)numErrors;
-(void)setNumErrors:(unsigned long long)arg1 ;
-(void)_reportOperationStartedForAccessory:(id)arg1 ;
-(void)setMediaRequests:(NSArray *)arg1 ;
-(void)setMediaResponses:(NSMutableArray *)arg1 ;
-(void)setExecutingActionSet:(BOOL)arg1 ;
@end

