/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOEquatorialCelestialBodyData : NSObject {

	double _rightAscension;
	double _declination;

}

@property (nonatomic,readonly) double rightAscension;              //@synthesize rightAscension=_rightAscension - In the implementation block
@property (nonatomic,readonly) double declination;                 //@synthesize declination=_declination - In the implementation block
-(id)initWithDate:(id)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3 ;
-(id)initWithJulianDay:(double)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3 ;
-(id)initWithDate:(id)arg1 body:(long long)arg2 ;
-(id)initWithJulianDay:(double)arg1 body:(long long)arg2 ;
-(double)rightAscension;
-(double)declination;
@end

