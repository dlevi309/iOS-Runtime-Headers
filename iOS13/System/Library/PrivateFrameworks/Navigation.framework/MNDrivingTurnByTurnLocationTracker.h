/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNTurnByTurnLocationTracker.h>
#import <libobjc.A.dylib/MNTrafficIncidentAlertUpdaterDelegate.h>
#import <libobjc.A.dylib/MNTunnelLocationProjectorDelegate.h>

@class MNTunnelLocationProjector, MNAlternateRoutesUpdater, MNTrafficIncidentAlertUpdater, NSString;

@interface MNDrivingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker <MNTrafficIncidentAlertUpdaterDelegate, MNTunnelLocationProjectorDelegate> {

	MNTunnelLocationProjector* _tunnelLocationProjector;
	MNAlternateRoutesUpdater* _alternateRoutesUpdater;
	MNTrafficIncidentAlertUpdater* _trafficIncidentAlertUpdater;
	int _detectedTransportType;
	BOOL _exitedVehicle;
	unsigned long long _vehicleExitConfidence;
	SCD_Struct_MN8 _vehicleExitCoordinate;
	double _lastKnownCourse;
	double _consecutiveValidCourseCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)transportType;
-(void)stopTracking;
-(void)startTracking;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(void)updateManager:(id)arg1 willSendETARequest:(id)arg2 ;
-(void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2 toRequest:(id)arg3 ;
-(BOOL)wantsETAUpdates;
-(id)userLocationForUpdateManager:(id)arg1 ;
-(id)initWithNavigationSession:(id)arg1 ;
-(BOOL)shouldProjectAlongRoute;
-(void)tracePaused;
-(void)_updateForArrival;
-(id)_contingencyRouteForLocation:(id)arg1 ;
-(void)didUpdateAlternateRoutes:(id)arg1 traffic:(id)arg2 ;
-(void)trafficIncidentAlertUpdater:(id)arg1 receivedAlert:(id)arg2 responseCallback:(/*^block*/id)arg3 ;
-(void)trafficIncidentAlertUpdater:(id)arg1 invalidatedAlert:(id)arg2 ;
-(void)trafficIncidentAlertUpdater:(id)arg1 didDismissAlert:(id)arg2 withReroute:(BOOL)arg3 ;
-(void)trafficIncidentAlertUpdater:(id)arg1 updatedAlert:(id)arg2 ;
-(void)trafficIncidentAlertUpdater:(id)arg1 didSwitchToNewRoute:(id)arg2 traffic:(id)arg3 forAlert:(id)arg4 ;
-(double)trafficIncidentAlertUpdaterRemainingTimeOnRoute:(id)arg1 ;
-(double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(id)arg1 ;
-(double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(id)arg1 ;
-(BOOL)trafficIncidentAlertUpdaterIsCurrentlySpeaking:(id)arg1 ;
-(void)tunnelLocationProjector:(id)arg1 didUpdateLocation:(id)arg2 ;
-(id)_newMapMatcherForRoute:(id)arg1 ;
-(id)_overrideLocationForLocation:(id)arg1 ;
-(void)_updateForLocation:(id)arg1 ;
-(void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4 ;
-(int)_detectedMotionForLocation:(id)arg1 ;
-(BOOL)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2 ;
-(id)_alternateRouteForOffRouteLocation:(id)arg1 ;
@end

