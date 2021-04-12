/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXTextStyle.h>

@protocol SXTextStyle <SXConditionalObject,SXTextStyleProperties>
@end


@class SXJSONArray, NSString, UIColor, SXTextShadow, SXTextDecoration, SXTextStroke;

@interface SXTextStyle : SXJSONObject <SXTextStyle>

@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) long long fontSize; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) SXTextShadow * textShadow; 
@property (nonatomic,readonly) long long textTransform; 
@property (nonatomic,readonly) double tracking; 
@property (nonatomic,readonly) SXTextDecoration * underline; 
@property (nonatomic,readonly) SXTextDecoration * strikethrough; 
@property (nonatomic,readonly) SXJSONArray * listStyle; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) int verticalAlignment; 
@property (nonatomic,readonly) SXTextStroke * stroke; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) id<SXTextStyleFontAttributes> fontAttributes; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(id<SXTextStyleFontAttributes>)fontAttributes;
-(NSString *)fontName;
-(SXTextStroke *)stroke;
-(int)verticalAlignment;
-(UIColor *)backgroundColor;
-(SXJSONArray *)listStyle;
-(SXTextDecoration *)strikethrough;
-(SXTextDecoration *)underline;
-(double)tracking;
-(long long)textTransform;
-(SXTextShadow *)textShadow;
-(UIColor *)textColor;
-(long long)fontSize;
-(NSString *)identifier;
-(SXJSONArray *)conditional;
-(int)verticalAlignmentWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)textTransformWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)fontSizeWithValue:(id)arg1 withType:(int)arg2 ;
@end
