/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

