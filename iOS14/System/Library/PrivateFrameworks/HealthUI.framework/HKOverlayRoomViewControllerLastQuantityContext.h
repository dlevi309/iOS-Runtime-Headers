/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKOverlayContext.h>

@class HKInteractiveChartOverlayViewController, HKOverlayRoomApplicationItems, HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartOverlayNamedDataSource, NSString;

@interface HKOverlayRoomViewControllerLastQuantityContext : NSObject <HKOverlayContext> {

	long long _overlayMode;
	HKInteractiveChartOverlayViewController* _overlayChartController;
	HKOverlayRoomApplicationItems* _applicationItems;
	HKDisplayType* _overlayDisplayType;
	HKDisplayTypeContextItem* _lastUpdatedContextItem;
	HKInteractiveChartOverlayNamedDataSource* _cacheDataSource;

}

@property (nonatomic,retain) HKInteractiveChartOverlayViewController * overlayChartController;              //@synthesize overlayChartController=_overlayChartController - In the implementation block
@property (nonatomic,retain) HKOverlayRoomApplicationItems * applicationItems;                              //@synthesize applicationItems=_applicationItems - In the implementation block
@property (nonatomic,retain) HKDisplayType * overlayDisplayType;                                            //@synthesize overlayDisplayType=_overlayDisplayType - In the implementation block
@property (nonatomic,retain) HKDisplayTypeContextItem * lastUpdatedContextItem;                             //@synthesize lastUpdatedContextItem=_lastUpdatedContextItem - In the implementation block
@property (nonatomic,retain) HKInteractiveChartOverlayNamedDataSource * cacheDataSource;                    //@synthesize cacheDataSource=_cacheDataSource - In the implementation block
@property (assign,nonatomic) long long overlayMode;                                                         //@synthesize overlayMode=_overlayMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contextItemForLastUpdate;
-(void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)sampleTypeForDateRangeUpdates;
-(id)overlayDisplayTypeForTimeScope:(long long)arg1 ;
-(void)overlayStateDidChange:(BOOL)arg1 contextItem:(id)arg2 chartController:(id)arg3 ;
-(void)invalidateContextItem;
-(id)_colorForDisplayType:(id)arg1 ;
-(HKOverlayRoomApplicationItems *)applicationItems;
-(BOOL)isEqual:(id)arg1 ;
-(void)setApplicationItems:(HKOverlayRoomApplicationItems *)arg1 ;
-(id)initWithOverlayChartController:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 ;
-(long long)overlayMode;
-(HKInteractiveChartOverlayViewController *)overlayChartController;
-(HKInteractiveChartOverlayNamedDataSource *)cacheDataSource;
-(void)setLastUpdatedContextItem:(HKDisplayTypeContextItem *)arg1 ;
-(HKDisplayTypeContextItem *)lastUpdatedContextItem;
-(void)setOverlayMode:(long long)arg1 ;
-(void)setOverlayChartController:(HKInteractiveChartOverlayViewController *)arg1 ;
-(id)_buildLastValueDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 ;
-(id)_buildLastQuantityDisplayType;
-(id)_buildContextWithTime:(id)arg1 value:(id)arg2 ;
-(HKDisplayType *)overlayDisplayType;
-(id)_stringValueFromQuantity:(id)arg1 unit:(id)arg2 ;
-(id)_buildFullTitle:(id)arg1 ;
-(void)setOverlayDisplayType:(HKDisplayType *)arg1 ;
-(void)setCacheDataSource:(HKInteractiveChartOverlayNamedDataSource *)arg1 ;
@end

