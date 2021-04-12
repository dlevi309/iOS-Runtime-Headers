/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSManagedObjectContext, PHPersistentChangeToken, NSMutableSet, NSMutableDictionary;

@interface PHChangeBuilder : NSObject {

	NSManagedObjectContext* _context;
	PHPersistentChangeToken* _changeToken;
	unsigned long long _maximumChangeThreshold;
	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _updatedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	NSMutableDictionary* _deletedUuidsByObjectId;
	NSMutableDictionary* _attributesByOID;
	NSMutableDictionary* _relationshipsByOID;
	BOOL _unknownMergeEvent;

}
+(id)changeWithManagedObjectContext:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 transaction:(id)arg3 ;
-(void)_recordDeleteChange:(id)arg1 withUniquedObjectID:(id)arg2 ;
-(void)_recordUpdateChange:(id)arg1 withUniquedObjectID:(id)arg2 ;
-(BOOL)changeCountExeedsThreshold:(unsigned long long)arg1 ;
-(void)_recordInsertChange:(id)arg1 withUniquedObjectID:(id)arg2 ;
-(void)_recordChangedProperties:(id)arg1 forObjectID:(id)arg2 ;
-(void)recordChange:(id)arg1 ;
-(id)_uuidForDeleteChange:(id)arg1 uniquedObjectID:(id)arg2 ;
-(void)recordTransaction:(id)arg1 ;
-(void)recordChanges:(id)arg1 ;
-(id)buildChange;
-(id)initWithManagedObjectContext:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 ;
-(void)recordNonIncrementalChanges;
@end

