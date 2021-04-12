/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKBackgroundImageFaceView.h>
#import <libobjc.A.dylib/CLKVideoPlayerViewDelegate.h>

@class UIImageView, CLKVideoPlayerView, NSString;

@interface NTKAVFaceBaseView : NTKBackgroundImageFaceView <CLKVideoPlayerViewDelegate> {

	UIImageView* _posterImageView;
	CLKVideoPlayerView* _videoPlayerView;

}

@property (nonatomic,retain) CLKVideoPlayerView * videoPlayerView;              //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
@property (nonatomic,retain) UIImageView * posterImageView;                     //@synthesize posterImageView=_posterImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_reset;
-(void)layoutSubviews;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(CLKVideoPlayerView *)videoPlayerView;
-(void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1 ;
-(void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1 ;
-(void)videoPlayerViewDidBeginPlaying:(id)arg1 ;
-(void)_createVideoPlayerViewIfNeeded;
-(void)pauseVideoPlayerViewIfItExists;
-(void)setVideoPlayerView:(CLKVideoPlayerView *)arg1 ;
-(UIImageView *)posterImageView;
-(void)setPosterImageView:(UIImageView *)arg1 ;
-(id)_posterImageView;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_prepareForEditing;
-(id)_selectedContentView;
-(void)_transitionToPosterView:(id)arg1 ;
-(void)_beginTransitionToOption;
@end

