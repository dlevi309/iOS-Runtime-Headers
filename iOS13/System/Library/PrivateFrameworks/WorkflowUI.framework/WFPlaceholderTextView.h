/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UITextView.h>

@class UILabel, NSString, NSAttributedString;

@interface WFPlaceholderTextView : UITextView {

	UILabel* _placeholderLabel;

}

@property (assign,nonatomic,__weak) UILabel * placeholderLabel;                     //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSAttributedString * attributedPlaceholder; 
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTypingAttributes:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(NSString *)placeholder;
-(NSAttributedString *)attributedPlaceholder;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
-(void)textDidChange;
-(void)setTextContainerInset:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(void)invalidatePlaceholderFont;
@end

