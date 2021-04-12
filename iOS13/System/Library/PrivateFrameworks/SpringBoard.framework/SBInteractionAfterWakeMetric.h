/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class PETGoalConversionEventTracker, PETDistributionEventTracker;

@interface SBInteractionAfterWakeMetric : SBAnalyticsStateMachineEventHandler {

	PETGoalConversionEventTracker* _unlockTracker;
	PETDistributionEventTracker* _sessionTimeTracker;
	double _screenOnTimestamp;
	SCD_Struct_SB47 _sessionInteractions;
	BOOL _shouldReport;

}
-(id)init;
-(BOOL)_determineIfShouldReport;
-(void)_trackUnlockOpportunity;
-(void)_trackUnlockConversion:(BOOL)arg1 ;
-(void)_trackSessionWithDuration:(double)arg1 ;
@end

