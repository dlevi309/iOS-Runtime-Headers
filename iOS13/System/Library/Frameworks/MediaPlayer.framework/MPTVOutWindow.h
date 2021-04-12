/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <UIKitCore/UIWindow.h>

@class MPMovieTVHUDView, MPVideoView;

@interface MPTVOutWindow : UIWindow {

	MPMovieTVHUDView* _hudView;
	MPVideoView* _videoView;

}
-(id)init;
-(void)dealloc;
-(BOOL)setVideoView:(id)arg1 ;
-(id)videoView;
-(BOOL)_setupTargetScreen:(id)arg1 ;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)_screenModeDidChange:(id)arg1 ;
@end

