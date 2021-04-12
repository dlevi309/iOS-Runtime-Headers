/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)recordTransaction:(id)arg1 ;
-(void)recordChange:(id)arg1 ;
-(id)initWithManagedObjectContext:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 ;
-(BOOL)changeCountExeedsThreshold:(unsigned long long)arg1 ;
-(void)recordNonIncrementalChanges;
-(void)recordChanges:(id)arg1 ;
-(void)_recordInsertChange:(id)arg1 withUniquedObjectID:(id)arg2 ;
-(void)_recordUpdateChange:(id)arg1 withUniquedObjectID:(id)arg2 ;
-(void)_recordChangedProperties:(id)arg1 forObjectID:(id)arg2 ;
-(void)_recordDeleteChange:(id)arg1 withUniquedObjectID:(id)arg2 ;
-(id)_uuidForDeleteChange:(id)arg1 uniquedObjectID:(id)arg2 ;
-(id)buildChange;
@end

