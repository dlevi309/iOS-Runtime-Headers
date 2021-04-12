/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@protocol PSAppCellularUsageSpecifierDelegate;
@class PSDataUsageStatisticsCache;

@interface PSUIAppsAndCategoriesDataUsageSubgroup : NSObject {

	id<PSAppCellularUsageSpecifierDelegate> _specifierDelegate;
	PSDataUsageStatisticsCache* _statisticsCache;

}

@property (assign,nonatomic,__weak) id<PSAppCellularUsageSpecifierDelegate> specifierDelegate;              //@synthesize specifierDelegate=_specifierDelegate - In the implementation block
@property (nonatomic,retain) PSDataUsageStatisticsCache * statisticsCache;                                  //@synthesize statisticsCache=_statisticsCache - In the implementation block
-(id)specifiers;
-(id)initWithPolicySpecifierDelegate:(id)arg1 statisticsCache:(id)arg2 ;
-(id<PSAppCellularUsageSpecifierDelegate>)specifierDelegate;
-(void)setSpecifierDelegate:(id<PSAppCellularUsageSpecifierDelegate>)arg1 ;
-(PSDataUsageStatisticsCache *)statisticsCache;
-(void)setStatisticsCache:(PSDataUsageStatisticsCache *)arg1 ;
@end

