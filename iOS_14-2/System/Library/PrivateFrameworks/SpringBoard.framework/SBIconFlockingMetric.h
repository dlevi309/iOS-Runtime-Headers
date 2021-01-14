/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class PETDistributionEventTracker, PETScalarEventTracker;

@interface SBIconFlockingMetric : SBAnalyticsStateMachineEventHandler {

	PETDistributionEventTracker* _flockingDistributionTracker;
	PETScalarEventTracker* _flockingUsageTracker;

}
-(id)init;
@end

