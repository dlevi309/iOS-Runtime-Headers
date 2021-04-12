/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSPersistentStoreCoordinator, NSPersistentStoreDescription, NSString, NSManagedObjectContext;

@interface NSCoreDataCoreSpotlightDelegate : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSPersistentStoreDescription* _description;
	NSString* _storeIdentifier;
	NSManagedObjectContext* _context__;
	NSString* _domainIdentifier;
	NSString* _indexName;
	NSString* _bundleIdentifier;
	NSString* _protectionClass;
	BOOL _enabled;
	BOOL _supportsPersistentHistory;
	BOOL _usesSharedCoordinatorStack;
	BOOL _usesPrivateIndex;

}

@property (nonatomic,readonly) NSManagedObjectContext * _context; 
-(void)dealloc;
-(void)_invalidate;
-(id)domainIdentifier;
-(id)bundleIdentifier;
-(NSManagedObjectContext *)_context;
-(id)indexName;
-(id)protectionClass;
-(BOOL)usePrivateIndex;
-(id)_processedOidsForDictionary:(id)arg1 ;
-(id)attributeSetForObject:(id)arg1 ;
-(id)_searchableItemForObject:(id)arg1 ;
-(id)_retainedCurrentSearchableIndex;
-(void)_catchUpToCurrentTransaction;
-(void)_asyncContextBlock:(/*^block*/id)arg1 ;
-(id)_processedOidsForSaveRequest:(id)arg1 ;
-(void)_updateSpotlightIndexForObjectsWithIDs:(id)arg1 ;
-(id)_processTransactionsStartingAt:(id)arg1 ;
-(void)_updateSpotlightClientStateForHistoryTracking:(id)arg1 ;
-(void)_reindexInstancesOf:(id)arg1 inIndex:(id)arg2 ;
-(void)_importObjectsUpdatedSinceTransaction:(id)arg1 ;
-(id)_spotlightClientStateForHistoryTracking;
-(void)_doFullReimport;
-(BOOL)_initialImportCompleted;
-(id)initForStoreWithDescription:(id)arg1 model:(id)arg2 ;
-(void)_updateSpotlightIndexFromSaveRequest:(id)arg1 ;
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2 ;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)_initializePersistentStore;
-(id)_lastImportedTransaction;
-(id)initForStoreWithDescription:(id)arg1 coordinator:(id)arg2 ;
-(void)indexSearchableItemsToCurrentHistoryToken;
-(void)startSpotlightIndexing;
-(void)stopSpotlightIndexing;
@end

