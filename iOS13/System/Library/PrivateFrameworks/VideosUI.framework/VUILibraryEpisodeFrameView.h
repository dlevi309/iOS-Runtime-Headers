/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VUILibraryEpisodeFrameViewDelegate;
@class _TVImageView, _TVProgressView, TVButton, UIImageView;

@interface VUILibraryEpisodeFrameView : UIView {

	id<VUILibraryEpisodeFrameViewDelegate> _delegate;
	_TVImageView* _imageView;
	_TVProgressView* _progressView;
	TVButton* _playButton;
	long long _layout;
	UIImageView* _fullyPlayedImageView;

}

@property (nonatomic,retain) _TVImageView * imageView;                                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) _TVProgressView * progressView;                                      //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) TVButton * playButton;                                               //@synthesize playButton=_playButton - In the implementation block
@property (assign,nonatomic) long long layout;                                                    //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) UIImageView * fullyPlayedImageView;                                  //@synthesize fullyPlayedImageView=_fullyPlayedImageView - In the implementation block
@property (assign,nonatomic,__weak) id<VUILibraryEpisodeFrameViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)configureEpisodeFrameView:(id)arg1 withMedia:(id)arg2 layout:(long long)arg3 imageSize:(CGSize)arg4 ;
-(id<VUILibraryEpisodeFrameViewDelegate>)delegate;
-(void)setDelegate:(id<VUILibraryEpisodeFrameViewDelegate>)arg1 ;
-(long long)layout;
-(void)setLayout:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(void)setImageView:(_TVImageView *)arg1 ;
-(TVButton *)playButton;
-(void)setPlayButton:(TVButton *)arg1 ;
-(_TVProgressView *)progressView;
-(void)setProgressView:(_TVProgressView *)arg1 ;
-(void)setFullyPlayedImageView:(UIImageView *)arg1 ;
-(UIImageView *)fullyPlayedImageView;
-(void)_playButtonPressed;
@end

