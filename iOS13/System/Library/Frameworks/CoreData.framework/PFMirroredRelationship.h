/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@interface PFMirroredRelationship : NSObject
+(BOOL)isValidMirroredRelationshipRecord:(id)arg1 values:(id)arg2 ;
+(id)mirroredRelationshipWithManyToManyRecord:(id)arg1 values:(id)arg2 andManagedObjectModel:(id)arg3 ;
+(id)mirroredRelationshipWithDeletedRecordType:(id)arg1 recordID:(id)arg2 andManagedObjectModel:(id)arg3 ;
+(id)mirroredRelationshipWithManagedObject:(id)arg1 withRecordID:(id)arg2 relatedToObjectWithRecordID:(id)arg3 byRelationship:(id)arg4 ;
-(BOOL)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3 ;
@end

