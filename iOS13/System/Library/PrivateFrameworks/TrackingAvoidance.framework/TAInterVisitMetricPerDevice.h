/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class TAInterVisitMetricPerDeviceSettings, TASPAdvertisement, NSArray;

@interface TAInterVisitMetricPerDevice : NSObject {

	TAInterVisitMetricPerDeviceSettings* _settings;
	unsigned long long _numOfAssociatedLocs;
	double _duration;
	double _distance;
	TASPAdvertisement* _latestAdvertisement;
	NSArray* _sampledObservedLocations;

}

@property (nonatomic,readonly) NSArray * sampledObservedLocations;                   //@synthesize sampledObservedLocations=_sampledObservedLocations - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfAssociatedLocs;               //@synthesize numOfAssociatedLocs=_numOfAssociatedLocs - In the implementation block
@property (nonatomic,readonly) double duration;                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double distance;                                      //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) TASPAdvertisement * latestAdvertisement;              //@synthesize latestAdvertisement=_latestAdvertisement - In the implementation block
-(id)init;
-(id)description;
-(double)duration;
-(id)initWithSettings:(id)arg1 ;
-(double)distance;
-(void)accumulate:(id)arg1 ;
-(id)descriptionDictionary;
-(TASPAdvertisement *)latestAdvertisement;
-(NSArray *)sampledObservedLocations;
-(void)accumulateNumOfAssociatedLocs:(unsigned long long)arg1 ;
-(void)accumulateDuration:(double)arg1 ;
-(void)accumulateDistance:(double)arg1 ;
-(void)accumulateSampledObservedLocations:(id)arg1 ;
-(void)accumulateLatestAdvertisement:(id)arg1 ;
-(unsigned long long)numOfAssociatedLocs;
@end

