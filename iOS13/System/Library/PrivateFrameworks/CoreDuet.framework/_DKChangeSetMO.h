/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, NSNumber, NSDate;

@interface _DKChangeSetMO : NSManagedObject

@property (nonatomic,retain) NSData * changeSet; 
@property (nonatomic,copy) NSString * ckForeignKey; 
@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (nonatomic,copy) NSString * deviceIdentifier; 
@property (nonatomic,copy) NSNumber * sequenceNumber; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSNumber * version; 
+(id)fetchAdditionChangeSetRequest;
+(id)fetchDeletionChangeSetRequest;
@end

