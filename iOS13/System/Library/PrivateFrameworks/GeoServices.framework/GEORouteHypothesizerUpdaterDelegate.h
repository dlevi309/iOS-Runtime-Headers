/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEORouteHypothesizerUpdaterDelegate <NSObject>
@optional
-(void)routeHypothesizerUpdater:(id)arg1 didChangeTravelState:(BOOL)arg2;
-(void)routeHypothesizerUpdaterDidArrive:(id)arg1;
-(void)routeHypothesizerUpdater:(id)arg1 faultedWithError:(id)arg2;

@required
-(void)routeHypothesizerUpdater:(id)arg1 willRequestNewRoute:(id)arg2;
-(void)routeHypothesizerUpdater:(id)arg1 receivedNewRoute:(id)arg2 request:(id)arg3 response:(id)arg4;

@end

