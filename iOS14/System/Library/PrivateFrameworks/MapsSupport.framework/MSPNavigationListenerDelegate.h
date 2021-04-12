/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol MSPNavigationListenerDelegate <NSObject>
@required
-(void)navigationListenerDestinationUpdated:(id)arg1;
-(void)navigationListenerStopped:(id)arg1;
-(void)navigationListenerETAUpdated:(id)arg1;
-(void)navigationListener:(id)arg1 didFailWithError:(id)arg2;
-(void)navigationListenerIsReady:(id)arg1;
-(void)navigationListenerArrived:(id)arg1;
-(void)navigationListenerTrafficUpdated:(id)arg1;
-(void)navigationListenerRouteUpdated:(id)arg1;

@end

