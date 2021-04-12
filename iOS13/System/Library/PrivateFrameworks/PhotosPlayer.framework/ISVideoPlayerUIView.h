/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class ISAVPlayerUIView, ISWrappedAVPlayer;

@interface ISVideoPlayerUIView : UIView {

	ISAVPlayerUIView* _playerView;
	BOOL _videoLayerReadyForDisplay;
	ISWrappedAVPlayer* _videoPlayer;
	CGRect _contentsRect;

}

@property (nonatomic,retain) ISWrappedAVPlayer * videoPlayer;                      //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (assign,nonatomic) CGRect contentsRect;                                  //@synthesize contentsRect=_contentsRect - In the implementation block
@property (nonatomic,copy) id videoLayerReadyForDisplayChangeHandler; 
@property (nonatomic,readonly) BOOL videoLayerReadyForDisplay;                     //@synthesize videoLayerReadyForDisplay=_videoLayerReadyForDisplay - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(CGRect)contentsRect;
-(id)playerLayer;
-(void)setVideoPlayer:(ISWrappedAVPlayer *)arg1 ;
-(ISWrappedAVPlayer *)videoPlayer;
-(void)setVideoLayerReadyForDisplayChangeHandler:(id)arg1 ;
-(id)videoLayerReadyForDisplayChangeHandler;
-(BOOL)videoLayerReadyForDisplay;
-(void)_ISVideoPlayerUIView_commonInitialization;
-(void)_updateVideoGravity;
@end

