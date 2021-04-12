/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/FPDFileCoordinationProviderDelegate.h>
#import <libobjc.A.dylib/FPDDomainIndexerDelegate.h>

@protocol FPDExtensionSessionProtocol, OS_dispatch_source, FPDDomainIndexChangeDelegate, OS_dispatch_queue, OS_os_log, FPDDomainBackend;
@class NSMutableDictionary, NSOperationQueue, NSDictionary, NSObject, NSURL, FPPacer, NSString, NSFileProviderDomain, NSNumber, NSArray, FPDProvider, FPDDomainIndexer, NSData, FPProviderDomain;

@interface FPDDomain : NSObject <FPDFileCoordinationProviderDelegate, FPDDomainIndexerDelegate> {

	NSMutableDictionary* _coordinatorMetadataPerURL;
	NSOperationQueue* _providedItemsOperationQueue;
	NSDictionary* _fileCoordinationProviderByURL;
	id<FPDExtensionSessionProtocol> _session;
	Class _fpfsClass;
	BOOL _cantStartup;
	BOOL _isObservingRoot;
	BOOL _indexerStarted;
	BOOL _isUsingFPFS;
	BOOL _invalidated;
	NSObject*<OS_dispatch_source> _timer;
	NSURL* _previouslyAccessedSecurityScopedURL;
	FPPacer* _rootCreationPacer;
	BOOL _started;
	BOOL _userEnabled;
	BOOL _ejectable;
	BOOL _unableToStartup;
	BOOL _forceNoFPFSForTesting;
	id<FPDDomainIndexChangeDelegate> _indexChangeDelegate;
	NSString* _identifier;
	NSFileProviderDomain* _nsDomainOrNilForDefault;
	NSFileProviderDomain* _nsDomain;
	NSNumber* _shouldDropIndexOrNil;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_os_log> _log;
	NSArray* _extensionStorageURLs;
	NSString* _purposeIdentifier;
	id<FPDDomainBackend> _defaultBackend;
	id<FPDDomainBackend> _extensionBackend;
	id<FPDDomainBackend> _deactivatedBackend;
	FPDProvider* _provider;
	NSMutableDictionary* _filePresenters;
	FPDDomainIndexer* _indexer;
	NSData* _fpfsRootBookmarkData;

}

