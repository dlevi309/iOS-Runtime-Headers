/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


#import <Navigation/Navigation-Structs.h>
@class MNActiveRouteInfo;

@interface _MNTrackedAlternateRoute : NSObject {

	MNActiveRouteInfo* _alternateRoute;
	MNActiveRouteInfo* _mainRoute;
	PolylineCoordinate _divergenceCoordinate;

}

@property (nonatomic,retain) MNActiveRouteInfo * alternateRoute;                   //@synthesize alternateRoute=_alternateRoute - In the implementation block
@property (nonatomic,retain) MNActiveRouteInfo * mainRoute;                        //@synthesize mainRoute=_mainRoute - In the implementation block
@property (assign,nonatomic) PolylineCoordinate divergenceCoordinate;              //@synthesize divergenceCoordinate=_divergenceCoordinate - In the implementation block
-(MNActiveRouteInfo *)mainRoute;
-(PolylineCoordinate)divergenceCoordinate;
-(MNActiveRouteInfo *)alternateRoute;
-(void)setMainRoute:(MNActiveRouteInfo *)arg1 ;
-(void)setAlternateRoute:(MNActiveRouteInfo *)arg1 ;
-(void)setDivergenceCoordinate:(PolylineCoordinate)arg1 ;
@end

