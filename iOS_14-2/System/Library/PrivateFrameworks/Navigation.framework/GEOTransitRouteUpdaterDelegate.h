/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol GEOTransitRouteUpdaterDelegate <NSObject>
@optional
-(void)transitRouteUpdater:(id)arg1 willSendRequests:(id)arg2;
-(void)transitRouteUpdater:(id)arg1 willUpdateTransitForRouteIDs:(id)arg2;
-(void)transitRouteUpdater:(id)arg1 didFailUpdateForRouteIDs:(id)arg2 withError:(id)arg3;
-(void)transitRouteUpdater:(id)arg1 didTimeoutForRouteIDs:(id)arg2;
-(void)transitRouteUpdater:(id)arg1 didReceiveResponse:(id)arg2;
-(void)transitRouteUpdater:(id)arg1 didUpdateTransitRoutes:(id)arg2;

@end

