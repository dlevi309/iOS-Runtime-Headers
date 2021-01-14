/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


#import <Navigation/Navigation-Structs.h>
@interface MNRouteCoordinateWithType : NSObject {

	unsigned long long _significanceType;
	PolylineCoordinate _routeCoordinate;

}

@property (assign,nonatomic) unsigned long long significanceType;              //@synthesize significanceType=_significanceType - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeCoordinate;               //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
+(id)divergenceCoordinate:(PolylineCoordinate)arg1 ;
+(id)convergenceCoordinate:(PolylineCoordinate)arg1 ;
-(void)setRouteCoordinate:(PolylineCoordinate)arg1 ;
-(id)description;
-(unsigned long long)significanceType;
-(PolylineCoordinate)routeCoordinate;
-(void)setSignificanceType:(unsigned long long)arg1 ;
@end

