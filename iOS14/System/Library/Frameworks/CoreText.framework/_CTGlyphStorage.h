/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
*/


#import <CoreText/CoreText-Structs.h>
@interface _CTGlyphStorage : NSObject {

	long long _count;
	const unsigned short* _glyphs;
	const CGSize* _advances;
	const unsigned* _props;
	const long long* _stringIndices;

}
-(void)sync;
-(void)puntStringIndicesInRange:(SCD_Struct_CT0)arg1 by:(long long)arg2 ;
-(BOOL)implementsOrigins;
-(long long)attachmentCountAtIndex:(long long)arg1 ;
-(void)insertGlyphsAtRange:(SCD_Struct_CT0)arg1 ;
-(void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2 ;
-(void)setAdvance:(CGSize)arg1 atIndex:(long long)arg2 ;
-(void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2 ;
-(void*)refCon;
-(id)copyWithRange:(SCD_Struct_CT0)arg1 ;
-(void)setStringIndex:(long long)arg1 atIndex:(long long)arg2 ;
-(id)initWithCount:(long long)arg1 ;
-(void)setProps:(unsigned)arg1 atIndex:(long long)arg2 ;
-(void)initGlyphStackWithCapacity:(long long)arg1 ;
-(void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2 ;
-(void)disposeGlyphStack;
-(CGPoint)originAtIndex:(long long)arg1 ;
-(void)setOrigin:(CGPoint)arg1 atIndex:(long long)arg2 ;
-(void)pushGlyphAtIndex:(long long)arg1 ;
-(void)moveGlyphsFromRange:(SCD_Struct_CT0)arg1 toIndex:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)popGlyphAtIndex:(long long)arg1 ;
@end

