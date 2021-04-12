/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class UIColor;

@interface HKElectrocardiogramGridOptions : NSObject {

	unsigned long long _unitMultiple;
	unsigned long long _axis;
	UIColor* _lineColor;
	double _lineWidth;

}

@property (assign,nonatomic) unsigned long long unitMultiple;              //@synthesize unitMultiple=_unitMultiple - In the implementation block
@property (assign,nonatomic) unsigned long long axis;                      //@synthesize axis=_axis - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                          //@synthesize lineColor=_lineColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                             //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,readonly) CGAffineTransform scale; 
-(CGAffineTransform)scale;
-(unsigned long long)axis;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)setAxis:(unsigned long long)arg1 ;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(id)initWithUnitMultiple:(long long)arg1 axis:(unsigned long long)arg2 lineColor:(id)arg3 lineWidth:(double)arg4 ;
-(unsigned long long)unitMultiple;
-(void)setUnitMultiple:(unsigned long long)arg1 ;
@end

