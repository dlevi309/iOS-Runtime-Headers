/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/

#import <CoreSuggestionsUI/CoreSuggestionsUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/SGTappableTextViewDelegate.h>

@class SGTappableTextView, NSString, NSAttributedString, UILabel, UIButton, UIImageView, NSLayoutConstraint, NSArray, NSLayoutXAxisAnchor;

@interface SGBanner : UIControl <SGTappableTextViewDelegate> {

	SGTappableTextView* _subtitleLabel;
	NSString* _action;
	BOOL _needsSubtitleUpdate;
	NSString* _subtitle;
	NSAttributedString* _attributedSubtitle;
	UILabel* _titleLabel;
	UIButton* _closeButton;
	UIImageView* _secondImageView;
	UIImageView* _firstImageView;
	UIImageView* _disclosureImageView;
	NSLayoutConstraint* _imageCenterYConstraint;
	NSLayoutConstraint* _verticalSpaceBetweenImagesConstraint;
	NSLayoutConstraint* _horisontalSpaceBetweenImagesConstraint;
	NSLayoutConstraint* _titleLeadingConstraint;
	NSLayoutConstraint* _titleBaselineConstraint;
	NSLayoutConstraint* _subtitleBaselineConstraint;
	NSLayoutConstraint* _closeButtonHorizontalPositionConstraint;
	NSLayoutConstraint* _closeButtonWidthConstraint;
	NSLayoutConstraint* _disclosureImageViewHorizontalPositionConstraint;
	long long _currentStyle;
	NSArray* _images;
	long long _accessoryType;
	NSLayoutXAxisAnchor* _closeButtonCenterXAnchor;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSAttributedString * attributedSubtitle; 
@property (nonatomic,copy) NSString * action; 
@property (nonatomic,copy) NSArray * images;                                              //@synthesize images=_images - In the implementation block
@property (assign,nonatomic) long long accessoryType;                                     //@synthesize accessoryType=_accessoryType - In the implementation block
@property (nonatomic,retain) NSLayoutXAxisAnchor * closeButtonCenterXAnchor;              //@synthesize closeButtonCenterXAnchor=_closeButtonCenterXAnchor - In the implementation block
@property (nonatomic,readonly) CGRect popoverSourceRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_disclosureChevronImage;
+(id)_titleFont;
+(id)_subtitleFont;
+(id)_cancelImage;
+(double)_interLabelBaselineDeltaConstant;
+(double)_topMarginConstant;
+(double)_imageCenterOffsetFromTitleBaselineConstant;
-(void)_updateBackground;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setImages:(NSArray *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(CGRect)popoverSourceRect;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(id)_subtitleColor;
-(void)layoutSubviews;
-(void)updateConstraints;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateFonts;
-(void)setAccessoryType:(long long)arg1 ;
-(NSArray *)images;
-(void)_setupViews;
-(void)setSubtitle:(NSString *)arg1 ;
-(long long)accessoryType;
-(id)_titleColor;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setAttributedSubtitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedSubtitle;
-(void)setCloseButtonCenterXAnchor:(NSLayoutXAxisAnchor *)arg1 ;
-(void)_updateCurrentAppearance;
-(void)tappableTextView:(id)arg1 didTapRange:(NSRange)arg2 ;
-(void)_installLayoutConstraints;
-(void)_onAction:(id)arg1 ;
-(void)_onDismiss:(id)arg1 ;
-(NSLayoutXAxisAnchor *)closeButtonCenterXAnchor;
@end

