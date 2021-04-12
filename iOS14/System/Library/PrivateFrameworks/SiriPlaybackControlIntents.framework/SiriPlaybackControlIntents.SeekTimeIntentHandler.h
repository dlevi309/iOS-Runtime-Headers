/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
*/

#import <libobjc.A.dylib/SeekTimeIntentHandling.h>

@interface SiriPlaybackControlIntents.SeekTimeIntentHandler : NSObject <SeekTimeIntentHandling> {

	 playbackController;
	 deviceSelector;
	 analyticsService;

}
-(id)init;
-(void)handleSeekTime:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveDevicesForSeekTime:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolvePlayheadPositionForSeekTime:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmSeekTime:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

