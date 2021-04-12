/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPlayerController.h>

@protocol AVHomeIPCameraActionButtonHandling;
@interface AVHomeIPCameraPlayerController : AVPlayerController {

	BOOL _muted;
	id<AVHomeIPCameraActionButtonHandling> _delegate;
	CGSize _presentationSize;

}

@property (assign,nonatomic,__weak) id<AVHomeIPCameraActionButtonHandling> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize presentationSize;                                             //@synthesize presentationSize=_presentationSize - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                           //@synthesize muted=_muted - In the implementation block
-(id<AVHomeIPCameraActionButtonHandling>)delegate;
-(void)setDelegate:(id<AVHomeIPCameraActionButtonHandling>)arg1 ;
-(long long)status;
-(void)setVolume:(double)arg1 ;
-(BOOL)isPlaying;
-(BOOL)hasContent;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(long long)timeControlStatus;
-(BOOL)hasSeekableLiveStreamingContent;
-(BOOL)hasLiveStreamingContent;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(BOOL)hasEnabledVideo;
-(BOOL)isPictureInPicturePossible;
-(CGSize)presentationSize;
-(void)setPresentationSize:(CGSize)arg1 ;
@end

