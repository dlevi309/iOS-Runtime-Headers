/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFMirroredRelationship.h>

@class NSRelationshipDescription, CKRecordID, NSString;

@interface PFMirroredManyToManyRelationship : PFMirroredRelationship {

	unsigned long long _type;
	NSRelationshipDescription* _relationshipDescription;
	NSRelationshipDescription* _inverseRelationshipDescription;
	CKRecordID* _manyToManyRecordID;
	NSString* _manyToManyRecordType;
	CKRecordID* _ckRecordID;
	CKRecordID* _relatedCKRecordID;

}

@property (nonatomic,readonly) unsigned long long type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSRelationshipDescription * relationshipDescription;                     //@synthesize relationshipDescription=_relationshipDescription - In the implementation block
@property (nonatomic,readonly) NSRelationshipDescription * inverseRelationshipDescription;              //@synthesize inverseRelationshipDescription=_inverseRelationshipDescription - In the implementation block
@property (nonatomic,readonly) CKRecordID * manyToManyRecordID;                                         //@synthesize manyToManyRecordID=_manyToManyRecordID - In the implementation block
@property (nonatomic,readonly) NSString * manyToManyRecordType;                                         //@synthesize manyToManyRecordType=_manyToManyRecordType - In the implementation block
@property (nonatomic,readonly) CKRecordID * ckRecordID;                                                 //@synthesize ckRecordID=_ckRecordID - In the implementation block
@property (nonatomic,readonly) CKRecordID * relatedCKRecordID;                                          //@synthesize relatedCKRecordID=_relatedCKRecordID - In the implementation block
+(BOOL)_isValidMirroredRelationshipRecord:(id)arg1 values:(id)arg2 ;
+(id)orderedRelationshipsForRecordType:(id)arg1 andManagedObjectModel:(id)arg2 ;
+(id)recordNamesFromManyToManyCKRecordName:(id)arg1 ;
+(id)orderRelationships:(id)arg1 ;
+(id)ckRecordTypeForOrderedRelationships:(id)arg1 ;
+(id)ckRecordNameForOrderedRecordNames:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)type;
-(NSRelationshipDescription *)relationshipDescription;
-(NSRelationshipDescription *)inverseRelationshipDescription;
-(id)recordTypeToRecordID;
-(CKRecordID *)ckRecordID;
-(CKRecordID *)relatedCKRecordID;
-(id)initWithRecordID:(id)arg1 recordType:(id)arg2 managedObjectModel:(id)arg3 andType:(unsigned long long)arg4 ;
-(BOOL)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(void)_setManyToManyRecordID:(id)arg1 manyToManyRecordType:(id)arg2 ckRecordID:(id)arg3 relatedCKRecordID:(id)arg4 relationshipDescription:(id)arg5 inverseRelationshipDescription:(id)arg6 type:(unsigned long long)arg7 ;
-(CKRecordID *)manyToManyRecordID;
-(NSString *)manyToManyRecordType;
@end

