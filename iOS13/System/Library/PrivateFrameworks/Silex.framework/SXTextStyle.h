/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXTextStyle.h>

@protocol SXTextStyle <SXConditionalObject,SXTextStyleProperties>
@end


@class NSString, SXJSONArray, UIColor, SXTextShadow, SXTextDecoration, SXTextStroke;

@interface SXTextStyle : SXJSONObject <SXTextStyle>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) id<SXTextStyleFontAttributes> fontAttributes; 
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
@property (nonatomic,readonly) NSString * identifier; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(NSString *)identifier;
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
-(id<SXTextStyleFontAttributes>)fontAttributes;
-(NSString *)fontName;
-(SXJSONArray *)conditional;
-(int)verticalAlignmentWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)textTransformWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)fontSizeWithValue:(id)arg1 withType:(int)arg2 ;
@end

