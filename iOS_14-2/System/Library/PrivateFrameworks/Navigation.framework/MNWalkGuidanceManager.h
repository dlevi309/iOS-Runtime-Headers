/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNClassicGuidanceManager.h>

@interface MNWalkGuidanceManager : MNClassicGuidanceManager
-(int)transportType;
-(void)updateGuidanceForProceedToRouteAtLocation:(SCD_Struct_MN6)arg1 routeMatch:(id)arg2 remainingTime:(double)arg3 distanceUntilDestination:(double)arg4 ;
-(void)_updatePrepareForNextStep;
-(BOOL)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2 ;
-(id)_combinedGuidanceForStep:(id)arg1 withType:(int)arg2 ;
-(double)_adjustedVehicleSpeed:(id)arg1 ;
@end

