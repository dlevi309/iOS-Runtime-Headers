/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NNMKSyncEndpoint.h>
#import <libobjc.A.dylib/NNMKMessagesSyncServiceServerDelegate.h>
#import <libobjc.A.dylib/NNMKMessageContentSyncServiceServerDelegate.h>
#import <libobjc.A.dylib/NNMKAccountsSyncServiceServerDelegate.h>
#import <libobjc.A.dylib/NNMKFetchesSyncServiceServerDelegate.h>
#import <libobjc.A.dylib/NNMKInitialSyncProgressTrackerDelegate.h>
#import <libobjc.A.dylib/NNMKDeviceRegistryHolder.h>
#import <libobjc.A.dylib/NNMKResendSchedulerDelegate.h>
#import <libobjc.A.dylib/NNMKSyncStateManagerDelegate.h>
#import <libobjc.A.dylib/NNMKBatchRequestHandlerDelegate.h>

@protocol NNMKSyncProviderDelegate, OS_dispatch_queue, NNMKSyncStateManager, NNMKDirectoryProvider;
@class NSObject, NNMKDeviceSyncRegistry, NNMKSyncPersistenceHandler, NNMKMessagesSyncServiceServer, NNMKMessageContentSyncServiceServer, NNMKAccountsSyncServiceServer, NNMKFetchesSyncServiceServer, NNMKProtectedSyncServiceServer, NNMKProtectedContentSyncServiceServer, NNMKSyncController, NNMKSyncSessionController, NNMKResendScheduler, NNMKInitialSyncProgressTracker, NNMKBatchRequestHandler, NNMKMailboxSelection, NNMKPairedDeviceInfo, NSString;

@interface NNMKSyncProvider : NNMKSyncEndpoint <NNMKMessagesSyncServiceServerDelegate, NNMKMessageContentSyncServiceServerDelegate, NNMKAccountsSyncServiceServerDelegate, NNMKFetchesSyncServiceServerDelegate, NNMKInitialSyncProgressTrackerDelegate, NNMKDeviceRegistryHolder, NNMKResendSchedulerDelegate, NNMKSyncStateManagerDelegate, NNMKBatchRequestHandlerDelegate> {

