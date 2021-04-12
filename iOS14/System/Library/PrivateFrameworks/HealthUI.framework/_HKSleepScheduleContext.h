/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKOverlayContext.h>

@protocol _HKContextChangeDelegate;
@class HKDisplayTypeContextItem, HKDisplayType, HKInteractiveChartOverlayViewController, HKSampleType, NSString;

@interface _HKSleepScheduleContext : NSObject <HKOverlayContext> {

	BOOL _isPrimaryContext;
	HKDisplayTypeContextItem* _lastUpdatedItem;
	HKDisplayType* _baseDisplayType;
	HKDisplayType* _overlayDisplayType;
	long long _overlayMode;
	HKInteractiveChartOverlayViewController* _overlayChartController;
	HKSampleType* _monitoringSampleType;
	id<_HKContextChangeDelegate> _contextChangeDelegate;

}

@property (nonatomic,retain) HKDisplayTypeContextItem * lastUpdatedItem;                                      //@synthesize lastUpdatedItem=_lastUpdatedItem - In the implementation block
@property (nonatomic,readonly) HKDisplayType * baseDisplayType;                                               //@synthesize baseDisplayType=_baseDisplayType - In the implementation block
@property (nonatomic,readonly) HKDisplayType * overlayDisplayType;                                            //@synthesize overlayDisplayType=_overlayDisplayType - In the implementation block
@property (nonatomic,readonly) long long overlayMode;                                                         //@synthesize overlayMode=_overlayMode - In the implementation block
@property (nonatomic,readonly) BOOL isPrimaryContext;                                                         //@synthesize isPrimaryContext=_isPrimaryContext - In the implementation block
@property (nonatomic,readonly) HKInteractiveChartOverlayViewController * overlayChartController;              //@synthesize overlayChartController=_overlayChartController - In the implementation block
@property (nonatomic,retain) HKSampleType * monitoringSampleType;                                             //@synthesize monitoringSampleType=_monitoringSampleType - In the implementation block
@property (nonatomic,__weak,readonly) id<_HKContextChangeDelegate> contextChangeDelegate;                     //@synthesize contextChangeDelegate=_contextChangeDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contextItemForLastUpdate;
-(void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)sampleTypeForDateRangeUpdates;
-(id)overlayDisplayTypeForTimeScope:(long long)arg1 ;
-(void)overlayStateWillChange:(BOOL)arg1 contextItem:(id)arg2 chartController:(id)arg3 ;
-(id)baseDisplayTypeForOverlay:(long long)arg1 ;
-(BOOL)unselectedContextShouldUseContextBaseType;
-(long long)overlayMode;
-(HKInteractiveChartOverlayViewController *)overlayChartController;
-(HKSampleType *)monitoringSampleType;
-(void)setMonitoringSampleType:(HKSampleType *)arg1 ;
-(HKDisplayType *)overlayDisplayType;
-(id)initWithBaseDisplayType:(id)arg1 overlayDisplayType:(id)arg2 overlayChartController:(id)arg3 overlayMode:(long long)arg4 isPrimaryContext:(BOOL)arg5 contextChangeDelegate:(id)arg6 ;
-(HKDisplayTypeContextItem *)lastUpdatedItem;
-(BOOL)isPrimaryContext;
-(HKDisplayType *)baseDisplayType;
-(void)setLastUpdatedItem:(HKDisplayTypeContextItem *)arg1 ;
-(id<_HKContextChangeDelegate>)contextChangeDelegate;
-(id)_scheduleContextItemWithPhrase:(id)arg1 ;
-(id)_schedulePhraseFromChartPoints:(id)arg1 ;
-(id)_schedulePhraseFromUpperGoal:(id)arg1 lowerGoal:(id)arg2 ;
-(id)_stringFromGoalOffset:(id)arg1 ;
@end
