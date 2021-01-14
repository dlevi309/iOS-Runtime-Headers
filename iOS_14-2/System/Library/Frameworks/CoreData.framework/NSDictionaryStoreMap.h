/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStoreMap.h>

@class NSMutableDictionary;

@interface NSDictionaryStoreMap : NSPersistentStoreMap {

	NSMutableDictionary* _theMap;

}
+(void)initialize;
-(void)saveToPath:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(void)updateObject:(id)arg1 objectIDMap:(id)arg2 ;
-(id)initWithStore:(id)arg1 ;
-(id)_archivedData;
-(id)initWithStore:(id)arg1 fromArchivedData:(id)arg2 ;
-(id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2 ;
-(id)initWithStore:(id)arg1 fromPath:(id)arg2 ;
-(void)removeObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)addObject:(id)arg1 objectIDMap:(id)arg2 ;
-(id)_theDictionary;
-(id)handleFetchRequest:(id)arg1 ;
-(void)dealloc;
@end

