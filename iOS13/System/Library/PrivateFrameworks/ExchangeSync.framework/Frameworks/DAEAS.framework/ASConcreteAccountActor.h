/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/DAEAS-Structs.h>
#import <DataAccess/ASAccountActor.h>
#import <libobjc.A.dylib/ASAccountActorMessages.h>

@class ASClientAccount;

@interface ASConcreteAccountActor : ASAccountActor <ASAccountActorMessages> {

	ASClientAccount* _account;

}

@property (nonatomic,retain) ASClientAccount * account;              //@synthesize account=_account - In the implementation block
+(void)_initializeActorRunLoop;
+(void)_runActorThreadWithStartupLock:(id)arg1 ;
+(CFRunLoopRef)_actorRunLoop;
+(opaque_pthread_t*)_actorPThread;
+(BOOL)_actorRunLoopInitialized;
-(ASClientAccount *)account;
-(oneway void)setAccount:(ASClientAccount *)arg1 ;
-(int)mailNumberOfPastDaysToSync;
-(void)disable;
-(oneway void)shutdown;
-(int)supportsConversations;
-(oneway void)cancelTaskWithID:(int)arg1 ;
-(int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(BOOL)arg8 isUserRequested:(BOOL)arg9 consumer:(id)arg10 context:(id)arg11 ;
-(id)mailboxes;
-(id)inboxFolder;
-(id)sentItemsFolder;
-(id)deletedItemsFolder;
-(id)draftsFolder;
-(id)initWithDAAccount:(id)arg1 ;
-(void)performFolderChange:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(id)encryptionIdentityPersistentReference;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
-(int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 clientWinsOnSyncConflict:(BOOL)arg4 isUserRequested:(BOOL)arg5 consumer:(id)arg6 ;
-(int)supportsDraftFolderSync;
-(int)supportsUniqueServerId;
-(BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2 ;
-(id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id*)arg3 ;
-(id)folderIDsThatExternalClientsCareAboutForDataclasses:(long long)arg1 withTag:(id*)arg2 ;
-(oneway void)monitorFoldersForUpdates:(id)arg1 persistent:(BOOL)arg2 ;
-(oneway void)stopMonitoringAllFolders;
-(oneway void)performSearchQuery:(id)arg1 ;
-(oneway void)cancelSearchQuery:(id)arg1 ;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 ;
-(oneway void)stopMonitoringFoldersForUpdates:(id)arg1 ;
-(id)signingIdentityPersistentReference;
-(oneway void)setSigningIdentityPersistentReference:(id)arg1 ;
-(oneway void)setEncryptionIdentityPersistentReference:(id)arg1 ;
-(int)performResolveRecipientsRequest:(id)arg1 consumer:(id)arg2 ;
-(id)customSignature;
-(oneway void)setCustomSignature:(id)arg1 ;
-(int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2 ;
-(int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2 ;
-(int)performMoveRequests:(id)arg1 consumer:(id)arg2 ;
-(oneway void)cancelAllSearchQueries;
-(BOOL)searchQueriesRunning;
-(int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 clientWinsOnSyncConflict:(BOOL)arg4 isUserRequested:(BOOL)arg5 consumer:(id)arg6 ;
-(oneway void)startup;
-(int)supportsSmartForwardReply;
-(oneway void)setMailNumberOfPastDaysToSync:(int)arg1 ;
-(BOOL)generatesBulletins;
-(oneway void)setGeneratesBulletins:(BOOL)arg1 ;
-(oneway void)monitorFoldersForUpdates:(id)arg1 ;
-(id)folderIDsThatExternalClientsCareAboutWithTag:(id*)arg1 ;
-(int)sendSmartMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 replaceOriginalMime:(BOOL)arg8 isUserRequested:(BOOL)arg9 consumer:(id)arg10 context:(id)arg11 ;
-(oneway void)_newASPolicyKeyNotification:(id)arg1 ;
-(oneway void)_daemonDiedNotification:(id)arg1 ;
-(oneway void)_folderUpdatedNotification:(id)arg1 ;
-(oneway void)_folderHierarchyChanged;
-(oneway void)_foldersThatExternalClientsCareAboutChanged;
-(void)_performSynchronousSerialOnActorQueue:(/*^block*/id)arg1 ;
-(void)_performAsynchronousSerialOnActorQueue:(/*^block*/id)arg1 ;
-(void)_sendFailureToConsumer:(id)arg1 ;
@end

