/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(VUILabel *)titleLabel;
-(void)layoutSubviews;
-(VUISeparatorView *)separatorView;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setAccessoryView:(UIImageView *)arg1 ;
-(UIImageView *)accessoryView;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(void)configureWithTitle:(id)arg1 ;
-(VUITextLayout *)titleLayout;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
@end

