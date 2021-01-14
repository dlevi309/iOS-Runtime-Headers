/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <UIKitCore/UIView.h>

@class UITextView, UILabel;

@interface SLSheetTextComposeView : UIView {

	UITextView* _textView;
	UILabel* _placeholderLabel;
	double _textRightInset;

}

@property (nonatomic,retain) UITextView * textView;                   //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UILabel * placeholderLabel;              //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (assign,nonatomic) double textRightInset;                   //@synthesize textRightInset=_textRightInset - In the implementation block
-(UITextView *)textView;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(UILabel *)placeholderLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTextRightInset:(double)arg1 ;
-(void)_assembleView;
-(double)textRightInset;
-(void)restoreKeyboard;
@end

