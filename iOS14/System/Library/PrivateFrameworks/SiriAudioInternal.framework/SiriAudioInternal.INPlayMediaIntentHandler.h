/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriAudioInternal.framework/SiriAudioInternal
*/

#import <libobjc.A.dylib/INPlayMediaIntentHandling.h>

@interface SiriAudioInternal.INPlayMediaIntentHandler : NSObject <INPlayMediaIntentHandling> {

	 playbackService;
	 localSearch;
	 deviceProvider;
	 nowPlaying;

}
-(id)init;
-(void)handlePlayMedia:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveMediaItemsForPlayMedia:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

