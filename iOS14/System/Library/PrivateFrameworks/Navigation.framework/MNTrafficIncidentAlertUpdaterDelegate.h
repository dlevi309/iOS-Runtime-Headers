/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNTrafficIncidentAlertUpdaterDelegate <NSObject>
@required
-(void)trafficIncidentAlertUpdater:(id)arg1 receivedAlert:(id)arg2 responseCallback:(/*^block*/id)arg3;
-(void)trafficIncidentAlertUpdater:(id)arg1 invalidatedAlert:(id)arg2;
-(void)trafficIncidentAlertUpdater:(id)arg1 didDismissAlert:(id)arg2 withReroute:(BOOL)arg3;
-(void)trafficIncidentAlertUpdater:(id)arg1 updatedAlert:(id)arg2;
-(void)trafficIncidentAlertUpdater:(id)arg1 didSwitchToNewRoute:(id)arg2 forAlert:(id)arg3;
-(double)trafficIncidentAlertUpdaterRemainingTimeOnRoute:(id)arg1;
-(double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(id)arg1;
-(double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(id)arg1;
-(BOOL)trafficIncidentAlertUpdaterIsCurrentlySpeaking:(id)arg1;

@end

