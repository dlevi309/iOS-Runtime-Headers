/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class NSDateInterval, NSNumber, NSDate, RTLearnedPlaceMO, RTLearnedTransitionMO;

@interface RTLearnedVisitMO : RTCloudManagedObject {

	NSDateInterval* _interval;

}

@property (nonatomic,copy) NSNumber * confidence; 
@property (nonatomic,copy) NSNumber * dataPointCount; 
@property (nonatomic,copy) NSDate * entryDate; 
@property (nonatomic,copy) NSDate * exitDate; 
@property (nonatomic,copy) NSNumber * locationLatitude; 
@property (nonatomic,copy) NSNumber * locationLongitude; 
@property (nonatomic,copy) NSNumber * locationReferenceFrame; 
@property (nonatomic,copy) NSNumber * locationUncertainty; 
@property (nonatomic,copy) NSNumber * placeConfidence; 
@property (nonatomic,copy) NSNumber * placeSource; 
@property (nonatomic,retain) RTLearnedPlaceMO * place; 
@property (nonatomic,retain) RTLearnedTransitionMO * inbound; 
@property (nonatomic,retain) RTLearnedTransitionMO * outbound; 
@property (nonatomic,readonly) NSDateInterval * interval;                   //@synthesize interval=_interval - In the implementation block
+(id)fetchRequest;
+(id)managedObjectWithVisit:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)managedObjectWithVisit:(id)arg1 place:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(NSDateInterval *)interval;
-(BOOL)overlapsWithVisit:(id)arg1 ;
-(BOOL)intersectsWithVisit:(id)arg1 distanceCalculator:(id)arg2 ;
@end

