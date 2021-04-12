/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<NNMKDeviceRegistryHolder>)delegate;
-(void)setDelegate:(id<NNMKDeviceRegistryHolder>)arg1 ;
-(NNMKSyncController *)syncController;
-(id)currentDeviceRegistry;
-(void)setSyncController:(NNMKSyncController *)arg1 ;
-(id<NNMKSyncStateManager>)syncStateManager;
-(void)setSyncStateManager:(id<NNMKSyncStateManager>)arg1 ;
-(void)_createDefaultMailbox:(id)arg1 ;
-(NNMKSyncSessionController *)sessionController;
-(id)protoMessageFromMessage:(id)arg1 ;
-(NNMKBatchRequestHandler *)batchRequestHandler;
-(id)persistAccounts:(id)arg1 ;
-(id)updateMailboxListForAccount:(id)arg1 mailboxListChanged:(BOOL*)arg2 ;
-(id)addStandaloneAccountIdentity:(id)arg1 ;
-(id)addAccountAuthenticationStatusRequest:(double)arg1 ;
-(id)addMessages:(id)arg1 containsNewMessages:(BOOL)arg2 mailbox:(id)arg3 ;
-(id)addMoreMessages:(id)arg1 mailbox:(id)arg2 isProtectedData:(BOOL)arg3 ;
-(id)addMoreConversationSpecificMessages:(id)arg1 conversationId:(id)arg2 mailbox:(id)arg3 isProtectedData:(BOOL)arg4 ;
-(id)addMessagesToResend:(id)arg1 mailbox:(id)arg2 isProtectedData:(BOOL)arg3 ;
-(id)updateMessagesStatus:(id)arg1 mailbox:(id)arg2 ;
-(id)deleteMessagesWithIds:(id)arg1 mailbox:(id)arg2 ;
-(id)updateMessagesFromConversation:(id)arg1 withNotifyConversationState:(BOOL)arg2 mailbox:(id)arg3 ;
-(id)addMessageContent:(id)arg1 forMessage:(id)arg2 mailbox:(id)arg3 isProtectedData:(BOOL)arg4 ;
-(void)setBatchRequestHandler:(NNMKBatchRequestHandler *)arg1 ;
-(void)setSessionController:(NNMKSyncSessionController *)arg1 ;
@end

