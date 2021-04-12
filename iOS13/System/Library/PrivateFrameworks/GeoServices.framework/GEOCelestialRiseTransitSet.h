/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSDate *)set;
-(id)_dateFromOffset:(double)arg1 ;
-(NSDate *)rise;
-(NSDate *)transit;
-(id)initWithJulianDay:(double)arg1 riseTransitSet:(CAARiseTransitSetDetails)arg2 ;
-(BOOL)isTransitAboveHorizon;
-(int)_numberOfEvents;
-(double)_oldestEventInJulianDay;
-(double)julianDay;
-(CAARiseTransitSetDetails)riseTransitSet;
@end

