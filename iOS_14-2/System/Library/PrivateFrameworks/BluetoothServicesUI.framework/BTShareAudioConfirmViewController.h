/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServicesUI.framework/BluetoothServicesUI
*/

#import <BluetoothServicesUI/BTShareAudioBaseViewController.h>

@class UIImageView, BTMediaPlayerView, UIButton, NSString;

@interface BTShareAudioConfirmViewController : BTShareAudioBaseViewController {

	unsigned _colorCode;
	unsigned _productID;
	UIImageView* _productImageView;
	BTMediaPlayerView* _productMovieView;
	UIButton* _confirmButton;
	UIButton* _cancelButton;
	UIImageView* _shareImageView;
	NSString* _deviceName;

}

@property (nonatomic,retain) UIImageView * productImageView;                    //@synthesize productImageView=_productImageView - In the implementation block
@property (nonatomic,retain) BTMediaPlayerView * productMovieView;              //@synthesize productMovieView=_productMovieView - In the implementation block
@property (nonatomic,retain) UIButton * confirmButton;                          //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                           //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIImageView * shareImageView;                      //@synthesize shareImageView=_shareImageView - In the implementation block
@property (assign,nonatomic) unsigned colorCode;                                //@synthesize colorCode=_colorCode - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                               //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) unsigned productID;                                //@synthesize productID=_productID - In the implementation block
-(UIButton *)cancelButton;
-(NSString *)deviceName;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIButton *)confirmButton;
-(void)setConfirmButton:(UIButton *)arg1 ;
-(unsigned)productID;
-(unsigned)colorCode;
-(void)setProductID:(unsigned)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setColorCode:(unsigned)arg1 ;
-(void)eventCancel:(id)arg1 ;
-(UIImageView *)shareImageView;
-(void)setShareImageView:(UIImageView *)arg1 ;
-(void)_updateDeviceVisual:(id)arg1 ;
-(void)eventTemporarilyShareButton:(id)arg1 ;
-(void)eventPermanentButton:(id)arg1 ;
-(UIImageView *)productImageView;
-(void)setProductImageView:(UIImageView *)arg1 ;
-(BTMediaPlayerView *)productMovieView;
-(void)setProductMovieView:(BTMediaPlayerView *)arg1 ;
@end

