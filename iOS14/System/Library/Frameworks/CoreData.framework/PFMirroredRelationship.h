/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@interface PFMirroredRelationship : NSObject
+(id)mirroredRelationshipWithManagedObject:(id)arg1 withRecordID:(id)arg2 relatedToObjectWithRecordID:(id)arg3 byRelationship:(id)arg4 ;
+(BOOL)isValidMirroredRelationshipRecord:(id)arg1 values:(id)arg2 ;
+(id)mirroredRelationshipWithManyToManyRecord:(id)arg1 values:(id)arg2 andManagedObjectModel:(id)arg3 ;
+(id)mirroredRelationshipWithDeletedRecordType:(id)arg1 recordID:(id)arg2 andManagedObjectModel:(id)arg3 ;
-(BOOL)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3 ;
@end

