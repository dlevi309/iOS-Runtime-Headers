/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSCKImportOperation;

@interface NSCKImportPendingRelationship : NSManagedObject

@property (nonatomic,retain) NSString * recordName; 
@property (nonatomic,retain) NSString * cdEntityName; 
@property (nonatomic,retain) NSString * relatedRecordName; 
@property (nonatomic,retain) NSString * relatedEntityName; 
@property (nonatomic,retain) NSString * relationshipName; 
@property (nonatomic,retain) NSNumber * needsDelete; 
@property (nonatomic,retain) NSCKImportOperation * operation; 
+(id)insertPendingRelationshipForFailedRelationship:(id)arg1 forOperation:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4 ;
+(id)entityPath;
@end

