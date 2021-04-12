/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServicesUI.framework/BluetoothServicesUI
*/

#import <BluetoothServicesUI/BTShareAudioBaseViewController.h>

@class UIImageView, BTMediaPlayerView, UIView, UIActivityIndicatorView, UILabel, UIButton, NSString;

@interface BTShareAudioConnectingViewController : BTShareAudioBaseViewController {

	unsigned _productIDActive;
	unsigned _colorCode;
	unsigned _productID;
	UIImageView* _productImageView;
	BTMediaPlayerView* _productMovieView;
	UIImageView* _shareImageView;
	UIView* _progressView;
	UIActivityIndicatorView* _progressActivity;
	UILabel* _progressLabel;
	UIButton* _cancelButton;
	NSString* _deviceName;

}

@property (nonatomic,retain) UIImageView * productImageView;                          //@synthesize productImageView=_productImageView - In the implementation block
@property (nonatomic,retain) BTMediaPlayerView * productMovieView;                    //@synthesize productMovieView=_productMovieView - In the implementation block
@property (nonatomic,retain) UIImageView * shareImageView;                            //@synthesize shareImageView=_shareImageView - In the implementation block
@property (nonatomic,retain) UIView * progressView;                                   //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * progressActivity;              //@synthesize progressActivity=_progressActivity - In the implementation block
@property (nonatomic,retain) UILabel * progressLabel;                                 //@synthesize progressLabel=_progressLabel - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                 //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic) unsigned colorCode;                                      //@synthesize colorCode=_colorCode - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                                     //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) unsigned productID;                                      //@synthesize productID=_productID - In the implementation block
-(UIButton *)cancelButton;
-(NSString *)deviceName;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setProgressLabel:(UILabel *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned)productID;
-(unsigned)colorCode;
-(void)setProductID:(unsigned)arg1 ;
-(void)setProgressView:(UIView *)arg1 ;
-(UIView *)progressView;
-(UILabel *)progressLabel;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setColorCode:(unsigned)arg1 ;
-(void)sessionProgressEvent:(int)arg1 info:(id)arg2 ;
-(void)eventCancel:(id)arg1 ;
-(UIImageView *)shareImageView;
-(void)setShareImageView:(UIImageView *)arg1 ;
-(void)_updateDeviceVisual:(id)arg1 ;
-(UIImageView *)productImageView;
-(void)setProductImageView:(UIImageView *)arg1 ;
-(BTMediaPlayerView *)productMovieView;
-(void)setProductMovieView:(BTMediaPlayerView *)arg1 ;
-(void)_updateForDeviceInfo;
-(UIActivityIndicatorView *)progressActivity;
-(void)setProgressActivity:(UIActivityIndicatorView *)arg1 ;
@end

