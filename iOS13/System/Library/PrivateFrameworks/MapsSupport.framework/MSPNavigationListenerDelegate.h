/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol MSPNavigationListenerDelegate <NSObject>
@required
-(void)navigationListenerIsReady:(id)arg1;
-(void)navigationListener:(id)arg1 didFailWithError:(id)arg2;
-(void)navigationListenerStopped:(id)arg1;
-(void)navigationListenerETAUpdated:(id)arg1;
-(void)navigationListenerDestinationUpdated:(id)arg1;
-(void)navigationListenerRouteUpdated:(id)arg1;
-(void)navigationListenerTrafficUpdated:(id)arg1;
-(void)navigationListenerArrived:(id)arg1;

@end

