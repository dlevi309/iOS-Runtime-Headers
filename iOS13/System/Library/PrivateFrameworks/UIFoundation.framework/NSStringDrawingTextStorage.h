/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextStorage.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@class NSConcreteNotifyingMutableAttributedString, NSLayoutManager, NSTextContainer, CUICatalog, CUIStyleEffectConfiguration, NSString;

@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate> {

	NSConcreteNotifyingMutableAttributedString* _contents;
	NSLayoutManager* _layoutManager;
	NSTextContainer* _textContainer;
	double _baselineDelta;
	struct {
		unsigned _typesetterBehavior : 4;
		unsigned _needToFlushCache : 1;
		unsigned _baselineMode : 1;
		unsigned _forceWordWrapping : 1;
		unsigned _usesSimpleTextEffects : 1;
		unsigned _applicationFrameworkContext : 3;
		unsigned _reserved : 21;
	}  _sdflags;
	CUICatalog* _catalog;
	CUIStyleEffectConfiguration* _styleEffects;
	double _defaultTighteningFactor;

}

@property (nonatomic,retain) CUICatalog * cuiCatalog;                                                                                 //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,retain) CUIStyleEffectConfiguration * cuiStyleEffects;                                                           //@synthesize styleEffects=_styleEffects - In the implementation block
@property (assign,setter=_setUsesSimpleTextEffects:,getter=_usesSimpleTextEffects,nonatomic) BOOL usesSimpleTextEffects; 
@property (assign) double defaultTighteningFactor;                                                                                    //@synthesize defaultTighteningFactor=_defaultTighteningFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(void)_setHasCustomSettings:(BOOL)arg1 ;
+(BOOL)_hasCustomSettings;
+(id)stringDrawingTextStorage;
-(id)init;
-(id)string;
-(void)dealloc;
-(unsigned long long)length;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(id)layoutManager;
-(CUICatalog *)cuiCatalog;
-(BOOL)_usesSimpleTextEffects;
-(id)textContainer;
-(BOOL)_isStringDrawingTextStorage;
-(long long)typesetterBehavior;
-(void)_setBaselineDelta:(double)arg1 ;
-(BOOL)_baselineMode;
-(BOOL)_forceWordWrapping;
-(void)_setForceWordWrapping:(BOOL)arg1 ;
-(double)defaultTighteningFactor;
-(void)setDefaultTighteningFactor:(double)arg1 ;
-(void)_setUsesSimpleTextEffects:(BOOL)arg1 ;
-(void)setCuiCatalog:(CUICatalog *)arg1 ;
-(CUIStyleEffectConfiguration *)cuiStyleEffects;
-(void)setCuiStyleEffects:(CUIStyleEffectConfiguration *)arg1 ;
-(void)processEditing;
-(long long)_applicationFrameworkContext;
-(CGRect)usedRectForTextContainer:(id)arg1 ;
-(BOOL)_shouldSetOriginalFontAttribute;
-(id)textContainerForAttributedString:(id)arg1 containerSize:(CGSize)arg2 lineFragmentPadding:(double)arg3 ;
-(void)_setBaselineMode:(BOOL)arg1 ;
-(void)_setApplicationFrameworkContext:(long long)arg1 ;
-(void)drawTextContainer:(id)arg1 range:(NSRange)arg2 withRect:(CGRect)arg3 graphicsContext:(CGContextRef)arg4 baselineMode:(BOOL)arg5 scrollable:(BOOL)arg6 padding:(double)arg7 ;
-(double)_baselineDelta;
-(CGPoint)defaultTextContainerOriginForRect:(CGRect)arg1 ;
-(void)setGraphicsContext:(id)arg1 ;
-(void)drawTextContainer:(id)arg1 withRect:(CGRect)arg2 graphicsContext:(CGContextRef)arg3 baselineMode:(BOOL)arg4 scrollable:(BOOL)arg5 padding:(double)arg6 ;
-(id)textContainerForAttributedString:(id)arg1 ;
-(void)fontSetChanged;
@end

