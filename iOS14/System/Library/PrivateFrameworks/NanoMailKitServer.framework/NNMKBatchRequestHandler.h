/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol NNMKBatchRequestHandlerDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NNMKResendScheduler, NNMKSyncController, NSObject, NSMutableDictionary, NSDate;

@interface NNMKBatchRequestHandler : NSObject {

	id<NNMKBatchRequestHandlerDelegate> _delegate;
	NNMKResendScheduler* _resendScheduler;
	NNMKSyncController* _syncController;
	NSObject*<OS_dispatch_queue> _executionQueue;
	NSObject*<OS_dispatch_source> _fetchTimeoutTimer;
	NSMutableDictionary* _batchedRequestByMailboxId;
	unsigned long long _retryCountForRequestingMissingHeadersInBatchedResponse;
	NSDate* _lastRetryDate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> fetchTimeoutTimer;                                        //@synthesize fetchTimeoutTimer=_fetchTimeoutTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * batchedRequestByMailboxId;                                        //@synthesize batchedRequestByMailboxId=_batchedRequestByMailboxId - In the implementation block
@property (assign,nonatomic) unsigned long long retryCountForRequestingMissingHeadersInBatchedResponse;              //@synthesize retryCountForRequestingMissingHeadersInBatchedResponse=_retryCountForRequestingMissingHeadersInBatchedResponse - In the implementation block
@property (nonatomic,retain) NSDate * lastRetryDate;                                                                 //@synthesize lastRetryDate=_lastRetryDate - In the implementation block
@property (assign,nonatomic,__weak) id<NNMKBatchRequestHandlerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NNMKResendScheduler * resendScheduler;                                                  //@synthesize resendScheduler=_resendScheduler - In the implementation block
@property (nonatomic,retain) NNMKSyncController * syncController;                                                    //@synthesize syncController=_syncController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> executionQueue;                                            //@synthesize executionQueue=_executionQueue - In the implementation block
-(NNMKResendScheduler *)resendScheduler;
-(NNMKSyncController *)syncController;
-(void)setExecutionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(id<NNMKBatchRequestHandlerDelegate>)delegate;
-(void)cancelFetchTimeout;
-(id)checkBatchFetchedMessages;
-(id)firstMessageIds:(unsigned long long)arg1 fromBatchedFetchResults:(id)arg2 ;
-(unsigned long long)retryCountForRequestingMissingHeadersInBatchedResponse;
-(void)handleMessageAdded:(id)arg1 ;
-(void)setDelegate:(id<NNMKBatchRequestHandlerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)executionQueue;
-(NSObject*<OS_dispatch_source>)fetchTimeoutTimer;
-(void)setResendScheduler:(NNMKResendScheduler *)arg1 ;
-(void)_rescheduleFetchTimeout;
-(void)handleBatchRequest:(id)arg1 ;
-(void)handleMessageDeleted:(id)arg1 mailboxId:(id)arg2 ;
-(id)_batchedFetchResultForBatchedRequest:(id)arg1 mailbox:(id)arg2 diff:(id)arg3 localSyncedMessagesByMessageId:(id)arg4 ;
-(void)reset;
-(void)setSyncController:(NNMKSyncController *)arg1 ;
-(void)setLastRetryDate:(NSDate *)arg1 ;
-(NSMutableDictionary *)batchedRequestByMailboxId;
-(void)setFetchTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setRetryCountForRequestingMissingHeadersInBatchedResponse:(unsigned long long)arg1 ;
-(id)_checkBatchFetchedMessagesWithMailbox:(id)arg1 messageHeadersToFetch:(id*)arg2 attemptsFailed:(BOOL*)arg3 ;
-(void)startFetchTimeout;
-(NSDate *)lastRetryDate;
-(void)setBatchedRequestByMailboxId:(NSMutableDictionary *)arg1 ;
@end

