/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCUserInfoObserving.h>

@interface NewsUI2.EndOfTrackNotificationScheduler : NSObject <FCUserInfoObserving> {

	 notificationService;
	 currentlyPlaying;
	 readingHistory;
	 currentlyPlayingObservableToken;
	 schedulerState;

}
-(void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2 ;
-(id)init;
@end

