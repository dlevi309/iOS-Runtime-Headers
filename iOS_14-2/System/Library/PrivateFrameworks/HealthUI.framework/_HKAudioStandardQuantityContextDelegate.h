/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKOverlayRoomViewControllerIntegratedContextDelegate.h>

@class HKInteractiveChartOverlayNamedDataSource, HKDisplayType, HKLineSeries, NSString;

@interface _HKAudioStandardQuantityContextDelegate : NSObject <HKOverlayRoomViewControllerIntegratedContextDelegate> {

	HKInteractiveChartOverlayNamedDataSource* _cacheDataSource;
	HKDisplayType* _primaryDisplayType;

}

@property (nonatomic,retain) HKInteractiveChartOverlayNamedDataSource * cacheDataSource;              //@synthesize cacheDataSource=_cacheDataSource - In the implementation block
@property (nonatomic,retain) HKDisplayType * primaryDisplayType;                                      //@synthesize primaryDisplayType=_primaryDisplayType - In the implementation block
@property (nonatomic,readonly) HKLineSeries * alternateLineSeries; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKDisplayType *)primaryDisplayType;
-(void)setPrimaryDisplayType:(HKDisplayType *)arg1 ;
-(id)formatterForTimescope:(long long)arg1 ;
-(HKInteractiveChartOverlayNamedDataSource *)cacheDataSource;
-(HKLineSeries *)alternateLineSeries;
-(void)setCacheDataSource:(HKInteractiveChartOverlayNamedDataSource *)arg1 ;
-(id)_statItemForTimeScope:(long long)arg1 ;
-(id)initWithCustomDataSource:(id)arg1 primaryDisplayType:(id)arg2 ;
@end

