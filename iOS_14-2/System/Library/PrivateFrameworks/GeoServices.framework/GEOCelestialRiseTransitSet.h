/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDate;

@interface GEOCelestialRiseTransitSet : NSObject {

	double _julianDay;
	CAARiseTransitSetDetails _riseTransitSet;
	NSDate* _rise;
	NSDate* _transit;
	NSDate* _set;

}

@property (nonatomic,readonly) double julianDay;                                     //@synthesize julianDay=_julianDay - In the implementation block
@property (nonatomic,readonly) CAARiseTransitSetDetails riseTransitSet;              //@synthesize riseTransitSet=_riseTransitSet - In the implementation block
@property (nonatomic,readonly) BOOL isTransitAboveHorizon; 
@property (nonatomic,readonly) NSDate * rise; 
@property (nonatomic,readonly) NSDate * transit; 
@property (nonatomic,readonly) NSDate * set; 
-(NSDate *)transit;
-(id)description;
-(NSDate *)set;
-(double)julianDay;
-(id)_dateFromOffset:(double)arg1 ;
-(id)initWithJulianDay:(double)arg1 riseTransitSet:(CAARiseTransitSetDetails)arg2 ;
-(BOOL)isTransitAboveHorizon;
-(int)_numberOfEvents;
-(double)_oldestEventInJulianDay;
-(CAARiseTransitSetDetails)riseTransitSet;
-(NSDate *)rise;
@end

