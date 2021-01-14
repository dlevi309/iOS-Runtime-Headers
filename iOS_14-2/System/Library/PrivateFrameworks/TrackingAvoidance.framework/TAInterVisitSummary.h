/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TASPAdvertisement *)latestObservation;
-(NSArray *)deviceLocationHistory;
-(NSDateInterval *)deviceObservationInterval;
-(id)initWithObservationInterval:(id)arg1 andLocationHistory:(id)arg2 andLastObservation:(id)arg3 ;
@end

