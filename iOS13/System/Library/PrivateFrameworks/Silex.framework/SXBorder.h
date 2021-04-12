/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)defaultStrokeStyle;
-(BOOL)shouldBeDotted;
-(BOOL)isSolid;
@end

