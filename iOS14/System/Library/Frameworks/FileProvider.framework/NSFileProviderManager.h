/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol OS_dispatch_semaphore, FPDDomainServicingNSXPCProxyCreating, OS_dispatch_queue, FPDDaemon, OS_dispatch_source;
@class NSObject, NSXPCConnection, _FPFilePresenterObserver, NSURL, NSString, NSFileProviderDomain, NSMutableDictionary, NSArray;

@interface NSFileProviderManager : NSObject {

	NSObject*<OS_dispatch_semaphore> _sem;
	id<FPDDomainServicing><NSXPCProxyCreating> _remoteFileProvider;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSXPCConnection*<FPDDaemon> _connection;
	_FPFilePresenterObserver* _presentedFileObserver;
	NSURL* _documentStorageURL;
	NSString* _providerIdentifier;
	NSString* _groupName;
	NSFileProviderDomain* _domain;
	NSObject*<OS_dispatch_queue> _signalUpdateQueue;
	NSObject*<OS_dispatch_source> _signalUpdateSource;
	NSMutableDictionary* _completionHandlersByItemID;
	unsigned long long _presenceAuthorizationStatus;
	BOOL _hasFetchedPresenceAuthorizationStatus;
	NSArray* _presentedFiles;

}

@property (nonatomic,readonly) unsigned long long presenceAuthorizationStatus; 
@property (copy) NSArray * presentedFiles;                                                  //@synthesize presentedFiles=_presentedFiles - In the implementation block
@property (nonatomic,readonly) NSString * providerIdentifier;                               //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * documentStorageURL; 
+(void)removeAllDomainsForProviderIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)placeholderURLForURL:(id)arg1 ;
+(BOOL)writePlaceholderAtURL:(id)arg1 withDictionary:(id)arg2 error:(id*)arg3 ;
+(BOOL)writePlaceholderAtURL:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3 ;
+(id)defaultManager;
+(void)removeDomain:(id)arg1 forProviderIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)getDomainsForProviderIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)getIdentifierForUserVisibleFileAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)removeDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)removeDomain:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)removeAllDomainsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)getDomainsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)importDomain:(id)arg1 fromDirectoryAtURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)addDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)managerForDomain:(id)arg1 ;
-(NSString *)providerIdentifier;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)evictItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setConnected:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)signalEnumeratorForContainerItemIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)documentStorageURL;
-(unsigned long long)presenceAuthorizationStatus;
-(id)_initWithProviderIdentifier:(id)arg1 domain:(id)arg2 ;
-(id)_initWithProviderIdentifier:(id)arg1 groupName:(id)arg2 domain:(id)arg3 ;
-(void)remoteFileProviderWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_signalPendingEnumerators;
-(void)fetchRemoteFileProviderSynchronously:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_cacheProviderInfo;
-(id)itemIDForIdentifier:(id)arg1 ;
-(void)_callCompletionHandlers:(id)arg1 error:(id)arg2 ;
-(void)_failToSignalPendingChangesWithError:(id)arg1 completionHandlersByItemID:(id)arg2 ;
-(void)setEjectable:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)presentedFiles;
-(void)removeDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllDomainsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getDomainsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_initWithProviderIdentifier:(id)arg1 ;
-(id)_initWithProviderIdentifier:(id)arg1 groupName:(id)arg2 ;
-(void)setPresentedFiles:(NSArray *)arg1 ;
-(void)registerURLSessionTask:(id)arg1 forItemWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getUserVisibleURLForItemIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)enumeratorForMaterializedItems;
-(void)reimportItemsBelowItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDownloadPolicy:(unsigned long long)arg1 forItemWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestPresenceAuthorization;
-(void)ingestFromCacheItemWithIdentifier:(id)arg1 requestedFields:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_connection;
-(void)addDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

