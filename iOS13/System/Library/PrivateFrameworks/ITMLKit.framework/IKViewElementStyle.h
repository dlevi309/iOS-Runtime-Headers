/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, IKCSSRule, NSArray, NSMutableDictionary, UIColor, IKColor, NSURL, NSNumber, IKFourTuple, NSShadow;

@interface IKViewElementStyle : NSObject <NSCopying> {

	BOOL _filterBlockedStyles;
	NSString* _classDescriptorString;
	IKCSSRule* _cssRule;
	NSArray* _mediaQueryList;
	NSMutableDictionary* _styleDict;
	NSMutableDictionary* _overridingValuesByStyle;

}

@property (nonatomic,copy,readonly) IKCSSRule * cssRule;                                 //@synthesize cssRule=_cssRule - In the implementation block
@property (nonatomic,readonly) NSString * classDescriptorString; 
@property (nonatomic,retain) NSArray * mediaQueryList;                                   //@synthesize mediaQueryList=_mediaQueryList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * styleDict;                            //@synthesize styleDict=_styleDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * overridingValuesByStyle;              //@synthesize overridingValuesByStyle=_overridingValuesByStyle - In the implementation block
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * borderColor; 
@property (nonatomic,readonly) IKColor * ikColor; 
@property (nonatomic,readonly) IKColor * ikHighlightColor; 
@property (nonatomic,readonly) IKColor * ikBackgroundColor; 
@property (nonatomic,readonly) IKColor * ikBorderColor; 
@property (nonatomic,readonly) NSString * badgeTreatment; 
@property (nonatomic,readonly) UIEdgeInsets borderMargins; 
@property (nonatomic,readonly) UIEdgeInsets borderWidths; 
@property (nonatomic,readonly) NSString * dividerType; 
@property (nonatomic,readonly) double fontSize; 
@property (nonatomic,readonly) NSString * fontWeight; 
@property (nonatomic,readonly) long long maxTextLines; 
@property (nonatomic,readonly) unsigned long long textAlignment; 
@property (nonatomic,readonly) unsigned long long elementAlignment; 
@property (nonatomic,readonly) unsigned long long elementPosition; 
@property (nonatomic,readonly) UIEdgeInsets elementPadding; 
@property (nonatomic,readonly) UIEdgeInsets elementMargin; 
@property (nonatomic,readonly) long long columnCount; 
@property (nonatomic,readonly) NSString * columnType; 
@property (nonatomic,readonly) NSString * columnItemType; 
@property (nonatomic,readonly) NSString * rowHeight; 
@property (nonatomic,readonly) NSString * maxWidth; 
@property (nonatomic,readonly) NSString * itemWidth; 
@property (nonatomic,readonly) NSString * itemHeight; 
@property (nonatomic,readonly) IKColor * imageMaskColor; 
@property (nonatomic,readonly) NSURL * imagePlaceholderURL; 
@property (nonatomic,readonly) IKColor * imagePlaceholderBackgroundColor; 
@property (nonatomic,readonly) long long reflectImage; 
@property (nonatomic,readonly) long long fillImage; 
@property (nonatomic,readonly) unsigned long long imagePosition; 
@property (nonatomic,readonly) NSString * imageTreatment; 
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) NSString * transition; 
@property (nonatomic,readonly) NSNumber * transitionInterval; 
@property (nonatomic,readonly) NSString * labelsState; 
@property (nonatomic,readonly) unsigned long long ordinalMaxLength; 
@property (nonatomic,readonly) NSString * lockupType; 
@property (nonatomic,readonly) NSString * visibility; 
@property (nonatomic,readonly) NSString * cardType; 
@property (nonatomic,readonly) NSString * textScale; 
@property (nonatomic,readonly) NSString * textStyle; 
@property (nonatomic,readonly) IKFourTuple * borderRadius; 
@property (nonatomic,readonly) NSShadow * textShadow; 
@property (nonatomic,readonly) NSString * maxHeight; 
@property (nonatomic,readonly) NSNumber * letterSpacing; 
@property (nonatomic,readonly) NSNumber * lineHeight; 
+(void)initialize;
+(id)elementStyleWithSelector:(id)arg1 cssRule:(id)arg2 filterBlockedStyles:(BOOL)arg3 ;
+(id)elementStyleWithSelector:(id)arg1 aggregatingStyles:(id)arg2 ;
+(id)normalizeClassSelectorString:(id)arg1 ;
+(void)unregisterStyles;
+(id)registeredAliases;
+(BOOL)isHiddenStyleRegistered;
+(void)registerStyle:(id)arg1 withType:(unsigned long long)arg2 inherited:(BOOL)arg3 ;
+(void)registerEdgeInsetStyle:(id)arg1 aliasName:(id)arg2 withPositionStyleNames:(id)arg3 inherited:(BOOL)arg4 ;
+(void)registerStyle:(id)arg1 aliasName:(id)arg2 withType:(unsigned long long)arg3 inherited:(BOOL)arg4 ;
+(id)elementStyleWithSelector:(id)arg1 inlineStyleString:(id)arg2 filterBlockedStyles:(BOOL)arg3 inlineStyleRangeCorrect:(BOOL)arg4 ;
+(unsigned long long)alignmentFromString:(id)arg1 ;
+(unsigned long long)positionFromString:(id)arg1 ;
+(id)propertiesForStyleName:(id)arg1 ;
+(id)registeredStyles;
+(void)addBlockedStyle:(id)arg1 ;
+(void)clearBlockedStyles;
+(void)registerHiddenStyle:(id)arg1 ;
+(unsigned long long)transitionFromString:(id)arg1 ;
+(unsigned long long)imageTreatmentFromString:(id)arg1 ;
+(id)elementStyleWithSelector:(id)arg1 inlineStyleString:(id)arg2 filterBlockedStyles:(BOOL)arg3 ;
+(id)elementStyleWithParentStyle:(id)arg1 elementStyle:(id)arg2 elementStyleOverrides:(id)arg3 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGAffineTransform)transform;
-(NSString *)visibility;
-(long long)columnCount;
-(UIColor *)color;
-(NSString *)maxWidth;
-(NSString *)maxHeight;
-(double)fontSize;
-(UIColor *)backgroundColor;
-(NSString *)textStyle;
-(NSNumber *)lineHeight;
-(NSString *)transition;
-(NSString *)itemWidth;
-(NSString *)rowHeight;
-(unsigned long long)textAlignment;
-(UIColor *)borderColor;
-(NSString *)fontWeight;
-(BOOL)hidden;
-(long long)fillImage;
-(NSNumber *)letterSpacing;
-(NSShadow *)textShadow;
-(NSString *)cardType;
-(NSString *)textScale;
-(id)prototype;
-(unsigned long long)elementAlignment;
-(IKColor *)ikBackgroundColor;
-(NSString *)classDescriptorString;
-(NSArray *)mediaQueryList;
-(void)setMediaQueryList:(NSArray *)arg1 ;
-(NSURL *)imagePlaceholderURL;
-(unsigned long long)imagePosition;
-(IKColor *)ikBorderColor;
-(long long)reflectImage;
-(id)initWithCSSRule:(id)arg1 filterBlockedStyles:(BOOL)arg2 selStr:(id)arg3 ;
-(id)initWithClassSelector:(id)arg1 ;
-(void)_addElementStyle:(id)arg1 ;
-(NSMutableDictionary *)styleDict;
-(void)_addParentStyle:(id)arg1 ;
-(IKCSSRule *)cssRule;
-(void)_addDeclaration:(id)arg1 ;
-(id)_styleNameForAlias:(id)arg1 ;
-(NSMutableDictionary *)overridingValuesByStyle;
-(id)cssValueForStyle:(id)arg1 ;
-(id)_declarationForStyleName:(id)arg1 expectedClass:(Class)arg2 ;
-(UIEdgeInsets)_edgeInsetsForStyleName:(id)arg1 ;
-(id)valueForStyle:(id)arg1 ;
-(id)_newColorFromString:(id)arg1 ;
-(id)_gradientFromString:(id)arg1 ;
-(unsigned long long)typeForStyle:(id)arg1 ;
-(id)initWithStyle:(id)arg1 classSelector:(id)arg2 ;
-(unsigned long long)edgeFlagForStyle:(id)arg1 ;
-(IKColor *)ikColor;
-(IKColor *)ikHighlightColor;
-(UIEdgeInsets)borderMargins;
-(UIEdgeInsets)borderWidths;
-(UIEdgeInsets)elementPadding;
-(UIEdgeInsets)elementMargin;
-(unsigned long long)elementPosition;
-(long long)maxTextLines;
-(NSString *)columnType;
-(NSString *)columnItemType;
-(NSString *)itemHeight;
-(IKColor *)imagePlaceholderBackgroundColor;
-(IKColor *)imageMaskColor;
-(NSString *)lockupType;
-(NSString *)imageTreatment;
-(NSNumber *)transitionInterval;
-(NSString *)labelsState;
-(unsigned long long)ordinalMaxLength;
-(NSString *)dividerType;
-(NSString *)badgeTreatment;
-(IKFourTuple *)borderRadius;
-(BOOL)requiresDynamicEvaluation;
-(void)setStyleDict:(NSMutableDictionary *)arg1 ;
-(void)setOverridingValuesByStyle:(NSMutableDictionary *)arg1 ;
@end

