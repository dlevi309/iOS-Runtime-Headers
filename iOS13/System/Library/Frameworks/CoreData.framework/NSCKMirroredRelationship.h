/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSNumber, NSCKRecordZoneMetadata;

@interface NSCKMirroredRelationship : NSManagedObject

@property (nonatomic,retain) NSString * ckRecordID; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (nonatomic,retain) NSString * cdEntityName; 
@property (nonatomic,retain) NSString * recordName; 
@property (nonatomic,retain) NSString * relatedEntityName; 
@property (nonatomic,retain) NSString * relatedRecordName; 
@property (nonatomic,retain) NSString * relationshipName; 
@property (nonatomic,retain) NSNumber * isPending; 
@property (nonatomic,retain) NSNumber * needsDelete; 
@property (nonatomic,retain) NSNumber * isUploaded; 
@property (nonatomic,retain) NSCKRecordZoneMetadata * recordZone; 
+(id)entityPath;
+(id)fetchMirroredRelationshipsMatchingPredicate:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)fetchMirroredRelationshipsMatchingRelatingRecords:(id)arg1 andRelatingRecordIDs:(id)arg2 fromStore:(id)arg3 inManagedObjectContext:(id)arg4 error:(id*)arg5 ;
+(id)orderRelationships:(id)arg1 ;
+(id)insertMirroredRelationshipForManyToMany:(id)arg1 inZoneWithMetadata:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4 ;
+(id)mirroredRelationshipForManyToMany:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)fetchPendingMirroredRelationshipsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)purgeMirroredRelationshipsWithRecordIDs:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)markRelationshipsForDeletedRecordIDs:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)countMirroredRelationshipsInStore:(id)arg1 matchingPredicate:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(BOOL)updateMirroredRelationshipsMatchingRecords:(id)arg1 forStore:(id)arg2 withManagedObjectContext:(id)arg3 usingBlock:(/*^block*/id)arg4 error:(id*)arg5 ;
+(id)fetchMirroredRelationshipsForObject:(id)arg1 withRecordID:(id)arg2 relatedToObjectsByRelationship:(id)arg3 inManagedObjectContext:(id)arg4 error:(id*)arg5 ;
+(id)mirroredRelationshipForObject:(id)arg1 relatedToObject:(id)arg2 relatedByRelationship:(id)arg3 error:(id*)arg4 ;
+(id)countMirroredRelationshipsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(id)createRecordID;
-(id)createRecordIDForRecord;
-(id)createRecordIDForRelatedRecord;
-(BOOL)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 isDelete:(BOOL)arg3 error:(id*)arg4 ;
@end

