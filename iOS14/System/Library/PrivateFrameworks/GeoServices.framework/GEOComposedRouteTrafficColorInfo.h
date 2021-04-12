/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOComposedRouteTrafficColorInfo : NSObject <NSSecureCoding> {

	unsigned long long _color;
	double _offsetMeters;
	SCD_Struct_GE87 _routeCoordinate;

}

@property (assign,nonatomic) unsigned long long color;                     //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double offsetMeters;                          //@synthesize offsetMeters=_offsetMeters - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE87 routeCoordinate;              //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)color;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRouteCoordinate:(SCD_Struct_GE87)arg1 ;
-(id)description;
-(double)offsetMeters;
-(void)setOffsetMeters:(double)arg1 ;
-(void)setColor:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_GE87)routeCoordinate;
-(id)_stringForColor:(unsigned long long)arg1 ;
@end

