/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
*/

#import <NewDeviceOutreachUI/NewDeviceOutreachUI-Structs.h>
#import <Preferences/PSTableCell.h>

@class NSMutableArray, UIImageView, UIView, UILabel, UIButton;

@interface NDOAppItemViewCell : PSTableCell {

	NSMutableArray* _imageConstraints;
	UIImageView* _itemImageView;
	UIView* _itemTitleView;
	UILabel* _itemTitleLabel;
	UILabel* _itemSubtitleLabel;
	UILabel* _itemDetailLabel;
	UIButton* _itemButton;

}

@property (nonatomic,retain) UIImageView * itemImageView;              //@synthesize itemImageView=_itemImageView - In the implementation block
@property (nonatomic,retain) UIView * itemTitleView;                   //@synthesize itemTitleView=_itemTitleView - In the implementation block
@property (nonatomic,retain) UILabel * itemTitleLabel;                 //@synthesize itemTitleLabel=_itemTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * itemSubtitleLabel;              //@synthesize itemSubtitleLabel=_itemSubtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * itemDetailLabel;                //@synthesize itemDetailLabel=_itemDetailLabel - In the implementation block
@property (nonatomic,retain) UIButton * itemButton;                    //@synthesize itemButton=_itemButton - In the implementation block
+(long long)cellStyle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(UIButton *)itemButton;
-(void)layoutSubviews;
-(void)updateConstraints;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)getCurrentTitleFontSize;
-(void)setItemButton:(UIButton *)arg1 ;
-(UIImageView *)itemImageView;
-(UIView *)itemTitleView;
-(UILabel *)itemTitleLabel;
-(UILabel *)itemSubtitleLabel;
-(void)setItemImageView:(UIImageView *)arg1 ;
-(void)setItemTitleView:(UIView *)arg1 ;
-(void)setItemTitleLabel:(UILabel *)arg1 ;
-(void)setItemSubtitleLabel:(UILabel *)arg1 ;
-(id)_imageAppropriateForDevice:(id)arg1 ;
-(void)_setupAppSuportCell;
-(void)_setupWarrantyCoverageCell;
-(void)executeAction:(id)arg1 ;
-(UILabel *)itemDetailLabel;
-(id)_imageFromAppStore:(id)arg1 ;
-(void)setItemDetailLabel:(UILabel *)arg1 ;
@end

