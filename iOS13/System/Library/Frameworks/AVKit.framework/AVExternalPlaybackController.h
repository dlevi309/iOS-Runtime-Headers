/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

