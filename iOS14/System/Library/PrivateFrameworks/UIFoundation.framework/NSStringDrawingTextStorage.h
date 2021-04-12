/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)initialize;
+(id)stringDrawingTextStorage;
+(void)_setHasCustomSettings:(BOOL)arg1 ;
+(void)performLayoutOperation:(/*^block*/id)arg1 ;
+(BOOL)_hasCustomSettings;
-(CUIStyleEffectConfiguration *)cuiStyleEffects;
-(long long)typesetterBehavior;
-(BOOL)_isStringDrawingTextStorage;
-(id)init;
-(id)textContainer;
-(void)_setBaselineDelta:(double)arg1 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)_setBaselineMode:(BOOL)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(id)layoutManager;
-(unsigned long long)length;
-(void)drawTextContainer:(id)arg1 withRect:(CGRect)arg2 graphicsContext:(CGContextRef)arg3 baselineMode:(BOOL)arg4 scrollable:(BOOL)arg5 padding:(double)arg6 ;
-(BOOL)_forceWordWrapping;
-(void)setDefaultTighteningFactor:(double)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(double)_baselineDelta;
-(id)textContainerForAttributedString:(id)arg1 containerSize:(CGSize)arg2 lineFragmentPadding:(double)arg3 ;
-(void)_setUsesSimpleTextEffects:(BOOL)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)_setForceWordWrapping:(BOOL)arg1 ;
-(void)processEditing;
-(id)string;
-(void)_setApplicationFrameworkContext:(long long)arg1 ;
-(BOOL)_shouldSetOriginalFontAttribute;
-(void)setCuiStyleEffects:(CUIStyleEffectConfiguration *)arg1 ;
-(void)setGraphicsContext:(id)arg1 ;
-(void)fontSetChanged;
-(void)setCuiCatalog:(CUICatalog *)arg1 ;
-(CGPoint)defaultTextContainerOriginForRect:(CGRect)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)drawTextContainer:(id)arg1 range:(NSRange)arg2 withRect:(CGRect)arg3 graphicsContext:(CGContextRef)arg4 baselineMode:(BOOL)arg5 scrollable:(BOOL)arg6 padding:(double)arg7 ;
-(BOOL)_baselineMode;
-(id)textContainerForAttributedString:(id)arg1 ;
-(BOOL)_usesSimpleTextEffects;
-(long long)_applicationFrameworkContext;
-(double)defaultTighteningFactor;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(CGRect)usedRectForTextContainer:(id)arg1 ;
-(void)dealloc;
-(CUICatalog *)cuiCatalog;
@end