	BOOL _pairedDeviceSupportsMultipleMailboxes;
	BOOL _fullSyncRecoveredInThisSession;
	BOOL _triggeredInitialSyncToRecoverFromSyncVersionMismatch;
	id<NNMKSyncProviderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _providerQueue;
	id<NNMKSyncStateManager> _syncStateManager;
	NNMKDeviceSyncRegistry* _pairedDeviceRegistry;
	NNMKSyncPersistenceHandler* _persistenceHandler;
	NNMKMessagesSyncServiceServer* _messagesSyncService;
	NNMKMessageContentSyncServiceServer* _contentSyncService;
	NNMKAccountsSyncServiceServer* _accountsSyncService;
	NNMKFetchesSyncServiceServer* _fetchesSyncService;
	NNMKProtectedSyncServiceServer* _protectedSyncService;
	NNMKProtectedContentSyncServiceServer* _protectedContentSyncService;
	NNMKSyncController* _syncController;
	NNMKSyncSessionController* _sessionController;
	id<NNMKDirectoryProvider> _directoryProvider;
	NNMKResendScheduler* _resendScheduler;
	NNMKInitialSyncProgressTracker* _initialSyncProgressTracker;
	NNMKBatchRequestHandler* _batchRequestHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> providerQueue;                                       //@synthesize providerQueue=_providerQueue - In the implementation block
@property (nonatomic,retain) id<NNMKSyncStateManager> syncStateManager;                                        //@synthesize syncStateManager=_syncStateManager - In the implementation block
@property (nonatomic,retain) NNMKDeviceSyncRegistry * pairedDeviceRegistry;                                    //@synthesize pairedDeviceRegistry=_pairedDeviceRegistry - In the implementation block
@property (assign,nonatomic) BOOL fullSyncRecoveredInThisSession;                                              //@synthesize fullSyncRecoveredInThisSession=_fullSyncRecoveredInThisSession - In the implementation block
@property (nonatomic,retain) NNMKSyncPersistenceHandler * persistenceHandler;                                  //@synthesize persistenceHandler=_persistenceHandler - In the implementation block
@property (nonatomic,retain) NNMKMessagesSyncServiceServer * messagesSyncService;                              //@synthesize messagesSyncService=_messagesSyncService - In the implementation block
@property (nonatomic,retain) NNMKMessageContentSyncServiceServer * contentSyncService;                         //@synthesize contentSyncService=_contentSyncService - In the implementation block
@property (nonatomic,retain) NNMKAccountsSyncServiceServer * accountsSyncService;                              //@synthesize accountsSyncService=_accountsSyncService - In the implementation block
@property (nonatomic,retain) NNMKFetchesSyncServiceServer * fetchesSyncService;                                //@synthesize fetchesSyncService=_fetchesSyncService - In the implementation block
@property (nonatomic,retain) NNMKProtectedSyncServiceServer * protectedSyncService;                            //@synthesize protectedSyncService=_protectedSyncService - In the implementation block
@property (nonatomic,retain) NNMKProtectedContentSyncServiceServer * protectedContentSyncService;              //@synthesize protectedContentSyncService=_protectedContentSyncService - In the implementation block
@property (nonatomic,retain) NNMKSyncController * syncController;                                              //@synthesize syncController=_syncController - In the implementation block
@property (nonatomic,retain) NNMKSyncSessionController * sessionController;                                    //@synthesize sessionController=_sessionController - In the implementation block
@property (nonatomic,retain) id<NNMKDirectoryProvider> directoryProvider;                                      //@synthesize directoryProvider=_directoryProvider - In the implementation block
@property (nonatomic,retain) NNMKResendScheduler * resendScheduler;                                            //@synthesize resendScheduler=_resendScheduler - In the implementation block
@property (nonatomic,retain) NNMKInitialSyncProgressTracker * initialSyncProgressTracker;                      //@synthesize initialSyncProgressTracker=_initialSyncProgressTracker - In the implementation block
@property (nonatomic,retain) NNMKBatchRequestHandler * batchRequestHandler;                                    //@synthesize batchRequestHandler=_batchRequestHandler - In the implementation block
@property (assign,nonatomic) BOOL triggeredInitialSyncToRecoverFromSyncVersionMismatch;                        //@synthesize triggeredInitialSyncToRecoverFromSyncVersionMismatch=_triggeredInitialSyncToRecoverFromSyncVersionMismatch - In the implementation block
@property (assign,nonatomic,__weak) id<NNMKSyncProviderDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isPaired; 
@property (assign,nonatomic) BOOL organizeByThread; 
@property (nonatomic,readonly) NNMKMailboxSelection * mailboxSelection; 
@property (nonatomic,readonly) NNMKPairedDeviceInfo * pairedDeviceInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prepareForSystemAppDeletion:(id*)arg1 ;
-(NNMKResendScheduler *)resendScheduler;
-(BOOL)isPaired;
-(NNMKSyncController *)syncController;
-(void)messagesSyncServiceServerConnectivityChanged:(id)arg1 ;
-(void)_sendWatchAccountStatusRequest;
-(void)fetchesSyncServiceServer:(id)arg1 didNotifyAboutWebKitStatus:(id)arg2 ;
-(void)setPersistenceHandler:(NNMKSyncPersistenceHandler *)arg1 ;
-(void)setProviderQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NNMKAccountsSyncServiceServer *)accountsSyncService;
-(void)messagesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3 ;
-(BOOL)_isConnectedToWatch;
-(void)markConversationIdForNotNotify:(id)arg1 ;
-(id)_sendFirstMessages:(id)arg1 mailboxes:(id)arg2 shouldUseProtectedChannel:(BOOL)arg3 ;
-(BOOL)isMessageOkForSyncedMailboxes:(id)arg1 ;
-(void)_triggerFullSyncForMailbox:(id)arg1 ;
-(void)_handleHaltSyncForMailbox:(id)arg1 ;
-(void)_sendUpdatedMailboxSelection:(unsigned long long)arg1 resendInterval:(unsigned long long)arg2 ;
-(id)_messageProtobufForMessage:(id)arg1 ;
-(void)_handleDidPairWithNewDevice;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingContentForMessageId:(id)arg2 highPriority:(BOOL)arg3 ;
-(void)_requestDelegateForFirstMessagesForMailboxes:(id)arg1 ;
-(id)_watchAccounts;
-(void)messageContentSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3 ;
-(id<NNMKSyncProviderDelegate>)delegate;
-(BOOL)syncStateManagerShouldAddFavoriteSubsectionForMailboxId:(id)arg1 ;
-(void)reportMessageContentDownloadFailureForMessageId:(id)arg1 ;
-(void)messagesSyncServiceServer:(id)arg1 didUpdateMessagesStatus:(id)arg2 ;
-(id)bulletinFlagsForMessageStatus:(unsigned long long)arg1 dateReceived:(id)arg2 messageWillBeAddedToSyncProvider:(BOOL)arg3 mailboxId:(id)arg4 ;
-(void)_addMessages:(id)arg1 messagesAreNew:(BOOL)arg2 mailbox:(id)arg3 ;
-(void)_markConversationWithId:(id)arg1 forNotify:(BOOL)arg2 mailbox:(id)arg3 ;
-(NNMKMessagesSyncServiceServer *)messagesSyncService;
-(id<NNMKDirectoryProvider>)directoryProvider;
-(void)resendObjectsForIDSIdentifier:(id)arg1 ;
-(void)_requestDelegateForMessagesToSendAsFetchResponseForMessageIds:(id)arg1 ;
-(void)_checkConnectivityBasedSuspensionTimer:(BOOL)arg1 ;
-(void)updateVIPSenderList:(id)arg1 ;
-(void)resendScheduler:(id)arg1 didRequestRetryFullSyncForMailboxes:(id)arg2 ;
-(void)_setPairedDeviceSupportsMultipleMailboxes:(BOOL)arg1 ;
-(void)_requestDelegateToStopDownloadingMessageElementsForMessageWithId:(id)arg1 ;
-(void)_replyWithMoreMessages:(id)arg1 forDateReceivedBefore:(id)arg2 includesProtectedMessages:(BOOL)arg3 mailbox:(id)arg4 messagesForSpecialMailbox:(unsigned long long)arg5 ;
-(void)_fastForwardToFullSyncVersion:(unsigned long long)arg1 ;
-(void)_verifyPairingForcingSync:(BOOL)arg1 ;
-(void)batchRequestHandlerDidTimeoutFetchRequest:(id)arg1 ;
-(void)setTriggeredInitialSyncToRecoverFromSyncVersionMismatch:(BOOL)arg1 ;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingComposeMessageProgress:(long long)arg2 messageId:(id)arg3 resendInterval:(unsigned long long)arg4 ;
-(void)updateVIPSenderList:(id)arg1 requestContext:(id)arg2 ;
-(void)_stopTaks;
-(void)reportWillDownloadFirstMessages;
-(void)_addMessageContent:(id)arg1 forMessage:(id)arg2 loadedProtected:(BOOL)arg3 mailbox:(id)arg4 ;
-(void)syncStateManagerDidUnpair:(id)arg1 ;
-(void)_deleteMessagesWithIds:(id)arg1 mailbox:(id)arg2 ;
-(void)accountsSyncServiceServer:(id)arg1 didChangeAccountSourceType:(id)arg2 ;
-(void)_checkBatchFetchedMessages;
-(BOOL)pairedDeviceSupportsStandaloneMode;
-(void)setDirectoryProvider:(id<NNMKDirectoryProvider>)arg1 ;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestHaltSync:(id)arg2 ;
-(void)syncStandaloneAccountIdentity:(id)arg1 ;
-(NNMKPairedDeviceInfo *)pairedDeviceInfo;
-(void)_requestDelegateToSendComposedMessage:(id)arg1 ;
-(void)_updateMessagesStatus:(id)arg1 mailbox:(id)arg2 ;
-(void)addUpdateOrDeleteAccounts:(id)arg1 ;
-(id)_initialSyncForMailbox:(id)arg1 messages:(id)arg2 shouldUseProtectedChannel:(BOOL)arg3 ;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessagesForConversation:(id)arg2 ;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestFetch:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 syncStateManager:(id)arg2 directoryProvider:(id)arg3 ;
-(BOOL)_isPaired;
-(void)setDelegate:(id<NNMKSyncProviderDelegate>)arg1 ;
-(void)_addImageAttachment:(id)arg1 forMessageId:(id)arg2 contentId:(id)arg3 loadedProtected:(BOOL)arg4 mailbox:(id)arg5 ;
-(NNMKFetchesSyncServiceServer *)fetchesSyncService;
-(id)watchAccounts;
-(BOOL)_isUsingCompaionSync;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingMessageDeletions:(id)arg2 deletionsMessageIds:(id)arg3 resendInterval:(unsigned long long)arg4 ;
-(void)setOrganizeByThread:(BOOL)arg1 ;
-(void)_requestDelegateForAccounts;
-(void)_handleForwardNotificationPayload:(/*^block*/id)arg1 forBulletin:(id)arg2 ;
-(id)syncServiceEndpoints;
-(void)_requestDelegateForMoreMessagesBeforeDateReceived:(id)arg1 forConversationWithId:(id)arg2 mailbox:(id)arg3 ;
-(NNMKMessageContentSyncServiceServer *)contentSyncService;
-(BOOL)fullSyncRecoveredInThisSession;
-(void)_updateMailboxSelection:(id)arg1 notifyClient:(BOOL)arg2 ;
-(void)_requestDelegateToStopDownloadingAllMessageElements;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingAccountWithId:(id)arg2 ;
-(void)accountsSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3 ;
-(void)setAccountsSyncService:(NNMKAccountsSyncServiceServer *)arg1 ;
-(void)deleteMessagesWithIds:(id)arg1 ;
-(void)setSyncStateManager:(id<NNMKSyncStateManager>)arg1 ;
-(void)markConversationIdForNotify:(id)arg1 messages:(id)arg2 includesProtectedMessages:(BOOL)arg3 ;
-(void)_markConversationIdForNotify:(id)arg1 messages:(id)arg2 includesProtectedMessages:(BOOL)arg3 mailbox:(id)arg4 ;
-(void)_replyWithMessagesToResend:(id)arg1 includesProtectedMessages:(BOOL)arg2 mailbox:(id)arg3 ;
-(NNMKBatchRequestHandler *)batchRequestHandler;
-(void)resendScheduler:(id)arg1 didRequestEnqueueIDSIdentifierForResend:(id)arg2 date:(id)arg3 silent:(BOOL)arg4 ;
-(void)resendScheduler:(id)arg1 didRequestEnqueueIDSIdentifiersForResend:(id)arg2 ;
-(NNMKInitialSyncProgressTracker *)initialSyncProgressTracker;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingMailboxSelectionWithResendInterval:(unsigned long long)arg2 ;
-(void)setProtectedSyncService:(NNMKProtectedSyncServiceServer *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)trackerDidFinishSendingInitialSyncContentToPairedDevice:(id)arg1 ;
-(void)_sendUpdatedMailboxSelection:(unsigned long long)arg1 ;
-(id)_bbSubsectionIdsForMessage:(id)arg1 ;
-(id)_legacy_sendFirstMessages:(id)arg1 syncedMailbox:(id)arg2 shouldUseProtectedChannel:(BOOL)arg3 ;
-(void)setResendScheduler:(NNMKResendScheduler *)arg1 ;
-(void)_sendStandaloneAccountIdentity:(id)arg1 resendInterval:(unsigned long long)arg2 ;
-(void)addMessageContent:(id)arg1 forMessage:(id)arg2 loadedProtected:(BOOL)arg3 ;
-(void)_handleFetchRequestFromWatch:(id)arg1 ;
-(void)syncStateManagerDidChangePairedDevice:(id)arg1 ;
-(void)messagesSyncServiceServerSpaceBecameAvailable:(id)arg1 ;
-(void)_addMessages:(id)arg1 mailbox:(id)arg2 ;
-(void)updateMailboxSelection:(id)arg1 ;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestFetchInBatch:(id)arg2 ;
-(void)_triggerFullSyncForMailboxes:(id)arg1 ;
-(void)fetchesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2 ;
-(void)replyWithMessageSendingProgress:(long long)arg1 forComposedMessageId:(id)arg2 ;
-(void)setFullSyncRecoveredInThisSession:(BOOL)arg1 ;
-(id)_createDefaultSyncStateManager;
-(BOOL)organizeByThread;
-(void)_requestDelegateForResendingAccountWithId:(id)arg1 ;
-(void)_requestDelegateForVIPList:(id)arg1 ;
-(void)notifyFetchCompleted;
-(void)fetchesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3 ;
-(void)_requestDelegateForContentForMessageIds:(id)arg1 highPriority:(BOOL)arg2 ;
-(void)setBatchRequestHandler:(NNMKBatchRequestHandler *)arg1 ;
-(NNMKMailboxSelection *)mailboxSelection;
-(void)messagesSyncServiceServer:(id)arg1 didRequestCompactMessages:(id)arg2 ;
-(void)replyWithAccounts:(id)arg1 ;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestContent:(id)arg2 ;
-(id)requestWatchAccounts;
-(BOOL)_verifyDatabaseOkForFullSyncVersion:(unsigned long long)arg1 mailbox:(id)arg2 ;
-(void)replyWithAccountToResend:(id)arg1 ;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingAccountIdentifier:(id)arg2 resendInterval:(unsigned long long)arg3 ;
-(void)setSyncController:(NNMKSyncController *)arg1 ;
-(NSObject*<OS_dispatch_queue>)providerQueue;
-(void)setProtectedContentSyncService:(NNMKProtectedContentSyncServiceServer *)arg1 ;
-(void)_storeScreenRelatedValues;
-(void)messagesSyncServiceServer:(id)arg1 didRequestSendMessage:(id)arg2 ;
-(void)messagesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2 ;
-(BOOL)containsSyncedMailbox:(id)arg1 ;
-(void)_requestDelegateForResendingMessagesWithIds:(id)arg1 ;
-(void)addImageAttachment:(id)arg1 forMessageId:(id)arg2 contentId:(id)arg3 loadedProtected:(BOOL)arg4 ;
-(void)replyWithMessagesToResend:(id)arg1 includesProtectedMessages:(BOOL)arg2 ;
-(void)replyWithMoreMessages:(id)arg1 context:(id)arg2 ;
-(void)addMessages:(id)arg1 ;
-(void)updateMessagesStatus:(id)arg1 ;
-(void)syncStateManager:(id)arg1 didAcknowledgeForwardNotificationPayload:(/*^block*/id)arg2 forBulletin:(id)arg3 ;
-(void)syncStateManagerDidInvalidateSyncSession:(id)arg1 syncSessionIdentifier:(id)arg2 ;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessagesInBatch:(id)arg2 ;
-(void)setContentSyncService:(NNMKMessageContentSyncServiceServer *)arg1 ;
-(void)setMessagesSyncService:(NNMKMessagesSyncServiceServer *)arg1 ;
-(void)_requestDelegateForFetchForMailboxes:(id)arg1 ;
-(void)accountsSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2 ;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingMessageWithIds:(id)arg2 ;
-(void)messagesSyncServiceServer:(id)arg1 didWarnMessagesFilteredOut:(id)arg2 ;
-(void)_requestDelegateForContentForMessageWithId:(id)arg1 highPriority:(BOOL)arg2 ;
-(void)setSessionController:(NNMKSyncSessionController *)arg1 ;
-(void)_notifyDelegateThatMessagesStatusWereUpdated:(id)arg1 ;
-(NNMKProtectedSyncServiceServer *)protectedSyncService;
-(void)replyWithMessagesToSendAsFetchResponse:(id)arg1 includesProtectedMessages:(BOOL)arg2 ;
-(NNMKSyncPersistenceHandler *)persistenceHandler;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingVIPListWithResendInterval:(unsigned long long)arg2 ;
-(void)_handleMailboxesDesync;
-(BOOL)_verifyDatabaseOkForFullSyncVersion:(unsigned long long)arg1 ;
-(NNMKDeviceSyncRegistry *)pairedDeviceRegistry;
-(void)resendScheduler:(id)arg1 didRequestDequeueIDSIdentifierForResend:(id)arg2 ;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestFullSync:(id)arg2 ;
-(void)setPairedDeviceRegistry:(NNMKDeviceSyncRegistry *)arg1 ;
-(void)_replyWithMoreMessages:(id)arg1 forConversationWithId:(id)arg2 includesProtectedMessages:(BOOL)arg3 mailbox:(id)arg4 ;
-(void)messagesSyncServiceServer:(id)arg1 didUpdateMailboxSelection:(id)arg2 ;
-(id<NNMKSyncStateManager>)syncStateManager;
-(void)accountsSyncServiceServer:(id)arg1 didReceivedAccountAuthenticationStatus:(id)arg2 requestTime:(double)arg3 ;
-(void)messageContentSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2 ;
-(void)messagesSyncServiceServer:(id)arg1 didDeleteMessages:(id)arg2 ;
-(void)syncStateManagerDidBeginSyncSession:(id)arg1 syncSessionType:(id)arg2 syncSessionIdentifier:(id)arg3 ;
-(NNMKProtectedContentSyncServiceServer *)protectedContentSyncService;
-(unsigned long long)resendScheduler:(id)arg1 didRequestNewResendIntervalForPreviousResendInterval:(unsigned long long)arg2 errorCode:(long long)arg3 ;
-(id)syncedMailboxes;
-(void)_handleDidUnpair;
-(void)_triggerInitialSyncToRecoverFromSyncVersionMismatch;
-(BOOL)_pairedDeviceSupportsMultipleMailboxes;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessages:(id)arg2 ;
-(void)setFetchesSyncService:(NNMKFetchesSyncServiceServer *)arg1 ;
-(void)replyWithFirstMessages:(id)arg1 includesProtectedMessages:(BOOL)arg2 mailboxes:(id)arg3 organizedByThread:(BOOL)arg4 ;
-(void)_triggerInitialSync;
-(BOOL)pairedDeviceSupportsMultipleMailboxes;
-(BOOL)triggeredInitialSyncToRecoverFromSyncVersionMismatch;
-(void)_triggerInitialSyncTrackingProgress:(BOOL)arg1 ;
-(void)_requestDelegateForMoreMessagesWithMailbox:(id)arg1 beforeDate:(id)arg2 messagesForspecialMailboxFilterType:(unsigned long long)arg3 ;
-(void)_reportMessageContentDownloadFailureForMessageId:(id)arg1 mailbox:(id)arg2 ;
-(NNMKSyncSessionController *)sessionController;
-(id)currentDeviceRegistry;
-(void)setInitialSyncProgressTracker:(NNMKInitialSyncProgressTracker *)arg1 ;
-(void)dealloc;
-(id)_handleFetchRequest:(id)arg1 shouldResumeSync:(BOOL*)arg2 ;
-(void)_handleDidFailSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)fetchesSyncServiceServer:(id)arg1 didNotifyInitialSyncFinished:(id)arg2 ;
-(void)resendScheduler:(id)arg1 didRequestRetrySendingDeletionForAccountWithId:(id)arg2 resendInterval:(unsigned long long)arg3 ;
@end

