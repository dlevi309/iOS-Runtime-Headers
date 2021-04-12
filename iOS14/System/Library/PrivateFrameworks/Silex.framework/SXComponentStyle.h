/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXComponentStyle.h>
@class NSString;


@protocol SXComponentStyle <SXComponentStyleProperties,SXConditionalObject>
@property (nonatomic,readonly) NSString * identifier; 
@required
-(NSString *)identifier;

@end


@class NSString, SXFill, UIColor, SXComponentShadow, SXBorder, SXDataTableStyle, SXComponentMask, SXJSONArray;

@interface SXComponentStyle : SXJSONObject <SXComponentStyle>

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) SXFill * fill; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) SXComponentShadow * shadow; 
@property (nonatomic,readonly) SXBorder * border; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) double cornerRadius; 
@property (nonatomic,readonly) SXDataTableStyle * tableStyle; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) SXComponentMask * mask; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)conditional;
-(SXComponentMask *)mask;
-(SXDataTableStyle *)tableStyle;
-(double)cornerRadius;
-(double)opacity;
-(SXBorder *)border;
-(SXComponentShadow *)shadow;
-(UIColor *)backgroundColor;
-(SXFill *)fill;
-(NSString *)identifier;
-(unsigned long long)traits;
-(id)fillWithValue:(id)arg1 withType:(int)arg2 ;
-(id)maskWithValue:(id)arg1 withType:(int)arg2 ;
@end

