/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class MPMediaControls;

@interface AVExternalPlaybackController : NSObject {

	MPMediaControls* _mediaControls;
	/*^block*/id _clientCompletionHandler;

}
+(id)externalPlaybackStateDescriptionForState:(long long)arg1 ;
-(void)willBeginPlaybackWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)willBeginPlaybackFromAppWithBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_invokeClientCompletionHandlerWithPlaybackState:(long long)arg1 ;
@end

