/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
*/

#import <libobjc.A.dylib/ResumeMediaIntentHandling.h>

@interface SiriPlaybackControlIntents.ResumeMediaIntentHandler : NSObject <ResumeMediaIntentHandling> {

	 playbackController;
	 deviceSelector;
	 analyticsService;
	 aceServiceHelper;

}
-(id)init;
-(void)handleResumeMedia:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveDevicesForResumeMedia:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmResumeMedia:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

