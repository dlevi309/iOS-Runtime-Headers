/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, NSUUID, RTLearnedLocationOfInterestMO;

@interface RTLearnedLocationOfInterestVisitMO : NSManagedObject

@property (nonatomic,copy) NSNumber * confidence; 
@property (nonatomic,copy) NSNumber * dataPointCount; 
@property (nonatomic,copy) NSDate * entryDate; 
@property (nonatomic,copy) NSDate * exitDate; 
@property (nonatomic,retain) NSUUID * identifier; 
@property (nonatomic,copy) NSNumber * locationLatitude; 
@property (nonatomic,copy) NSNumber * locationLongitude; 
@property (nonatomic,copy) NSNumber * locationReferenceFrame; 
@property (nonatomic,copy) NSNumber * locationUncertainty; 
@property (nonatomic,retain) RTLearnedLocationOfInterestMO * locationOfInterest; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSNumber * locationOfInterestConfidence; 
@property (nonatomic,copy) NSNumber * locationOfInterestSource; 
+(id)fetchRequest;
+(id)managedObjectWithVisit:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)managedObjectWithVisit:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

