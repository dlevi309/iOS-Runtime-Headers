/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class IKViewElement, VUILabel, VUIFocusableTextView, VUIRoomBannerLayout, _TVImageView, VUISeparatorView;

@interface VUIRoomBannerView : UIView {

	IKViewElement* _viewElement;
	VUILabel* _titleLabel;
	VUIFocusableTextView* _descriptionLabel;
	VUIRoomBannerLayout* _layout;
	_TVImageView* _backgroundImage;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUISeparatorView * separatorView;                     //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                          //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUIFocusableTextView * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) VUIRoomBannerLayout * layout;                         //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * backgroundImage;                       //@synthesize backgroundImage=_backgroundImage - In the implementation block
-(_TVImageView *)backgroundImage;
-(void)setBackgroundImage:(_TVImageView *)arg1 ;
-(VUIRoomBannerLayout *)layout;
-(void)setLayout:(VUIRoomBannerLayout *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(VUILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUISeparatorView *)separatorView;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setDescriptionLabel:(VUIFocusableTextView *)arg1 ;
-(VUIFocusableTextView *)descriptionLabel;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
@end

