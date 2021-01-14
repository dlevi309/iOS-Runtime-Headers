/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VUILibraryEpisodeFrameViewDelegate;
@class _TVImageView, _TVProgressView, TVButton;

@interface VUILibraryEpisodeFrameView : UIView {

	id<VUILibraryEpisodeFrameViewDelegate> _delegate;
	_TVImageView* _imageView;
	_TVProgressView* _progressView;
	TVButton* _playButton;
	long long _layout;
	_TVImageView* _fullyPlayedImageView;

}

@property (nonatomic,retain) _TVImageView * imageView;                                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) _TVProgressView * progressView;                                      //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) TVButton * playButton;                                               //@synthesize playButton=_playButton - In the implementation block
@property (assign,nonatomic) long long layout;                                                    //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * fullyPlayedImageView;                                 //@synthesize fullyPlayedImageView=_fullyPlayedImageView - In the implementation block
@property (assign,nonatomic,__weak) id<VUILibraryEpisodeFrameViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)configureEpisodeFrameView:(id)arg1 withMedia:(id)arg2 layout:(long long)arg3 imageSize:(CGSize)arg4 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(_TVImageView *)imageView;
-(id<VUILibraryEpisodeFrameViewDelegate>)delegate;
-(TVButton *)playButton;
-(void)setDelegate:(id<VUILibraryEpisodeFrameViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setProgressView:(_TVProgressView *)arg1 ;
-(_TVProgressView *)progressView;
-(void)setPlayButton:(TVButton *)arg1 ;
-(void)setLayout:(long long)arg1 ;
-(long long)layout;
-(void)setFullyPlayedImageView:(_TVImageView *)arg1 ;
-(_TVImageView *)fullyPlayedImageView;
-(void)_playButtonPressed;
@end

