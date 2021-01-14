/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign) long long applicationFrameworkContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setApplicationFrameworkContext:(long long)arg1 ;
-(CUIStyleEffectConfiguration *)cuiStyleEffects;
-(long long)resolvedTextAlignment;
-(oneway void)release;
-(double)lineFragmentWidth;
-(void)finalize;
-(id)initWithTextStorage:(id)arg1 runs:(CFArrayRef)arg2 glyphOrigin:(double)arg3 lineFragmentWidth:(double)arg4 elasticWidth:(double)arg5 usesScreenFonts:(BOOL)arg6 isRTL:(BOOL)arg7 ;
-(BOOL)isRTL;
-(long long)resolvedBaseWritingDirection;
-(CGSize)sizeWithBehavior:(long long)arg1 usesFontLeading:(BOOL)arg2 baselineDelta:(double*)arg3 ;
-(void)_setUsesSimpleTextEffects:(BOOL)arg1 ;
-(void)drawAtPoint:(CGPoint)arg1 inContext:(CGContextRef)arg2 ;
-(void)setResolvedTextAlignment:(long long)arg1 ;
-(void)setCuiStyleEffects:(CUIStyleEffectConfiguration *)arg1 ;
-(void)getMaximumAscender:(double*)arg1 minimumDescender:(double*)arg2 ;
-(void)setCuiCatalog:(CUICatalog *)arg1 ;
-(void)setResolvedBaseWritingDirection:(long long)arg1 ;
-(BOOL)_usesSimpleTextEffects;
-(CGRect)imageBounds;
-(double)elasticWidth;
-(long long)applicationFrameworkContext;
-(void)dealloc;
-(CUICatalog *)cuiCatalog;
@end

