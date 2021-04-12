/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFMirroredRelationship.h>

@class NSRelationshipDescription, NSManagedObjectID, CKRecordID;

@interface PFMirroredOneToManyRelationship : PFMirroredRelationship {

	NSRelationshipDescription* _relationshipDescription;
	NSRelationshipDescription* _inverseRelationshipDescription;
	NSManagedObjectID* _objectID;
	CKRecordID* _relatedRecordID;
	CKRecordID* _recordID;

}

@property (nonatomic,readonly) NSRelationshipDescription * relationshipDescription;                     //@synthesize relationshipDescription=_relationshipDescription - In the implementation block
@property (nonatomic,readonly) NSRelationshipDescription * inverseRelationshipDescription;              //@synthesize inverseRelationshipDescription=_inverseRelationshipDescription - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID;                                            //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) CKRecordID * recordID;                                                   //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) CKRecordID * relatedObjectRecordID;                                      //@synthesize relatedRecordID=_relatedRecordID - In the implementation block
-(void)dealloc;
-(NSManagedObjectID *)objectID;
-(CKRecordID *)recordID;
-(NSRelationshipDescription *)relationshipDescription;
-(NSRelationshipDescription *)inverseRelationshipDescription;
-(id)recordTypesToRecordIDs;
-(id)initWithManagedObject:(id)arg1 withRecordName:(id)arg2 relatedToRecordWithRecordName:(id)arg3 byRelationship:(id)arg4 ;
-(BOOL)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(CKRecordID *)relatedObjectRecordID;
@end

