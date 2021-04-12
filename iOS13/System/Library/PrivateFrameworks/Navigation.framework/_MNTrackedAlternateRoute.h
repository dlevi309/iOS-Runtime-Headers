/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(PolylineCoordinate)divergenceCoordinate;
-(void)setAlternateRoute:(MNActiveRouteInfo *)arg1 ;
-(MNActiveRouteInfo *)alternateRoute;
-(void)setMainRoute:(MNActiveRouteInfo *)arg1 ;
-(void)setDivergenceCoordinate:(PolylineCoordinate)arg1 ;
-(MNActiveRouteInfo *)mainRoute;
@end

