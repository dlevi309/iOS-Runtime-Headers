/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>

@class TLKMultilineText, UIColor, UIFont, TLKLabel;

@interface TLKEmbossedLabel : TLKView {

	UIEdgeInsets _customInsets;
	BOOL _shouldBadge;
	TLKMultilineText* _text;
	UIColor* _color;
	UIFont* _font;
	TLKLabel* _label;
	CGSize _textOffset;

}

@property (nonatomic,retain) TLKLabel * label;                            //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL shouldBadge;                            //@synthesize shouldBadge=_shouldBadge - In the implementation block
@property (nonatomic,retain) TLKMultilineText * text;                     //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGSize textOffset;                           //@synthesize textOffset=_textOffset - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (nonatomic,retain) UIColor * color;                             //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIFont * font;                               //@synthesize font=_font - In the implementation block
+(Class)layerClass;
-(id)init;
-(UIColor *)color;
-(void)setLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)label;
-(void)setColor:(UIColor *)arg1 ;
-(TLKMultilineText *)text;
-(void)setText:(TLKMultilineText *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(void)didMoveToWindow;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setTextOffset:(CGSize)arg1 ;
-(CGSize)textOffset;
-(BOOL)shouldBadge;
-(void)setShouldBadge:(BOOL)arg1 ;
-(CGSize)effectiveLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)observedPropertiesChanged;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setText:(id)arg1 font:(id)arg2 customInsets:(UIEdgeInsets)arg3 badge:(BOOL)arg4 ;
@end

