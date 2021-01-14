/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOComposedRouteETAUPosition : NSObject {

	SCD_Struct_GE87 _routeCoordinate;
	double _timeSinceLastUpdate;

}

@property (nonatomic,readonly) SCD_Struct_GE87 routeCoordinate;              //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
@property (nonatomic,readonly) double timeSinceLastUpdate;                   //@synthesize timeSinceLastUpdate=_timeSinceLastUpdate - In the implementation block
-(long long)compare:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 andUpdateLocation:(id)arg2 offset:(double)arg3 ;
-(SCD_Struct_GE87)routeCoordinate;
-(double)timeSinceLastUpdate;
@end

