/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

@class HKInteractiveChartOverlayNamedDataSource, HKLineSeries;


@protocol HKOverlayRoomViewControllerIntegratedContextDelegate <NSObject>
@property (nonatomic,readonly) HKInteractiveChartOverlayNamedDataSource * cacheDataSource; 
@property (nonatomic,readonly) HKLineSeries * alternateLineSeries; 
@optional
-(id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
-(id)unitString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
-(id)formatterForTimescope:(long long)arg1;
-(id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;

@required
-(HKInteractiveChartOverlayNamedDataSource *)cacheDataSource;
-(HKLineSeries *)alternateLineSeries;

@end

