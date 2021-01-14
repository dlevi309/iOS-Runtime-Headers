/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>

@class UIColor;

@interface SXStrokeStyle : SXJSONObject

@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) SXConvertibleValue width; 
@property (nonatomic,readonly) int style; 
-(int)style;
-(SXConvertibleValue)width;
-(UIColor *)color;
-(int)styleWithValue:(id)arg1 withType:(int)arg2 ;
@end

