/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObject.h>

@class NSUUID, NSDate, RTLearnedLocationOfInterestMO, NSNumber;

@interface RTLearnedLocationOfInterestTransitionMO : NSManagedObject

@property (nonatomic,retain) NSUUID * identifier; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * stopDate; 
@property (nonatomic,retain) NSUUID * visitIdentifierDestination; 
@property (nonatomic,retain) NSUUID * visitIdentifierOrigin; 
@property (nonatomic,retain) RTLearnedLocationOfInterestMO * locationOfInterest; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSNumber * predominantMotionActivityType; 
+(id)fetchRequest;
+(id)managedObjectWithTransition:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)managedObjectWithTransition:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

