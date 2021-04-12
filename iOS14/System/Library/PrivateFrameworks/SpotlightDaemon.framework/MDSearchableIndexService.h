/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/

#import <libobjc.A.dylib/CSSearchableIndexInterface.h>
#import <libobjc.A.dylib/CSSearchableIndexServiceInterface.h>

@protocol MDIndexer, OS_xpc_object, OS_dispatch_queue;
@class CSIndexingQueue, NSObject, NSString;

@interface MDSearchableIndexService : NSObject <CSSearchableIndexInterface, CSSearchableIndexServiceInterface> {

	CSIndexingQueue* _activityQueue;
	BOOL _isInternal;
	BOOL _searchInternal;
	BOOL _quotaDisabled;
	BOOL _isPrivate;
	unsigned _clientUID;
	NSObject*<MDIndexer> _indexer;
	NSObject*<OS_xpc_object> _clientConnection;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSString* _clientBundleID;
	NSString* _clientPersonaID;
	NSString* _protectionClass;

}

@property (nonatomic,readonly) CSIndexingQueue * activityQueue; 
@property (nonatomic,readonly) NSString * processDescription; 
@property (nonatomic,retain) NSObject*<MDIndexer> indexer;                           //@synthesize indexer=_indexer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> clientConnection;              //@synthesize clientConnection=_clientConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;               //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,copy) NSString * clientBundleID;                                //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,copy) NSString * clientPersonaID;                               //@synthesize clientPersonaID=_clientPersonaID - In the implementation block
@property (assign,nonatomic) unsigned clientUID;                                     //@synthesize clientUID=_clientUID - In the implementation block
@property (nonatomic,copy) NSString * protectionClass;                               //@synthesize protectionClass=_protectionClass - In the implementation block
@property (assign,nonatomic) BOOL isInternal;                                        //@synthesize isInternal=_isInternal - In the implementation block
@property (assign,nonatomic) BOOL searchInternal;                                    //@synthesize searchInternal=_searchInternal - In the implementation block
@property (assign,nonatomic) BOOL quotaDisabled;                                     //@synthesize quotaDisabled=_quotaDisabled - In the implementation block
@property (assign,nonatomic) BOOL isPrivate;                                         //@synthesize isPrivate=_isPrivate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSString *)clientBundleID;
-(void)performDataMigrationWithTimeout:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_xpc_object>)clientConnection;
-(void)setProtectionClass:(NSString *)arg1 ;
-(BOOL)isInternal;
-(void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(CSIndexingQueue *)activityQueue;
-(void)setClientConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(/*^block*/id)arg8 ;
-(BOOL)deleteAllUserActivities:(id)arg1 ;
-(BOOL)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 ;
-(void)_makeActivityQueueIfNecessary;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)flushUserActivities;
-(void)provideDataForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)provideFileURLForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_dispatchToReceiversWithBundleID:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 items:(id)arg4 itemsText:(id)arg5 itemsHTML:(id)arg6 deletes:(id)arg7 ;
-(void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3 ;
-(void)performIndexJob:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)processIndexData:(id)arg1 ;
-(id)_checkItems:(id)arg1 identifiers:(id)arg2 protectionClass:(id)arg3 bundleID:(id)arg4 ;
-(BOOL)processActivities:(id)arg1 ;
-(BOOL)deleteBundle:(id)arg1 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_forceAppWithBundleID:(id)arg1 toPerformJob:(id)arg2 ;
-(void)setIsInternal:(BOOL)arg1 ;
-(void)_deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(BOOL)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)_canProcessIndexDataForBundle:(id)arg1 itemsDecoder:(id)arg2 deletesDecoder:(id)arg3 clientState:(id)arg4 clientStateName:(id)arg5 outError:(id*)arg6 ;
-(BOOL)changeState:(id)arg1 ;
-(NSString *)clientPersonaID;
-(void)donateRelevantActions:(id)arg1 bundleID:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSObject*<MDIndexer>)indexer;
-(BOOL)handleCommand:(const char*)arg1 info:(id)arg2 ;
-(unsigned)clientUID;
-(void)setClientPersonaID:(NSString *)arg1 ;
-(void)_dispatchActivities:(id)arg1 bundleID:(id)arg2 ;
-(BOOL)willModify:(id)arg1 ;
-(BOOL)deleteDomains:(id)arg1 ;
-(void)setClientUID:(unsigned)arg1 ;
-(void)addInteraction:(id)arg1 intentClassName:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 options:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)deleteActionsBeforeTime:(double)arg1 options:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)protectionClass;
-(BOOL)deleteActionsBeforeTime:(id)arg1 ;
-(BOOL)deleteAllInteractions:(id)arg1 ;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteAllUserActivities:(id)arg1 options:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)issueCommand:(id)arg1 ;
-(id)_checkNonEmptyBundle:(id)arg1 protectionClass:(id)arg2 ;
-(void)setQuotaDisabled:(BOOL)arg1 ;
-(void)_issueCommand:(id)arg1 searchContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)searchInternal;
-(void)setClientBundleID:(NSString *)arg1 ;
-(void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_checkBundleIDHelper:(id)arg1 ;
-(BOOL)checkIn:(id)arg1 ;
-(void)setIsPrivate:(BOOL)arg1 ;
-(void)checkInWithProtectionClass:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSearchInternal:(BOOL)arg1 ;
-(void)_dispatchActivities:(id)arg1 ;
-(BOOL)isPrivate;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)donateRelevantActions:(id)arg1 ;
-(void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 items:(id)arg4 itemsText:(id)arg5 itemsHTML:(id)arg6 clientState:(id)arg7 clientStateName:(id)arg8 deletes:(id)arg9 completionHandler:(/*^block*/id)arg10 ;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 options:(long long)arg6 ;
-(void)setIndexer:(NSObject*<MDIndexer>)arg1 ;
-(BOOL)_deleteInteractions:(id)arg1 forGroup:(BOOL)arg2 ;
-(BOOL)fetchClientState:(id)arg1 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)_jobForIndex:(long long)arg1 ;
-(NSString *)processDescription;
-(void)fetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 includeParents:(BOOL)arg5 reply:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(BOOL)addInteraction:(id)arg1 ;
-(void)_processIndexDataForBundle:(id)arg1 protectionClass:(id)arg2 personaID:(id)arg3 options:(long long)arg4 items:(id)arg5 itemsText:(id)arg6 clientState:(id)arg7 clientStateName:(id)arg8 deletes:(id)arg9 completionHandler:(/*^block*/id)arg10 ;
-(void)deleteActionsWithIdentifiers:(id)arg1 options:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)deleteSinceDate:(id)arg1 ;
-(BOOL)quotaDisabled;
-(BOOL)fetchAttributes:(id)arg1 ;
-(BOOL)dataMigration:(id)arg1 ;
-(BOOL)deleteActionsWithIdentifiers:(id)arg1 ;
@end

