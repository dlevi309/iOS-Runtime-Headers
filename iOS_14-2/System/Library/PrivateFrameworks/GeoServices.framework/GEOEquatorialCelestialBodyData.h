/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOEquatorialCelestialBodyData : NSObject {

	double _rightAscension;
	double _declination;

}

@property (nonatomic,readonly) double rightAscension;              //@synthesize rightAscension=_rightAscension - In the implementation block
@property (nonatomic,readonly) double declination;                 //@synthesize declination=_declination - In the implementation block
-(double)declination;
-(id)initWithDate:(id)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3 ;
-(id)initWithDate:(id)arg1 body:(long long)arg2 ;
-(id)initWithJulianDay:(double)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3 ;
-(id)initWithJulianDay:(double)arg1 body:(long long)arg2 ;
-(double)rightAscension;
@end

