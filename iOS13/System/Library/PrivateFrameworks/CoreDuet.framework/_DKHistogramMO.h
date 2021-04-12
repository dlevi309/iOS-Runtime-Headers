/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSNumber, NSSet;

@interface _DKHistogramMO : NSManagedObject

@property (nonatomic,copy) NSString * deviceIdentifier; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * streamName; 
@property (nonatomic,copy) NSNumber * streamTypeCode; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * customIdentifier; 
@property (nonatomic,retain) NSSet * value; 
+(id)fetchRequest;
@end

