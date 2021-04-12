/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setTextView:(UITextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(UILabel *)placeholderLabel;
-(void)setTextRightInset:(double)arg1 ;
-(void)_assembleView;
-(double)textRightInset;
-(void)restoreKeyboard;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
@end

