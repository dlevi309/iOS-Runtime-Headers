/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(VUIOfferLayout *)layout;
-(void)setLayout:(VUIOfferLayout *)arg1 ;
-(VUILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(VUISeparatorView *)separatorView;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(VUILabel *)textLabel;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(UIView *)badgeView;
-(void)setImageView:(_TVImageView *)arg1 ;
-(void)setSubtitleLabel:(VUILabel *)arg1 ;
-(VUILabel *)subtitleLabel;
-(void)setTextLabel:(VUILabel *)arg1 ;
-(void)setBadgeView:(UIView *)arg1 ;
-(BOOL)isEntitled;
-(_TVImageView *)appIconView;
-(VUIMediaTagsView *)tagsView;
-(_TVImageView *)logoView;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setLogoView:(_TVImageView *)arg1 ;
-(void)prepareForCellReuse;
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
-(VUILabel *)channelNameLabel;
@end

