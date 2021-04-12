/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

