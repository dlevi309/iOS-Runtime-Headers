/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
*/

#import <libobjc.A.dylib/SetShuffleStateIntentHandling.h>

@interface SiriPlaybackControlIntents.SetShuffleStateIntentHandler : NSObject <SetShuffleStateIntentHandling> {

	 playbackController;
	 deviceSelector;
	 analyticsService;

}
-(id)init;
-(void)handleSetShuffleState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveDevicesForSetShuffleState:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmSetShuffleState:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

