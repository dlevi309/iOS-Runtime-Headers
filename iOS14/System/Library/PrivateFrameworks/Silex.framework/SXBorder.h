/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>

@class SXStrokeStyle;

@interface SXBorder : SXJSONObject

@property (nonatomic,readonly) SXStrokeStyle * all; 
@property (nonatomic,readonly) SXStrokeStyle * top; 
@property (nonatomic,readonly) SXStrokeStyle * bottom; 
@property (nonatomic,readonly) SXStrokeStyle * left; 
@property (nonatomic,readonly) SXStrokeStyle * right; 
-(SXStrokeStyle *)right;
-(SXStrokeStyle *)left;
-(SXStrokeStyle *)bottom;
-(SXStrokeStyle *)top;
-(SXStrokeStyle *)all;
-(BOOL)isSolid;
-(id)defaultStrokeStyle;
-(BOOL)shouldBeDotted;
@end

