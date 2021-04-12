/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(PolylineCoordinate)routeCoordinate;
-(void)setRouteCoordinate:(PolylineCoordinate)arg1 ;
-(unsigned long long)significanceType;
-(void)setSignificanceType:(unsigned long long)arg1 ;
@end

