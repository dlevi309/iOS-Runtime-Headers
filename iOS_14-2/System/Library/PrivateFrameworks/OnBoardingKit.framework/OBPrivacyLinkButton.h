/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImageView, UITextView, UILabel, UIView, NSString;

@interface OBPrivacyLinkButton : UIButton {

	BOOL _largeIcon;
	UIImageView* _iconView;
	UITextView* _textView;
	UILabel* _buttonLabel;
	UIView* _containerView;
	NSString* _captionText;
	NSString* _buttonText;
	CGSize _contentSize;

}

@property (readonly) UIImageView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (readonly) UITextView * textView;               //@synthesize textView=_textView - In the implementation block
@property (readonly) UILabel * buttonLabel;               //@synthesize buttonLabel=_buttonLabel - In the implementation block
@property (readonly) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (readonly) NSString * captionText;              //@synthesize captionText=_captionText - In the implementation block
@property (readonly) NSString * buttonText;               //@synthesize buttonText=_buttonText - In the implementation block
@property (assign) BOOL largeIcon;                        //@synthesize largeIcon=_largeIcon - In the implementation block
@property (assign) CGSize contentSize;                    //@synthesize contentSize=_contentSize - In the implementation block
-(UITextView *)textView;
-(void)setContentSize:(CGSize)arg1 ;
-(id)_font;
-(id)viewForLastBaselineLayout;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(id)buttonColor;
-(NSString *)buttonText;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)contentSize;
-(id)initWithCaption:(id)arg1 buttonText:(id)arg2 image:(id)arg3 imageSize:(CGSize)arg4 useLargeIcon:(BOOL)arg5 ;
-(UILabel *)buttonLabel;
-(BOOL)largeIcon;
-(void)layoutSubviews;
-(UIImageView *)iconView;
-(UIView *)containerView;
-(NSString *)captionText;
-(id)labelText;
-(BOOL)_isButtonAboveCaptionText;
-(NSRange)_rangeForButtonText;
-(void)_updateButtonColorWithColor:(id)arg1 ;
-(id)titleForState:(unsigned long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setLargeIcon:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

