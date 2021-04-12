/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class UIView, UIImageView, UILabel, PXUIButton;

@interface _PXUIAssetBadgeTopGroup : NSObject {

	UIView* _backgroundView;
	UIImageView* _imageView;
	UILabel* _label;
	PXUIButton* _button;
	PXAssetBadgeInfo _badgeInfo;
	CGRect _frame;
	CGRect _imageFrame;
	CGRect _labelFrame;
	CGRect _buttonFrame;

}

@property (nonatomic,retain) UIView * backgroundView;                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) PXUIButton * button;                     //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) PXAssetBadgeInfo badgeInfo;              //@synthesize badgeInfo=_badgeInfo - In the implementation block
@property (assign,nonatomic) CGRect frame;                            //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect imageFrame;                       //@synthesize imageFrame=_imageFrame - In the implementation block
@property (assign,nonatomic) CGRect labelFrame;                       //@synthesize labelFrame=_labelFrame - In the implementation block
@property (assign,nonatomic) CGRect buttonFrame;                      //@synthesize buttonFrame=_buttonFrame - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(PXUIButton *)button;
-(UIImageView *)imageView;
-(CGRect)imageFrame;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setButton:(PXUIButton *)arg1 ;
-(CGRect)frame;
-(CGRect)buttonFrame;
-(CGRect)labelFrame;
-(void)setLabelFrame:(CGRect)arg1 ;
-(void)setImageFrame:(CGRect)arg1 ;
-(void)setButtonFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBadgeInfo:(PXAssetBadgeInfo)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(PXAssetBadgeInfo)badgeInfo;
-(UILabel *)label;
@end

