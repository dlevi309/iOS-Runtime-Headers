/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPlayerController.h>

@protocol AVHomeIPCameraActionButtonHandling;
@interface AVHomeIPCameraPlayerController : AVPlayerController {

	double _volume;
	BOOL _muted;
	id<AVHomeIPCameraActionButtonHandling> _delegate;
	CGSize _presentationSize;

}

@property (assign,nonatomic,__weak) id<AVHomeIPCameraActionButtonHandling> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize presentationSize;                                             //@synthesize presentationSize=_presentationSize - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                           //@synthesize muted=_muted - In the implementation block
-(BOOL)isPlaying;
-(void)setVolume:(double)arg1 ;
-(BOOL)hasContent;
-(id<AVHomeIPCameraActionButtonHandling>)delegate;
-(BOOL)hasSeekableLiveStreamingContent;
-(BOOL)hasLiveStreamingContent;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(void)setDelegate:(id<AVHomeIPCameraActionButtonHandling>)arg1 ;
-(CGSize)presentationSize;
-(void)setMuted:(BOOL)arg1 ;
-(void)beginReducingResourcesForPictureInPicturePlayerLayer:(id)arg1 ;
-(void)endReducingResourcesForPictureInPicturePlayerLayer:(id)arg1 ;
-(void)setPresentationSize:(CGSize)arg1 ;
-(long long)timeControlStatus;
-(double)volume;
-(BOOL)isMuted;
-(BOOL)hasEnabledVideo;
-(BOOL)isPictureInPicturePossible;
-(long long)status;
@end

