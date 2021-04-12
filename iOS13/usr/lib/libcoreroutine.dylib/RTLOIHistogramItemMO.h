/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, RTEventLocationIdentifierMO;

@interface RTLOIHistogramItemMO : NSManagedObject

@property (nonatomic,retain) NSString * locationOfInterestIdentifier; 
@property (nonatomic,retain) NSNumber * timeOfStay; 
@property (nonatomic,retain) NSNumber * probability; 
@property (nonatomic,retain) NSNumber * numOfEvents; 
@property (nonatomic,retain) RTEventLocationIdentifierMO * eventLocationIdentifier; 
+(id)managedObjectWithLOIHistogramItem:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

