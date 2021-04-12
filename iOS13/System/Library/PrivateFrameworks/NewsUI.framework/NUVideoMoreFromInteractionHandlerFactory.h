/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SVMoreFromInteractionHandlerFactory.h>

@protocol NUURLHandling, NUVideoCallToActionURLProviding, SVVideoPlaybackController, SVVideoViewControllerProviding;
@class NSString;

@interface NUVideoMoreFromInteractionHandlerFactory : NSObject <SVMoreFromInteractionHandlerFactory> {

	id<NUURLHandling> _urlHandler;
	id<NUVideoCallToActionURLProviding> _callToActionURLProvider;
	id<SVVideoPlaybackController> _playbackController;
	id<SVVideoViewControllerProviding> _videoViewControllerProvider;

}

@property (nonatomic,readonly) id<NUURLHandling> urlHandler;                                                //@synthesize urlHandler=_urlHandler - In the implementation block
@property (nonatomic,readonly) id<NUVideoCallToActionURLProviding> callToActionURLProvider;                 //@synthesize callToActionURLProvider=_callToActionURLProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackController> playbackController;                            //@synthesize playbackController=_playbackController - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;              //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUURLHandling>)urlHandler;
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(id)createInteractionHandlerForVideo:(id)arg1 ;
-(id<SVVideoPlaybackController>)playbackController;
-(id<NUVideoCallToActionURLProviding>)callToActionURLProvider;
-(id)initWithPlaybackController:(id)arg1 urlHandler:(id)arg2 callToActionURLProvider:(id)arg3 videoViewControllerProvider:(id)arg4 ;
@end

