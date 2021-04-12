/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

