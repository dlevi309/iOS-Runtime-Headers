/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)setAxis:(unsigned long long)arg1 ;
-(unsigned long long)axis;
-(CGAffineTransform)scale;
-(UIColor *)lineColor;
-(void)setLineColor:(UIColor *)arg1 ;
-(unsigned long long)unitMultiple;
-(id)initWithUnitMultiple:(long long)arg1 axis:(unsigned long long)arg2 lineColor:(id)arg3 lineWidth:(double)arg4 ;
-(void)setUnitMultiple:(unsigned long long)arg1 ;
@end

