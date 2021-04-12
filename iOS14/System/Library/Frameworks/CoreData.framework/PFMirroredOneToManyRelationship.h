/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSRelationshipDescription *)relationshipDescription;
-(id)initWithManagedObject:(id)arg1 withRecordName:(id)arg2 relatedToRecordWithRecordName:(id)arg3 byRelationship:(id)arg4 ;
-(BOOL)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(CKRecordID *)relatedObjectRecordID;
-(NSManagedObjectID *)objectID;
-(NSRelationshipDescription *)inverseRelationshipDescription;
-(id)recordTypesToRecordIDs;
-(CKRecordID *)recordID;
-(void)dealloc;
@end

