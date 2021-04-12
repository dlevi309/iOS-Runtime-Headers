/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate;

@interface RTSettledStateTransitionMO : NSManagedObject

@property (nonatomic,copy) NSNumber * transitionFromType; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSNumber * transitionToType; 
+(id)fetchRequest;
+(id)managedObjectWithSettledStateTransition:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

