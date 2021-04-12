/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIColor, UILabel, UIFont;

@interface SBUIActionViewLabel : UIView {

	NSString* _text;
	UIColor* _textColor;
	UILabel* _label;
	UILabel* _emojiLabel;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) long long numberOfLines; 
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(UIFont *)font;
-(UIEdgeInsets)alignmentRectInsets;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(long long)numberOfLines;
-(UIColor *)textColor;
-(long long)textAlignment;
-(void)mt_removeAllVisualStyling;
-(void)_mt_applyVisualStyling:(id)arg1 ;
@end

