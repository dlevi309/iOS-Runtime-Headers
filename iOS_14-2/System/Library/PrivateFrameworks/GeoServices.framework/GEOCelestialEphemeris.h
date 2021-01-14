/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOCelestialRiseTransitSet, GEOSolarEclipticCelestialBodyData, GEOEquatorialCelestialBodyData, GEOHorizontalCelestialBodyData, NSDate;

@interface GEOCelestialEphemeris : NSObject {

	GEOCelestialRiseTransitSet* _riseTransitSet;
	double _julianDay;
	GEOCoarseLocationLatLng _coordinate;
	long long _body;
	GEOSolarEclipticCelestialBodyData* _eclipticCoord;
	GEOEquatorialCelestialBodyData* _equatorialCoord;
	GEOHorizontalCelestialBodyData* _horizontalCoord;
	double _phaseAngle;
	double _illuminatedFraction;
	double _elongation;
	double _parallacticAngle;
	BOOL _highPrecision;

}

@property (nonatomic,readonly) NSDate * rise; 
@property (nonatomic,readonly) NSDate * transit; 
@property (nonatomic,readonly) BOOL isTransitAboveHorizon; 
@property (nonatomic,readonly) NSDate * set; 
@property (nonatomic,readonly) double phaseAngle;                                              //@synthesize phaseAngle=_phaseAngle - In the implementation block
@property (nonatomic,readonly) double illuminatedFraction;                                     //@synthesize illuminatedFraction=_illuminatedFraction - In the implementation block
@property (nonatomic,readonly) double elongation;                                              //@synthesize elongation=_elongation - In the implementation block
@property (nonatomic,readonly) double parallacticAngle;                                        //@synthesize parallacticAngle=_parallacticAngle - In the implementation block
@property (nonatomic,readonly) GEOSolarEclipticCelestialBodyData * eclipticCoord; 
@property (nonatomic,readonly) GEOEquatorialCelestialBodyData * equatorialCoord; 
@property (nonatomic,readonly) GEOHorizontalCelestialBodyData * horizontalCoord; 
-(NSDate *)transit;
-(id)initWithLocation:(GEOCoarseLocationLatLng)arg1 date:(id)arg2 body:(long long)arg3 useHighPrecision:(BOOL)arg4 ;
-(id)initWithLocation:(GEOCoarseLocationLatLng)arg1 date:(id)arg2 body:(long long)arg3 ;
-(id)description;
-(NSDate *)set;
-(BOOL)isTransitAboveHorizon;
-(id)initWithLocation:(GEOCoarseLocationLatLng)arg1 julianDay:(double)arg2 body:(long long)arg3 altitude:(double)arg4 useHighPrecision:(BOOL)arg5 ;
-(GEOSolarEclipticCelestialBodyData *)eclipticCoord;
-(GEOEquatorialCelestialBodyData *)equatorialCoord;
-(GEOHorizontalCelestialBodyData *)horizontalCoord;
-(double)illuminatedFraction;
-(double)parallacticAngle;
-(NSDate *)rise;
-(double)elongation;
-(double)phaseAngle;
@end

