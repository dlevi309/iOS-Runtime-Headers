/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

