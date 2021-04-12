/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/

#import <libobjc.A.dylib/UMUserPersonaUpdateObserver.h>
#import <libobjc.A.dylib/MDIndexer.h>

@protocol OS_dispatch_queue, CSIndexExtensionDelegate, SPCoreSpotlightIndexerDelegate, OS_dispatch_source, NSObject;
@class NSMutableSet, NSSet, NSObject, NSString, NSArray, NSDictionary, SPCoreSpotlightInteractionHandler, SPCoreSpotlightTask, NSURL;

@interface SPCoreSpotlightIndexer : NSObject <UMUserPersonaUpdateObserver, MDIndexer> {

	int cancelFlags[4];
	double _lastUpdateTime;
	NSMutableSet* _bundlesWithIndexedCoreSpotlightItems;
	NSSet* _bundlesWithRemoteSearchSupport;
	NSObject*<OS_dispatch_queue> _appScopingQueue;
	NSString* _serviceName;
	NSArray* _reindexIndexers;
	BOOL _updatePersonas;
	id<CSIndexExtensionDelegate> extensionDelegate;
	NSDictionary* _fileProviderAppToExtensionBundleMap;
	NSDictionary* _fileProviderExtensionToAppBundleMap;
	id<SPCoreSpotlightIndexerDelegate> _indexerDelegate;
	SPCoreSpotlightInteractionHandler* _interactionHandler;
	NSDictionary* _concreteIndexers;
	NSObject*<OS_dispatch_source> _prefsChangeSource;
	id<NSObject> _dataMigrationStartObserver;
	id<NSObject> _dataMigrationFinishObserver;
	NSSet* _dataMigrationBundleIDs;
	NSSet* _prefsDisabledBundleIDs;
	NSObject*<OS_dispatch_source> _reindexAllItemsSource;
	NSObject*<OS_dispatch_source> _reindexAllItemsWithIdentifiersSource;
	SPCoreSpotlightTask* _reindexAllItemsTask;
	NSMutableSet* _knownPersonas;
	NSObject*<OS_dispatch_queue> _indexQueue;
	NSObject*<OS_dispatch_queue> _firstUnlockQueue;
	NSObject*<OS_dispatch_queue> _reindexAllQueue;
	unsigned long long _dataMigrationStage;
	long long _transactionCount;

}

