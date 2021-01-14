/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class NSString, PETDistributionEventTracker;

@interface SBIconDeleteMetric : SBAnalyticsStateMachineEventHandler {

	NSString* _location;
	unsigned long long _presentedOptions;
	PETDistributionEventTracker* _tracker;

}
-(id)init;
-(id)_propertyValuesForTracker;
@end

