/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPVideoView.h>
#import <libobjc.A.dylib/LPYouTubePlayerDelegate.h>

@class LPYouTubePlayerView, NSString;

@interface LPYouTubeVideoView : LPVideoView <LPYouTubePlayerDelegate> {

	LPYouTubePlayerView* _platformYouTubeView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVolume:(double)arg1 ;
-(id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5 ;
-(BOOL)usesSharedAudioSession;
-(BOOL)shouldShowMuteButton;
-(BOOL)usesCustomFullScreenImplementation;
-(id)createVideoPlayerView;
-(void)setPlaying:(BOOL)arg1 ;
-(void)enterCustomFullScreen;
-(void)youTubePlayer:(id)arg1 didChangeToState:(long long)arg2 ;
-(void)youTubePlayer:(id)arg1 didReceiveError:(id)arg2 ;
-(void)youTubePlayer:(id)arg1 didChangeToFullScreen:(BOOL)arg2 ;
-(void)setMuted:(BOOL)arg1 ;
-(double)volume;
-(BOOL)isMuted;
@end

