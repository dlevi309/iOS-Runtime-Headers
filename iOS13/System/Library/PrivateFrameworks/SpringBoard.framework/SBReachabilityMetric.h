/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class PETDistributionEventTracker;

@interface SBReachabilityMetric : SBAnalyticsStateMachineEventHandler {

	double _activateTimestamp;
	PETDistributionEventTracker* _tracker;
	unsigned long long _activateLocation;
	unsigned long long _deactivationReason;

}
-(id)init;
@end

