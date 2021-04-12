/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/

#import <BaseBoardUI/BaseBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString, UIFont, UIColor;

@interface BSUIEmojiLabelView : UIView {

	UILabel* _emojiLabel;
	NSString* _rawText;
	UILabel* _contentLabel;

}

@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) CGRect boundsForBaselines; 
@property (nonatomic,readonly) UILabel * contentLabel;                    //@synthesize contentLabel=_contentLabel - In the implementation block
-(void)mt_removeAllVisualStyling;
-(void)mt_applyVisualStyling:(id)arg1 ;
-(long long)lineBreakMode;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)setText:(NSString *)arg1 ;
-(double)_baselineOffsetFromBottom;
-(CGRect)boundsForBaselines;
-(void)setBoundsForBaselines:(CGRect)arg1 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_firstLineBaselineOffsetFromBoundsTop;
-(NSString *)text;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(UILabel *)contentLabel;
-(long long)numberOfLines;
-(UIFont *)font;
@end

