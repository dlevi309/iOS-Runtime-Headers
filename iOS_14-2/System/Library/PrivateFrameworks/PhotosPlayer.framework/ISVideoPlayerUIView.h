/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)contentsRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setVideoLayerReadyForDisplayChangeHandler:(id)arg1 ;
-(void)setVideoPlayer:(ISWrappedAVPlayer *)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(ISWrappedAVPlayer *)videoPlayer;
-(BOOL)videoLayerReadyForDisplay;
-(id)initWithCoder:(id)arg1 ;
-(void)_updateVideoGravity;
-(void)setContentMode:(long long)arg1 ;
-(void)_ISVideoPlayerUIView_commonInitialization;
-(id)playerLayer;
-(id)videoLayerReadyForDisplayChangeHandler;
@end

