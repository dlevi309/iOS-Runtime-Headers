/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/

#import <BaseBoardUI/BaseBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString, UIFont, UIColor;

@interface BSUIEmojiLabelView : UIView {

	UILabel* _contentLabel;
	UILabel* _emojiLabel;
	NSString* _rawText;

}

@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (nonatomic,readonly) UILabel * contentLabel;                    //@synthesize contentLabel=_contentLabel - In the implementation block
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIFont *)font;
-(id)_newLabel;
-(long long)numberOfLines;
-(UIColor *)textColor;
-(BOOL)adjustsFontSizeToFitWidth;
-(long long)textAlignment;
-(double)_firstLineBaselineOffsetFromBoundsTop;
-(UILabel *)contentLabel;
@end

