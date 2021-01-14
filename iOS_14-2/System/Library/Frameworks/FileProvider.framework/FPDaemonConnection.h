/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol FPDDaemon, OS_dispatch_queue, OS_dispatch_source;
@class NSXPCConnection, NSObject, NSMutableDictionary;

@interface FPDaemonConnection : NSObject {

	NSXPCConnection*<FPDDaemon> _connectionQueueConnection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSMutableDictionary* _getAttributeConnections;
	NSObject*<OS_dispatch_source> _getAttributeConnectionsIdleCleanupTimer;
	unsigned _user;
	NSXPCConnection*<FPDDaemon> _connection;

}

@property (nonatomic,readonly) NSXPCConnection*<FPDDaemon> connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) unsigned user;                                         //@synthesize user=_user - In the implementation block
+(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
+(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
+(id)newXPCConnection;
+(id)connectionForUser:(unsigned)arg1 ;
+(id)sharedConnection;
-(id)initWithUser:(unsigned)arg1 ;
-(void)_test_callFileProviderManagerAPIs:(/*^block*/id)arg1 ;
-(void)forceIngestionForItemIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)documentURLFromBookmarkableString:(id)arg1 error:(id*)arg2 ;
-(void)dumpStateTo:(id)arg1 limitNumberOfItems:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)providerDomainsCompletionHandler:(/*^block*/id)arg1 ;
-(id)makeTopologicallySortedItemsOnDisk:(id)arg1 error:(id*)arg2 ;
-(void)setUser:(unsigned)arg1 ;
-(void)wakeUpForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchDomainServicerForProviderDomainID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 urlWrapper:(id)arg3 options:(unsigned long long)arg4 bounceOnCollision:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)pinItemWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 error:(id*)arg3 ;
-(void)getURLForContainerWithItemID:(id)arg1 inDataScopeDomainWithIdentifier:(id)arg2 documentsScopeDomainIdentifier:(id)arg3 documentsFolderItemIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)restoreUserURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSXPCConnection*<FPDDaemon>)connection;
-(id)listOfMonitoredAppsWithError:(id*)arg1 ;
-(void)makeTopologicallySortedItemsOnDisk:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)unpinItemWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)extendSandboxAndCreatePlaceholderForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)unobserveWithToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned)user;
-(id)bookmarkableStringFromDocumentURL:(id)arg1 error:(id*)arg2 ;
-(void)providersCompletionHandler:(/*^block*/id)arg1 ;
-(void)documentURLFromBookmarkableString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)backUpUserURL:(id)arg1 outputUserURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)evictItemWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)bookmarkableStringFromDocumentURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateLastUsedDateForFileURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_test_retrieveItemWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)forceIngestionForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)evictItemAtURL:(id)arg1 evenIfEnumeratingFP:(BOOL)arg2 andClearACLForConsumer:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

