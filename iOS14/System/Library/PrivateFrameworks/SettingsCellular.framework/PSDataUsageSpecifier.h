/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
*/

#import <Preferences/PSSpecifier.h>
#import <libobjc.A.dylib/PSSpecifierDataUsageReporter.h>

@protocol PSBillingPeriodSource;
@class PSDataUsageStatisticsCache, NSString;

@interface PSDataUsageSpecifier : PSSpecifier <PSSpecifierDataUsageReporter> {

	id<PSBillingPeriodSource> _billingPeriodSource;
	PSDataUsageStatisticsCache* _statisticsCache;
	NSString* _bundleID;
	unsigned long long _type;

}

@property (nonatomic,retain) PSDataUsageStatisticsCache * statisticsCache;                      //@synthesize statisticsCache=_statisticsCache - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                               //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic,__weak) id<PSBillingPeriodSource> billingPeriodSource;              //@synthesize billingPeriodSource=_billingPeriodSource - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned long long)dataUsage;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)bundleID;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 bundleID:(id)arg2 statisticsCache:(id)arg3 ;
-(PSDataUsageStatisticsCache *)statisticsCache;
-(void)setStatisticsCache:(PSDataUsageStatisticsCache *)arg1 ;
-(void)setBillingPeriodSource:(id<PSBillingPeriodSource>)arg1 ;
-(id)dataUsageString;
-(id<PSBillingPeriodSource>)billingPeriodSource;
@end

