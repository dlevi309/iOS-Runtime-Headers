/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTypesetter.h>

@protocol NSCoreTypesetterDelegate;
@interface NSCoreTypesetter : NSTypesetter {

	BOOL _wantsExtraLineFragment;
	/*^block*/id laidOutLineFragment;
	id<NSCoreTypesetterDelegate> delegate;
	NSRange characterRange;
	CGSize textContainerSize;

}

@property (assign) NSRange characterRange; 
@property (assign) CGSize textContainerSize; 
@property (assign) BOOL wantsExtraLineFragment;                        //@synthesize wantsExtraLineFragment=_wantsExtraLineFragment - In the implementation block
@property (copy) id laidOutLineFragment; 
@property (__weak) id<NSCoreTypesetterDelegate> delegate; 
+(void)_lineMetricsForAttributes:(id)arg1 typesetterBehavior:(long long)arg2 usesFontLeading:(BOOL)arg3 applySpacings:(BOOL)arg4 usesSystemFontLeading:(BOOL)arg5 usesNegativeFontLeading:(BOOL)arg6 lineHeight:(double*)arg7 baselineOffset:(double*)arg8 spacing:(double*)arg9 applicationFrameworkContext:(long long)arg10 wantsTextLineFragments:(BOOL)arg11 ;
+(BOOL)_supportsStringDrawingPath:(unsigned char)arg1 ;
+(void)_lineMetricsFromAttributedString:(id)arg1 range:(NSRange)arg2 typesetterBehavior:(long long)arg3 usesFontLeading:(BOOL)arg4 applySpacings:(BOOL)arg5 usesSystemFontLeading:(BOOL)arg6 usesNegativeFontLeading:(BOOL)arg7 lineHeight:(double*)arg8 baselineOffset:(double*)arg9 spacing:(double*)arg10 applicationFrameworkContext:(long long)arg11 wantsTextLineFragments:(BOOL)arg12 ;
+(void)_maximumAscentAndDescentForRuns:(CFArrayRef)arg1 ascender:(double*)arg2 descender:(double*)arg3 ;
-(id)init;
-(void)dealloc;
-(id<NSCoreTypesetterDelegate>)delegate;
-(void)setDelegate:(id<NSCoreTypesetterDelegate>)arg1 ;
-(void)layout;
-(void)setCharacterRange:(NSRange)arg1 ;
-(void)setTextContainerSize:(CGSize)arg1 ;
-(void)setLaidOutLineFragment:(id)arg1 ;
-(void)setWantsExtraLineFragment:(BOOL)arg1 ;
-(CGSize)textContainerSize;
-(NSRange)characterRange;
-(CGRect)_stringDrawingCoreTextEngineWithOriginalString:(id)arg1 rect:(CGRect)arg2 padding:(double)arg3 graphicsContext:(id)arg4 forceClipping:(BOOL)arg5 attributes:(id)arg6 stringDrawingOptions:(long long)arg7 drawingContext:(id)arg8 wantsTextLineFragments:(BOOL)arg9 validatedAttributedString:(id)arg10 firstNonRenderedCharacterIndex:(long long*)arg11 foundSoftHyphenAtEOL:(BOOL*)arg12 enginePathUsed:(unsigned char*)arg13 ;
-(id)laidOutLineFragment;
-(int)_NSFastDrawString:(id)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 paragraphStyle:(id)arg4 typesetterBehavior:(long long)arg5 lineBreakMode:(long long)arg6 rect:(CGRect)arg7 padding:(double)arg8 graphicsContext:(id)arg9 baselineRendering:(BOOL)arg10 usesFontLeading:(BOOL)arg11 usesScreenFont:(BOOL)arg12 scrollable:(BOOL)arg13 syncAlignment:(BOOL)arg14 mirrored:(BOOL)arg15 boundingRectPointer:(CGRect*)arg16 baselineOffsetPointer:(double*)arg17 wantsTextLineFragments:(BOOL)arg18 drawingContext:(id)arg19 ;
-(BOOL)wantsExtraLineFragment;
@end

