/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol FPDDaemon
@required
-(void)reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg1;
-(void)providerDomainsCompletionHandler:(/*^block*/id)arg1;
-(void)updateBlacklistedProcessNamesForProvider:(id)arg1 processNames:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)itemForURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)trashItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_test_callFileProviderManagerAPIs:(/*^block*/id)arg1;
-(void)startOperation:(id)arg1 toFetchIconsForAppBundleIDs:(id)arg2 requestedSize:(CGSize)arg3 scale:(double)arg4 completionHandler:(/*^block*/id)arg5;
-(void)wakeUpForURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)evictItemAtURL:(id)arg1 evenIfEnumeratingFP:(BOOL)arg2 andClearACLForConsumer:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)setAlternateContentsURL:(id)arg1 onDocumentURL:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchAlternateContentsURLForDocumentURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)scheduleActionOperationWithInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setEnabled:(BOOL)arg1 forDomainIdentifier:(id)arg2 providerIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)providerDomainForURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)providerDomainForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)evictItemWithID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)pinItemWithID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)unpinItemWithID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchDomainServicerForProviderDomainID:(id)arg1 handler:(/*^block*/id)arg2;
-(void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)updateLastUsedDate:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)forceIngestionForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)forceIngestionForItemIDs:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 urlWrapper:(id)arg3 options:(unsigned long long)arg4 bounceOnCollision:(BOOL)arg5 completionHandler:(/*^block*/id)arg6;
-(void)bookmarkableStringFromDocumentURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)documentURLFromBookmarkableString:(id)arg1 creatingPlaceholderIfMissing:(BOOL)arg2 ignoreAlternateContentsURL:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchListOfMonitoredApps:(/*^block*/id)arg1;
-(void)dumpStateTo:(id)arg1 limitNumberOfItems:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_test_retrieveItemWithName:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)makeTopologicallySortedItemsOnDisk:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getURLForContainerWithItemID:(id)arg1 inDataScopeDomainWithIdentifier:(id)arg2 documentsScopeDomainIdentifier:(id)arg3 documentsFolderItemIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)backUpUserURL:(id)arg1 outputUserURL:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)restoreUserURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchAccessServicer:(/*^block*/id)arg1;
-(void)fetchDaemonOperationWithID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchDaemonOperationIDsWithCompletionHandler:(/*^block*/id)arg1;
-(void)removeDomain:(id)arg1 forProviderIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)removeAllDomainsForProviderIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 byImportingDirectoryAtURL:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)getDomainsForProviderIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)enumerateMaterializedSetForDomain:(id)arg1 inProvider:(id)arg2 syncAnchor:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)currentMaterializedSetSyncAnchorForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)reimportItemsBelowItemWithID:(id)arg1 removeCachedItems:(BOOL)arg2 markItemDataless:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)setDownloadPolicy:(unsigned long long)arg1 forItemWithID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)ingestFromCacheItemWithID:(id)arg1 requestedFields:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchFSItemsForItemIdentifiers:(id)arg1 providerIdentifier:(id)arg2 domainIdentifier:(id)arg3 materializingIfNeeded:(BOOL)arg4 completionHandler:(/*^block*/id)arg5;
-(void)fetchIndexPropertiesForItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)extendBookmarkForItemID:(id)arg1 consumerID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)materializeURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)noteURLBecameFrontmost:(id)arg1 inWindow:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)reindexAllSearchableItemsForBundleIDs:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2;
-(void)startAccessingExtensionForProviderDomainID:(id)arg1 handler:(/*^block*/id)arg2;
-(void)startAccessingOperationServiceForProviderDomainID:(id)arg1 handler:(/*^block*/id)arg2;
-(void)startAccessingServiceForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)startAccessingServiceForItemURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_test_callRemoveTrashedItemsOlderThanDate:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_test_simulateInstallOfBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_test_simulateUninstallOfBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

