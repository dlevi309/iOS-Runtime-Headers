/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)_allowsScreenFontKerning;
+(id)sharedTypesetter;
-(unsigned long long)lineBreakStrategy;
-(void)setLineBreakStrategy:(unsigned long long)arg1 ;
-(void)_setBusy:(BOOL)arg1 ;
-(unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1 ;
-(float)hyphenationFactorForGlyphAtIndex:(unsigned long long)arg1 ;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 remainingRect:(CGRect*)arg2 ;
-(BOOL)_mirrorsTextAlignment;
-(long long)_baseWritingDirection;
-(id)init;
-(id)_textContainerForAttachmentProtocol;
-(void)endLineWithGlyphRange:(NSRange)arg1 ;
-(void)_doBidiProcessing;
-(/*function pointer*/void**)_lineFragmentRectForProposedRectArgs;
-(id)_getATSTypesetterGuts;
-(void)beginLineWithGlyphAtIndex:(unsigned long long)arg1 ;
-(BOOL)_forceWordWrapping;
-(void)setDefaultTighteningFactor:(double)arg1 ;
-(unsigned)hyphenCharacterForGlyphAtIndex:(unsigned long long)arg1 ;
-(NSRange)layoutCharactersInRange:(NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned long long)arg3 ;
-(void)_flushCachedObjects;
-(BOOL)synchronizesAlignmentToDirection;
-(double)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned long long)arg2 ;
-(CTTypesetterRef)_ctTypesetter;
-(BOOL)_isBusy;
-(void)endParagraph;
-(void)_setForceWordWrapping:(BOOL)arg1 ;
-(void)beginParagraph;
-(BOOL)shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_sweepDirectionForGlyphAtIndex:(long long)arg1 ;
-(id)_textStorageForAttachmentProtocol;
-(BOOL)_usesScreenFonts;
-(BOOL)shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned long long)arg1 ;
-(BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned long long*)arg1 characterIndex:(unsigned long long*)arg2 atPoint:(CGPoint*)arg3 renderingContext:(id*)arg4 ;
-(id)paragraphArbitrator;
-(unsigned long long)layoutParagraphAtPoint:(CGPoint*)arg1 ;
-(SCD_Struct_NS6*)_allocateAuxData;
-(const char*)_bidiLevels;
-(void)setLimitsLayoutForSuspiciousContents:(BOOL)arg1 ;
-(void)_setBaselineRenderingMode:(BOOL)arg1 ;
-(BOOL)limitsLayoutForSuspiciousContents;
-(BOOL)_baselineRenderingMode;
-(double)defaultTighteningFactor;
-(void)dealloc;
-(CGRect)boundingBoxForControlGlyphAtIndex:(unsigned long long)arg1 forTextContainer:(id)arg2 proposedLineFragment:(CGRect)arg3 glyphPosition:(CGPoint)arg4 characterIndex:(unsigned long long)arg5 ;
-(void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 nextGlyphIndex:(unsigned long long*)arg4 ;
@end

