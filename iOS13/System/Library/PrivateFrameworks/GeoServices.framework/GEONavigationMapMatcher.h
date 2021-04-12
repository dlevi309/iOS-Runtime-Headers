/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOComposedRoute, GEONavigationMatchResult, GEORouteMatcher, GEORoadMatcher, GEOLocationShifter;

@interface GEONavigationMapMatcher : NSObject {

	BOOL _isSimulation;
	GEOComposedRoute* _route;
	GEONavigationMatchResult* _previousMatchResult;
	GEORouteMatcher* _routeMatcher;
	GEORoadMatcher* _roadMatcher;
	GEOLocationShifter* _locationShifter;

}

@property (nonatomic,retain) GEORouteMatcher * routeMatcher;                              //@synthesize routeMatcher=_routeMatcher - In the implementation block
@property (nonatomic,retain) GEORoadMatcher * roadMatcher;                                //@synthesize roadMatcher=_roadMatcher - In the implementation block
@property (nonatomic,retain) GEOLocationShifter * locationShifter;                        //@synthesize locationShifter=_locationShifter - In the implementation block
@property (nonatomic,retain) GEONavigationMatchResult * previousMatchResult;              //@synthesize previousMatchResult=_previousMatchResult - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * route;                                    //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) BOOL isSimulation;                                           //@synthesize isSimulation=_isSimulation - In the implementation block
-(int)transportType;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(GEOComposedRoute *)route;
-(id)initWithRoute:(id)arg1 ;
-(GEONavigationMatchResult *)previousMatchResult;
-(void)setPreviousMatchResult:(GEONavigationMatchResult *)arg1 ;
-(GEORouteMatcher *)routeMatcher;
-(GEORoadMatcher *)roadMatcher;
-(id)matchLocation:(id)arg1 transportType:(int)arg2 ;
-(id)_routeMatcherForRoute:(id)arg1 ;
-(void)setShouldSnapRouteMatchToRoute:(BOOL)arg1 ;
-(id)updateForReroute:(id)arg1 location:(id)arg2 ;
-(void)resetToLocation:(id)arg1 ;
-(BOOL)isSimulation;
-(void)setIsSimulation:(BOOL)arg1 ;
-(void)setRouteMatcher:(GEORouteMatcher *)arg1 ;
-(void)setRoadMatcher:(GEORoadMatcher *)arg1 ;
-(GEOLocationShifter *)locationShifter;
-(void)setLocationShifter:(GEOLocationShifter *)arg1 ;
@end

