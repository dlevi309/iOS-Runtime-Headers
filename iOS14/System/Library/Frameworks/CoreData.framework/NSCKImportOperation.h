/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSUUID, NSData, NSSet;

@interface NSCKImportOperation : NSManagedObject

@property (nonatomic,retain) NSDate * importDate; 
@property (nonatomic,retain) NSUUID * operationUUID; 
@property (nonatomic,retain) NSData * changeTokenBytes; 
@property (nonatomic,retain) NSSet * pendingRelationships; 
+(id)fetchOperationWithIdentifier:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(BOOL)purgeFinishedImportOperationsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchUnfinishedImportOperationsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)entityPath;
@end

