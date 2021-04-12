/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTypesetter.h>

@class NSAttributedString, NSLayoutManager, NSArray, NSTextContainer, NSParagraphStyle;

@interface NSATSTypesetter : NSTypesetter {

	NSAttributedString* attributedString;
	NSRange paragraphGlyphRange;
	NSRange paragraphSeparatorGlyphRange;
	double lineFragmentPadding;
	NSLayoutManager* layoutManager;
	NSArray* textContainers;
	NSTextContainer* currentTextContainer;
	unsigned long long currentTextContainerIndex;
	CGSize currentTextContainerSize;
	NSParagraphStyle* currentParagraphStyle;
	void** _atsReserved[8];
	id _private;

}
+(void)initialize;
+(id)sharedInstance;
+(id)sharedTypesetter;
+(BOOL)_allowsScreenFontKerning;
-(id)init;
-(void)dealloc;
-(BOOL)_isBusy;
-(double)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned long long)arg2 ;
-(unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1 ;
-(NSRange)layoutCharactersInRange:(NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned long long)arg3 ;
-(void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 nextGlyphIndex:(unsigned long long*)arg4 ;
-(BOOL)_mirrorsTextAlignment;
-(id)paragraphArbitrator;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 remainingRect:(CGRect*)arg2 ;
-(const char*)_bidiLevels;
-(CTTypesetterRef)_ctTypesetter;
-(BOOL)synchronizesAlignmentToDirection;
-(void)_doBidiProcessing;
-(long long)_baseWritingDirection;
-(BOOL)_baselineRenderingMode;
-(void)beginLineWithGlyphAtIndex:(unsigned long long)arg1 ;
-(void)endLineWithGlyphRange:(NSRange)arg1 ;
-(void)_flushCachedObjects;
-(unsigned long long)lineBreakStrategy;
-(void)beginParagraph;
-(void)endParagraph;
-(BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned long long*)arg1 characterIndex:(unsigned long long*)arg2 atPoint:(CGPoint*)arg3 renderingContext:(id*)arg4 ;
-(void)_setBusy:(BOOL)arg1 ;
-(BOOL)_forceWordWrapping;
-(void)_setForceWordWrapping:(BOOL)arg1 ;
-(double)defaultTighteningFactor;
-(void)setDefaultTighteningFactor:(double)arg1 ;
-(void)setLineBreakStrategy:(unsigned long long)arg1 ;
-(BOOL)limitsLayoutForSuspiciousContents;
-(void)setLimitsLayoutForSuspiciousContents:(BOOL)arg1 ;
-(void)_setBaselineRenderingMode:(BOOL)arg1 ;
-(id)_getATSTypesetterGuts;
-(id)_textContainerForAttachmentProtocol;
-(id)_textStorageForAttachmentProtocol;
-(BOOL)_usesScreenFonts;
-(unsigned long long)_sweepDirectionForGlyphAtIndex:(long long)arg1 ;
-(unsigned long long)layoutParagraphAtPoint:(CGPoint*)arg1 ;
-(BOOL)shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned long long)arg1 ;
-(float)hyphenationFactorForGlyphAtIndex:(unsigned long long)arg1 ;
-(CGRect)boundingBoxForControlGlyphAtIndex:(unsigned long long)arg1 forTextContainer:(id)arg2 proposedLineFragment:(CGRect)arg3 glyphPosition:(CGPoint)arg4 characterIndex:(unsigned long long)arg5 ;
-(unsigned)hyphenCharacterForGlyphAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_NS6*)_allocateAuxData;
-(/*function pointer*/void**)_lineFragmentRectForProposedRectArgs;
@end

