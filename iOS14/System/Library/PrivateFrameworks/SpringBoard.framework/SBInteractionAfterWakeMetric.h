/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class PETGoalConversionEventTracker, PETDistributionEventTracker;

@interface SBInteractionAfterWakeMetric : SBAnalyticsStateMachineEventHandler {

	PETGoalConversionEventTracker* _unlockTracker;
	PETDistributionEventTracker* _sessionTimeTracker;
	double _screenOnTimestamp;
	SCD_Struct_SB44 _sessionInteractions;
	BOOL _shouldReport;

}
-(id)init;
-(BOOL)_determineIfShouldReport;
-(void)_trackUnlockConversion:(BOOL)arg1 ;
-(void)_trackUnlockOpportunity;
-(void)_trackSessionWithDuration:(double)arg1 ;
@end

