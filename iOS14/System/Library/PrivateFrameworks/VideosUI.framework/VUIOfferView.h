/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIOfferLayout, _TVImageView, VUILabel, UIView, VUIMediaTagsView, VUIButton, VUISeparatorView;

@interface VUIOfferView : UIView {

	BOOL _isEntitled;
	VUIOfferLayout* _layout;
	_TVImageView* _imageView;
	_TVImageView* _logoView;
	_TVImageView* _appIconView;
	VUILabel* _channelNameLabel;
	VUILabel* _titleLabel;
	VUILabel* _subtitleLabel;
	VUILabel* _textLabel;
	UIView* _badgeView;
	VUIMediaTagsView* _tagsView;
	VUIButton* _versionsButton;
	UIView* _channelImageBackgroundView;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUISeparatorView * separatorView;                 //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) VUIOfferLayout * layout;                          //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) _TVImageView * logoView;                          //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) _TVImageView * appIconView;                       //@synthesize appIconView=_appIconView - In the implementation block
@property (nonatomic,retain) VUILabel * channelNameLabel;                      //@synthesize channelNameLabel=_channelNameLabel - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * subtitleLabel;                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * textLabel;                             //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIView * badgeView;                               //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) VUIMediaTagsView * tagsView;                      //@synthesize tagsView=_tagsView - In the implementation block
@property (nonatomic,retain) VUIButton * versionsButton;                       //@synthesize versionsButton=_versionsButton - In the implementation block
@property (nonatomic,retain) UIView * channelImageBackgroundView;              //@synthesize channelImageBackgroundView=_channelImageBackgroundView - In the implementation block
@property (assign,nonatomic) BOOL isEntitled;                                  //@synthesize isEntitled=_isEntitled - In the implementation block
-(VUILabel *)titleLabel;
-(void)setSubtitleLabel:(VUILabel *)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(VUISeparatorView *)separatorView;
-(UIView *)badgeView;
-(BOOL)isEntitled;
-(_TVImageView *)imageView;
-(void)setBadgeView:(UIView *)arg1 ;
-(void)setTextLabel:(VUILabel *)arg1 ;
-(VUILabel *)subtitleLabel;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_TVImageView *)appIconView;
-(_TVImageView *)logoView;
-(VUILabel *)textLabel;
-(void)setLayout:(VUIOfferLayout *)arg1 ;
-(VUIMediaTagsView *)tagsView;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(VUIOfferLayout *)layout;
-(void)prepareForCellReuse;
-(void)setLogoView:(_TVImageView *)arg1 ;
-(void)setIsEntitled:(BOOL)arg1 ;
-(VUIButton *)versionsButton;
-(UIView *)channelImageBackgroundView;
-(void)setChannelNameLabel:(VUILabel *)arg1 ;
-(void)setAppIconView:(_TVImageView *)arg1 ;
-(void)setTagsView:(VUIMediaTagsView *)arg1 ;
-(void)setVersionsButton:(VUIButton *)arg1 ;
-(void)setChannelImageBackgroundView:(UIView *)arg1 ;
-(BOOL)_shouldDisplaySeparator;
-(double)_chinHeightForSize:(CGSize)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(VUILabel *)channelNameLabel;
@end

