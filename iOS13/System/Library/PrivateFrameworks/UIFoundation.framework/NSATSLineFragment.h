/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSATSTypesetter;

@interface NSATSLineFragment : NSObject {

	void* _line;
	NSATSTypesetter* _typesetter;
	NSRange _glyphRange;
	NSRange _characterRange;
	double _minPosition;
	double _maxPosition;
	long long _elasticCharIndex;
	double _elasticRangeWidth;
	unsigned _hyphenGlyph;
	double _hyphenGlyphWidth;
	struct {
		unsigned _directionState : 2;
		unsigned _drawsOutside : 1;
		unsigned _standaloneAttachment : 1;
		unsigned _reserved : 28;
	}  _flags;

}

@property (getter=isElasticOnly,readonly) BOOL elasticOnly; 
@property (getter=isStandaloneTextAttachment,readonly) BOOL standaloneTextAttachment; 
-(void)dealloc;
-(void)finalize;
-(void)_invalidate;
-(NSRange)characterRange;
-(id)initWithTypesetter:(id)arg1 ;
-(void)layoutForStartingGlyphAtIndex:(unsigned long long)arg1 characterIndex:(unsigned long long)arg2 minPosition:(double)arg3 maxPosition:(double)arg4 lineFragmentRect:(CGRect)arg5 ;
-(NSRange)glyphRange;
-(void)getTypographicLineHeight:(double*)arg1 baselineOffset:(double*)arg2 leading:(double*)arg3 ;
-(void)justifyWithFactor:(double)arg1 ;
-(double)lineWidthForType:(int)arg1 ;
-(void)resolveOpticalAlignmentUpdatingMinPosition:(double*)arg1 maxPosition:(double*)arg2 ;
-(BOOL)isStandaloneTextAttachment;
-(BOOL)hasElasticRange;
-(BOOL)isElasticOnly;
-(void)saveMorphedGlyphs:(NSRange*)arg1 ;
-(void)saveWithGlyphOrigin:(double)arg1 ;
-(id)_copyRenderingContextWithGlyphOrigin:(double)arg1 ;
-(void)_flushCachedObjects;
-(long long)resolvedLineBreakMode:(BOOL)arg1 ;
-(long long)_charIndexToBreakLineByWordWrappingAtIndex:(long long)arg1 lineFragmentWidth:(double)arg2 hyphenate:(BOOL*)arg3 ;
@end

