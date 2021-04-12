/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/

#import <libobjc.A.dylib/UMUserPersonaUpdateObserver.h>
#import <libobjc.A.dylib/MDIndexer.h>

@protocol OS_dispatch_queue, CSIndexExtensionDelegate, SPCoreSpotlightIndexerDelegate, OS_dispatch_source, NSObject;
@class NSMutableSet, NSSet, NSObject, NSArray, NSDictionary, SPCoreSpotlightInteractionHandler, SPCoreSpotlightTask, NSURL, NSString;

@interface SPCoreSpotlightIndexer : NSObject <UMUserPersonaUpdateObserver, MDIndexer> {

	int cancelFlags[4];
	double _lastUpdateTime;
	NSMutableSet* _bundlesWithIndexedCoreSpotlightItems;
	NSSet* _bundlesWithRemoteSearchSupport;
	NSObject*<OS_dispatch_queue> _appScopingQueue;
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
+(void)initialize;
+(id)sharedInstance;
+(void)unlock;
+(void)sync;
+(void)deactivate;
+(void)preheat;
+(void)shutdown;
+(void)setMemoryPressureStatus:(unsigned long long)arg1 ;
+(void)shrink:(unsigned long long)arg1 ;
+(BOOL)writeDiagnostic:(id)arg1 bundleID:(id)arg2 identifier:(id)arg3 ;
+(void)setIndexerDelegate:(id)arg1 ;
+(id)allProtectionClasses;
+(id)_filterReindexAllExtensions:(id)arg1 ;
+(void)cooldown;
+(void)setPrivate:(BOOL)arg1 ;
+(id)sharedInstanceWithDelegate:(id)arg1 ;
-(void)dealloc;
-(void)unlock;
-(void)resume;
-(void)start;
-(void)personaListDidUpdate;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)flush;
-(double)lastUpdateTime;
-(void)preheat;
-(void)shutdown;
-(void)locked;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)provideDataForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)provideFileURLForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteAllUserActivities:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelQuery:(id)arg1 ;
-(long long)transactionCount;
-(void)commitUpdates;
-(void)coolDown;
-(void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(id)startQuery:(id)arg1 withContext:(id)arg2 handler:(/*^block*/id)arg3 ;
-(unsigned long long)dataMigrationStage;
-(void)setDataMigrationStage:(unsigned long long)arg1 ;
-(void)closeIndex;
-(NSObject*<OS_dispatch_queue>)indexQueue;
-(void)performIndexerTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<SPCoreSpotlightIndexerDelegate>)indexerDelegate;
-(void)reindexAllItemsWithIndexers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)firstUnlockQueue;
-(void)performIndexerTask:(id)arg1 withIndexExtensionsAndCompletionHandler:(/*^block*/id)arg2 ;
-(void)addCompletedBundleIDs:(id)arg1 forIndexerTask:(id)arg2 ;
-(BOOL)writeData:(id)arg1 toFile:(id)arg2 ;
-(int)openIndex:(BOOL)arg1 ;
-(id<CSIndexExtensionDelegate>)extensionDelegate;
-(void)revokeExpiredItems:(id)arg1 ;
-(void)shrink:(unsigned long long)arg1 ;
-(void)deleteSearchableItemsWithPersonaIds:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteActionsBeforeTime:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteActionsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)powerStateChanged;
-(void)_fetchAccumulatedStorageSizeForBundleId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setIndexQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFirstUnlockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)commitUpdatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIndexerDelegate:(id<SPCoreSpotlightIndexerDelegate>)arg1 ;
-(NSURL *)personaListURL;
-(void)setInteractionHandler:(SPCoreSpotlightInteractionHandler *)arg1 ;
-(void)_reindexAllItemsOnPrefsChanges;
-(void)setConcreteIndexers:(NSDictionary *)arg1 ;
-(void)setDataMigrationBundleIDs:(NSSet *)arg1 ;
-(void)mergeWithProtectionClasses:(id)arg1 power:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)issueDefrag:(id)arg1 group:(id)arg2 ;
-(NSObject*<OS_dispatch_source>)reindexAllItemsSource;
-(void)_reindexAllItemsWithExtensionsAndCompletionBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_source>)reindexAllItemsWithIdentifiersSource;
-(void)_reindexAllItemsWithExtensionsAndIdentifiersAndCompletionBlock:(/*^block*/id)arg1 ;
-(void)_registerForPrefsChanges;
-(NSDictionary *)concreteIndexers;
-(void)setExtensionDelegate:(id<CSIndexExtensionDelegate>)arg1 ;
-(void)extensionsChanged:(id)arg1 ;
-(void)checkIfExtensionsNeedToBeLoaded;
-(void)_enumerateIndexersWithProtectionClasses:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_source>)prefsChangeSource;
-(void)_reindexAllItemsForBundleIDs:(id)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_enumerateIndexersWithBlock:(/*^block*/id)arg1 ;
-(void)_closeIndexWithIndexers:(id)arg1 ;
-(id)taskForTopHitQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_taskForQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)startQueryTask:(id)arg1 ;
-(id)taskForQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_startQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)recordEngagementForBundleID:(id)arg1 uniqueIdentifier:(id)arg2 protectionClass:(id)arg3 userQuery:(id)arg4 date:(id)arg5 ;
-(NSObject*<OS_dispatch_queue>)reindexAllQueue;
-(void)fileProviderInfoSetup;
-(void)writeFileProviderBundleMap:(id)arg1 ;
-(int)_openIndex:(BOOL)arg1 ;
-(NSDictionary *)fileProviderAppToExtensionBundleMap;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(SPCoreSpotlightInteractionHandler *)interactionHandler;
-(void)issueSplit:(id)arg1 ;
-(void)issueRepair:(id)arg1 ;
-(void)issueCleanup:(id)arg1 flags:(int)arg2 ;
-(void)issueConsistencyCheck:(id)arg1 ;
-(void)handleRankingCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)migrateForced:(BOOL)arg1 ;
-(NSSet *)dataMigrationBundleIDs;
-(id)startQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_migrateIndexExtensionsWithEnumerator:(id)arg1 forced:(BOOL)arg2 migratedBundleIds:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(SPCoreSpotlightTask *)reindexAllItemsTask;
-(void)setReindexAllItemsTask:(SPCoreSpotlightTask *)arg1 ;
-(void)_reindexAllIdentifiersWithExtension:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 options:(long long)arg6 ;
-(void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 personaID:(id)arg3 options:(long long)arg4 items:(id)arg5 itemsText:(id)arg6 itemsHTML:(id)arg7 clientState:(id)arg8 clientStateName:(id)arg9 deletes:(id)arg10 completionHandler:(/*^block*/id)arg11 ;
-(void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 personaID:(id)arg5 ;
-(void)_issueCommand:(id)arg1 searchContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 includeParents:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)clientDidCheckin:(id)arg1 protectionClass:(id)arg2 service:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)runMigration;
-(id)startQuery:(id)arg1 withContext:(id)arg2 eventHandler:(/*^block*/id)arg3 handler:(/*^block*/id)arg4 ;
-(void)locking;
-(void)mergeWithProtectionClasses:(id)arg1 power:(BOOL)arg2 ;
-(void)mergeWithProtectionClasses:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cleanupStringsWithProtectionClasses:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)fileProviderExtensionToAppBundleMap;
-(void)getDBLogsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchAttributesForProtectionClass:(id)arg1 attributes:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)queryForWord:(id)arg1 matchingAttributes:(id)arg2 prefixMatch:(BOOL)arg3 ;
-(void)setPrefsChangeSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(id<NSObject>)dataMigrationStartObserver;
-(void)setDataMigrationStartObserver:(id<NSObject>)arg1 ;
-(id<NSObject>)dataMigrationFinishObserver;
-(void)setDataMigrationFinishObserver:(id<NSObject>)arg1 ;
-(NSSet *)prefsDisabledBundleIDs;
-(void)setPrefsDisabledBundleIDs:(NSSet *)arg1 ;
-(void)setReindexAllItemsSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setReindexAllItemsWithIdentifiersSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSMutableSet *)knownPersonas;
-(void)setKnownPersonas:(NSMutableSet *)arg1 ;
-(BOOL)updatePersonas;
-(void)setUpdatePersonas:(BOOL)arg1 ;
-(void)setReindexAllQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

