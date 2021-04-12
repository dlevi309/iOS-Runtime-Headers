/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont, NSParagraphStyle, UITextView, CAGradientLayer;

@interface SFDialogTextView : UIView {

	NSString* _title;
	NSString* _message;
	UIFont* _titleFont;
	UIFont* _messageFont;
	UIFont* _messageFontWithTitle;
	NSParagraphStyle* _titleParagraphStyle;
	UITextView* _textView;
	double _preferredMaxLayoutWidth;
	CAGradientLayer* _topGradient;
	CAGradientLayer* _bottomGradient;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)flashScrollIndicators;
-(void)_updateText;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(void)_updateFontStyling;
-(void)_updateTextContainerInset;
@end

