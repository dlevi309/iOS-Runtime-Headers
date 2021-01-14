/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedWaypoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOTransitArtworkDataSource;
@class NSString, GEOStyleAttributes, GEOComposedRouteEVChargingStationInfo;

@interface GEOComposedWaypointEVStop : GEOComposedWaypoint <NSSecureCoding> {

	NSString* _name;
	unsigned long long _muid;
	SCD_Struct_GE98 _coordinate;
	id<GEOTransitArtworkDataSource> _artwork;
	GEOStyleAttributes* _styleAttributes;
	GEOComposedRouteEVChargingStationInfo* _chargingInfo;

}
+(BOOL)supportsSecureCoding;
-(id)styleAttributes;
-(id)init;
-(SCD_Struct_GE98)coordinate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)name;
-(id)initWithGeoWaypointInfo:(id)arg1 ;
-(id)chargingInfo;
-(id)artwork;
-(id)initWithGeoStep:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)muid;
@end

