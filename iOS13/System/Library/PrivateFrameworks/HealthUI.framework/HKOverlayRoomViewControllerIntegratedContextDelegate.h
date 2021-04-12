/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

@class HKInteractiveChartOverlayNamedDataSource, HKLineSeries;


@protocol HKOverlayRoomViewControllerIntegratedContextDelegate <NSObject>
@property (nonatomic,readonly) HKInteractiveChartOverlayNamedDataSource * cacheDataSource; 
@property (nonatomic,readonly) HKLineSeries * alternateLineSeries; 
@optional
-(id)formatterForTimescope:(long long)arg1;
-(id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
-(id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;

@required
-(HKInteractiveChartOverlayNamedDataSource *)cacheDataSource;
-(HKLineSeries *)alternateLineSeries;

@end

