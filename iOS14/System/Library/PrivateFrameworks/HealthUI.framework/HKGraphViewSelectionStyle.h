/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKStrokeStyle;

@interface HKGraphViewSelectionStyle : NSObject {

	double _unselectedSeriesAlpha;
	HKStrokeStyle* _selectedPointLineStrokeStyle;
	HKStrokeStyle* _touchPointLineStrokeStyle;

}

@property (assign,nonatomic) double unselectedSeriesAlpha;                              //@synthesize unselectedSeriesAlpha=_unselectedSeriesAlpha - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * selectedPointLineStrokeStyle;              //@synthesize selectedPointLineStrokeStyle=_selectedPointLineStrokeStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * touchPointLineStrokeStyle;                 //@synthesize touchPointLineStrokeStyle=_touchPointLineStrokeStyle - In the implementation block
-(void)setUnselectedSeriesAlpha:(double)arg1 ;
-(void)setSelectedPointLineStrokeStyle:(HKStrokeStyle *)arg1 ;
-(HKStrokeStyle *)selectedPointLineStrokeStyle;
-(HKStrokeStyle *)touchPointLineStrokeStyle;
-(double)unselectedSeriesAlpha;
-(void)setTouchPointLineStrokeStyle:(HKStrokeStyle *)arg1 ;
@end

