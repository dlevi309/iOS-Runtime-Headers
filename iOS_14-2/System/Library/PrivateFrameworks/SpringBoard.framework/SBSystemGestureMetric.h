/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class PETGoalConversionEventTracker;

@interface SBSystemGestureMetric : SBAnalyticsStateMachineEventHandler {

	PETGoalConversionEventTracker* _goalTracker;
	unsigned long long _beganLocation;

}
-(id)initForType:(unsigned long long)arg1 parentMetric:(id)arg2 ;
@end

