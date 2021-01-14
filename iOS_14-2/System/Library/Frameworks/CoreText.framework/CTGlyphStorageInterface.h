/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
*/


#import <CoreText/CoreText-Structs.h>
@interface CTGlyphStorageInterface : NSObject {

	long long _glyphCount;
	unsigned short* _glyphs;
	CGSize* _advances;
	unsigned* _props;
	long long* _stringIndexes;
	long long* _absorbedCounts;
	CGPoint* _origins;

}
-(void)popGlyph:(long long)arg1 ;
-(CTGlyphStorageRef)createCopy:(SCD_Struct_CT0)arg1 ;
-(void)setAbsorbedCount:(long long)arg1 forIndex:(long long)arg2 ;
-(void)setProps:(unsigned)arg1 forIndex:(long long)arg2 ;
-(void)pushGlyph:(long long)arg1 ;
-(void)swapGlyph:(long long)arg1 withIndex:(long long)arg2 ;
-(void)getCustomAdvance:(CGSize*)arg1 forIndex:(long long)arg2 ;
-(void)insertGlyphs:(SCD_Struct_CT0)arg1 ;
-(void)initGlyphStack:(long long)arg1 ;
-(void)setStringIndex:(long long)arg1 forIndex:(long long)arg2 ;
-(void)disposeGlyphStack;
-(void)setGlyphID:(unsigned short)arg1 forIndex:(long long)arg2 ;
-(void)moveGlyphsTo:(long long)arg1 from:(SCD_Struct_CT0)arg2 ;
-(void)setAdvance:(CGSize)arg1 forIndex:(long long)arg2 ;
@end

