/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTintColor:(UIColor *)arg1 ;
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(UIColor *)tintColor;
-(HKGraphSeries *)graphSeries;
-(void)setGraphSeries:(HKGraphSeries *)arg1 ;
@end

