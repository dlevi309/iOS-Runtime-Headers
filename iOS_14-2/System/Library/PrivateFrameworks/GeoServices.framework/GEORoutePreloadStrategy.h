/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class GEORoutePreloader, GEOComposedRoute;


@protocol GEORoutePreloadStrategy <NSObject>
@property (assign,nonatomic,__weak) GEORoutePreloader * preloader; 
@property (nonatomic,retain) GEOComposedRoute * route; 
@required
-(void)setRoute:(id)arg1;
-(GEOComposedRoute *)route;
-(void)start;
-(void)stop;
-(GEORoutePreloader *)preloader;
-(void)setPreloader:(id)arg1;
-(void)updateWithRoute:(id)arg1 routeMatch:(id)arg2;
-(void)performTearDown;
-(void)updateWithRouteMatch:(id)arg1;
-(void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;

@end

