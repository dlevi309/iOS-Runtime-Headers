/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)managedObjectWithTransition:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)managedObjectWithTransition:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

