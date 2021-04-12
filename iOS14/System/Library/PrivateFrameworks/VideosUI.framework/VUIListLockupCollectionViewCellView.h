/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _TVImageView, _TVMonogramView, TVImageLayout, VUILabel, VUIFocusableTextView, VUIButton, VUISeparatorView;

@interface VUIListLockupCollectionViewCellView : UIView {

	_TVImageView* _imageView;
	_TVMonogramView* _monogramView;
	TVImageLayout* _imageLayout;
	VUILabel* _titleLabel;
	VUILabel* _subTitleLabel;
	VUIFocusableTextView* _descriptionTextView;
	VUIButton* _primaryButton;
	VUIButton* _secondaryButton;
	long long _imagePosition;
	TVImageLayout* _monogramImageLayout;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUISeparatorView * separatorView;                        //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) _TVMonogramView * monogramView;                          //@synthesize monogramView=_monogramView - In the implementation block
@property (nonatomic,retain) TVImageLayout * imageLayout;                             //@synthesize imageLayout=_imageLayout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * subTitleLabel;                                //@synthesize subTitleLabel=_subTitleLabel - In the implementation block
@property (nonatomic,retain) VUIFocusableTextView * descriptionTextView;              //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) VUIButton * primaryButton;                               //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) VUIButton * secondaryButton;                             //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (assign,nonatomic) long long imagePosition;                                 //@synthesize imagePosition=_imagePosition - In the implementation block
@property (nonatomic,retain) TVImageLayout * monogramImageLayout;                     //@synthesize monogramImageLayout=_monogramImageLayout - In the implementation block
-(VUILabel *)titleLabel;
-(void)setImageView:(_TVImageView *)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(VUISeparatorView *)separatorView;
-(long long)imagePosition;
-(void)setPrimaryButton:(VUIButton *)arg1 ;
-(void)setSecondaryButton:(VUIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(_TVImageView *)imageView;
-(void)setImagePosition:(long long)arg1 ;
-(VUILabel *)subTitleLabel;
-(void)setSubTitleLabel:(VUILabel *)arg1 ;
-(void)setDescriptionTextView:(VUIFocusableTextView *)arg1 ;
-(VUIFocusableTextView *)descriptionTextView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUIButton *)primaryButton;
-(VUIButton *)secondaryButton;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(TVImageLayout *)imageLayout;
-(void)prepareForCellReuse;
-(void)setImageLayout:(TVImageLayout *)arg1 ;
-(_TVMonogramView *)monogramView;
-(void)setMonogramView:(_TVMonogramView *)arg1 ;
-(TVImageLayout *)monogramImageLayout;
-(void)setMonogramImageLayout:(TVImageLayout *)arg1 ;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
@end

