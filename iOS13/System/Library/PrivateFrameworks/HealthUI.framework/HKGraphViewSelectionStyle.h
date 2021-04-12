/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

