/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <FileProviderDaemon/FileProviderDaemon-Structs.h>
#import <libobjc.A.dylib/FPDDaemon.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, FPDServer, NSXPCConnection;

@interface FPDXPCServicer : NSObject <FPDDaemon> {

	NSHashTable* _providerServicers;
	NSObject*<OS_dispatch_queue> _queue;
	FPDServer* _server;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic,__weak) FPDServer * server;                        //@synthesize server=_server - In the implementation block
@property (assign,nonatomic,__weak) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(void)fetchIndexPropertiesForItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAlternateContentsURL:(id)arg1 onDocumentURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_test_callFileProviderManagerAPIs:(/*^block*/id)arg1 ;
-(void)removeAllDomainsForProviderIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)forceIngestionForItemIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startAccessingServiceForItemURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)pid;
-(void)startOperation:(id)arg1 toFetchIconsForAppBundleIDs:(id)arg2 requestedSize:(CGSize)arg3 scale:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg1 ;
-(void)extendBookmarkForItemID:(id)arg1 consumerID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)dumpStateTo:(id)arg1 limitNumberOfItems:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setServer:(FPDServer *)arg1 ;
-(void)fetchDaemonOperationWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)providerDomainsCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)writeMetadata:(id)arg1 onURL:(id)arg2 error:(id*)arg3 ;
-(void)itemForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)wakeUpForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isNonSandboxedConnection;
-(void)fetchFSItemsForItemIdentifiers:(id)arg1 providerIdentifier:(id)arg2 domainIdentifier:(id)arg3 materializingIfNeeded:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)startAccessingServiceForItemID:(id)arg1 connection:(id)arg2 enumerateEntitlementRequired:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fetchDomainServicerForProviderDomainID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startDownloadingItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reimportItemsBelowItemWithID:(id)arg1 removeCachedItems:(BOOL)arg2 markItemDataless:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)currentMaterializedSetSyncAnchorForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 urlWrapper:(id)arg3 options:(unsigned long long)arg4 bounceOnCollision:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)noteURLBecameFrontmost:(id)arg1 inWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)scheduleActionOperationWithInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)providerDomainForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)clientHasSandboxAccessToFile:(id)arg1 ;
-(void)_forceIngestionForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pinItemWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)materializeURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reindexAllSearchableItemsForBundleIDs:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)providerDomainForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getURLForContainerWithItemID:(id)arg1 inDataScopeDomainWithIdentifier:(id)arg2 documentsScopeDomainIdentifier:(id)arg3 documentsFolderItemIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)description;
-(void)setEnabled:(BOOL)arg1 forDomainIdentifier:(id)arg2 providerIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)restoreUserURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_test_simulateUninstallOfBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)documentURLFromItemID:(id)arg1 creatingPlaceholderIfMissing:(BOOL)arg2 ignoreAlternateContentsURL:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSXPCConnection *)connection;
-(void)fetchAlternateContentsURLForDocumentURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(FPDServer *)server;
-(void)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 byImportingDirectoryAtURL:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)makeTopologicallySortedItemsOnDisk:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)unpinItemWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_test_callRemoveTrashedItemsOlderThanDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)trashItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)documentURLFromBookmarkableString:(id)arg1 creatingPlaceholderIfMissing:(BOOL)arg2 ignoreAlternateContentsURL:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fetchAccessServicer:(/*^block*/id)arg1 ;
-(void)_test_simulateInstallOfBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startAccessingExtensionForProviderDomainID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)updateBlacklistedProcessNamesForProvider:(id)arg1 processNames:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)invalidate;
-(id)providerForCurrentConnection;
-(void)getSyncedRootsURLs:(/*^block*/id)arg1 ;
-(void)removeDomain:(id)arg1 forProviderIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateLastUsedDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createDomainServicerForProviderDomainID:(id)arg1 enumerateEntitlementRequired:(BOOL)arg2 error:(id*)arg3 ;
-(void)backUpUserURL:(id)arg1 outputUserURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)stageLocation;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)evictItemWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startAccessingOperationServiceForProviderDomainID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)enumerateMaterializedSetForDomain:(id)arg1 inProvider:(id)arg2 syncAnchor:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)ingestFromCacheItemWithID:(id)arg1 requestedFields:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)providerForIdentifier:(id)arg1 enumerateEntitlementRequired:(BOOL)arg2 error:(id*)arg3 ;
-(void)getDomainsForProviderIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)bookmarkableStringFromDocumentURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDownloadPolicy:(unsigned long long)arg1 forItemWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchListOfMonitoredApps:(/*^block*/id)arg1 ;
-(void)startAccessingServiceForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_test_retrieveItemWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchDaemonOperationIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)forceIngestionForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)evictItemAtURL:(id)arg1 evenIfEnumeratingFP:(BOOL)arg2 andClearACLForConsumer:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

