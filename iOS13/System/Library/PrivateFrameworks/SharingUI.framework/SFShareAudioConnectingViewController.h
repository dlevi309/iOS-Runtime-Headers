/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <SharingUI/SFShareAudioBaseViewController.h>

@class UIImageView, SFMediaPlayerView, UIView, UIActivityIndicatorView, UILabel, UIButton;

@interface SFShareAudioConnectingViewController : SFShareAudioBaseViewController {

	unsigned _productIDActive;
	unsigned _colorCode;
	unsigned _productID;
	UIImageView* _productImageView;
	SFMediaPlayerView* _productMovieView;
	UIImageView* _shareImageView;
	UIView* _progressView;
	UIActivityIndicatorView* _progressActivity;
	UILabel* _progressLabel;
	UIButton* _cancelButton;

}

@property (nonatomic,retain) UIImageView * productImageView;                          //@synthesize productImageView=_productImageView - In the implementation block
@property (nonatomic,retain) SFMediaPlayerView * productMovieView;                    //@synthesize productMovieView=_productMovieView - In the implementation block
@property (nonatomic,retain) UIImageView * shareImageView;                            //@synthesize shareImageView=_shareImageView - In the implementation block
@property (nonatomic,retain) UIView * progressView;                                   //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * progressActivity;              //@synthesize progressActivity=_progressActivity - In the implementation block
@property (nonatomic,retain) UILabel * progressLabel;                                 //@synthesize progressLabel=_progressLabel - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                 //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic) unsigned colorCode;                                      //@synthesize colorCode=_colorCode - In the implementation block
@property (assign,nonatomic) unsigned productID;                                      //@synthesize productID=_productID - In the implementation block
-(unsigned)productID;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setColorCode:(unsigned)arg1 ;
-(unsigned)colorCode;
-(void)setProductID:(unsigned)arg1 ;
-(void)setProgressLabel:(UILabel *)arg1 ;
-(UILabel *)progressLabel;
-(UIView *)progressView;
-(void)setProgressView:(UIView *)arg1 ;
-(void)sessionProgressEvent:(int)arg1 info:(id)arg2 ;
-(void)eventCancel:(id)arg1 ;
-(UIImageView *)shareImageView;
-(void)setShareImageView:(UIImageView *)arg1 ;
-(void)_updateDeviceVisual:(id)arg1 ;
-(UIImageView *)productImageView;
-(void)setProductImageView:(UIImageView *)arg1 ;
-(SFMediaPlayerView *)productMovieView;
-(void)setProductMovieView:(SFMediaPlayerView *)arg1 ;
-(void)_updateForDeviceInfo;
-(UIActivityIndicatorView *)progressActivity;
-(void)setProgressActivity:(UIActivityIndicatorView *)arg1 ;
@end