@property (nonatomic,retain) SPCoreSpotlightInteractionHandler * interactionHandler;                          //@synthesize interactionHandler=_interactionHandler - In the implementation block
@property (retain) NSDictionary * concreteIndexers;                                                           //@synthesize concreteIndexers=_concreteIndexers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> prefsChangeSource;                                 //@synthesize prefsChangeSource=_prefsChangeSource - In the implementation block
@property (nonatomic,retain) id<NSObject> dataMigrationStartObserver;                                         //@synthesize dataMigrationStartObserver=_dataMigrationStartObserver - In the implementation block
@property (nonatomic,retain) id<NSObject> dataMigrationFinishObserver;                                        //@synthesize dataMigrationFinishObserver=_dataMigrationFinishObserver - In the implementation block
@property (nonatomic,retain) NSSet * dataMigrationBundleIDs;                                                  //@synthesize dataMigrationBundleIDs=_dataMigrationBundleIDs - In the implementation block
@property (nonatomic,retain) NSSet * prefsDisabledBundleIDs;                                                  //@synthesize prefsDisabledBundleIDs=_prefsDisabledBundleIDs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> reindexAllItemsSource;                             //@synthesize reindexAllItemsSource=_reindexAllItemsSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> reindexAllItemsWithIdentifiersSource;              //@synthesize reindexAllItemsWithIdentifiersSource=_reindexAllItemsWithIdentifiersSource - In the implementation block
@property (retain) SPCoreSpotlightTask * reindexAllItemsTask;                                                 //@synthesize reindexAllItemsTask=_reindexAllItemsTask - In the implementation block
@property (nonatomic,readonly) NSDictionary * fileProviderAppToExtensionBundleMap;                            //@synthesize fileProviderAppToExtensionBundleMap=_fileProviderAppToExtensionBundleMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * fileProviderExtensionToAppBundleMap;                            //@synthesize fileProviderExtensionToAppBundleMap=_fileProviderExtensionToAppBundleMap - In the implementation block
@property (nonatomic,retain) NSMutableSet * knownPersonas;                                                    //@synthesize knownPersonas=_knownPersonas - In the implementation block
@property (assign,nonatomic) BOOL updatePersonas;                                                             //@synthesize updatePersonas=_updatePersonas - In the implementation block
@property (readonly) NSURL * personaListURL; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> indexQueue;                                         //@synthesize indexQueue=_indexQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> firstUnlockQueue;                                   //@synthesize firstUnlockQueue=_firstUnlockQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reindexAllQueue;                                    //@synthesize reindexAllQueue=_reindexAllQueue - In the implementation block
@property (assign,nonatomic) unsigned long long dataMigrationStage;                                           //@synthesize dataMigrationStage=_dataMigrationStage - In the implementation block
@property (nonatomic,readonly) long long transactionCount;                                                    //@synthesize transactionCount=_transactionCount - In the implementation block
@property (__weak) id<CSIndexExtensionDelegate> extensionDelegate; 
@property (__weak) id<SPCoreSpotlightIndexerDelegate> indexerDelegate;                                        //@synthesize indexerDelegate=_indexerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)shrink:(unsigned long long)arg1 ;
+(void)setIndexerDelegate:(id)arg1 ;
+(void)sync;
+(void)unlock;
+(void)initialize;
+(void)cooldown;
+(BOOL)writeDiagnostic:(id)arg1 bundleID:(id)arg2 identifier:(id)arg3 ;
+(void)preheat;
+(void)shutdown;
+(id)sharedInstance;
+(id)_filterReindexAllExtensions:(id)arg1 ;
+(id)allProtectionClasses;
+(void)deactivate;
+(id)sharedInstanceWithDelegate:(id)arg1 ;
+(void)setMemoryPressureStatus:(unsigned long long)arg1 ;
+(void)setPrivate:(BOOL)arg1 ;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)locked;
-(void)shrink:(unsigned long long)arg1 ;
-(long long)transactionCount;
-(void)setIndexerDelegate:(id<SPCoreSpotlightIndexerDelegate>)arg1 ;
-(void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelQuery:(id)arg1 ;
-(void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)unlock;
-(void)setDataMigrationStartObserver:(id<NSObject>)arg1 ;
-(void)setReindexAllItemsTask:(SPCoreSpotlightTask *)arg1 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)flush;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)preheat;
-(void)issueDumpForward:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)provideDataForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)provideFileURLForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteAllUserActivities:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)coolDown;
-(void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)taskForTopHitQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)shutdown;
-(void)setConcreteIndexers:(NSDictionary *)arg1 ;
-(void)issueResolveFPItemForBundle:(id)arg1 domain:(id)arg2 identifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)delegateServiceName;
-(void)queryPreheat:(id)arg1 ;
-(void)fetchAttributesForProtectionClass:(id)arg1 attributes:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 personaID:(id)arg5 ;
-(NSMutableSet *)knownPersonas;
-(void)_reindexAllItemsOnPrefsChanges;
-(unsigned long long)dataMigrationStage;
-(void)start;
-(void)issueCleanup:(id)arg1 flags:(int)arg2 ;
-(id<SPCoreSpotlightIndexerDelegate>)indexerDelegate;
-(id)startQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(double)lastUpdateTime;
-(void)setReindexAllQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)searchServiceName;
-(void)locking;
-(void)reindexAllItemsWithIndexers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SPCoreSpotlightTask *)reindexAllItemsTask;
-(void)setPrefsDisabledBundleIDs:(NSSet *)arg1 ;
-(void)_enumerateIndexersWithProtectionClasses:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)queryForWord:(id)arg1 matchingAttributes:(id)arg2 prefixMatch:(BOOL)arg3 ;
-(void)extensionsChanged:(id)arg1 ;
-(void)mergeWithProtectionClasses:(id)arg1 power:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_registerForPrefsChanges;
-(NSObject*<OS_dispatch_queue>)indexQueue;
-(void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 personaID:(id)arg3 options:(long long)arg4 items:(id)arg5 itemsText:(id)arg6 itemsHTML:(id)arg7 clientState:(id)arg8 clientStateName:(id)arg9 deletes:(id)arg10 completionHandler:(/*^block*/id)arg11 ;
-(NSObject*<OS_dispatch_queue>)reindexAllQueue;
-(void)setPrefsChangeSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)issueSplit:(id)arg1 ;
-(void)performIndexerTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)issueResolveFPItemForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setKnownPersonas:(NSMutableSet *)arg1 ;
-(int)_openIndex:(BOOL)arg1 ;
-(void)issueDumpReverse:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runMigration;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleRankingCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_migrateIndexExtensionsWithEnumerator:(id)arg1 forced:(BOOL)arg2 migratedBundleIds:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteSearchableItemsWithPersonaIds:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_issueCommand:(id)arg1 searchContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<NSObject>)dataMigrationFinishObserver;
-(void)revokeExpiredItems:(id)arg1 protected:(BOOL)arg2 ;
-(void)setReindexAllItemsSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_reindexAllItemsWithExtensionsAndIdentifiersAndCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)updatePersonas;
-(NSObject*<OS_dispatch_source>)prefsChangeSource;
-(NSSet *)dataMigrationBundleIDs;
-(void)issuePathFixup:(id)arg1 ;
-(void)setIndexQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDataMigrationStage:(unsigned long long)arg1 ;
-(void)commitUpdatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)issueDuplicateOidCheck:(id)arg1 ;
-(id)startQuery:(id)arg1 withContext:(id)arg2 eventHandler:(/*^block*/id)arg3 handler:(/*^block*/id)arg4 ;
-(id<NSObject>)dataMigrationStartObserver;
-(id)indexServiceName;
-(void)_reindexAllItemsForBundleIDs:(id)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_fetchAccumulatedStorageSizeForBundleId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getDBLogsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)commitUpdates;
-(void)cleanupStringsWithProtectionClasses:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setUpdatePersonas:(BOOL)arg1 ;
-(BOOL)writeData:(id)arg1 toFile:(id)arg2 ;
-(NSObject*<OS_dispatch_source>)reindexAllItemsWithIdentifiersSource;
-(void)setInteractionHandler:(SPCoreSpotlightInteractionHandler *)arg1 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clientDidCheckin:(id)arg1 protectionClass:(id)arg2 service:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)checkIfExtensionsNeedToBeLoaded;
-(void)_enumerateIndexersWithBlock:(/*^block*/id)arg1 ;
-(void)powerStateChanged;
-(void)fetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 includeParents:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)startQuery:(id)arg1 withContext:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_reindexAllItemsWithExtensionsAndCompletionBlock:(/*^block*/id)arg1 ;
-(void)deleteActionsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 options:(long long)arg6 ;
-(id<CSIndexExtensionDelegate>)extensionDelegate;
-(void)mergeWithProtectionClasses:(id)arg1 power:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_source>)reindexAllItemsSource;
-(void)setExtensionDelegate:(id<CSIndexExtensionDelegate>)arg1 ;
-(void)issueConsistencyCheck:(id)arg1 ;
-(void)setDataMigrationBundleIDs:(NSSet *)arg1 ;
-(void)deleteActionsBeforeTime:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_closeIndexWithIndexers:(id)arg1 ;
-(void)startQueryTask:(id)arg1 ;
-(void)setServiceName:(id)arg1 ;
-(int)openIndex:(BOOL)arg1 ;
-(id)taskForQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(SPCoreSpotlightInteractionHandler *)interactionHandler;
-(void)closeIndex;
-(void)setFirstUnlockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)addCompletedBundleIDs:(id)arg1 forIndexerTask:(id)arg2 ;
-(void)writeFileProviderBundleMap:(id)arg1 ;
-(NSDictionary *)fileProviderExtensionToAppBundleMap;
-(void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(NSURL *)personaListURL;
-(NSObject*<OS_dispatch_queue>)firstUnlockQueue;
-(void)resume;
-(void)fileProviderInfoSetup;
-(void)personaListDidUpdate;
-(NSDictionary *)concreteIndexers;
-(NSSet *)prefsDisabledBundleIDs;
-(NSDictionary *)fileProviderAppToExtensionBundleMap;
-(void)setReindexAllItemsWithIdentifiersSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)issueResolveFPItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)migrateForced:(BOOL)arg1 ;
-(void)setDataMigrationFinishObserver:(id<NSObject>)arg1 ;
-(id)_taskForQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)issueDefrag:(id)arg1 group:(id)arg2 ;
-(void)_reindexAllIdentifiersWithExtension:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)performIndexerTask:(id)arg1 withIndexExtensionsAndCompletionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)mergeWithProtectionClasses:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)recordEngagementForBundleID:(id)arg1 uniqueIdentifier:(id)arg2 protectionClass:(id)arg3 userQuery:(id)arg4 date:(id)arg5 ;
-(id)_startQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)issueRepair:(id)arg1 ;
@end

