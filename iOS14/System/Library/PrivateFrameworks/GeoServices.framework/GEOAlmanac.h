/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOAlmanacRiseTransitSet, NSDate;

@interface GEOAlmanac : NSObject {

	GEOAlmanacRiseTransitSet* _previousRiseTransitSet;
	GEOAlmanacRiseTransitSet* _currentRiseTransitSet;
	GEOAlmanacRiseTransitSet* _nextRiseTransitSet;
	set<CAARiseTransitSetDetails2, _CAARiseTransitSetDetails2IsLessThan, std::__1::allocator<CAARiseTransitSetDetails2> >* _riseTransitSetEvents;

}

@property (nonatomic,readonly) BOOL isDayLight; 
@property (nonatomic,readonly) NSDate * previousSunrise; 
@property (nonatomic,readonly) NSDate * previousTransit; 
@property (nonatomic,readonly) NSDate * previousSunset; 
@property (nonatomic,readonly) NSDate * sunrise; 
@property (nonatomic,readonly) NSDate * transit; 
@property (nonatomic,readonly) NSDate * sunset; 
@property (nonatomic,readonly) NSDate * nextSunrise; 
@property (nonatomic,readonly) NSDate * nextTransit; 
@property (nonatomic,readonly) NSDate * nextSunset; 
-(NSDate *)transit;
-(NSDate *)sunset;
-(NSDate *)sunrise;
-(void)calculateAstronomicalTimeForLocation:(GEOCoarseLocationLatLng)arg1 time:(double)arg2 altitudeInDegrees:(double)arg3 options:(unsigned long long)arg4 ;
-(void)calculateAstronomicalTimeForLocation:(GEOCoarseLocationLatLng)arg1 altitudeInDegrees:(double)arg2 ;
-(NSDate *)previousSunrise;
-(id)description;
-(void)calculateAstronomicalTimeForLocation:(GEOCoarseLocationLatLng)arg1 ;
-(void)calculateAstronomicalTimeForLocation:(GEOCoarseLocationLatLng)arg1 date:(id)arg2 altitudeInDegrees:(double)arg3 options:(unsigned long long)arg4 ;
-(NSDate *)previousSunset;
-(NSDate *)nextSunset;
-(BOOL)isDayLightForDate:(id)arg1 ;
-(NSDate *)nextTransit;
-(void)calculateGeocentricDirectionForSunX:(double*)arg1 Y:(double*)arg2 Z:(double*)arg3 ;
-(void)calculateAstronomicalTimeForLocation:(GEOCoarseLocationLatLng)arg1 time:(double)arg2 ;
-(BOOL)isDayLightForTime:(double)arg1 ;
-(NSDate *)previousTransit;
-(NSDate *)nextSunrise;
-(void)calculateGeocentricDirectionForSunX:(double*)arg1 Y:(double*)arg2 Z:(double*)arg3 date:(id)arg4 ;
-(BOOL)isDayLight;
-(void)calculateAstronomicalTimeForLocation:(GEOCoarseLocationLatLng)arg1 time:(double)arg2 altitudeInDegrees:(double)arg3 ;
@end

