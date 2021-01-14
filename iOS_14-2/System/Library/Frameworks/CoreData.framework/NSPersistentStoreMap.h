/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)configurationName;
-(void)_setMetadata:(id)arg1 ;
-(id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(unsigned long long)_cheatAndLookAtCurrentValueOfnextPK64;
-(id)store;
-(void)updateObject:(id)arg1 objectIDMap:(id)arg2 ;
-(id)initWithStore:(id)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(unsigned long long)nextPK64;
-(id)externalMapping;
-(id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2 ;
-(void)removeObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)addObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)setDatabaseUUID:(id)arg1 ;
-(id)metadata;
-(id)handleFetchRequest:(id)arg1 ;
-(id)_storeMetadataForSaving;
-(void)dealloc;
-(id)databaseUUID;
@end

