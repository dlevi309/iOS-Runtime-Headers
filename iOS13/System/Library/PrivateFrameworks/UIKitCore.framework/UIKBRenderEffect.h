/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIKBGradient;


@protocol UIKBRenderEffect <NSObject,NSCopying>
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) double weight; 
@property (nonatomic,readonly) BOOL usesRGBColors; 
@property (nonatomic,readonly) UIKBGradient * gradient; 
@required
-(BOOL)isValid;
-(CGColorRef)CGColor;
-(void)setWeight:(double)arg1;
-(double)weight;
-(BOOL)renderUnder;
-(SEL)renderSelector;
-(BOOL)usesRGBColors;
-(UIKBGradient *)gradient;

@end

