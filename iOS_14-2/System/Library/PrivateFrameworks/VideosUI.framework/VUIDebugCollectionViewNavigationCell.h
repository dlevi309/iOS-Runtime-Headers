/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIListCollectionViewCell.h>

@class VUITextLayout, VUILabel, UIImageView, VUISeparatorView;

@interface VUIDebugCollectionViewNavigationCell : VUIListCollectionViewCell {

	VUITextLayout* _titleLayout;
	VUILabel* _titleLabel;
	UIImageView* _accessoryView;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUITextLayout * titleLayout;                   //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * accessoryView;                   //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(VUISeparatorView *)separatorView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)accessoryView;
-(void)setAccessoryView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(void)configureWithTitle:(id)arg1 ;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(VUITextLayout *)titleLayout;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
@end

