/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class UIColor;

@interface HKBloodPressureSeriesPresentationStyle : NSObject {

	double _width;
	UIColor* _systolicSymbolColor;
	UIColor* _systolicFillColor;
	UIColor* _diastolicSymbolColor;
	UIColor* _diastolicFillColor;

}

@property (assign,nonatomic) double width;                                //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) UIColor * systolicSymbolColor;               //@synthesize systolicSymbolColor=_systolicSymbolColor - In the implementation block
@property (nonatomic,retain) UIColor * systolicFillColor;                 //@synthesize systolicFillColor=_systolicFillColor - In the implementation block
@property (nonatomic,retain) UIColor * diastolicSymbolColor;              //@synthesize diastolicSymbolColor=_diastolicSymbolColor - In the implementation block
@property (nonatomic,retain) UIColor * diastolicFillColor;                //@synthesize diastolicFillColor=_diastolicFillColor - In the implementation block
-(double)width;
-(void)setWidth:(double)arg1 ;
-(void)setSystolicSymbolColor:(UIColor *)arg1 ;
-(UIColor *)systolicSymbolColor;
-(void)setSystolicFillColor:(UIColor *)arg1 ;
-(void)setDiastolicSymbolColor:(UIColor *)arg1 ;
-(UIColor *)diastolicSymbolColor;
-(void)setDiastolicFillColor:(UIColor *)arg1 ;
-(UIColor *)diastolicFillColor;
-(UIColor *)systolicFillColor;
@end

