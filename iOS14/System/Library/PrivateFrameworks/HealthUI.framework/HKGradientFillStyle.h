/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKFillStyle.h>

@class UIColor;

@interface HKGradientFillStyle : HKFillStyle {

	UIColor* _firstColor;
	UIColor* _secondColor;
	double _fillPercentage;
	long long _fillDirection;
	double _gradientSize;

}

@property (nonatomic,retain) UIColor * firstColor;                 //@synthesize firstColor=_firstColor - In the implementation block
@property (nonatomic,retain) UIColor * secondColor;                //@synthesize secondColor=_secondColor - In the implementation block
@property (assign,nonatomic) double fillPercentage;                //@synthesize fillPercentage=_fillPercentage - In the implementation block
@property (assign,nonatomic) long long fillDirection;              //@synthesize fillDirection=_fillDirection - In the implementation block
@property (assign,nonatomic) double gradientSize;                  //@synthesize gradientSize=_gradientSize - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFirstColor:(UIColor *)arg1 ;
-(void)setSecondColor:(UIColor *)arg1 ;
-(void)setFillPercentage:(double)arg1 ;
-(void)setFillDirection:(long long)arg1 ;
-(void)_renderInContext:(CGContextRef)arg1 size:(CGSize)arg2 ;
-(UIColor *)firstColor;
-(UIColor *)secondColor;
-(BOOL)_useReversedFillDirection;
-(double)fillPercentage;
-(long long)fillDirection;
-(double)gradientSize;
-(void)setGradientSize:(double)arg1 ;
@end

