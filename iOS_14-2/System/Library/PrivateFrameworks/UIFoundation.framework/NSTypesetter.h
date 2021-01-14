/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


#import <UIFoundation/UIFoundation-Structs.h>
@interface NSTypesetter : NSObject {

	void* _reserved;

}
+(void)initialize;
+(long long)defaultStringDrawingTypesetterBehavior;
+(long long)defaultTypesetterBehavior;
+(unsigned long long)defaultLineBreakStrategy;
+(id)sharedSystemTypesetter;
+(BOOL)allowsDefaultLineBreakStrategy;
+(BOOL)_usesATSTypesetter;
+(id)sharedSystemTypesetterForBehavior:(long long)arg1 ;
-(void)setApplicationFrameworkContext:(long long)arg1 ;
-(void)setTypesetterBehavior:(long long)arg1 ;
-(long long)typesetterBehavior;
-(BOOL)bidiProcessingEnabled;
-(unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1 ;
-(BOOL)_allowsEllipsisGlyphSubstitution;
-(float)hyphenationFactor;
-(void)setHyphenationFactor:(float)arg1 ;
-(void)finalize;
-(void)setAttributedString:(id)arg1 ;
-(long long)_baseWritingDirection;
-(void)setLineFragmentRect:(CGRect)arg1 forGlyphRange:(NSRange)arg2 usedRect:(CGRect)arg3 baselineOffset:(double)arg4 ;
-(unsigned long long)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned*)arg2 characterIndexes:(unsigned long long*)arg3 glyphInscriptions:(unsigned long long*)arg4 elasticBits:(BOOL*)arg5 bidiLevels:(char*)arg6 ;
-(BOOL)finalizeLineFragmentRect:(inout CGRect*)arg1 lineFragmentUsedRect:(inout CGRect*)arg2 baselineOffset:(inout double*)arg3 forGlyphRange:(NSRange)arg4 ;
-(void)endLineWithGlyphRange:(NSRange)arg1 ;
-(void)_layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 maxCharacterIndex:(unsigned long long)arg4 nextGlyphIndex:(unsigned long long*)arg5 nextCharacterIndex:(unsigned long long*)arg6 ;
-(/*function pointer*/void**)_lineFragmentRectForProposedRectArgs;
-(void)setLineFragmentPadding:(double)arg1 ;
-(id)attributedString;
-(void)substituteGlyphsInRange:(NSRange)arg1 withGlyphs:(unsigned*)arg2 ;
-(id)layoutManager;
-(NSRange)paragraphSeparatorCharacterRange;
-(id)substituteFontForFont:(id)arg1 ;
-(void)setTightenThresholdForTruncation:(float)arg1 ;
-(void)beginLineWithGlyphAtIndex:(unsigned long long)arg1 ;
-(id)currentTextContainer;
-(SCD_Struct_NS6*)_getAuxData;
-(void)setAttachmentSize:(CGSize)arg1 forGlyphRange:(NSRange)arg2 ;
-(NSRange)layoutCharactersInRange:(NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned long long)arg3 ;
-(NSRange)paragraphGlyphRange;
-(id)_ellipsisFontForFont:(id)arg1 ;
-(NSRange)glyphRangeForCharacterRange:(NSRange)arg1 actualCharacterRange:(NSRange*)arg2 ;
-(double)paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(CGRect)arg2 ;
-(void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)setBidiProcessingEnabled:(BOOL)arg1 ;
-(void)setUsesFontLeading:(BOOL)arg1 ;
-(BOOL)_forceOriginalFontBaseline;
-(double)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned long long)arg2 ;
-(void)_setLineBreakModeOverridden:(BOOL)arg1 ;
-(void)endParagraph;
-(unsigned long long)_getRemainingNominalParagraphRange:(NSRange*)arg1 andParagraphSeparatorRange:(NSRange*)arg2 charactarIndex:(unsigned long long)arg3 layoutManager:(id)arg4 string:(id)arg5 ;
-(NSRange)paragraphSeparatorGlyphRange;
-(void)beginParagraph;
-(void)getLineFragmentRect:(CGRect*)arg1 usedRect:(CGRect*)arg2 remainingRect:(CGRect*)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(CGRect)arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8 ;
-(void)setLocation:(CGPoint)arg1 withAdvancements:(const double*)arg2 forStartOfGlyphRange:(NSRange)arg3 ;
-(id)currentParagraphStyle;
-(void)deleteGlyphsInRange:(NSRange)arg1 ;
-(unsigned long long)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned short*)arg2 properties:(long long*)arg3 characterIndexes:(unsigned long long*)arg4 bidiLevels:(char*)arg5 ;
-(double)lineFragmentPadding;
-(void)setParagraphGlyphRange:(NSRange)arg1 separatorGlyphRange:(NSRange)arg2 ;
-(void)_updateParagraphStyleCache:(id)arg1 ;
-(void)getLineFragmentRect:(CGRect*)arg1 usedRect:(CGRect*)arg2 forParagraphSeparatorGlyphRange:(NSRange)arg3 atProposedOrigin:(CGPoint)arg4 ;
-(void)insertGlyph:(unsigned)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3 ;
-(NSRange)characterRangeForGlyphRange:(NSRange)arg1 actualGlyphRange:(NSRange*)arg2 ;
-(double)lineSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(CGRect)arg2 ;
-(unsigned long long)layoutParagraphAtPoint:(CGPoint*)arg1 ;
-(SCD_Struct_NS6*)_allocateAuxData;
-(void)_setForceOriginalFontBaseline:(BOOL)arg1 ;
-(NSRange)paragraphCharacterRange;
-(BOOL)_isLineBreakModeOverridden;
-(BOOL)usesFontLeading;
-(void)setNotShownAttribute:(BOOL)arg1 forGlyphRange:(NSRange)arg2 ;
-(id)textContainers;
-(long long)applicationFrameworkContext;
-(void)setBidiLevels:(const char*)arg1 forGlyphRange:(NSRange)arg2 ;
-(id)textTabForGlyphLocation:(double)arg1 writingDirection:(long long)arg2 maxLocation:(double)arg3 ;
-(id)attributesForExtraLineFragment;
-(void)dealloc;
-(float)tightenThresholdForTruncation;
-(double)paragraphSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(CGRect)arg2 ;
-(void)setHardInvalidation:(BOOL)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 nextGlyphIndex:(unsigned long long*)arg4 ;
@end

