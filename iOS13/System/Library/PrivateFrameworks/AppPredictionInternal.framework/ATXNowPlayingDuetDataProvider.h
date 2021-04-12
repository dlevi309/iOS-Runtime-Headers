/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/ATXDuetDataProvider.h>

@interface ATXNowPlayingDuetDataProvider : ATXDuetDataProvider
+(Class)supportedDuetEventClass;
+(long long)supportedCoreDuetStream;
-(id)playbackEventsAfterSecondsOfInactivity:(double)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3 ;
-(id)convertNowPlayingEventsToAppLaunchEvents:(id)arg1 ;
-(id)mostRecentPlayingNowPlayingEventWithMaxAgeInSeconds:(double)arg1 ;
@end

