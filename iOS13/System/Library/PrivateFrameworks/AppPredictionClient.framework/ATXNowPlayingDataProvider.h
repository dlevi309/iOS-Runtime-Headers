/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class ATXCoreDuetContextHelper, ATXNowPlayingEvent;

@interface ATXNowPlayingDataProvider : NSObject {

	ATXCoreDuetContextHelper* _coreDuetContextHelper;
	ATXNowPlayingEvent* _lastNowPlayingEvent;

}
-(id)init;
-(id)currentNowPlayingEvent;
-(BOOL)isTVExperienceAppNowPlaying;
@end

