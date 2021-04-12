/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKGraphSeries, HKDisplayType, UIColor;

@interface HKGraphSeriesConfiguration : NSObject {

	HKGraphSeries* _graphSeries;
	HKDisplayType* _displayType;
	UIColor* _tintColor;

}

@property (nonatomic,retain) HKGraphSeries * graphSeries;              //@synthesize graphSeries=_graphSeries - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;              //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                      //@synthesize tintColor=_tintColor - In the implementation block
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(HKGraphSeries *)graphSeries;
-(void)setGraphSeries:(HKGraphSeries *)arg1 ;
@end

