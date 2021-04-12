/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
*/

#import <Preferences/PSSpecifier.h>

@protocol PSBillingPeriodSource;
@class PSDataUsageStatisticsCache, NSString;

@interface PSDataUsageSpecifier : PSSpecifier {

	id<PSBillingPeriodSource> _billingPeriodSource;
	PSDataUsageStatisticsCache* _statisticsCache;
	NSString* _bundleID;
	unsigned long long _type;

}

@property (nonatomic,retain) PSDataUsageStatisticsCache * statisticsCache;                      //@synthesize statisticsCache=_statisticsCache - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                               //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic,__weak) id<PSBillingPeriodSource> billingPeriodSource;              //@synthesize billingPeriodSource=_billingPeriodSource - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned long long)dataUsage;
-(id)initWithType:(unsigned long long)arg1 bundleID:(id)arg2 statisticsCache:(id)arg3 ;
-(PSDataUsageStatisticsCache *)statisticsCache;
-(void)setStatisticsCache:(PSDataUsageStatisticsCache *)arg1 ;
-(void)setBillingPeriodSource:(id<PSBillingPeriodSource>)arg1 ;
-(id)dataUsageString;
-(id<PSBillingPeriodSource>)billingPeriodSource;
@end

