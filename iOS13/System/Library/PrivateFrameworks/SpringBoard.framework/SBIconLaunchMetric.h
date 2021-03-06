/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_processAndReportTappedEventPayload:(id)arg1 ;
-(void)_processAndReportLaunchedEventPayload:(id)arg1 ;
@end

