/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

@class NSArray;


@protocol FPDDomainBackend <NSObject>
@property (copy,readonly) NSArray * rootURLs; 
@property (readonly) NSObject*<OS_dispatch_queue> backendQueue; 
@optional
+(void)registerXPCActivities;
-(id)materializedURLForItemID:(id)arg1;
-(void)downloadItemWithItemID:(id)arg1 request:(id)arg2 progress:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)forceFSIngestionForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(long long)nonEvictableSpace;
-(void)forceIngestionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)forceIngestionForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fakeFSEventAtURL:(id)arg1;
-(void)decorateItems:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setDownloadPolicy:(unsigned long long)arg1 forItemWithID:(id)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)pinItemWithID:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)unpinItemWithID:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)didChangeItemID:(id)arg1;
-(void)ingestFromCacheItemWithID:(id)arg1 requestedFields:(unsigned long long)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4;

@required
-(void)resolveProviderItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)itemIDForURL:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(NSArray *)rootURLs;
-(id)createIndexerWithExtension:(id)arg1 enabled:(BOOL)arg2 error:(id*)arg3;
-(NSObject*<OS_dispatch_queue>)backendQueue;
-(id)initWithDomain:(id)arg1;
-(void)evictItemWithID:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)startProvidingItemAtURL:(id)arg1 readingOptions:(unsigned long long)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)evictItemAtURL:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)reimportItemsBelowItemWithID:(id)arg1 removeCachedItems:(BOOL)arg2 markItemDataless:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)currentMaterializedSetSyncAnchorWithCompletionHandler:(/*^block*/id)arg1;
-(BOOL)updateRootAfterDomainChangeWithError:(id*)arg1;
-(void)itemForURL:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 urlWrapper:(id)arg3 options:(unsigned long long)arg4 bounceOnCollision:(BOOL)arg5 request:(id)arg6 completionHandler:(/*^block*/id)arg7;
-(BOOL)needsRootCreation;
-(void)enumerateMaterializedSetFromSyncAnchor:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchFSItemsForItemIdentifiers:(id)arg1 materializingIfNeeded:(BOOL)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)fetchOperationServiceOrEndpointWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)dumpStateTo:(id)arg1 limitNumberOfItems:(BOOL)arg2;
-(void)URLForItemID:(id)arg1 creatingPlaceholderIfMissing:(BOOL)arg2 ignoreAlternateContentsURL:(BOOL)arg3 request:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)invalidate;
-(id)createRootByImportingURL:(id)arg1 error:(id*)arg2;
-(void)itemForItemID:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)startAndGetSyncAnchor:(id*)arg1;
-(BOOL)removeAllFilesWithError:(id*)arg1;
-(void)enumerateWithSettings:(id)arg1 lifetimeExtender:(id)arg2 observer:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(BOOL)isProviderForURL:(id)arg1;
-(void)itemChangedAtURL:(id)arg1 request:(id)arg2;
-(void)valuesForAttributes:(id)arg1 forURL:(id)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

