/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMappedObjectStore, NSString, NSDictionary;

@interface NSPersistentStoreMap : NSObject {

	NSMappedObjectStore* _store;
	NSString* _databaseUUID;
	NSDictionary* _storeMetadata;
	unsigned long long _nextPK64;
	NSDictionary* _mappings;

}
+(void)initialize;
-(void)dealloc;
-(id)dataForKey:(id)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(id)store;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(id)configurationName;
-(id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2 ;
-(void)_setMetadata:(id)arg1 ;
-(void)removeObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)addObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)updateObject:(id)arg1 objectIDMap:(id)arg2 ;
-(id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2 ;
-(id)handleFetchRequest:(id)arg1 ;
-(unsigned long long)nextPK64;
-(id)databaseUUID;
-(void)setDatabaseUUID:(id)arg1 ;
-(id)externalMapping;
-(unsigned long long)_cheatAndLookAtCurrentValueOfnextPK64;
-(id)_storeMetadataForSaving;
@end

