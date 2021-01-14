/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOHorizontalCelestialBodyData : NSObject {

	double _altitude;
	double _azimuth;

}

@property (nonatomic,readonly) double altitude;              //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) double azimuth;               //@synthesize azimuth=_azimuth - In the implementation block
-(double)altitude;
-(id)initWithLocation:(GEOCoarseLocationLatLng)arg1 date:(id)arg2 body:(long long)arg3 useHighPrecision:(BOOL)arg4 ;
-(id)initWithLocation:(GEOCoarseLocationLatLng)arg1 date:(id)arg2 body:(long long)arg3 ;
-(double)azimuth;
-(id)initWithLocation:(GEOCoarseLocationLatLng)arg1 julianDay:(double)arg2 body:(long long)arg3 useHighPrecision:(BOOL)arg4 ;
@end

