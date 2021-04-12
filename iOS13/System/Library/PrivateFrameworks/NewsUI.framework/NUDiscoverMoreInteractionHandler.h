/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SVDiscoverMoreInteractionHandling.h>

@protocol NUURLHandling, SVVideoViewControllerProviding, SVVideoPlaybackController;
@class NUDiscoverMoreVideosInfo, NSString;

@interface NUDiscoverMoreInteractionHandler : NSObject <SVDiscoverMoreInteractionHandling> {

	id<NUURLHandling> _URLHandler;
	NUDiscoverMoreVideosInfo* _discoverMoreVideosInfo;
	id<SVVideoViewControllerProviding> _videoViewControllerProvider;
	id<SVVideoPlaybackController> _playbackController;

}

@property (nonatomic,readonly) id<NUURLHandling> URLHandler;                                                //@synthesize URLHandler=_URLHandler - In the implementation block
@property (nonatomic,copy,readonly) NUDiscoverMoreVideosInfo * discoverMoreVideosInfo;                      //@synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;              //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackController> playbackController;                            //@synthesize playbackController=_playbackController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NUDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(id<SVVideoPlaybackController>)playbackController;
-(void)handleInteraction;
-(id<NUURLHandling>)URLHandler;
-(id)initWithURLHandler:(id)arg1 discoverMoreVideosInfo:(id)arg2 videoViewControllerProvider:(id)arg3 playbackController:(id)arg4 ;
@end

