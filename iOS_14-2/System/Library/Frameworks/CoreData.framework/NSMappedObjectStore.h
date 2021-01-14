/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStore.h>

@class NSPersistentStoreMap, NSSet;

@interface NSMappedObjectStore : NSPersistentStore {

	NSPersistentStoreMap* _theMap;
	NSSet* _entitiesToFetch;

}
+(BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)metadataForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(void)_removeObject:(id)arg1 objectIDMap:(id)arg2 ;
-(id)init;
-(void)_addObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)save;
-(id)executeSaveChangesRequest:(id)arg1 withContext:(id)arg2 ;
-(id)getNewIDForObject:(id)arg1 ;
-(void)_updateObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)setMetadata:(id)arg1 ;
-(id)_theMap;
-(id)executeCountRequest:(id)arg1 withContext:(id)arg2 ;
-(id)_pathFromURI:(id)arg1 ;
-(id)executeFetchRequest:(id)arg1 withContext:(id)arg2 ;
-(void)_setMap:(id)arg1 ;
-(id)identifier;
-(id)metadata;
-(id)_rawMetadata__;
-(void)dealloc;
-(void)saveDocumentToPath:(id)arg1 ;
@end

