/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOSolarEclipticCelestialBodyData : NSObject {

	double _latitude;
	double _longitude;

}

@property (nonatomic,readonly) double latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;              //@synthesize longitude=_longitude - In the implementation block
-(double)latitude;
-(double)longitude;
-(id)initWithDate:(id)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3 ;
-(id)initWithDate:(id)arg1 body:(long long)arg2 ;
-(id)initWithJulianDay:(double)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3 ;
@end

