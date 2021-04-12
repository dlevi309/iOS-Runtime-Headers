/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol GEOETAUpdaterDelegate <NSObject>
@optional
-(BOOL)etaUpdater:(id)arg1 updateRouteWithETATrafficUpdateResponse:(id)arg2 step:(id)arg3 percentOfCurrentStepRemaining:(double)arg4;
-(void)etaUpdaterRequestCompleted:(id)arg1;

@required
-(id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2;
-(void)etaUpdaterUpdatedETA:(id)arg1;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;

@end

