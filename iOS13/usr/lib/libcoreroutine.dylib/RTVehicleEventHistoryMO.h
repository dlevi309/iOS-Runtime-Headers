/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSNumber;

@interface RTVehicleEventHistoryMO : NSManagedObject

@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSDate * locDate; 
@property (nonatomic,retain) NSNumber * locLatitude; 
@property (nonatomic,retain) NSNumber * locLongitude; 
@property (nonatomic,retain) NSNumber * locUncertainty; 
+(id)managedObjectWithVehicleEvent:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

