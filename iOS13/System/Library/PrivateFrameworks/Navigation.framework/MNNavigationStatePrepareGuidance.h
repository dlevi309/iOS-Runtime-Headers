/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNNavigationState.h>

@class NSArray, MNNavigationSessionManager;

@interface MNNavigationStatePrepareGuidance : MNNavigationState {

	NSArray* _previewRoutes;
	unsigned long long _selectedRouteIndex;
	MNNavigationSessionManager* _navigationSessionManager;

}
-(unsigned long long)type;
-(void)enterState;
-(void)stopNavigation;
-(void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2 ;
-(void)startNavigationWithDetails:(id)arg1 activeBlock:(/*^block*/id)arg2 ;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg1 ;
-(id)traceManager;
-(void)leaveState;
-(BOOL)requiresHighMemoryThreshold;
-(unsigned long long)desiredLocationProviderType;
-(BOOL)shouldClearStoredRoutes;
-(id)initWithStateManager:(id)arg1 previewRoutes:(id)arg2 selectedRouteIndex:(unsigned long long)arg3 ;
@end

