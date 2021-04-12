/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class NSDate, RTLearnedVisitMO, NSNumber;

@interface RTLearnedTransitionMO : RTCloudManagedObject

@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * stopDate; 
@property (nonatomic,retain) RTLearnedVisitMO * origin; 
@property (nonatomic,retain) RTLearnedVisitMO * destination; 
@property (nonatomic,copy) NSNumber * predominantMotionActivityType; 
+(id)fetchRequest;
+(id)managedObjectWithTransition:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

