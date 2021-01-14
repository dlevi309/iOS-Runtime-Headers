/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

