/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>

@class SXConvertiblePoint, UIColor;

@interface SXComponentShadow : SXJSONObject

@property (nonatomic,readonly) SXConvertibleValue radius; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) SXConvertiblePoint * offset; 
@property (nonatomic,readonly) UIColor * color; 
-(UIColor *)color;
-(SXConvertiblePoint *)offset;
-(double)opacity;
-(SXConvertibleValue)radius;
@end

