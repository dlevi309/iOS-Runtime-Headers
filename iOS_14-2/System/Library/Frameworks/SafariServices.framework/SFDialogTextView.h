/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(id)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateText;
-(UIEdgeInsets)contentInsets;
-(void)_updateFontStyling;
-(void)_updateTextContainerInset;
-(void)setTitle:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)flashScrollIndicators;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
@end

