/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@protocol CSSearchableIndexDelegate, OS_dispatch_queue;
@class CSIndexingQueue, NSObject, NSString, NSMutableArray, NSNumber, CSIndexConnection;

@interface CSSearchableIndex : NSObject {

	CSIndexingQueue* _activityQueue;
	BOOL _batchOpen;
	BOOL _noBatching;
	id<CSSearchableIndexDelegate> _indexDelegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSString* _name;
	NSString* _protectionClass;
	NSString* _bundleIdentifier;
	NSMutableArray* _batchedItemsToIndex;
	NSMutableArray* _batchedItemIdentifiersToDelete;
	long long _options;
	NSNumber* _indexID;

}

@property (readonly) CSIndexConnection * connection; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * protectionClass;                                     //@synthesize protectionClass=_protectionClass - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) CSIndexingQueue * activityQueue; 
@property (nonatomic,retain) NSMutableArray * batchedItemsToIndex;                         //@synthesize batchedItemsToIndex=_batchedItemsToIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * batchedItemIdentifiersToDelete;              //@synthesize batchedItemIdentifiersToDelete=_batchedItemIdentifiersToDelete - In the implementation block
@property (assign,nonatomic) long long options;                                            //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL batchOpen;                                               //@synthesize batchOpen=_batchOpen - In the implementation block
@property (assign,nonatomic) BOOL noBatching;                                              //@synthesize noBatching=_noBatching - In the implementation block
@property (nonatomic,readonly) NSNumber * indexID;                                         //@synthesize indexID=_indexID - In the implementation block
@property (__weak) id<CSSearchableIndexDelegate> indexDelegate;                            //@synthesize indexDelegate=_indexDelegate - In the implementation block
+(void)initialize;
+(id)codedIdentifiers:(id)arg1 ;
+(void)notifyIndexDelegates;
+(double)lastUpdateTime;
+(id)partialPathAttributes;
+(BOOL)activityShouldBeIndexed:(id)arg1 bundleID:(id)arg2 ;
+(void)volumeMountedAtURL:(id)arg1 withOptions:(id)arg2 ;
+(BOOL)isIndexingAvailable;
+(id)codedNSUAPersistentIdentifiers:(id)arg1 ;
+(id)defaultSearchableIndex;
+(void)setConnectionName:(id)arg1 ;
+(id)_requestQueueAttribute;
+(id)codedUniqueIdentifiers:(id)arg1 ;
+(id)mainBundleLocalizedString;
+(id)computePartialPathWithOID:(id)arg1 pathKeyIdx:(unsigned long long)arg2 pathDictionary:(id)arg3 attributeValues:(id)arg4 depth:(long long)arg5 ;
+(void)_setLastUpdateTime;
+(id)mainBundleID;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setNoBatching:(BOOL)arg1 ;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 ;
-(void)performDataMigrationWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3 options:(long long)arg4 ;
-(void)setProtectionClass:(NSString *)arg1 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)bulkFetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 objects:(id)arg4 attributeKeyIndex:(long long)arg5 includeParents:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_validateOperationWithIdentifiers:(id)arg1 ;
-(void)_deleleActionsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(CSIndexingQueue *)activityQueue;
-(void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_validateOperationWithItems:(id)arg1 identifiers:(id)arg2 ;
-(void)_issueCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteAllInteractionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)donateRelevantShortcuts:(id)arg1 bundleID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_validateClientState:(id)arg1 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(/*^block*/id)arg8 ;
-(id)_validateOperationWithItems:(id)arg1 ;
-(BOOL)noBatching;
-(void)_setFPAttributes:(id)arg1 ;
-(void)endIndexBatchWithClientState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)_standardizeItems:(id)arg1 ;
-(id)throttleQueue;
-(void)_bulkFetchPartialPathsForObjects:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)indexSearchableItems:(id)arg1 returningItemsSanitizedForSpotlightTo:(/*^block*/id)arg2 ;
-(id<CSSearchableIndexDelegate>)indexDelegate;
-(void)setBatchedItemIdentifiersToDelete:(NSMutableArray *)arg1 ;
-(void)_makeActivityQueueIfNecessary;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(/*^block*/id)arg7 ;
-(NSMutableArray *)batchedItemsToIndex;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteAllSearchableItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)unthrottle;
-(BOOL)batchOpen;
-(void)addInteraction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchLastClientStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIndexDelegate:(id<CSSearchableIndexDelegate>)arg1 ;
-(void)_deleteActionsBeforeTime:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)flushUserActivities;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setMailMessageAttributes:(id)arg1 ;
-(NSMutableArray *)batchedItemIdentifiersToDelete;
-(id)_initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3 options:(long long)arg4 disableBatching:(BOOL)arg5 ;
-(void)_indexActivities:(id)arg1 flush:(BOOL)arg2 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 options:(long long)arg2 ;
-(void)setBatchedItemsToIndex:(NSMutableArray *)arg1 ;
-(void)provideDataForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)donateRelevantActions:(id)arg1 bundleID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)provideFileURLForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)beginIndexBatch;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setBatchOpen:(BOOL)arg1 ;
-(void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)throttle;
-(void)deleteAllUserActivities:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_itemsBySanitizingItemsForSpotlight:(id)arg1 ;
-(void)deleteAllSearchableItemsForBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)indexSearchableItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSNumber *)indexID;
-(void)indexUserActivity:(id)arg1 ;
-(id)initWithName:(id)arg1 protectionClass:(id)arg2 ;
-(void)performIndexJob:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_fetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 items:(id)arg4 includeParents:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_delegateCheckIn:(id)arg1 ;
-(id)xpc_dictionary_for_command:(const char*)arg1 requiresInitialization:(BOOL)arg2 ;
-(void)slowFetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_validateOperation;
-(id)requestQueue;
-(void)_issueNonLaunchingCommand:(id)arg1 ;
-(void)deleteSearchableItemsSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)init;
-(NSString *)bundleIdentifier;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(NSString *)protectionClass;
-(CSIndexConnection *)connection;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)_changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 forUser:(unsigned)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)_commonInit;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
@end

