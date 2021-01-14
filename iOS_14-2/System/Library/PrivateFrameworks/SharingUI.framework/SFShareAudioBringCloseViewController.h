/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <SharingUI/SFShareAudioBaseViewController.h>

@protocol OS_dispatch_source;
@class NSMutableArray, NSObject, UIButton, UILabel, UIImageView;

@interface SFShareAudioBringCloseViewController : SFShareAudioBaseViewController {

	NSMutableArray* _cycleImageArray;
	NSObject*<OS_dispatch_source> _cycleImageTimer;
	unsigned _cycleNextIndex;
	UIButton* _cancelButton;
	UILabel* _infoLabel;
	UIImageView* _shareImageView;

}

@property (nonatomic,retain) UIButton * cancelButton;                   //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                       //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) UIImageView * shareImageView;              //@synthesize shareImageView=_shareImageView - In the implementation block
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UILabel *)infoLabel;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(void)_cycleProductImage;
-(void)eventCancel:(id)arg1 ;
-(UIImageView *)shareImageView;
-(void)setShareImageView:(UIImageView *)arg1 ;
@end

