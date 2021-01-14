/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextAttributeDefaults.h>
@class _UITextAttributeDictionary, UIColor, UIFont, NSParagraphStyle, NSShadow;


@protocol _UITextAttributeDefaults <NSObject>
@property (nonatomic,copy,readonly) _UITextAttributeDictionary * _attributes; 
@property (nonatomic,readonly) UIColor * _textColor; 
@property (nonatomic,readonly) UIFont * _font; 
@property (nonatomic,readonly) NSParagraphStyle * _paragraphStyle; 
@property (nonatomic,readonly) NSShadow * _shadow; 
@required
-(UIColor *)_textColor;
-(UIFont *)_font;
-(NSShadow *)_shadow;
-(NSParagraphStyle *)_paragraphStyle;
-(_UITextAttributeDictionary *)_attributes;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class _UITextAttributeDictionary, UIColor, UIFont, NSParagraphStyle, NSShadow, _UIMutableTextAttributeDictionary, NSString;

@interface _UITextAttributeDefaults : NSObject <_UITextAttributeDefaults, NSCopying> {

	_UIMutableTextAttributeDictionary* _attributes;

}

@property (setter=_setTextColor:,nonatomic,retain) UIColor * _textColor; 
@property (setter=_setFont:,nonatomic,retain) UIFont * _font; 
@property (setter=_setParagraphStyle:,nonatomic,retain) NSParagraphStyle * _paragraphStyle; 
@property (setter=_setShadow:,nonatomic,retain) NSShadow * _shadow; 
@property (nonatomic,copy,readonly) _UITextAttributeDictionary * _attributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultsForUserInterfaceIdiom:(long long)arg1 ;
+(id)_unspecifiedDefaults;
+(void)_getFontSizesForUserInterfaceIdiom:(long long)arg1 labelFontSize:(double*)arg2 buttonFontSize:(double*)arg3 systemFontSize:(double*)arg4 smallSystemFontSize:(double*)arg5 ;
-(UIColor *)_textColor;
-(void)_setShadow:(id)arg1 ;
-(void)_setTextColor:(id)arg1 ;
-(UIFont *)_font;
-(NSShadow *)_shadow;
-(void)_setParagraphStyle:(id)arg1 ;
-(NSParagraphStyle *)_paragraphStyle;
-(void)_setFont:(id)arg1 ;
-(_UITextAttributeDictionary *)_attributes;
-(NSString *)description;
-(id)_initWithFallback:(id)arg1 ;
-(unsigned long long)hash;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

