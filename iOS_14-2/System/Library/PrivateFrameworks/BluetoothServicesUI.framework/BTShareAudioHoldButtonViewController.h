/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServicesUI.framework/BluetoothServicesUI
*/

#import <BluetoothServicesUI/BTShareAudioBaseViewController.h>

@class UIImageView, BTMediaPlayerView, UILabel, UIButton;

@interface BTShareAudioHoldButtonViewController : BTShareAudioBaseViewController {

	unsigned _colorCode;
	unsigned _productID;
	UIImageView* _productImageView;
	BTMediaPlayerView* _productMovieView;
	UIImageView* _shareImageView;
	UILabel* _infoLabel;
	UIButton* _cancelButton;

}

@property (nonatomic,retain) UIImageView * productImageView;                    //@synthesize productImageView=_productImageView - In the implementation block
@property (nonatomic,retain) BTMediaPlayerView * productMovieView;              //@synthesize productMovieView=_productMovieView - In the implementation block
@property (nonatomic,retain) UIImageView * shareImageView;                      //@synthesize shareImageView=_shareImageView - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                               //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                           //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic) unsigned colorCode;                                //@synthesize colorCode=_colorCode - In the implementation block
@property (assign,nonatomic) unsigned productID;                                //@synthesize productID=_productID - In the implementation block
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned)productID;
-(UILabel *)infoLabel;
-(unsigned)colorCode;
-(void)setProductID:(unsigned)arg1 ;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(void)setColorCode:(unsigned)arg1 ;
-(void)eventCancel:(id)arg1 ;
-(UIImageView *)shareImageView;
-(void)setShareImageView:(UIImageView *)arg1 ;
-(void)_updateDeviceVisual:(id)arg1 ;
-(UIImageView *)productImageView;
-(void)setProductImageView:(UIImageView *)arg1 ;
-(BTMediaPlayerView *)productMovieView;
-(void)setProductMovieView:(BTMediaPlayerView *)arg1 ;
-(id)_holdImageForPID:(unsigned)arg1 colorCode:(unsigned)arg2 ;
@end

