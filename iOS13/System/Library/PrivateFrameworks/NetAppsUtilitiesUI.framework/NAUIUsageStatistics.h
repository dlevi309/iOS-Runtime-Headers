/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface NAUIUsageStatistics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _nextAllowedUsageEventType;
	NSString* _usageStatisticsDomain;

}

@property (nonatomic,readonly) NSString * usageStatisticsDomain;              //@synthesize usageStatisticsDomain=_usageStatisticsDomain - In the implementation block
+(id)sharedUsageStatisticsForDomain:(id)arg1 ;
+(id)voiceMemoUsageStatistics;
-(id)initWithUsageStatisticsDomain:(id)arg1 ;
-(void)_incrementUsageCountForEventWithUsageStatisticName:(id)arg1 statisticType:(long long)arg2 ;
-(void)_pushDistributionStatisticNamed:(id)arg1 value:(double)arg2 ;
-(NSString *)usageStatisticsDomain;
-(id)_eventKeyForUsageStatisticName:(id)arg1 groupingKey:(id)arg2 ;
-(void)incrementUsageStatisticNamed:(id)arg1 statisticType:(long long)arg2 ;
-(void)pushDistributionStatisticNamed:(id)arg1 value:(double)arg2 ;
@end

