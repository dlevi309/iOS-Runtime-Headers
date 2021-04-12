/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSTextApplicationFrameworkContextClient.h>

@class CUICatalog, CUIStyleEffectConfiguration, __NSImmutableTextStorage, NSString;

@interface NSLineFragmentRenderingContext : NSObject <NSTextApplicationFrameworkContextClient> {

	void* _runs;
	long long _numRuns;
	unsigned short* _glyphs;
	CGSize* _advancements;
	double _leftSideDelta;
	double _lineWidth;
	double _leftControlWidth;
	double _rightControlWidth;
	double _elasticWidth;
	CGRect _imageBounds;
	struct {
		unsigned _isRTL : 1;
		unsigned _vAdvance : 1;
		unsigned _flipped : 1;
		unsigned _usesSimpleTextEffects : 1;
		unsigned _applicationFrameworkContext : 3;
		unsigned _reserved : 25;
	}  _flags;
	long long _resolvedDirection;
	long long _resolvedAlignment;
	CUICatalog* _catalog;
	CUIStyleEffectConfiguration* _styleEffects;
	__NSImmutableTextStorage* _textStorage;

}

@property (assign) long long resolvedTextAlignment;                                                                                   //@synthesize resolvedAlignment=_resolvedAlignment - In the implementation block
@property (assign) long long resolvedBaseWritingDirection;                                                                            //@synthesize resolvedDirection=_resolvedDirection - In the implementation block
@property (nonatomic,retain) CUICatalog * cuiCatalog;                                                                                 //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,retain) CUIStyleEffectConfiguration * cuiStyleEffects;                                                           //@synthesize styleEffects=_styleEffects - In the implementation block
@property (assign,setter=_setUsesSimpleTextEffects:,getter=_usesSimpleTextEffects,nonatomic) BOOL usesSimpleTextEffects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long applicationFrameworkContext; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(void)dealloc;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)finalize;
-(long long)applicationFrameworkContext;
-(CUICatalog *)cuiCatalog;
-(BOOL)_usesSimpleTextEffects;
-(void)setApplicationFrameworkContext:(long long)arg1 ;
-(id)initWithTextStorage:(id)arg1 runs:(CFArrayRef)arg2 glyphOrigin:(double)arg3 lineFragmentWidth:(double)arg4 elasticWidth:(double)arg5 usesScreenFonts:(BOOL)arg6 isRTL:(BOOL)arg7 ;
-(void)_setUsesSimpleTextEffects:(BOOL)arg1 ;
-(void)drawAtPoint:(CGPoint)arg1 inContext:(CGContextRef)arg2 ;
-(CGSize)sizeWithBehavior:(long long)arg1 usesFontLeading:(BOOL)arg2 baselineDelta:(double*)arg3 ;
-(void)getMaximumAscender:(double*)arg1 minimumDescender:(double*)arg2 ;
-(double)lineFragmentWidth;
-(double)elasticWidth;
-(BOOL)isRTL;
-(CGRect)imageBounds;
-(long long)resolvedBaseWritingDirection;
-(void)setResolvedBaseWritingDirection:(long long)arg1 ;
-(long long)resolvedTextAlignment;
-(void)setResolvedTextAlignment:(long long)arg1 ;
-(void)setCuiCatalog:(CUICatalog *)arg1 ;
-(CUIStyleEffectConfiguration *)cuiStyleEffects;
-(void)setCuiStyleEffects:(CUIStyleEffectConfiguration *)arg1 ;
@end

