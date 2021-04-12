/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEORouteIncident;

@interface GEOComposedRouteTrafficIncidentInfo : NSObject <NSSecureCoding> {

	GEORouteIncident* _incident;
	double _offsetMeters;
	SCD_Struct_GE87 _routeCoordinate;

}

@property (nonatomic,retain) GEORouteIncident * incident;                  //@synthesize incident=_incident - In the implementation block
@property (assign,nonatomic) double offsetMeters;                          //@synthesize offsetMeters=_offsetMeters - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE87 routeCoordinate;              //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRouteCoordinate:(SCD_Struct_GE87)arg1 ;
-(GEORouteIncident *)incident;
-(id)description;
-(double)offsetMeters;
-(void)setOffsetMeters:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_GE87)routeCoordinate;
-(void)setIncident:(GEORouteIncident *)arg1 ;
@end

