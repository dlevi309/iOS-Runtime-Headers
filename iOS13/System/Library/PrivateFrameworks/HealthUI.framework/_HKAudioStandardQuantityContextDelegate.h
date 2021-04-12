/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKOverlayRoomViewControllerIntegratedContextDelegate.h>

@class HKInteractiveChartOverlayNamedDataSource, HKLineSeries, HKDisplayType, NSString;

@interface _HKAudioStandardQuantityContextDelegate : NSObject <HKOverlayRoomViewControllerIntegratedContextDelegate> {

	HKInteractiveChartOverlayNamedDataSource* _cacheDataSource;
	HKDisplayType* _primaryDisplayType;

}

@property (nonatomic,retain) HKInteractiveChartOverlayNamedDataSource * cacheDataSource;              //@synthesize cacheDataSource=_cacheDataSource - In the implementation block
@property (nonatomic,retain) HKDisplayType * primaryDisplayType;                                      //@synthesize primaryDisplayType=_primaryDisplayType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HKLineSeries * alternateLineSeries; 
-(HKDisplayType *)primaryDisplayType;
-(void)setPrimaryDisplayType:(HKDisplayType *)arg1 ;
-(HKInteractiveChartOverlayNamedDataSource *)cacheDataSource;
-(id)formatterForTimescope:(long long)arg1 ;
-(HKLineSeries *)alternateLineSeries;
-(void)setCacheDataSource:(HKInteractiveChartOverlayNamedDataSource *)arg1 ;
-(id)initWithCustomDataSource:(id)arg1 primaryDisplayType:(id)arg2 ;
-(id)_statItemForTimeScope:(long long)arg1 ;
@end

