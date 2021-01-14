/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class ATXCoreDuetContextHelper, ATXNowPlayingEvent;

@interface ATXNowPlayingDataProvider : NSObject {

	ATXCoreDuetContextHelper* _coreDuetContextHelper;
	ATXNowPlayingEvent* _lastNowPlayingEvent;

}
-(id)init;
-(BOOL)isTVExperienceAppNowPlaying;
-(id)currentNowPlayingEvent;
@end

