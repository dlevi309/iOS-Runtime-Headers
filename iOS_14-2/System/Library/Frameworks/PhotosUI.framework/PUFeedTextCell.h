/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedCell.h>

@class NSAttributedString, UIImage, UILabel, UIImageView, UIButton;

@interface PUFeedTextCell : PUFeedCell {

	BOOL _shouldUseOpaqueBackground;
	BOOL _shouldUseAccessibilityLayout;
	NSAttributedString* _attributedText;
	long long _numberOfTextLines;
	double _textDetailTextSpacing;
	NSAttributedString* _attributedDetailText;
	long long _numberOfDetailTextLines;
	long long _textAlignment;
	UIImage* _iconImage;
	long long _iconLocation;
	long long _tappableArea;
	long long _buttonType;
	long long _buttonSize;
	long long _buttonHorizontalAlignment;
	double _buttonPadding;
	UILabel* __label;
	UILabel* __detailLabel;
	UIImageView* __iconImageView;
	UIButton* __button;
	UIOffset _iconOffset;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _iconPadding;

}

@property (setter=_setLabel:,nonatomic,retain) UILabel * _label;                                  //@synthesize _label=__label - In the implementation block
@property (setter=_setDetailLabel:,nonatomic,retain) UILabel * _detailLabel;                      //@synthesize _detailLabel=__detailLabel - In the implementation block
@property (setter=_setIconImageView:,nonatomic,retain) UIImageView * _iconImageView;              //@synthesize _iconImageView=__iconImageView - In the implementation block
@property (setter=_setButton:,nonatomic,retain) UIButton * _button;                               //@synthesize _button=__button - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAccessibilityLayout;                                   //@synthesize shouldUseAccessibilityLayout=_shouldUseAccessibilityLayout - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                          //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedText;                                 //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) long long numberOfTextLines;                                         //@synthesize numberOfTextLines=_numberOfTextLines - In the implementation block
@property (assign,nonatomic) double textDetailTextSpacing;                                        //@synthesize textDetailTextSpacing=_textDetailTextSpacing - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedDetailText;                           //@synthesize attributedDetailText=_attributedDetailText - In the implementation block
@property (assign,nonatomic) long long numberOfDetailTextLines;                                   //@synthesize numberOfDetailTextLines=_numberOfDetailTextLines - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                             //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                                                 //@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) long long iconLocation;                                              //@synthesize iconLocation=_iconLocation - In the implementation block
@property (assign,nonatomic) UIEdgeInsets iconPadding;                                            //@synthesize iconPadding=_iconPadding - In the implementation block
@property (assign,nonatomic) UIOffset iconOffset;                                                 //@synthesize iconOffset=_iconOffset - In the implementation block
@property (assign,nonatomic) long long tappableArea;                                              //@synthesize tappableArea=_tappableArea - In the implementation block
@property (assign,nonatomic) long long buttonType;                                                //@synthesize buttonType=_buttonType - In the implementation block
@property (assign,nonatomic) long long buttonSize;                                                //@synthesize buttonSize=_buttonSize - In the implementation block
@property (assign,nonatomic) long long buttonHorizontalAlignment;                                 //@synthesize buttonHorizontalAlignment=_buttonHorizontalAlignment - In the implementation block
@property (assign,nonatomic) double buttonPadding;                                                //@synthesize buttonPadding=_buttonPadding - In the implementation block
@property (assign,nonatomic) BOOL shouldUseOpaqueBackground;                                      //@synthesize shouldUseOpaqueBackground=_shouldUseOpaqueBackground - In the implementation block
-(UILabel *)_label;
-(id)_delegate;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIButton *)_button;
-(NSAttributedString *)attributedText;
-(void)setIconLocation:(long long)arg1 ;
-(void)setButtonType:(long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(UILabel *)_detailLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_handleButton:(id)arg1 ;
-(UIImage *)iconImage;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(UIEdgeInsets)contentInsets;
-(UIImageView *)_iconImageView;
-(long long)iconLocation;
-(long long)buttonSize;
-(void)setButtonPadding:(double)arg1 ;
-(BOOL)shouldUseAccessibilityLayout;
-(long long)textAlignment;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)_iconSize;
-(void)setIconImage:(UIImage *)arg1 ;
-(BOOL)shouldRecognizerTap:(id)arg1 ;
-(void)_setLabel:(id)arg1 ;
-(double)buttonPadding;
-(void)setTextAlignment:(long long)arg1 ;
-(void)_updateIconImageView;
-(void)_updateButtonAnimated:(BOOL)arg1 ;
-(void)_setIconImageView:(id)arg1 ;
-(void)_invalidateCachedTextSizes;
-(UIEdgeInsets)iconPadding;
-(void)setButtonSize:(long long)arg1 ;
-(void)_updateShouldUseAccessibilityLayout;
-(void)setNumberOfTextLines:(long long)arg1 ;
-(void)setTextDetailTextSpacing:(double)arg1 ;
-(void)setButtonHorizontalAlignment:(long long)arg1 ;
-(void)setShouldUseOpaqueBackground:(BOOL)arg1 ;
-(void)_updateDetailLabel;
-(void)_setDetailLabel:(id)arg1 ;
-(void)setAttributedDetailText:(NSAttributedString *)arg1 ;
-(void)setNumberOfDetailTextLines:(long long)arg1 ;
-(void)setIconPadding:(UIEdgeInsets)arg1 ;
-(void)setButtonType:(long long)arg1 animated:(BOOL)arg2 ;
-(CGSize)_textSizeForButtonWithType:(long long)arg1 size:(long long)arg2 ;
-(CGSize)_maximumPossibleTextSizeForButtonWithType:(long long)arg1 size:(long long)arg2 ;
-(void)_configureButton:(id)arg1 withType:(long long)arg2 size:(long long)arg3 animated:(BOOL)arg4 ;
-(void)_updateLabelsBackgroundColor;
-(id)_labelBackgroundColor;
-(long long)numberOfTextLines;
-(UIOffset)iconOffset;
-(double)textDetailTextSpacing;
-(NSAttributedString *)attributedDetailText;
-(long long)numberOfDetailTextLines;
-(void)setIconOffset:(UIOffset)arg1 ;
-(long long)tappableArea;
-(void)setTappableArea:(long long)arg1 ;
-(long long)buttonHorizontalAlignment;
-(BOOL)shouldUseOpaqueBackground;
-(void)setShouldUseAccessibilityLayout:(BOOL)arg1 ;
-(void)_setButton:(id)arg1 ;
-(long long)buttonType;
-(void)dealloc;
@end

