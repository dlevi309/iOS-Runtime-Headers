/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@protocol PSBillingPeriodSource;
@class PSDataUsageStatisticsCache, PSSpecifier;

@interface PSUITotalCellularUsageSubgroup : NSObject {

	id<PSBillingPeriodSource> _billingPeriodSource;
	PSDataUsageStatisticsCache* _statisticsCache;
	PSSpecifier* _totalUsageSpecifier;
	PSSpecifier* _totalRoamingUsageSpecifier;

}

@property (nonatomic,retain) PSDataUsageStatisticsCache * statisticsCache;                      //@synthesize statisticsCache=_statisticsCache - In the implementation block
@property (nonatomic,retain) PSSpecifier * totalUsageSpecifier;                                 //@synthesize totalUsageSpecifier=_totalUsageSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * totalRoamingUsageSpecifier;                          //@synthesize totalRoamingUsageSpecifier=_totalRoamingUsageSpecifier - In the implementation block
@property (assign,nonatomic,__weak) id<PSBillingPeriodSource> billingPeriodSource;              //@synthesize billingPeriodSource=_billingPeriodSource - In the implementation block
-(id)specifiers;
-(PSDataUsageStatisticsCache *)statisticsCache;
-(void)setStatisticsCache:(PSDataUsageStatisticsCache *)arg1 ;
-(id)initWithStatisticsCache:(id)arg1 andBillingPeriodSource:(id)arg2 ;
-(void)setBillingPeriodSource:(id<PSBillingPeriodSource>)arg1 ;
-(id<PSBillingPeriodSource>)billingPeriodSource;
-(id)totalDataUsageForSpecifier:(id)arg1 ;
-(id)totalRoamingDataUsageForSpecifier:(id)arg1 ;
-(id)totalBytesUsed;
-(id)totalRoamingBytesUsed;
-(PSSpecifier *)totalUsageSpecifier;
-(void)setTotalUsageSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)totalRoamingUsageSpecifier;
-(void)setTotalRoamingUsageSpecifier:(PSSpecifier *)arg1 ;
@end

