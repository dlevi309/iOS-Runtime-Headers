/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSUUID, NSData, NSSet;

@interface NSCKImportOperation : NSManagedObject

@property (nonatomic,retain) NSDate * importDate; 
@property (nonatomic,retain) NSUUID * operationUUID; 
@property (nonatomic,retain) NSData * changeTokenBytes; 
@property (nonatomic,retain) NSSet * pendingRelationships; 
+(id)entityPath;
+(id)fetchUnfinishedImportOperationsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchOperationWithIdentifier:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(BOOL)purgeFinishedImportOperationsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
@end

