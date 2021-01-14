/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate;

@interface RTVisitMO : NSManagedObject

@property (nonatomic,copy) NSNumber * confidence; 
@property (nonatomic,copy) NSDate * detectionDate; 
@property (nonatomic,copy) NSDate * entryDate; 
@property (nonatomic,copy) NSDate * exitDate; 
@property (nonatomic,copy) NSDate * locationDate; 
@property (nonatomic,copy) NSNumber * locationLatitude; 
@property (nonatomic,copy) NSNumber * locationLongitude; 
@property (nonatomic,copy) NSNumber * locationReferenceFrame; 
@property (nonatomic,copy) NSNumber * locationUncertainty; 
@property (nonatomic,copy) NSNumber * type; 
@property (nonatomic,copy) NSNumber * dataPointCount; 
+(id)fetchRequest;
+(id)managedObjectWithVisit:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

