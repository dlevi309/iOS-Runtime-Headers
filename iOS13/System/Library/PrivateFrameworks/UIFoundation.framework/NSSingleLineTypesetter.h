/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSATSTypesetter.h>

@class __NSImmutableTextStorage;

@interface NSSingleLineTypesetter : NSATSTypesetter {

	double _lineWidth;
	NSRange _currentBufferRange;
	unsigned short* _glyphs;
	long long* _props;
	unsigned long long* _charIndexes;
	struct {
		unsigned _usesScreenFonts : 1;
		unsigned _syncAlignmentToDirection : 1;
		unsigned _mirrorsTextAlignment : 1;
		unsigned _reserved : 29;
	}  _slFlags;
	__NSImmutableTextStorage* _textStorage;

}
+(void)initialize;
+(id)singleLineTypesetter;
+(BOOL)_validateAttributes:(id)arg1 measuringOnly:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(void)done;
-(id)attributedString;
-(NSRange)glyphRangeForCharacterRange:(NSRange)arg1 actualCharacterRange:(NSRange*)arg2 ;
-(NSRange)characterRangeForGlyphRange:(NSRange)arg1 actualGlyphRange:(NSRange*)arg2 ;
-(id)substituteFontForFont:(id)arg1 ;
-(BOOL)_allowsEllipsisGlyphSubstitution;
-(void)setLineFragmentRect:(CGRect)arg1 forGlyphRange:(NSRange)arg2 usedRect:(CGRect)arg3 baselineOffset:(double)arg4 ;
-(BOOL)_mirrorsTextAlignment;
-(BOOL)synchronizesAlignmentToDirection;
-(void)getLineFragmentRect:(CGRect*)arg1 usedRect:(CGRect*)arg2 remainingRect:(CGRect*)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(CGRect)arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8 ;
-(void)setLocation:(CGPoint)arg1 withAdvancements:(const double*)arg2 forStartOfGlyphRange:(NSRange)arg3 ;
-(void)setNotShownAttribute:(BOOL)arg1 forGlyphRange:(NSRange)arg2 ;
-(id)_textContainerForAttachmentProtocol;
-(id)_textStorageForAttachmentProtocol;
-(BOOL)_usesScreenFonts;
-(unsigned long long)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned short*)arg2 properties:(long long*)arg3 characterIndexes:(unsigned long long*)arg4 bidiLevels:(char*)arg5 ;
-(void)substituteGlyphsInRange:(NSRange)arg1 withGlyphs:(unsigned*)arg2 ;
-(void)insertGlyph:(unsigned)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3 ;
-(void)setAttachmentSize:(CGSize)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)setBidiLevels:(const char*)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphRange:(NSRange)arg2 ;
-(id)createRenderingContextForCharacterRange:(NSRange)arg1 typesetterBehavior:(long long)arg2 usesScreenFonts:(BOOL)arg3 hasStrongRight:(BOOL)arg4 syncDirection:(BOOL)arg5 mirrorsTextAlignment:(BOOL)arg6 maximumWidth:(double)arg7 ;
-(id)createRenderingContextForCharacterRange:(NSRange)arg1 typesetterBehavior:(long long)arg2 usesScreenFonts:(BOOL)arg3 hasStrongRight:(BOOL)arg4 maximumWidth:(double)arg5 ;
-(void)setGlyphs:(const unsigned short*)arg1 properties:(const long long*)arg2 characterIndexes:(const unsigned long long*)arg3 font:(id)arg4 forGlyphRange:(NSRange)arg5 ;
-(void)insertGlyphs:(const unsigned*)arg1 length:(unsigned long long)arg2 forStartingGlyphAtIndex:(unsigned long long)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)setIntAttribute:(long long)arg1 value:(long long)arg2 forGlyphAtIndex:(unsigned long long)arg3 ;
-(unsigned long long)layoutOptions;
-(void)deleteGlyphsInRange:(NSRange)arg1 ;
@end

