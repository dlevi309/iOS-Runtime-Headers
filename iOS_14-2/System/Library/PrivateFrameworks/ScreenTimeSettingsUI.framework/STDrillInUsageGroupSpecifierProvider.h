/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STGroupSpecifierProvider.h>

@protocol STRootViewModelCoordinator;
@class STUsageItem, NSObject;

@interface STDrillInUsageGroupSpecifierProvider : STGroupSpecifierProvider {

	STUsageItem* _usageItem;
	NSObject*<STRootViewModelCoordinator> _coordinator;
	unsigned long long _numberOfNotifications;

}

@property (nonatomic,readonly) STUsageItem * usageItem;                                        //@synthesize usageItem=_usageItem - In the implementation block
@property (nonatomic,readonly) NSObject*<STRootViewModelCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfNotifications;                       //@synthesize numberOfNotifications=_numberOfNotifications - In the implementation block
-(NSObject*<STRootViewModelCoordinator>)coordinator;
-(unsigned long long)numberOfNotifications;
-(STUsageItem *)usageItem;
-(id)initWithUsageItem:(id)arg1 coordinator:(id)arg2 ;
-(id)selectedUsageReport:(id)arg1 ;
-(id)weeklyPickupTotal:(id)arg1 ;
-(id)dailyAverage:(id)arg1 ;
-(id)notifications:(id)arg1 ;
@end

