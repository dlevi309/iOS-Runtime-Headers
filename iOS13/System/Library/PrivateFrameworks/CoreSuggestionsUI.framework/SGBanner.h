/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_titleFont;
+(id)_subtitleFont;
+(id)_disclosureChevronImage;
+(double)_interLabelBaselineDeltaConstant;
+(double)_topMarginConstant;
+(double)_imageCenterOffsetFromTitleBaselineConstant;
+(id)_cancelImage;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)action;
-(NSArray *)images;
-(NSString *)subtitle;
-(void)setImages:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)setAction:(NSString *)arg1 ;
-(void)_updateBackground;
-(long long)accessoryType;
-(void)setAccessoryType:(long long)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(id)_titleColor;
-(void)_updateFonts;
-(void)_setupViews;
-(CGRect)popoverSourceRect;
-(id)_subtitleColor;
-(void)_updateCurrentAppearance;
-(void)tappableTextView:(id)arg1 didTapRange:(NSRange)arg2 ;
-(void)_installLayoutConstraints;
-(void)setCloseButtonCenterXAnchor:(NSLayoutXAxisAnchor *)arg1 ;
-(NSAttributedString *)attributedSubtitle;
-(void)setAttributedSubtitle:(NSAttributedString *)arg1 ;
-(void)_onAction:(id)arg1 ;
-(void)_onDismiss:(id)arg1 ;
-(NSLayoutXAxisAnchor *)closeButtonCenterXAnchor;
@end

