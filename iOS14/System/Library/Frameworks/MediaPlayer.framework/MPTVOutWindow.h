/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <UIKitCore/UIWindow.h>

@class MPMovieTVHUDView, MPVideoView;

@interface MPTVOutWindow : UIWindow {

	MPMovieTVHUDView* _hudView;
	MPVideoView* _videoView;

}
-(id)init;
-(BOOL)_setupTargetScreen:(id)arg1 ;
-(void)_screenModeDidChange:(id)arg1 ;
-(BOOL)setVideoView:(id)arg1 ;
-(id)videoView;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)dealloc;
@end

