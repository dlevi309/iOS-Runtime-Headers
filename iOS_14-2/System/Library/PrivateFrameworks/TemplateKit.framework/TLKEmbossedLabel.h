/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>

@class TLKMultilineText, UIColor, UIFont, TLKLabel, TLKProminenceView;

@interface TLKEmbossedLabel : TLKView {

	BOOL _shouldBadge;
	TLKMultilineText* _text;
	UIColor* _color;
	UIFont* _font;
	TLKLabel* _label;
	TLKProminenceView* _backgroundView;
	CGSize _textOffset;
	CGSize _customInsetSize;

}

@property (assign,nonatomic) CGSize customInsetSize;                          //@synthesize customInsetSize=_customInsetSize - In the implementation block
@property (nonatomic,retain) TLKLabel * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) TLKProminenceView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) BOOL shouldBadge;                                //@synthesize shouldBadge=_shouldBadge - In the implementation block
@property (nonatomic,retain) TLKMultilineText * text;                         //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGSize textOffset;                               //@synthesize textOffset=_textOffset - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (nonatomic,retain) UIColor * color;                                 //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIFont * font;                                   //@synthesize font=_font - In the implementation block
-(id)init;
-(CGSize)customInsetSize;
-(void)setCustomInsetSize:(CGSize)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setBackgroundView:(TLKProminenceView *)arg1 ;
-(UIColor *)color;
-(TLKProminenceView *)backgroundView;
-(void)setShouldBadge:(BOOL)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)setText:(TLKMultilineText *)arg1 ;
-(void)layoutSubviews;
-(CGSize)effectiveLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(CGSize)textOffset;
-(TLKMultilineText *)text;
-(void)setTextOffset:(CGSize)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setLabel:(TLKLabel *)arg1 ;
-(void)observedPropertiesChanged;
-(double)effectiveBaselineOffsetFromBottom;
-(double)effectiveFirstBaselineOffsetFromTop;
-(BOOL)shouldBadge;
-(void)setText:(id)arg1 font:(id)arg2 customInsetSize:(CGSize)arg3 badge:(BOOL)arg4 ;
-(TLKLabel *)label;
-(UIFont *)font;
@end

