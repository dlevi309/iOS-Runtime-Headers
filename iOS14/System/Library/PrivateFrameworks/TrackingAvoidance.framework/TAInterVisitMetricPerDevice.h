/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TASPAdvertisement, TAInterVisitMetricPerDeviceSettings, NSArray;

@interface TAInterVisitMetricPerDevice : NSObject <NSSecureCoding> {

	unsigned long long _numOfAssociatedLocs;
	double _duration;
	double _distance;
	TASPAdvertisement* _latestAdvertisement;
	TAInterVisitMetricPerDeviceSettings* _settings;
	NSArray* _sampledObservedLocations;

}

@property (nonatomic,retain) TAInterVisitMetricPerDeviceSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSArray * sampledObservedLocations;                        //@synthesize sampledObservedLocations=_sampledObservedLocations - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfAssociatedLocs;                    //@synthesize numOfAssociatedLocs=_numOfAssociatedLocs - In the implementation block
@property (nonatomic,readonly) double duration;                                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double distance;                                           //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) TASPAdvertisement * latestAdvertisement;                   //@synthesize latestAdvertisement=_latestAdvertisement - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionDictionary;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(double)distance;
-(void)accumulate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSettings:(TAInterVisitMetricPerDeviceSettings *)arg1 ;
-(id)description;
-(TAInterVisitMetricPerDeviceSettings *)settings;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(BOOL)isEqual:(id)arg1 ;
-(TASPAdvertisement *)latestAdvertisement;
-(void)accumulateDistance:(double)arg1 ;
-(void)accumulateDuration:(double)arg1 ;
-(void)accumulateNumOfAssociatedLocs:(unsigned long long)arg1 ;
-(void)accumulateSampledObservedLocations:(id)arg1 ;
-(void)accumulateLatestAdvertisement:(id)arg1 ;
-(NSArray *)sampledObservedLocations;
-(unsigned long long)numOfAssociatedLocs;
@end

