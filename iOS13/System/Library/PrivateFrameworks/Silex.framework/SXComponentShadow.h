/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

