/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIKBRenderEffect.h>

@class UIKBGradient, NSString;

@interface UIKBNullEffect : NSObject <UIKBRenderEffect>

@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) double weight; 
@property (nonatomic,readonly) BOOL usesRGBColors; 
@property (nonatomic,readonly) UIKBGradient * gradient; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nullEffect;
-(CGColorRef)CGColor;
-(BOOL)renderUnder;
-(void)setWeight:(double)arg1 ;
-(double)weight;
-(BOOL)isValid;
-(BOOL)usesRGBColors;
-(SEL)renderSelector;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIKBGradient *)gradient;
@end

