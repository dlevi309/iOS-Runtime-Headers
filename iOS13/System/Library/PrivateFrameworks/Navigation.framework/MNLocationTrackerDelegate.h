/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNLocationTrackerDelegate <NSObject>
@optional
-(void)locationTracker:(id)arg1 didChangeState:(int)arg2;
-(void)locationTrackerDidEnterPreArrivalState:(id)arg1;
-(void)locationTrackerDidArrive:(id)arg1;
-(void)locationTrackerDidTimeoutInArrivalRegion:(id)arg1;
-(void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2;
-(void)locationTracker:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
-(void)locationTracker:(id)arg1 didUpdateETAForRoute:(id)arg2;
-(void)locationTrackerWillReroute:(id)arg1;
-(void)locationTracker:(id)arg1 didSuppressReroute:(id)arg2;
-(void)locationTrackerDidCancelReroute:(id)arg1;
-(void)locationTracker:(id)arg1 didReroute:(id)arg2 newAlternateRoutes:(id)arg3 rerouteReason:(unsigned long long)arg4 request:(id)arg5 response:(id)arg6;
-(void)locationTracker:(id)arg1 didFailRerouteWithError:(id)arg2;
-(void)locationTracker:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
-(void)locationTracker:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 request:(id)arg4 response:(id)arg5;
-(void)locationTracker:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(/*^block*/id)arg3;
-(void)locationTracker:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2;
-(void)locationTracker:(id)arg1 updatedTrafficIncidentAlert:(id)arg2;

@end

