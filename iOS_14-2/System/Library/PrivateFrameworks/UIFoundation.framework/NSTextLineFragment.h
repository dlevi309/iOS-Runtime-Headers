/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIFont, NSTextLayoutFragment, NSAttributedString;

@interface NSTextLineFragment : NSObject <NSSecureCoding> {

	long long _applicationFrameworkContext;
	CTLineRef _lineRef;
	unsigned short* _glyphs;
	CGSize* _advances;
	long long _glyphCount;
	long long _elasticGlyphCount;
	UIFont* _font;
	CTRunRef _activeRun;
	long long _activeRunIndex;
	CGRect _imageBounds;
	struct {
		unsigned rendersTextCorrectionMarkers : 1;
		unsigned hasRTLRun : 1;
	}  _flags;
	NSTextLayoutFragment* _textLayoutFragment;
	/*^block*/id __renderingAttributesProvider;
	NSAttributedString* _attributedString;
	double _padding;
	NSRange _characterRange;
	CGPoint _glyphOrigin;
	CGRect _typographicBounds;

}

@property (assign) CGRect typographicBounds;                                  //@synthesize typographicBounds=_typographicBounds - In the implementation block
@property (assign) CGPoint glyphOrigin;                                       //@synthesize glyphOrigin=_glyphOrigin - In the implementation block
@property (assign) double padding;                                            //@synthesize padding=_padding - In the implementation block
@property (__weak) NSTextLayoutFragment * textLayoutFragment;                 //@synthesize textLayoutFragment=_textLayoutFragment - In the implementation block
@property (assign) BOOL rendersTextCorrectionMarkers; 
@property (copy) id _renderingAttributesProvider;                             //@synthesize _renderingAttributesProvider=__renderingAttributesProvider - In the implementation block
@property (copy,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (readonly) NSRange characterRange;                                  //@synthesize characterRange=_characterRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setApplicationFrameworkContext:(long long)arg1 ;
-(void)invalidateCache;
-(void)_enumerateTextSegmentsInCharacterRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_defaultRenderingAttributesAtCharacterIndex:(long long)arg1 effectiveRange:(out NSRange*)arg2 ;
-(void)set_renderingAttributesProvider:(id)arg1 ;
-(void)setLineRef:(CTLineRef)arg1 ;
-(void)_getCaretPositionsForCharactersInRange:(NSRange)arg1 positionsCache:(inout double*)arg2 positionsCacheSize:(inout unsigned long long*)arg3 block:(/*^block*/id)arg4 ;
-(NSTextLayoutFragment *)textLayoutFragment;
-(CGPoint)locationForCharacterAtIndex:(long long)arg1 ;
-(void)drawTextCorrectionMarkersAtPoint:(CGPoint)arg1 graphicsContext:(id)arg2 ;
-(CGRect)typographicUsedBounds;
-(void)drawMarkedTextUnderlineAtPoint:(CGPoint)arg1 graphicsContext:(id)arg2 ;
-(id)_renderingAttributesProvider;
-(void)drawAtPoint:(CGPoint)arg1 graphicsContext:(id)arg2 ;
-(void)drawTextAttachmentsAtPoint:(CGPoint)arg1 graphicsContext:(id)arg2 ;
-(NSRange)_rangeOfLigatureContainingCharacterIndex:(unsigned long long)arg1 ;
-(void)setGlyphOrigin:(CGPoint)arg1 ;
-(void)setTypographicBounds:(CGRect)arg1 ;
-(void)_processCaretGlyphRunForTextSelectionProvider:(id)arg1 baseLocation:(id)arg2 runRange:(NSRange)arg3 glyphOffset:(double)arg4 positionsCache:(inout double*)arg5 positionsCacheSize:(inout unsigned long long*)arg6 stop:(inout BOOL*)arg7 usingBlock:(/*^block*/id)arg8 ;
-(CTRunRef)_findRunForStringIndex:(long long)arg1 runIndex:(out long long*)arg2 ;
-(void)_drawMarkedTextUnderline:(id)arg1 inTextRange:(id)arg2 atOrigin:(CGPoint)arg3 graphicsContext:(id)arg4 ;
-(id)initWithString:(id)arg1 attributes:(id)arg2 range:(NSRange)arg3 ;
-(void)setGlyphs:(const unsigned short*)arg1 advances:(const CGSize*)arg2 count:(long long)arg3 elasticCount:(unsigned long long)arg4 font:(id)arg5 ;
-(long long)characterIndexForPoint:(CGPoint)arg1 fractionOfDistanceThroughGlyph:(double*)arg2 ;
-(void)drawTextCorrectionMarkersAtPoint:(CGPoint)arg1 context:(CGContextRef)arg2 ;
-(void)_drawTexCorrectionMarker:(long long)arg1 characterRange:(NSRange)arg2 atOrigin:(CGPoint)arg3 graphicsContext:(id)arg4 ;
-(void)drawMarkedTextUnderlineAtPoint:(CGPoint)arg1 context:(CGContextRef)arg2 ;
-(NSAttributedString *)attributedString;
-(void)encodeWithCoder:(id)arg1 ;
-(const CTLineRef)lineRef;
-(id)initWithAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(double)padding;
-(NSRange)characterRange;
-(CGRect)typographicBounds;
-(void)drawAtPoint:(CGPoint)arg1 context:(CGContextRef)arg2 ;
-(BOOL)rendersTextCorrectionMarkers;
-(void)setTextLayoutFragment:(NSTextLayoutFragment *)arg1 ;
-(void)setRendersTextCorrectionMarkers:(BOOL)arg1 ;
-(CGRect)boundsWithType:(long long)arg1 options:(unsigned long long)arg2 ;
-(void)setPadding:(double)arg1 ;
-(unsigned long long)numberOfGlyphs;
-(CGPoint)glyphOrigin;
-(CGRect)imageBounds;
-(void)enumerateTextSegmentBoundsInTextRange:(id)arg1 withTextSElementProvider:(id)arg2 baseLocation:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateCaretOffsetsWithTextSelectionDataSource:(id)arg1 baseLocation:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(long long)applicationFrameworkContext;
-(void)dealloc;
@end

