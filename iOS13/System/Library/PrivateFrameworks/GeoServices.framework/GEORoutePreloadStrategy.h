/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class GEORoutePreloader, GEOComposedRoute;


@protocol GEORoutePreloadStrategy <NSObject>
@property (assign,nonatomic,__weak) GEORoutePreloader * preloader; 
@property (nonatomic,retain) GEOComposedRoute * route; 
@required
-(void)stop;
-(void)start;
-(void)setRoute:(id)arg1;
-(void)setPreloader:(id)arg1;
-(void)updateWithRoute:(id)arg1 routeMatch:(id)arg2;
-(void)performTearDown;
-(GEOComposedRoute *)route;
-(void)updateWithRouteMatch:(id)arg1;
-(void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
-(GEORoutePreloader *)preloader;

@end

