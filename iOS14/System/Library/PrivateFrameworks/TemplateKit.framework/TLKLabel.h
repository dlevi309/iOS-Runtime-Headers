/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <UIKitCore/UILabel.h>

@class TLKRichText, UILabel, UIFont, TLKMultilineText, TLKFormattedText;

@interface TLKLabel : UILabel {

	BOOL _supportsColorGlyphs;
	BOOL _hasCustomTextColor;
	BOOL _attributedTextExplicitelySet;
	BOOL _attributedTextUpdateDisabled;
	BOOL _attributedTextUpdateSkipped;
	unsigned long long _prominence;
	TLKRichText* _richText;
	UILabel* _overlayLabelForNonColoredGlyphs;
	UIFont* _originalFont;
	unsigned long long _adjustedProminence;

}

@property (nonatomic,retain) UILabel * overlayLabelForNonColoredGlyphs;              //@synthesize overlayLabelForNonColoredGlyphs=_overlayLabelForNonColoredGlyphs - In the implementation block
@property (retain) UIFont * originalFont;                                            //@synthesize originalFont=_originalFont - In the implementation block
@property (assign) BOOL hasCustomTextColor;                                          //@synthesize hasCustomTextColor=_hasCustomTextColor - In the implementation block
@property (assign) BOOL attributedTextExplicitelySet;                                //@synthesize attributedTextExplicitelySet=_attributedTextExplicitelySet - In the implementation block
@property (assign) BOOL attributedTextUpdateDisabled;                                //@synthesize attributedTextUpdateDisabled=_attributedTextUpdateDisabled - In the implementation block
@property (assign) BOOL attributedTextUpdateSkipped;                                 //@synthesize attributedTextUpdateSkipped=_attributedTextUpdateSkipped - In the implementation block
@property (assign) unsigned long long adjustedProminence;                            //@synthesize adjustedProminence=_adjustedProminence - In the implementation block
@property (assign,nonatomic) unsigned long long prominence;                          //@synthesize prominence=_prominence - In the implementation block
@property (nonatomic,retain) TLKMultilineText * multilineText; 
@property (nonatomic,retain) TLKRichText * richText;                                 //@synthesize richText=_richText - In the implementation block
@property (nonatomic,retain) TLKFormattedText * formattedText; 
@property (assign,nonatomic) BOOL supportsColorGlyphs;                               //@synthesize supportsColorGlyphs=_supportsColorGlyphs - In the implementation block
+(id)primaryLabel;
+(id)tertiaryLabel;
+(id)genericLabel;
+(id)secondaryLabel;
-(void)setAdjustedProminence:(unsigned long long)arg1 ;
-(BOOL)attributedTextUpdateDisabled;
-(void)setProminence:(unsigned long long)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)setFont:(id)arg1 keepOriginal:(BOOL)arg2 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)init;
-(BOOL)supportsColorGlyphs;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(TLKFormattedText *)formattedText;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(TLKMultilineText *)multilineText;
-(UILabel *)overlayLabelForNonColoredGlyphs;
-(void)updateAttributedText;
-(void)setTextColor:(id)arg1 ;
-(TLKRichText *)richText;
-(unsigned long long)prominence;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setOriginalFont:(UIFont *)arg1 ;
-(void)setOverlayLabelForNonColoredGlyphs:(UILabel *)arg1 ;
-(void)setHasCustomTextColor:(BOOL)arg1 ;
-(void)setAttributedTextUpdateSkipped:(BOOL)arg1 ;
-(void)updateAdjustedProminence;
-(UIFont *)originalFont;
-(void)setFormattedText:(TLKFormattedText *)arg1 ;
-(BOOL)attributedTextExplicitelySet;
-(BOOL)hasEmphasizedFormattingInRichText;
-(void)updateWithString:(id)arg1 ;
-(BOOL)hasCustomTextColor;
-(BOOL)attributedTextUpdateSkipped;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAttributedTextUpdateDisabled:(BOOL)arg1 ;
-(void)setAttributedTextExplicitelySet:(BOOL)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)setRichText:(TLKRichText *)arg1 ;
-(void)setMultilineText:(TLKMultilineText *)arg1 ;
-(void)setSupportsColorGlyphs:(BOOL)arg1 ;
-(id)initWithProminence:(unsigned long long)arg1 ;
-(void)updateWithAttributedString:(id)arg1 ;
-(unsigned long long)adjustedProminence;
@end

