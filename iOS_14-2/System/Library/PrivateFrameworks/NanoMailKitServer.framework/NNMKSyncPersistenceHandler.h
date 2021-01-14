/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol NNMKDeviceRegistryHolder, NNMKSyncStateManager;
@class NNMKSyncController, NNMKBatchRequestHandler, NNMKSyncSessionController;

@interface NNMKSyncPersistenceHandler : NSObject {

	id<NNMKDeviceRegistryHolder> _delegate;
	id<NNMKSyncStateManager> _syncStateManager;
	NNMKSyncController* _syncController;
	NNMKBatchRequestHandler* _batchRequestHandler;
	NNMKSyncSessionController* _sessionController;

}

@property (assign,nonatomic,__weak) id<NNMKDeviceRegistryHolder> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<NNMKSyncStateManager> syncStateManager;              //@synthesize syncStateManager=_syncStateManager - In the implementation block
@property (nonatomic,retain) NNMKSyncController * syncController;                           //@synthesize syncController=_syncController - In the implementation block
@property (nonatomic,retain) NNMKBatchRequestHandler * batchRequestHandler;                 //@synthesize batchRequestHandler=_batchRequestHandler - In the implementation block
@property (nonatomic,retain) NNMKSyncSessionController * sessionController;                 //@synthesize sessionController=_sessionController - In the implementation block
-(NNMKSyncController *)syncController;
-(id)addAccountAuthenticationStatusRequest:(double)arg1 ;
-(id<NNMKDeviceRegistryHolder>)delegate;
-(id)protoMessageFromMessage:(id)arg1 ;
-(id)addMoreConversationSpecificMessages:(id)arg1 conversationId:(id)arg2 mailbox:(id)arg3 isProtectedData:(BOOL)arg4 ;
-(id)addStandaloneAccountIdentity:(id)arg1 ;
-(id)addMoreMessages:(id)arg1 mailbox:(id)arg2 isProtectedData:(BOOL)arg3 ;
-(id)deleteMessagesWithIds:(id)arg1 mailbox:(id)arg2 ;
-(id)updateMailboxListForAccount:(id)arg1 mailboxListChanged:(BOOL*)arg2 ;
-(void)setDelegate:(id<NNMKDeviceRegistryHolder>)arg1 ;
-(id)updateMessagesFromConversation:(id)arg1 withNotifyConversationState:(BOOL)arg2 mailbox:(id)arg3 ;
-(id)addMessages:(id)arg1 containsNewMessages:(BOOL)arg2 mailbox:(id)arg3 ;
-(void)setSyncStateManager:(id<NNMKSyncStateManager>)arg1 ;
-(NNMKBatchRequestHandler *)batchRequestHandler;
-(id)updateMessagesStatus:(id)arg1 mailbox:(id)arg2 ;
-(void)setBatchRequestHandler:(NNMKBatchRequestHandler *)arg1 ;
-(id)addMessageContent:(id)arg1 forMessage:(id)arg2 mailbox:(id)arg3 isProtectedData:(BOOL)arg4 ;
-(void)setSyncController:(NNMKSyncController *)arg1 ;
-(id)persistAccounts:(id)arg1 ;
-(void)setSessionController:(NNMKSyncSessionController *)arg1 ;
-(id<NNMKSyncStateManager>)syncStateManager;
-(id)addMessagesToResend:(id)arg1 mailbox:(id)arg2 isProtectedData:(BOOL)arg3 ;
-(void)_createDefaultMailbox:(id)arg1 ;
-(NNMKSyncSessionController *)sessionController;
-(id)currentDeviceRegistry;
@end

