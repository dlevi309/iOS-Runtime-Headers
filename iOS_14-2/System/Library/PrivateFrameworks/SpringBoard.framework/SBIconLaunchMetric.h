/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class PETGoalConversionEventTracker, NSString;

@interface SBIconLaunchMetric : SBAnalyticsStateMachineEventHandler {

	PETGoalConversionEventTracker* _trackerV1;
	PETGoalConversionEventTracker* _trackerV2;
	BOOL _isFolder;
	NSString* _iconLocationValue;
	unsigned long long _layoutLocation;

}
-(id)init;
-(void)_processAndReportLaunchedEventPayload:(id)arg1 ;
-(void)_processAndReportTappedEventPayload:(id)arg1 ;
@end

