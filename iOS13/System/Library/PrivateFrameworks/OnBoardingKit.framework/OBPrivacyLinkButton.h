/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class OBTintInheritingImageView, UITextView, UIView, NSString;

@interface OBPrivacyLinkButton : UIButton {

	BOOL _largeIcon;
	OBTintInheritingImageView* _iconView;
	UITextView* _textView;
	UIView* _containerView;
	NSString* _captionText;
	NSString* _buttonText;
	CGSize _contentSize;

}

@property (readonly) OBTintInheritingImageView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (readonly) UITextView * textView;                             //@synthesize textView=_textView - In the implementation block
@property (readonly) UIView * containerView;                            //@synthesize containerView=_containerView - In the implementation block
@property (readonly) NSString * captionText;                            //@synthesize captionText=_captionText - In the implementation block
@property (readonly) NSString * buttonText;                             //@synthesize buttonText=_buttonText - In the implementation block
@property (assign) BOOL largeIcon;                                      //@synthesize largeIcon=_largeIcon - In the implementation block
@property (assign) CGSize contentSize;                                  //@synthesize contentSize=_contentSize - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(UITextView *)textView;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(id)viewForLastBaselineLayout;
-(id)titleForState:(unsigned long long)arg1 ;
-(OBTintInheritingImageView *)iconView;
-(id)labelText;
-(NSString *)buttonText;
-(id)_textViewFont;
-(void)_updateButtonColorWithColor:(id)arg1 ;
-(BOOL)largeIcon;
-(NSRange)_rangeForButtonText;
-(NSString *)captionText;
-(id)initWithCaption:(id)arg1 buttonText:(id)arg2 image:(id)arg3 imageSize:(CGSize)arg4 useLargeIcon:(BOOL)arg5 ;
-(void)setLargeIcon:(BOOL)arg1 ;
@end

