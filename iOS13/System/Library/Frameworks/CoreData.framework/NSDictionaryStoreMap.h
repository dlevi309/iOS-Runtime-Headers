/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStoreMap.h>

@class NSMutableDictionary;

@interface NSDictionaryStoreMap : NSPersistentStoreMap {

	NSMutableDictionary* _theMap;

}
+(void)initialize;
-(void)dealloc;
-(id)dataForKey:(id)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(id)initWithStore:(id)arg1 fromPath:(id)arg2 ;
-(void)saveToPath:(id)arg1 ;
-(id)_nodeFromObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)removeObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)addObject:(id)arg1 objectIDMap:(id)arg2 ;
-(id)initWithStore:(id)arg1 fromArchivedData:(id)arg2 ;
-(id)_theDictionary;
-(void)updateObject:(id)arg1 objectIDMap:(id)arg2 ;
-(id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2 ;
-(id)handleFetchRequest:(id)arg1 ;
-(id)_archivedData;
@end

