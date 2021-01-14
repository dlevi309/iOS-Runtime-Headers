/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
*/

#import <libobjc.A.dylib/WhatDidTheySayIntentHandling.h>

@interface SiriPlaybackControlIntents.WhatDidTheySayIntentHandler : NSObject <WhatDidTheySayIntentHandling> {

	 playbackController;
	 deviceSelector;
	 timer;
	 queue;
	 assertion;
	 analyticsService;

}
-(id)init;
-(void)resolveDeviceForWhatDidTheySay:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleWhatDidTheySay:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmWhatDidTheySay:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

