/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
*/

#import <libobjc.A.dylib/SetAudioLanguageIntentHandling.h>

@interface SiriPlaybackControlIntents.SetAudioLanguageIntentHandler : NSObject <SetAudioLanguageIntentHandling> {

	 playbackController;
	 deviceSelector;
	 analyticsService;

}
-(id)init;
-(void)handleSetAudioLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveDeviceForSetAudioLanguage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveLanguageForSetAudioLanguage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmSetAudioLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

