/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HKDateCacheObserver.h>
#import <libobjc.A.dylib/_HKWheelchairUseCharacteristicCacheObserver.h>
#import <libobjc.A.dylib/WDDashboardCellForceTouchDelegate.h>

@class HKActivityTodayWidgetView, HKActivitySummary, NSDateComponents, HKGradientView, UIView, UILabel, HKHealthStore, HKDateCache, _HKWheelchairUseCharacteristicCache, WDProfile, NSString;

@interface WDActivityTodayWidgetTableViewCell : UITableViewCell <HKDateCacheObserver, _HKWheelchairUseCharacteristicCacheObserver, WDDashboardCellForceTouchDelegate> {

	HKActivityTodayWidgetView* _activityTodayWidgetView;
	HKActivitySummary* _currentActivitySummary;
	NSDateComponents* _currentDateComponents;
	HKGradientView* _backgroundGradientView;
	UIView* _titleSeparatorView;
	UILabel* _titleLabel;
	UILabel* _dateLabel;
	HKHealthStore* _healthStore;
	HKDateCache* _dateCache;
	_HKWheelchairUseCharacteristicCache* _wheelchairUseCharacteristicCache;
	WDProfile* _profile;
	BOOL _isWheelchairUser;
	unsigned long long _marginMode;

}

@property (assign,nonatomic) unsigned long long marginMode;              //@synthesize marginMode=_marginMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredCellHeight;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupSubviews;
-(void)_setupConstraints;
-(void)wheelchairUseCharacteristicCache:(id)arg1 wheelchairUsageDidChange:(BOOL)arg2 ;
-(void)_updateDateLabel;
-(void)setActivitySummary:(id)arg1 animated:(BOOL)arg2 ;
-(void)setMarginMode:(unsigned long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 profile:(id)arg3 ;
-(void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2 ;
-(id)_activeEnergyUnit;
-(id)_basalEnergyUnit;
-(void)_updateActivitySummaryAnimated:(BOOL)arg1 ;
-(void)_updateTimeBasedUI;
-(void)_setIsWheelchairUser:(BOOL)arg1 ;
-(CGRect)forceTouchFrame;
-(unsigned long long)marginMode;
@end

