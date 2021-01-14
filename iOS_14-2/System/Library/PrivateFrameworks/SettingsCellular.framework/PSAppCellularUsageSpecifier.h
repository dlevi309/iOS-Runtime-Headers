/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
*/

#import <Preferences/PSSpecifier.h>
#import <libobjc.A.dylib/PSSpecifierDataUsageReporter.h>

@protocol PSBillingPeriodSource, PSAppCellularUsageSpecifierDelegate;
@class NSString, PSDataUsageStatisticsCache;

@interface PSAppCellularUsageSpecifier : PSSpecifier <PSSpecifierDataUsageReporter> {

	BOOL _shouldShowUsage;
	NSString* _bundleID;
	id<PSBillingPeriodSource> _billingPeriodSource;
	id<PSAppCellularUsageSpecifierDelegate> _delegate;
	PSDataUsageStatisticsCache* _statisticsCache;

}

@property (nonatomic,retain) PSDataUsageStatisticsCache * statisticsCache;                         //@synthesize statisticsCache=_statisticsCache - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL shouldShowUsage;                                                 //@synthesize shouldShowUsage=_shouldShowUsage - In the implementation block
@property (assign,nonatomic,__weak) id<PSBillingPeriodSource> billingPeriodSource;                 //@synthesize billingPeriodSource=_billingPeriodSource - In the implementation block
@property (assign,nonatomic,__weak) id<PSAppCellularUsageSpecifierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)systemPolicySpecifierForAppName:(id)arg1 bundleID:(id)arg2 icon:(id)arg3 enabled:(BOOL)arg4 ;
+(id)appSpecifierWithBundleID:(id)arg1 statisticsCache:(id)arg2 ;
+(id)watchOnlyAppSpecifierWithBundleID:(id)arg1 statisticsCache:(id)arg2 ;
+(id)_specifierWithCellTitle:(id)arg1 bundleID:(id)arg2 shouldShowUsage:(BOOL)arg3 icon:(id)arg4 statisticsCache:(id)arg5 ;
+(void)setIconForSpecifier:(id)arg1 bundleID:(id)arg2 ;
+(id)systemPolicySpecifierForAppName:(id)arg1 bundleID:(id)arg2 icon:(id)arg3 ;
-(BOOL)isRestricted;
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned long long)dataUsage;
-(id<PSAppCellularUsageSpecifierDelegate>)delegate;
-(void)setDelegate:(id<PSAppCellularUsageSpecifierDelegate>)arg1 ;
-(NSString *)bundleID;
-(id)cellularUsagePolicy;
-(void)setCellularUsagePolicy:(id)arg1 ;
-(PSDataUsageStatisticsCache *)statisticsCache;
-(void)setStatisticsCache:(PSDataUsageStatisticsCache *)arg1 ;
-(void)setBillingPeriodSource:(id<PSBillingPeriodSource>)arg1 ;
-(id)dataUsageString;
-(id<PSBillingPeriodSource>)billingPeriodSource;
-(void)setShouldShowUsage:(BOOL)arg1 ;
-(BOOL)shouldShowUsage;
@end

