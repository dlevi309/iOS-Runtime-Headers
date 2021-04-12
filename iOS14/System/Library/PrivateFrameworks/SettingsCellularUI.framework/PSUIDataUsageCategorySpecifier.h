/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSSpecifier.h>

@protocol PSBillingPeriodSource;
@class NSArray, PSDataUsageStatisticsCache;

@interface PSUIDataUsageCategorySpecifier : PSSpecifier {

	id<PSBillingPeriodSource> _billingPeriodSource;
	NSArray* _subcategorySpecifiers;
	unsigned long long _type;
	PSDataUsageStatisticsCache* _statisticsCache;

}

@property (nonatomic,retain) PSDataUsageStatisticsCache * statisticsCache;                      //@synthesize statisticsCache=_statisticsCache - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic,__weak) id<PSBillingPeriodSource> billingPeriodSource;              //@synthesize billingPeriodSource=_billingPeriodSource - In the implementation block
@property (nonatomic,retain) NSArray * subcategorySpecifiers;                                   //@synthesize subcategorySpecifiers=_subcategorySpecifiers - In the implementation block
-(unsigned long long)dataUsage;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 subSpecifiers:(id)arg2 ;
-(PSDataUsageStatisticsCache *)statisticsCache;
-(void)setStatisticsCache:(PSDataUsageStatisticsCache *)arg1 ;
-(NSArray *)subcategorySpecifiers;
-(void)setBillingPeriodSource:(id<PSBillingPeriodSource>)arg1 ;
-(id)dataUsageString;
-(void)setSubcategorySpecifiers:(NSArray *)arg1 ;
-(id<PSBillingPeriodSource>)billingPeriodSource;
@end

