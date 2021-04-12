/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSTransactionLogTaskHandler.h>

@protocol OS_dispatch_queue, IDSTransactionLogTaskHandlerDelegate;
@class IDSTransactionLogSyncTask, NSObject;

@interface IDSTransactionLogSyncTaskHandler : IDSTransactionLogTaskHandler {

	IDSTransactionLogSyncTask* _syncTask;
	NSObject*<OS_dispatch_queue> _queue;
	id<IDSTransactionLogTaskHandlerDelegate> _delegate;

}

@property (nonatomic,retain) IDSTransactionLogSyncTask * syncTask;                                  //@synthesize syncTask=_syncTask - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<IDSTransactionLogTaskHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(IDSTransactionLogSyncTask *)syncTask;
-(id<IDSTransactionLogTaskHandlerDelegate>)delegate;
-(void)qPerformWithToken:(id)arg1 ;
-(id)initWithTask:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)qIngestMessages:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_destinationsInMessages:(id)arg1 ;
-(void)_transactionMessagesFromTransportMessages:(id)arg1 withParticipants:(id)arg2 groups:(id)arg3 accountInfo:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)qFetchParticipantsFromDeviceMessges:(id)arg1 andGroupsFromGroupMessages:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_groupIDsFromMessages:(id)arg1 ;
-(id)_groupsByGroupIDFromGroups:(id)arg1 ;
-(id)_participantsByAliasFromParticipants:(id)arg1 ;
-(id)_transactionMessageFromTransportMessage:(id)arg1 groups:(id)arg2 participants:(id)arg3 accountInfo:(id)arg4 ;
-(id)_transactionMessageFromTransportMessage:(id)arg1 withGroupID:(id)arg2 groups:(id)arg3 accountInfo:(id)arg4 ;
-(id)_transactionMessageFromTransportMessage:(id)arg1 withParticipants:(id)arg2 accountInfo:(id)arg3 ;
-(id)_transactionMessageFromTransportMessage:(id)arg1 withDecryptedPayload:(id)arg2 accountInfo:(id)arg3 ;
-(void)setSyncTask:(IDSTransactionLogSyncTask *)arg1 ;
-(void)perform;
-(void)setDelegate:(id<IDSTransactionLogTaskHandlerDelegate>)arg1 ;
-(void)_completeWithError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

