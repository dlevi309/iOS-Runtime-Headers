/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADProperties.h>
#import <libobjc.A.dylib/OADEffectsParent.h>

@class NSString, OADHyperlink, OADFill, OADStroke, NSArray, OADColor;

@interface OADCharacterProperties : OADProperties <OADEffectsParent> {

	NSString* mLatinFont;
	NSString* mEastAsianFont;
	NSString* mBidiFont;
	NSString* mHAnsiFont;
	NSString* mSymbolFont;
	OADHyperlink* mClickHyperlink;
	OADHyperlink* mHoverHyperlink;
	OADFill* mFill;
	OADStroke* mStroke;
	NSArray* mEffects;
	OADFill* mUnderlineFill;
	OADStroke* mUnderlineStroke;
	OADColor* mHighlight;
	float mOpacity;
	float mSize;
	float mSpacing;
	float mBaseline;
	unsigned char mUnderlineType;
	unsigned char mFormatType;
	unsigned char mFormatKerningType;
	unsigned char mStrikeThroughType;
	unsigned char mCaps;
	int mLanguage;
	unsigned mHasUnderlineFill : 1;
	unsigned mHasUnderlineStroke : 1;
	unsigned mHasHighlight : 1;
	unsigned mHasOpacity : 1;
	unsigned mHasIsBold : 1;
	unsigned mIsBold : 1;
	unsigned mHasIsItalic : 1;
	unsigned mIsItalic : 1;
	unsigned mHasUnderlineType : 1;
	unsigned mHasFormatType : 1;
	unsigned mHasFormatKerningType : 1;
	unsigned mHasStrikeThroughType : 1;
	unsigned mHasSize : 1;
	unsigned mHasSpacing : 1;
	unsigned mHasKerning : 1;
	unsigned mHasIsVerticalText : 1;
	unsigned mIsVerticalText : 1;
	unsigned mHasIsRightToLeft : 1;
	unsigned mIsRightToLeft : 1;
	unsigned mHasBaseline : 1;
	unsigned mHasIsHorizontalNormalized : 1;
	unsigned mIsHorizontalNormalized : 1;
	unsigned mHasCaps : 1;
	unsigned mHasLanguage : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(float)size;
-(float)spacing;
-(void)setSize:(float)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(int)language;
-(void)setLanguage:(int)arg1 ;
-(void)setSpacing:(float)arg1 ;
-(BOOL)hasBaseline;
-(id)highlight;
-(id)stroke;
-(id)fill;
-(BOOL)isBold;
-(id)symbolFont;
-(void)setBaseline:(float)arg1 ;
-(float)baseline;
-(void)setHighlight:(id)arg1 ;
-(BOOL)hasSize;
-(BOOL)hasLanguage;
-(id)initWithDefaults;
-(BOOL)isRightToLeft;
-(void)setIsRightToLeft:(BOOL)arg1 ;
-(void)setIsBold:(BOOL)arg1 ;
-(BOOL)hasIsBold;
-(BOOL)hasStroke;
-(BOOL)hasFill;
-(BOOL)hasEffects;
-(void)setStroke:(id)arg1 ;
-(unsigned char)caps;
-(void)setFill:(id)arg1 ;
-(unsigned char)formatType;
-(void)setCaps:(unsigned char)arg1 ;
-(id)effects;
-(void)setEffects:(id)arg1 ;
-(id)clickHyperlink;
-(BOOL)isItalic;
-(id)latinFont;
-(BOOL)hasLatinFont;
-(id)eastAsianFont;
-(id)bidiFont;
-(unsigned char)underlineType;
-(BOOL)hasStrikeThroughType;
-(unsigned char)strikeThroughType;
-(BOOL)hasCaps;
-(BOOL)hasSpacing;
-(void)setUnderlineType:(unsigned char)arg1 ;
-(void)setIsItalic:(BOOL)arg1 ;
-(void)setIsVerticalText:(BOOL)arg1 ;
-(void)setStrikeThroughType:(unsigned char)arg1 ;
-(void)setUnderlineFill:(id)arg1 ;
-(void)setUnderlineStroke:(id)arg1 ;
-(void)setClickHyperlink:(id)arg1 ;
-(void)setHoverHyperlink:(id)arg1 ;
-(void)setFormatType:(unsigned char)arg1 ;
-(void)setLatinFont:(id)arg1 ;
-(void)setEastAsianFont:(id)arg1 ;
-(void)setBidiFont:(id)arg1 ;
-(void)setHAnsiFont:(id)arg1 ;
-(void)setSymbolFont:(id)arg1 ;
-(void)setFormatKerningType:(unsigned char)arg1 ;
-(void)setIsHorizontalNormalized:(BOOL)arg1 ;
-(BOOL)hasOpacity;
-(BOOL)hasUnderlineType;
-(BOOL)hasHighlight;
-(BOOL)hasUnderlineFill;
-(BOOL)hasUnderlineStroke;
-(BOOL)hasIsItalic;
-(BOOL)hasFormatType;
-(BOOL)hasFormatKerningType;
-(BOOL)hasIsVerticalText;
-(BOOL)hasIsRightToLeft;
-(BOOL)hasIsHorizontalNormalized;
-(BOOL)hasEastAsianFont;
-(BOOL)hasBidiFont;
-(BOOL)hasHAnsiFont;
-(BOOL)hasSymbolFont;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(id)hansiFont;
-(id)underlineFill;
-(BOOL)isAnythingOverridden;
-(id)underlineStroke;
-(unsigned char)formatKerningType;
-(BOOL)isVerticalText;
-(BOOL)isHorizontalNormalized;
-(void)overrideWithCharacterProperties:(id)arg1 ;
-(id)hoverHyperlink;
-(void)removeUnnecessaryOverrides;
-(BOOL)isAnyCharacterPropertyOverridden;
-(void)overrideWithProperties:(id)arg1 ;
@end

