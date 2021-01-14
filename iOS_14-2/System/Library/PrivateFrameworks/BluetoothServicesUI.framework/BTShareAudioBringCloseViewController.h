/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServicesUI.framework/BluetoothServicesUI
*/

#import <BluetoothServicesUI/BTShareAudioBaseViewController.h>

@protocol OS_dispatch_source;
@class NSMutableArray, NSObject, UILabel, UIImageView, UIView, UIButton;

@interface BTShareAudioBringCloseViewController : BTShareAudioBaseViewController {

	NSMutableArray* _cycleImageArray;
	NSObject*<OS_dispatch_source> _cycleImageTimer;
	unsigned _cycleNextIndex;
	UILabel* _infoLabel;
	UIImageView* _bannerImageView;
	UIView* _productImageContainerView;
	UIImageView* _shareImageView;
	UIButton* _cancelButton;

}

@property (nonatomic,retain) UILabel * infoLabel;                             //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) UIImageView * bannerImageView;                   //@synthesize bannerImageView=_bannerImageView - In the implementation block
@property (nonatomic,retain) UIView * productImageContainerView;              //@synthesize productImageContainerView=_productImageContainerView - In the implementation block
@property (nonatomic,retain) UIImageView * shareImageView;                    //@synthesize shareImageView=_shareImageView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                         //@synthesize cancelButton=_cancelButton - In the implementation block
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UILabel *)infoLabel;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(void)viewDidLayoutSubviews;
-(UIImageView *)bannerImageView;
-(void)setBannerImageView:(UIImageView *)arg1 ;
-(void)_cycleProductImage;
-(void)eventCancel:(id)arg1 ;
-(UIView *)productImageContainerView;
-(void)setProductImageContainerView:(UIView *)arg1 ;
-(UIImageView *)shareImageView;
-(void)setShareImageView:(UIImageView *)arg1 ;
@end

