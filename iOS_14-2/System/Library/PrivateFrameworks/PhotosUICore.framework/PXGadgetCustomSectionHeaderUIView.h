/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetSectionHeaderUIView.h>

@class UILabel, UIButton, UIImageView;

@interface PXGadgetCustomSectionHeaderUIView : PXGadgetSectionHeaderUIView {

	UILabel* _appleInternalLabel;
	UIButton* _infoButton;
	UIImageView* _iconImageView;
	UILabel* _iconTitleLabel;

}

@property (nonatomic,retain) UILabel * appleInternalLabel;              //@synthesize appleInternalLabel=_appleInternalLabel - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                     //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;               //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * iconTitleLabel;                  //@synthesize iconTitleLabel=_iconTitleLabel - In the implementation block
+(id)_appleInternalLabelText;
+(double)_preferredHeightOfAppleInternalTextWithWidth:(double)arg1 ;
+(double)preferredHeightForText:(id)arg1 buttonType:(unsigned long long)arg2 fittingWidth:(double)arg3 style:(unsigned long long)arg4 dividerHidden:(BOOL)arg5 ;
-(UIImageView *)iconImageView;
-(UILabel *)iconTitleLabel;
-(void)_infoButtonSelected;
-(void)setInfoButton:(UIButton *)arg1 ;
-(void)configureTitleLabel:(id)arg1 ;
-(void)layoutSubviews;
-(UIButton *)infoButton;
-(void)setAppleInternalLabel:(UILabel *)arg1 ;
-(UILabel *)appleInternalLabel;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setIconTitleLabel:(UILabel *)arg1 ;
@end

