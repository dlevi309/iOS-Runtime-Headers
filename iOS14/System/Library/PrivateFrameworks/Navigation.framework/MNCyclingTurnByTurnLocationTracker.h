/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNTurnByTurnLocationTracker.h>
#import <libobjc.A.dylib/MNTunnelLocationProjectorDelegate.h>

@class MNTunnelLocationProjector, MNAlternateRoutesUpdater, NSMutableArray;

@interface MNCyclingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker <MNTunnelLocationProjectorDelegate> {

	MNTunnelLocationProjector* _tunnelLocationProjector;
	MNAlternateRoutesUpdater* _alternateRoutesUpdater;
	NSMutableArray* _etauPositions;
	double _lastKnownCourse;
	double _consecutiveValidCourseCount;

}
-(void)stopTracking;
-(int)transportType;
-(void)startTracking;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(void)updateManager:(id)arg1 willSendETARequest:(id)arg2 ;
-(void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2 toRequest:(id)arg3 ;
-(BOOL)wantsETAUpdates;
-(id)userLocationForUpdateManager:(id)arg1 ;
-(id)initWithNavigationSession:(id)arg1 ;
-(BOOL)shouldProjectAlongRoute;
-(void)_updateForArrivalAtLegIndex:(unsigned long long)arg1 ;
-(void)_updateForAlternateRoutes:(id)arg1 ;
-(void)tunnelLocationProjector:(id)arg1 didUpdateLocation:(id)arg2 ;
-(id)_newMapMatcherForRoute:(id)arg1 ;
-(id)_overrideLocationForLocation:(id)arg1 ;
-(void)_updateForLocation:(id)arg1 ;
-(void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4 ;
-(int)_detectedMotionForLocation:(id)arg1 ;
-(BOOL)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2 ;
-(id)_alternateRouteForOffRouteLocation:(id)arg1 ;
@end

