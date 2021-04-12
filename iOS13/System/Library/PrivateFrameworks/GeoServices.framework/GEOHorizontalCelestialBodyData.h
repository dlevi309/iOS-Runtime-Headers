/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithLocation:(SCD_Struct_GE32)arg1 date:(id)arg2 body:(long long)arg3 useHighPrecision:(BOOL)arg4 ;
-(id)initWithLocation:(SCD_Struct_GE32)arg1 julianDay:(double)arg2 body:(long long)arg3 useHighPrecision:(BOOL)arg4 ;
-(id)initWithLocation:(SCD_Struct_GE32)arg1 date:(id)arg2 body:(long long)arg3 ;
-(double)azimuth;
@end

