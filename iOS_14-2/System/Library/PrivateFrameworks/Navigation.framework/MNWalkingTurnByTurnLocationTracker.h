/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNTurnByTurnLocationTracker.h>

@interface MNWalkingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker {

	int _detectedTransportType;
	SCD_Struct_MN6 _detectedTransportTypeOrigin;

}
-(int)transportType;
-(id)initWithNavigationSession:(id)arg1 ;
-(id)_newMapMatcherForRoute:(id)arg1 ;
-(int)_detectedMotionForLocation:(id)arg1 ;
-(BOOL)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2 ;
@end

