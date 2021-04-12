/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNNavigationState.h>

@class NSArray, MNNavigationSessionManager;

@interface MNNavigationStatePrepareGuidance : MNNavigationState {

	NSArray* _previewRoutes;
	unsigned long long _selectedRouteIndex;
	MNNavigationSessionManager* _navigationSessionManager;

}
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg1 ;
-(unsigned long long)desiredLocationProviderType;
-(void)enterState;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)stopNavigation;
-(void)startNavigationWithDetails:(id)arg1 activeBlock:(/*^block*/id)arg2 ;
-(void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2 ;
-(unsigned long long)type;
-(id)traceManager;
-(id)simulationLocationProvider;
-(void)leaveState;
-(BOOL)requiresHighMemoryThreshold;
-(BOOL)shouldClearStoredRoutes;
-(id)initWithStateManager:(id)arg1 previewRoutes:(id)arg2 selectedRouteIndex:(unsigned long long)arg3 ;
@end

