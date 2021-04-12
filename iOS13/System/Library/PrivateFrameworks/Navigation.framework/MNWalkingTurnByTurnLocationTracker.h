/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNTurnByTurnLocationTracker.h>

@interface MNWalkingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker {

	int _detectedTransportType;
	SCD_Struct_MN8 _detectedTransportTypeOrigin;

}
-(int)transportType;
-(id)initWithNavigationSession:(id)arg1 ;
-(id)_newMapMatcherForRoute:(id)arg1 ;
-(int)_detectedMotionForLocation:(id)arg1 ;
-(BOOL)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2 ;
@end

