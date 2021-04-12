/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,retain) UILabel * overlayLabelForNonColoredGlyphs;              //@synthesize overlayLabelForNonColoredGlyphs=_overlayLabelForNonColoredGlyphs - In the implementation block
@property (retain) UIFont * originalFont;                                            //@synthesize originalFont=_originalFont - In the implementation block
@property (assign) BOOL hasCustomTextColor;                                          //@synthesize hasCustomTextColor=_hasCustomTextColor - In the implementation block
@property (assign) BOOL attributedTextExplicitelySet;                                //@synthesize attributedTextExplicitelySet=_attributedTextExplicitelySet - In the implementation block
@property (assign) BOOL attributedTextUpdateDisabled;                                //@synthesize attributedTextUpdateDisabled=_attributedTextUpdateDisabled - In the implementation block
@property (assign) BOOL attributedTextUpdateSkipped;                                 //@synthesize attributedTextUpdateSkipped=_attributedTextUpdateSkipped - In the implementation block
@property (assign,nonatomic) unsigned long long prominence;                          //@synthesize prominence=_prominence - In the implementation block
@property (nonatomic,retain) TLKMultilineText * multilineText; 
@property (nonatomic,retain) TLKRichText * richText;                                 //@synthesize richText=_richText - In the implementation block
@property (nonatomic,retain) TLKFormattedText * formattedText; 
@property (assign,nonatomic) BOOL supportsColorGlyphs;                               //@synthesize supportsColorGlyphs=_supportsColorGlyphs - In the implementation block
+(id)primaryLabel;
+(id)secondaryLabel;
+(id)tertiaryLabel;
+(id)genericLabel;
-(id)init;
-(void)setText:(id)arg1 ;
-(TLKFormattedText *)formattedText;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setAttributedText:(id)arg1 ;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(unsigned long long)prominence;
-(TLKRichText *)richText;
-(void)updateWithString:(id)arg1 ;
-(void)setMultilineText:(TLKMultilineText *)arg1 ;
-(void)setProminence:(unsigned long long)arg1 ;
-(void)setSupportsColorGlyphs:(BOOL)arg1 ;
-(void)setFormattedText:(TLKFormattedText *)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setRichText:(TLKRichText *)arg1 ;
-(id)initWithProminence:(unsigned long long)arg1 ;
-(UILabel *)overlayLabelForNonColoredGlyphs;
-(void)setFont:(id)arg1 keepOriginal:(BOOL)arg2 ;
-(void)updateAttributedText;
-(void)updateWithAttributedString:(id)arg1 ;
-(BOOL)hasCustomTextColor;
-(BOOL)attributedTextExplicitelySet;
-(void)setHasCustomTextColor:(BOOL)arg1 ;
-(void)setAttributedTextUpdateDisabled:(BOOL)arg1 ;
-(BOOL)attributedTextUpdateSkipped;
-(void)setAttributedTextUpdateSkipped:(BOOL)arg1 ;
-(BOOL)attributedTextUpdateDisabled;
-(BOOL)supportsColorGlyphs;
-(void)setOverlayLabelForNonColoredGlyphs:(UILabel *)arg1 ;
-(void)setAttributedTextExplicitelySet:(BOOL)arg1 ;
-(TLKMultilineText *)multilineText;
-(UIFont *)originalFont;
-(void)setOriginalFont:(UIFont *)arg1 ;
@end

