/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UIFont, LPPointUnit, LPGlyphStyle, LPPadding;

@interface LPTextViewStyle : NSObject <NSCopying> {

	BOOL _shouldScaleMaximumLinesWithDynamicType;
	unsigned _maximumLines;
	UIColor* _color;
	UIFont* _font;
	long long _textAlignment;
	LPPointUnit* _firstLineLeading;
	LPPointUnit* _lastLineDescent;
	LPGlyphStyle* _leadingGlyph;
	LPPadding* _padding;

}

@property (nonatomic,retain) UIColor * color;                                          //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIFont * font;                                            //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) unsigned maximumLines;                                    //@synthesize maximumLines=_maximumLines - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                  //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,retain) LPPointUnit * firstLineLeading;                           //@synthesize firstLineLeading=_firstLineLeading - In the implementation block
@property (nonatomic,retain) LPPointUnit * lastLineDescent;                            //@synthesize lastLineDescent=_lastLineDescent - In the implementation block
@property (nonatomic,retain) LPGlyphStyle * leadingGlyph;                              //@synthesize leadingGlyph=_leadingGlyph - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * padding;                             //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) BOOL shouldScaleMaximumLinesWithDynamicType;              //@synthesize shouldScaleMaximumLinesWithDynamicType=_shouldScaleMaximumLinesWithDynamicType - In the implementation block
-(id)initWithPlatform:(long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIColor *)color;
-(LPPointUnit *)firstLineLeading;
-(LPPointUnit *)lastLineDescent;
-(long long)textAlignment;
-(id)adjustedForString:(id)arg1 ;
-(LPGlyphStyle *)leadingGlyph;
-(unsigned)maximumLines;
-(void)setMaximumLines:(unsigned)arg1 ;
-(void)setFirstLineLeading:(LPPointUnit *)arg1 ;
-(void)setLastLineDescent:(LPPointUnit *)arg1 ;
-(void)setLeadingGlyph:(LPGlyphStyle *)arg1 ;
-(BOOL)shouldScaleMaximumLinesWithDynamicType;
-(void)setShouldScaleMaximumLinesWithDynamicType:(BOOL)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(LPPadding *)padding;
-(void)setTextAlignment:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIFont *)font;
@end

