/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSConcreteTextStorage.h>

@protocol _UITextAttributeDefaults;
@class NSMutableDictionary, UIFont, UIColor, NSDictionary;

@interface _UICascadingTextStorage : NSConcreteTextStorage {

	NSMutableDictionary* _defaultAttributes;
	id<_UITextAttributeDefaults> _defaults;

}

@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) double shadowBlur; 
@property (nonatomic,copy) NSDictionary * defaultAttributes; 
@property (setter=_setDefaults:,nonatomic,retain) id<_UITextAttributeDefaults> _defaults;              //@synthesize defaults=_defaults - In the implementation block
+(id)defaultFont;
-(void)setShadowOffset:(CGSize)arg1 ;
-(long long)lineBreakMode;
-(void)_setShadow:(id)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(id)_shadow;
-(UIColor *)textColor;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)init;
-(UIColor *)shadowColor;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)shadowOffset;
-(id)_defaultAttributes;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(double)shadowBlur;
-(void)_setDefaults:(id)arg1 ;
-(id)initWithDefaults:(id)arg1 ;
-(void)_restoreOriginalFontAttribute;
-(NSDictionary *)defaultAttributes;
-(BOOL)_shouldSetOriginalFontAttribute;
-(id<_UITextAttributeDefaults>)_defaults;
-(void)setTextAlignment:(long long)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(void)setShadowBlur:(double)arg1 ;
-(long long)_ui_resolvedTextAlignment;
-(UIFont *)font;
-(void)setDefaultAttributes:(NSDictionary *)arg1 ;
@end

