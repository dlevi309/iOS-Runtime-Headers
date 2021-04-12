/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASAccount.h>

@class NSMutableSet;

@interface ASClientAccount : ASAccount {

	NSMutableSet* _daemonMonitoredFolders;
	NSMutableSet* _foldersToRetryForMonitoring;
	NSMutableSet* _folderIDsOnRemoteHold;

}
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(id)mailboxes;
-(id)onBehalfOfBundleIdentifier;
-(void)resumeMonitoringFoldersWithIDs:(id)arg1 ;
-(void)suspendMonitoringFoldersWithIDs:(id)arg1 ;
-(void)_foldersUpdated:(id)arg1 ;
-(int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2 ;
-(int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2 ;
-(int)performMoveRequests:(id)arg1 consumer:(id)arg2 ;
-(BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2 ;
-(id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id*)arg3 ;
-(void)monitorFoldersForUpdates:(id)arg1 persistent:(BOOL)arg2 ;
-(void)stopMonitoringAllFolders;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 ;
-(void)stopMonitoringFoldersForUpdates:(id)arg1 ;
-(int)performResolveRecipientsRequest:(id)arg1 consumer:(id)arg2 ;
-(void)monitorFoldersForUpdates:(id)arg1 ;
-(void)_folderHierarchyChanged;
-(void)_foldersThatExternalClientsCareAboutChanged;
-(void)dealloc;
-(int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 clientWinsOnSyncConflict:(BOOL)arg4 consumer:(id)arg5 ;
-(int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 clientWinsOnSyncConflict:(BOOL)arg4 consumer:(id)arg5 ;
-(void)performFolderChange:(id)arg1 ;
-(void)_daemonDied;
-(id)_newPolicyManager;
-(void)_reportFolderItemSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 ;
-(void)sendMailTask:(id)arg1 completedWithStatus:(long long)arg2 error:(id)arg3 ;
-(void)_logStatus:(id)arg1 ;
-(void)clearFolderHierarchyCache;
-(void)_retryMonitoringWithRetryCount:(id)arg1 persistent:(BOOL)arg2 ;
-(void)_monitorFoldersForUpdates:(id)arg1 persistent:(BOOL)arg2 sequentialRetryCount:(int)arg3 ;
-(void)_addFoldersToDaemonMonitoring:(id)arg1 ;
-(void)_retryMonitoringWithRetryCount:(id)arg1 ;
-(void)_removeFoldersFromDaemonMonitoring:(id)arg1 ;
-(id)_copySetFlagsActionForRequest:(id)arg1 ;
-(void)_sync:(id)arg1 withConsumer:(id)arg2 ;
-(void)_retryPersistentMonitoringWithRetryCount:(id)arg1 ;
-(void)resolveRecipientsTask:(id)arg1 completedWithStatus:(long long)arg2 error:(id)arg3 queriedEmailAddressToRecpient:(id)arg4 ;
@end

