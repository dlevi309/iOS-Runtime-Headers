/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/


@protocol ASAccountActorMessages
@required
-(oneway void)setAccount:(id)arg1;
-(int)mailNumberOfPastDaysToSync;
-(oneway void)shutdown;
-(int)supportsConversations;
-(oneway void)cancelTaskWithID:(int)arg1;
-(int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(BOOL)arg8 isUserRequested:(BOOL)arg9 consumer:(id)arg10 context:(id)arg11;
-(id)mailboxes;
-(id)inboxFolder;
-(id)sentItemsFolder;
-(id)deletedItemsFolder;
-(id)draftsFolder;
-(void)performFolderChange:(id)arg1 isUserRequested:(BOOL)arg2;
-(id)encryptionIdentityPersistentReference;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
-(int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 clientWinsOnSyncConflict:(BOOL)arg4 isUserRequested:(BOOL)arg5 consumer:(id)arg6;
-(int)supportsDraftFolderSync;
-(int)supportsUniqueServerId;
-(BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
-(id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id*)arg3;
-(id)folderIDsThatExternalClientsCareAboutForDataclasses:(long long)arg1 withTag:(id*)arg2;
-(oneway void)monitorFoldersForUpdates:(id)arg1 persistent:(BOOL)arg2;
-(oneway void)stopMonitoringAllFolders;
-(oneway void)performSearchQuery:(id)arg1;
-(oneway void)cancelSearchQuery:(id)arg1;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3;
-(oneway void)stopMonitoringFoldersForUpdates:(id)arg1;
-(id)signingIdentityPersistentReference;
-(oneway void)setSigningIdentityPersistentReference:(id)arg1;
-(oneway void)setEncryptionIdentityPersistentReference:(id)arg1;
-(int)performResolveRecipientsRequest:(id)arg1 consumer:(id)arg2;
-(id)customSignature;
-(oneway void)setCustomSignature:(id)arg1;
-(int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2;
-(int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2;
-(int)performMoveRequests:(id)arg1 consumer:(id)arg2;
-(oneway void)cancelAllSearchQueries;
-(BOOL)searchQueriesRunning;
-(int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 clientWinsOnSyncConflict:(BOOL)arg4 isUserRequested:(BOOL)arg5 consumer:(id)arg6;
-(oneway void)startup;
-(int)supportsSmartForwardReply;
-(oneway void)setMailNumberOfPastDaysToSync:(int)arg1;
-(BOOL)generatesBulletins;
-(oneway void)setGeneratesBulletins:(BOOL)arg1;
-(oneway void)monitorFoldersForUpdates:(id)arg1;
-(id)folderIDsThatExternalClientsCareAboutWithTag:(id*)arg1;
-(int)sendSmartMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 replaceOriginalMime:(BOOL)arg8 isUserRequested:(BOOL)arg9 consumer:(id)arg10 context:(id)arg11;
-(int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(BOOL)arg4 consumer:(id)arg5;
-(int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(BOOL)arg4 consumer:(id)arg5;
-(oneway void)_newASPolicyKeyNotification:(id)arg1;
-(oneway void)_daemonDiedNotification:(id)arg1;
-(oneway void)_folderUpdatedNotification:(id)arg1;
-(oneway void)_folderHierarchyChanged;
-(oneway void)_foldersThatExternalClientsCareAboutChanged;
-(oneway void)_accountPasswordChanged;

@end

