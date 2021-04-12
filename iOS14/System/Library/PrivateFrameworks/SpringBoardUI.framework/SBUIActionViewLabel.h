/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)mt_removeAllVisualStyling;
-(id)viewForLastBaselineLayout;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setNumberOfLines:(long long)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setFont:(UIFont *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)numberOfLines;
-(UIFont *)font;
-(void)_mt_applyVisualStyling:(id)arg1 ;
@end

