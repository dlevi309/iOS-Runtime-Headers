/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSDate;

@interface RTEventModelUserInteractionMO : NSManagedObject

@property (nonatomic,copy) NSString * feedback; 
@property (nonatomic,retain) NSNumber * interaction; 
@property (nonatomic,copy) NSString * locationOfInterestIdentifier; 
@property (nonatomic,copy) NSString * receiptCalendarIdentifier; 
@property (nonatomic,copy) NSString * receiptLocation; 
@property (nonatomic,copy) NSString * receiptTitle; 
@property (nonatomic,copy) NSDate * date; 
+(id)managedObjectWithFeedback:(id)arg1 interaction:(id)arg2 locationOfInterestIdentifier:(id)arg3 receiptCalendarIdentifier:(id)arg4 receiptLocation:(id)arg5 receiptTitle:(id)arg6 date:(id)arg7 inManagedObjectContext:(id)arg8 ;
@end

