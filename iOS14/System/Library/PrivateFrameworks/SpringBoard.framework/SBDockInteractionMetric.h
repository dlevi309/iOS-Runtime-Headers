/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class PETGoalConversionEventTracker;

@interface SBDockInteractionMetric : SBAnalyticsStateMachineEventHandler {

	PETGoalConversionEventTracker* _swipeInTracker;
	PETGoalConversionEventTracker* _dismissTracker;
	unsigned long long _locationAtSwipeIn;

}
-(id)init;
@end

