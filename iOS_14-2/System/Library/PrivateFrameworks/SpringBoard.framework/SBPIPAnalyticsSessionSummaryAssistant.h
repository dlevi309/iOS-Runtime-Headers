/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBPIPAnalyticsAssistant.h>

@interface SBPIPAnalyticsSessionSummaryAssistant : SBPIPAnalyticsAssistant {

	double _stashedDuration;
	double _stashedTimestamp;
	long long _numberOfStashEvents;
	BOOL _restoredFullScreen;
	BOOL _startedAutomatically;
	BOOL _appStoppedSession;

}
-(void)invalidate;
-(id)initWithBundleIdentifier:(id)arg1 contentType:(long long)arg2 isAutoPIPEnabled:(BOOL)arg3 invalidationBlock:(/*^block*/id)arg4 ;
-(void)noteStartedAutomatically:(BOOL)arg1 ;
-(void)noteBecameUnstashedAtTime:(double)arg1 ;
-(void)noteAppStoppedSession:(BOOL)arg1 ;
-(void)noteRestoredFullScreen:(BOOL)arg1 ;
-(void)noteBecameStashedAtTime:(double)arg1 ;
-(id)analyticsIdentifier;
-(id)_generateMutableAnalyticsPayload;
@end

