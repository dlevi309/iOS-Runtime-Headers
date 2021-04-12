/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSSpecifier.h>

@protocol PSBillingPeriodSource;
@class NSArray, PSDataUsageStatisticsCache;

@interface PSUIDataUsageCategorySpecifier : PSSpecifier {

	id<PSBillingPeriodSource> _billingPeriodSource;
	NSArray* _subcategorySpecifiers;
	PSDataUsageStatisticsCache* _statisticsCache;
	unsigned long long _type;

}

@property (nonatomic,retain) PSDataUsageStatisticsCache * statisticsCache;                      //@synthesize statisticsCache=_statisticsCache - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic,__weak) id<PSBillingPeriodSource> billingPeriodSource;              //@synthesize billingPeriodSource=_billingPeriodSource - In the implementation block
@property (nonatomic,retain) NSArray * subcategorySpecifiers;                                   //@synthesize subcategorySpecifiers=_subcategorySpecifiers - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)dataUsage;
-(id)initWithType:(unsigned long long)arg1 subSpecifiers:(id)arg2 ;
-(PSDataUsageStatisticsCache *)statisticsCache;
-(void)setStatisticsCache:(PSDataUsageStatisticsCache *)arg1 ;
-(NSArray *)subcategorySpecifiers;
-(void)setBillingPeriodSource:(id<PSBillingPeriodSource>)arg1 ;
-(id)dataUsageString;
-(void)setSubcategorySpecifiers:(NSArray *)arg1 ;
-(id<PSBillingPeriodSource>)billingPeriodSource;
@end

