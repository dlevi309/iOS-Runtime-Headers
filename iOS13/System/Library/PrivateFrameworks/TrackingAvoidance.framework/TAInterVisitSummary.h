/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class NSDateInterval, NSArray, TASPAdvertisement;

@interface TAInterVisitSummary : NSObject {

	NSDateInterval* _deviceObservationInterval;
	NSArray* _deviceLocationHistory;
	TASPAdvertisement* _latestObservation;

}

@property (nonatomic,readonly) NSDateInterval * deviceObservationInterval;              //@synthesize deviceObservationInterval=_deviceObservationInterval - In the implementation block
@property (nonatomic,readonly) NSArray * deviceLocationHistory;                         //@synthesize deviceLocationHistory=_deviceLocationHistory - In the implementation block
@property (nonatomic,readonly) TASPAdvertisement * latestObservation;                   //@synthesize latestObservation=_latestObservation - In the implementation block
-(NSArray *)deviceLocationHistory;
-(NSDateInterval *)deviceObservationInterval;
-(TASPAdvertisement *)latestObservation;
-(id)initWithObservationInterval:(id)arg1 andLocationHistory:(id)arg2 andLastObservation:(id)arg3 ;
@end