@property (assign,nonatomic,__weak) id<FPDDomainIndexChangeDelegate> indexChangeDelegate;              //@synthesize indexChangeDelegate=_indexChangeDelegate - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * providerDomainID; 
@property (nonatomic,readonly) FPProviderDomain * providerDomain; 
@property (assign,nonatomic) BOOL started;                                                             //@synthesize started=_started - In the implementation block
@property (nonatomic,retain) NSFileProviderDomain * nsDomainOrNilForDefault;                           //@synthesize nsDomainOrNilForDefault=_nsDomainOrNilForDefault - In the implementation block
@property (nonatomic,readonly) NSFileProviderDomain * nsDomain;                                        //@synthesize nsDomain=_nsDomain - In the implementation block
@property (assign,nonatomic) BOOL userEnabled;                                                         //@synthesize userEnabled=_userEnabled - In the implementation block
@property (assign,nonatomic) BOOL ejectable;                                                           //@synthesize ejectable=_ejectable - In the implementation block
@property (assign,nonatomic) BOOL unableToStartup;                                                     //@synthesize unableToStartup=_unableToStartup - In the implementation block
@property (nonatomic,readonly) BOOL isConnectedToAppExtension; 
@property (nonatomic,retain) NSNumber * shouldDropIndexOrNil;                                          //@synthesize shouldDropIndexOrNil=_shouldDropIndexOrNil - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> log;                                               //@synthesize log=_log - In the implementation block
@property (nonatomic,readonly) FPDDomain * domainIfNotDisabledByFPFSSettings; 
@property (nonatomic,readonly) NSArray * rootURLs; 
@property (nonatomic,readonly) NSArray * extensionStorageURLs;                                         //@synthesize extensionStorageURLs=_extensionStorageURLs - In the implementation block
@property (nonatomic,readonly) NSString * purposeIdentifier;                                           //@synthesize purposeIdentifier=_purposeIdentifier - In the implementation block
@property (nonatomic,retain) id<FPDDomainBackend> defaultBackend;                                      //@synthesize defaultBackend=_defaultBackend - In the implementation block
@property (nonatomic,readonly) id<FPDDomainBackend> extensionBackend;                                  //@synthesize extensionBackend=_extensionBackend - In the implementation block
@property (nonatomic,readonly) id<FPDDomainBackend> deactivatedBackend;                                //@synthesize deactivatedBackend=_deactivatedBackend - In the implementation block
@property (nonatomic,__weak,readonly) FPDProvider * provider;                                          //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) id<FPDExtensionSessionProtocol> session;                                //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filePresenters;                                     //@synthesize filePresenters=_filePresenters - In the implementation block
@property (nonatomic,retain) FPDDomainIndexer * indexer;                                               //@synthesize indexer=_indexer - In the implementation block
@property (nonatomic,retain) NSData * fpfsRootBookmarkData;                                            //@synthesize fpfsRootBookmarkData=_fpfsRootBookmarkData - In the implementation block
@property (assign,nonatomic) BOOL forceNoFPFSForTesting;                                               //@synthesize forceNoFPFSForTesting=_forceNoFPFSForTesting - In the implementation block
@property (nonatomic,readonly) NSString * fp_prettyDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)invalidate;
-(NSString *)identifier;
-(id)_fileReactorID;
-(void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2 ;
-(NSMutableDictionary *)filePresenters;
-(id)_providedItemsOperationQueue;
-(void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_provideItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2 ;
-(id)_physicalURLForURL:(id)arg1 ;
-(void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2 ;
-(void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2 ;
-(void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3 ;
-(NSString *)purposeIdentifier;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id<FPDExtensionSessionProtocol>)session;
-(NSObject*<OS_os_log>)log;
-(FPDDomainIndexer *)indexer;
-(BOOL)started;
-(FPDProvider *)provider;
-(void)finishSetup;
-(void)setStarted:(BOOL)arg1 ;
-(void)setEjectable:(BOOL)arg1 ;
-(void)setFilePresenters:(NSMutableDictionary *)arg1 ;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateSession;
-(NSString *)fp_prettyDescription;
-(NSString *)providerDomainID;
-(BOOL)isConnectedToAppExtension;
-(void)forceIngestionForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setIndexer:(FPDDomainIndexer *)arg1 ;
-(void)setUserEnabled:(BOOL)arg1 ;
-(BOOL)userEnabled;
-(NSArray *)extensionStorageURLs;
-(BOOL)supportsFPFS;
-(void)didChangeItemID:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<FPDDomainBackend>)defaultBackend;
-(void)enumerateWithSettings:(id)arg1 lifetimeExtender:(id)arg2 observer:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSArray *)rootURLs;
-(void)fetchEnumeratorWithSettings:(id)arg1 observer:(id)arg2 request:(id)arg3 lifetimeExtender:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)isProviderForURL:(id)arg1 ;
-(void)dumpStateTo:(id)arg1 limitNumberOfItems:(BOOL)arg2 ;
-(void)valuesForAttributes:(id)arg1 forURL:(id)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fetchOperationServiceOrEndpointWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)materializedURLForItemID:(id)arg1 ;
-(void)forceIngestionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)forceFSIngestionForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)nonEvictableSpace;
-(void)downloadItemWithItemID:(id)arg1 request:(id)arg2 progress:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_siblingDelegateForURL:(id)arg1 ;
-(BOOL)isUsingFPFS;
-(id<FPDDomainBackend>)deactivatedBackend;
-(void)createRootAndObserveIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldDisconnect;
-(BOOL)_shouldDisconnectDueToLowDiskSpace;
-(void)_setupRecoveryTimer;
-(NSFileProviderDomain *)nsDomain;
-(NSFileProviderDomain *)nsDomainOrNilForDefault;
-(BOOL)isDefaultDomain;
-(BOOL)isHiddenDefaultDomain;
-(void)_registerFileCoordinatorWithCompletion:(/*^block*/id)arg1 ;
-(void)_startObservingRootAndResumeIndexerWithCompletion:(/*^block*/id)arg1 ;
-(void)createRootURLWithCompletion:(/*^block*/id)arg1 ;
-(void)_startWithCompletion:(/*^block*/id)arg1 ;
-(void)setShouldDropIndexOrNil:(NSNumber *)arg1 ;
-(void)cancelPendingCoordinations;
-(void)_unregisterFromFileCoordinator;
-(id<FPDDomainIndexChangeDelegate>)indexChangeDelegate;
-(id)_removeProgressForProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2 ;
-(void)daemonSideItemChange:(id)arg1 changedFields:(unsigned long long)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_wantsPresenterNotifications;
-(void)workingSetDidChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)ejectable;
-(void)extensionIndexer:(id)arg1 didChangeNeedsAuthentification:(BOOL)arg2 ;
-(void)extensionIndexer:(id)arg1 didIndexOneBatchWithError:(id)arg2 updatedItems:(id)arg3 deletedIDs:(id)arg4 anchor:(id)arg5 anchorPersisted:(/*^block*/id)arg6 ;
-(id)initWithIdentifier:(id)arg1 nsDomain:(id)arg2 extensionStorageURLs:(id)arg3 purposeIdentifier:(id)arg4 fpfsClass:(Class)arg5 provider:(id)arg6 ;
-(FPDDomain *)domainIfNotDisabledByFPFSSettings;
-(FPProviderDomain *)providerDomain;
-(BOOL)createRootByImportingDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
-(void)startInOrderToDropIndex;
-(void)cleanupDomainKeepingArchiveFolder:(BOOL)arg1 ;
-(void)dumpInternalStateTo:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setIndexChangeDelegate:(id<FPDDomainIndexChangeDelegate>)arg1 ;
-(void)setNsDomainOrNilForDefault:(NSFileProviderDomain *)arg1 ;
-(BOOL)unableToStartup;
-(void)setUnableToStartup:(BOOL)arg1 ;
-(NSNumber *)shouldDropIndexOrNil;
-(void)setDefaultBackend:(id<FPDDomainBackend>)arg1 ;
-(id<FPDDomainBackend>)extensionBackend;
-(NSData *)fpfsRootBookmarkData;
-(void)setFpfsRootBookmarkData:(NSData *)arg1 ;
-(BOOL)forceNoFPFSForTesting;
-(void)setForceNoFPFSForTesting:(BOOL)arg1 ;
@end

