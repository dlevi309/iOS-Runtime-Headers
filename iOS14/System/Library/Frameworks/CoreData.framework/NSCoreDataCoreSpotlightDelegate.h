/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSPersistentStoreCoordinator, NSPersistentStoreDescription, NSString, NSManagedObjectContext, NSURL;

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
	NSURL* _indexURL;
	int __indexerThrottle;

}

@property (copy) NSURL * indexURL; 
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2 ;
-(void)deleteAllSearchableItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_invalidate;
-(id)domainIdentifier;
-(id)init;
-(id)bundleIdentifier;
-(id)protectionClass;
-(NSURL *)indexURL;
-(BOOL)usePrivateIndex;
-(id)initForStoreWithDescription:(id)arg1 model:(id)arg2 ;
-(void)setIndexURL:(NSURL *)arg1 ;
-(id)attributeSetForObject:(id)arg1 ;
-(int)_indexerThrottle;
-(void)startSpotlightIndexing;
-(id)initForStoreWithDescription:(id)arg1 coordinator:(id)arg2 ;
-(void)indexSearchableItemsToCurrentHistoryToken;
-(void)stopSpotlightIndexing;
-(id)indexName;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

