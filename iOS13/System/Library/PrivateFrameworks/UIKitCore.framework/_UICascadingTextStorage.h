/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSConcreteTextStorage.h>

@class NSMutableDictionary, UIFont, UIColor, NSDictionary;

@interface _UICascadingTextStorage : NSConcreteTextStorage {

	NSMutableDictionary* _defaultAttributes;

}

@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) double shadowBlur; 
@property (nonatomic,copy) NSDictionary * defaultAttributes; 
+(id)defaultFont;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOffset:(CGSize)arg1 ;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(BOOL)_shouldSetOriginalFontAttribute;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)_ui_resolvedTextAlignment;
-(UIFont *)font;
-(UIColor *)textColor;
-(NSDictionary *)defaultAttributes;
-(id)_defaultAttributes;
-(long long)textAlignment;
-(id)_shadow;
-(void)setDefaultAttributes:(NSDictionary *)arg1 ;
-(double)shadowBlur;
-(void)_restoreOriginalFontAttribute;
-(void)setShadowBlur:(double)arg1 ;
-(void)_setShadow:(id)arg1 ;
@end

