/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval, NSString, NSDate, NSArray, NSDictionary, NSCache, STUsageReportGraphDataSet;

@interface STUsageReport : NSObject <NSSecureCoding> {

	NSDateInterval* _maxPickupsDateInterval;
	NSString* _displayName;
	unsigned long long _type;
	NSDateInterval* _reportDateInterval;
	NSDate* _lastUpdatedDate;
	NSArray* _dateIntervals;
	double _totalScreenTime;
	double _screenTimeDeltaFromHistoricalAverage;
	unsigned long long _totalPickups;
	NSDictionary* _pickupsByBundleIdentifier;
	NSArray* _pickups;
	double _pickupRate;
	double _activePickupDateIntervals;
	double _pickupFrequency;
	unsigned long long _maxPickups;
	unsigned long long _maxPickupDateIntervalIndex;
	NSDate* _firstPickup;
	double _pickupDeltaFromHistoricalAverage;
	unsigned long long _totalNotifications;
	NSDictionary* _notificationsByBundleIdentifier;
	NSArray* _notifications;
	double _notificationRate;
	double _notificationDeltaFromHistoricalAverage;
	NSDictionary* _appUsageByBundleIdentifier;
	NSDictionary* _webUsageByDomain;
	NSArray* _appAndWebUsages;
	NSDictionary* _categoryUsageByCategorydentifier;
	NSArray* _categoryUsages;
	double _maxScreenTime;
	NSDictionary* _screenTimeByStartOfDateInterval;
	NSDictionary* _pickupsByStartOfDateInterval;
	NSDictionary* _pickupsByStartOfDateIntervalByBundleIdentifier;
	NSDictionary* _notificationsByStartOfDateInterval;
	NSDictionary* _notificationsByStartOfDateIntervalByBundleIdentifier;
	double _totalAppUsage;
	NSDictionary* _appUsageByStartOfDateInterval;
	NSDictionary* _appUsageByStartOfDateIntervalByBundleIdentifier;
	NSArray* _appUsages;
	double _totalWebUsage;
	NSDictionary* _webUsageByStartOfDateInterval;
	NSDictionary* _webUsageByStartOfDateIntervalByDomain;
	NSArray* _webUsages;
	double _totalCategoryUsage;
	NSDictionary* _categoryUsageByStartOfDateInterval;
	NSDictionary* _categoryUsageByStartOfDateIntervalByCategoryIdentifier;
	NSCache* _dataSetByUsageIdentifier;

}

@property (nonatomic,readonly) double maxScreenTime;                                                                    //@synthesize maxScreenTime=_maxScreenTime - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * screenTimeByStartOfDateInterval;                                     //@synthesize screenTimeByStartOfDateInterval=_screenTimeByStartOfDateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * pickupsByStartOfDateInterval;                                        //@synthesize pickupsByStartOfDateInterval=_pickupsByStartOfDateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * pickupsByStartOfDateIntervalByBundleIdentifier;                      //@synthesize pickupsByStartOfDateIntervalByBundleIdentifier=_pickupsByStartOfDateIntervalByBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * notificationsByStartOfDateInterval;                                  //@synthesize notificationsByStartOfDateInterval=_notificationsByStartOfDateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * notificationsByStartOfDateIntervalByBundleIdentifier;                //@synthesize notificationsByStartOfDateIntervalByBundleIdentifier=_notificationsByStartOfDateIntervalByBundleIdentifier - In the implementation block
@property (nonatomic,readonly) double totalAppUsage;                                                                    //@synthesize totalAppUsage=_totalAppUsage - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * appUsageByStartOfDateInterval;                                       //@synthesize appUsageByStartOfDateInterval=_appUsageByStartOfDateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * appUsageByStartOfDateIntervalByBundleIdentifier;                     //@synthesize appUsageByStartOfDateIntervalByBundleIdentifier=_appUsageByStartOfDateIntervalByBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * appUsages;                                                                //@synthesize appUsages=_appUsages - In the implementation block
@property (nonatomic,readonly) double totalWebUsage;                                                                    //@synthesize totalWebUsage=_totalWebUsage - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * webUsageByStartOfDateInterval;                                       //@synthesize webUsageByStartOfDateInterval=_webUsageByStartOfDateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * webUsageByStartOfDateIntervalByDomain;                               //@synthesize webUsageByStartOfDateIntervalByDomain=_webUsageByStartOfDateIntervalByDomain - In the implementation block
@property (nonatomic,copy,readonly) NSArray * webUsages;                                                                //@synthesize webUsages=_webUsages - In the implementation block
@property (nonatomic,readonly) double totalCategoryUsage;                                                               //@synthesize totalCategoryUsage=_totalCategoryUsage - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * categoryUsageByStartOfDateInterval;                                  //@synthesize categoryUsageByStartOfDateInterval=_categoryUsageByStartOfDateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * categoryUsageByStartOfDateIntervalByCategoryIdentifier;              //@synthesize categoryUsageByStartOfDateIntervalByCategoryIdentifier=_categoryUsageByStartOfDateIntervalByCategoryIdentifier - In the implementation block
@property (nonatomic,retain) NSCache * dataSetByUsageIdentifier;                                                        //@synthesize dataSetByUsageIdentifier=_dataSetByUsageIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * reportDateInterval;                                                //@synthesize reportDateInterval=_reportDateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastUpdatedDate;                                                           //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dateIntervals;                                                            //@synthesize dateIntervals=_dateIntervals - In the implementation block
@property (nonatomic,readonly) double totalScreenTime;                                                                  //@synthesize totalScreenTime=_totalScreenTime - In the implementation block
@property (nonatomic,readonly) STUsageReportGraphDataSet * screenTimeDataSet; 
@property (nonatomic,readonly) double screenTimeDeltaFromHistoricalAverage;                                             //@synthesize screenTimeDeltaFromHistoricalAverage=_screenTimeDeltaFromHistoricalAverage - In the implementation block
@property (nonatomic,readonly) unsigned long long totalPickups;                                                         //@synthesize totalPickups=_totalPickups - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * pickupsByBundleIdentifier;                                           //@synthesize pickupsByBundleIdentifier=_pickupsByBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pickups;                                                                  //@synthesize pickups=_pickups - In the implementation block
@property (nonatomic,readonly) double pickupRate;                                                                       //@synthesize pickupRate=_pickupRate - In the implementation block
@property (nonatomic,readonly) double activePickupDateIntervals;                                                        //@synthesize activePickupDateIntervals=_activePickupDateIntervals - In the implementation block
@property (nonatomic,readonly) double pickupFrequency;                                                                  //@synthesize pickupFrequency=_pickupFrequency - In the implementation block
@property (nonatomic,readonly) unsigned long long maxPickups;                                                           //@synthesize maxPickups=_maxPickups - In the implementation block
@property (nonatomic,readonly) unsigned long long maxPickupDateIntervalIndex;                                           //@synthesize maxPickupDateIntervalIndex=_maxPickupDateIntervalIndex - In the implementation block
@property (nonatomic,readonly) STUsageReportGraphDataSet * pickupsDataSet; 
@property (nonatomic,copy,readonly) NSDateInterval * maxPickupsDateInterval;                                            //@synthesize maxPickupsDateInterval=_maxPickupsDateInterval - In the implementation block
@property (nonatomic,readonly) NSDate * firstPickup;                                                                    //@synthesize firstPickup=_firstPickup - In the implementation block
@property (readonly) double pickupDeltaFromHistoricalAverage;                                                           //@synthesize pickupDeltaFromHistoricalAverage=_pickupDeltaFromHistoricalAverage - In the implementation block
@property (nonatomic,readonly) unsigned long long totalNotifications;                                                   //@synthesize totalNotifications=_totalNotifications - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * notificationsByBundleIdentifier;                                     //@synthesize notificationsByBundleIdentifier=_notificationsByBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * notifications;                                                            //@synthesize notifications=_notifications - In the implementation block
@property (nonatomic,readonly) double notificationRate;                                                                 //@synthesize notificationRate=_notificationRate - In the implementation block
@property (nonatomic,readonly) STUsageReportGraphDataSet * notificationsDataSet; 
@property (readonly) double notificationDeltaFromHistoricalAverage;                                                     //@synthesize notificationDeltaFromHistoricalAverage=_notificationDeltaFromHistoricalAverage - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * appUsageByBundleIdentifier;                                          //@synthesize appUsageByBundleIdentifier=_appUsageByBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * webUsageByDomain;                                                    //@synthesize webUsageByDomain=_webUsageByDomain - In the implementation block
@property (nonatomic,copy,readonly) NSArray * appAndWebUsages;                                                          //@synthesize appAndWebUsages=_appAndWebUsages - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * categoryUsageByCategorydentifier;                                    //@synthesize categoryUsageByCategorydentifier=_categoryUsageByCategorydentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * categoryUsages;                                                           //@synthesize categoryUsages=_categoryUsages - In the implementation block
@property (nonatomic,readonly) STUsageReportGraphDataSet * categoryUsageDataSet; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSArray *)notifications;
-(NSDate *)lastUpdatedDate;
-(double)totalScreenTime;
-(unsigned long long)totalNotifications;
-(unsigned long long)totalPickups;
-(NSArray *)pickups;
-(NSDate *)firstPickup;
-(NSDictionary *)pickupsByBundleIdentifier;
-(NSDictionary *)webUsageByDomain;
-(id)topUsageItemsWithMaxCount:(unsigned long long)arg1 type:(unsigned long long)arg2 includeAggregateItem:(BOOL)arg3 nonAggregateItems:(id*)arg4 darkColors:(BOOL)arg5 ;
-(NSArray *)appAndWebUsages;
-(STUsageReportGraphDataSet *)categoryUsageDataSet;
-(id)dataSetWithUsageItem:(id)arg1 ;
-(NSArray *)dateIntervals;
-(NSDictionary *)notificationsByBundleIdentifier;
-(double)activePickupDateIntervals;
-(NSDictionary *)appUsageByBundleIdentifier;
-(NSDictionary *)categoryUsageByCategorydentifier;
-(unsigned long long)maxPickupDateIntervalIndex;
-(unsigned long long)maxPickups;
-(STUsageReportGraphDataSet *)pickupsDataSet;
-(STUsageReportGraphDataSet *)notificationsDataSet;
-(NSArray *)categoryUsages;
-(STUsageReportGraphDataSet *)screenTimeDataSet;
-(NSDateInterval *)reportDateInterval;
-(id)initWithReportType:(unsigned long long)arg1 startDate:(id)arg2 lastUpdatedDate:(id)arg3 firstPickup:(id)arg4 usageItems:(id)arg5 ;
-(NSArray *)appUsages;
-(NSArray *)webUsages;
-(double)totalAppUsage;
-(double)totalWebUsage;
-(double)totalCategoryUsage;
-(double)maxScreenTime;
-(NSDictionary *)screenTimeByStartOfDateInterval;
-(id)_dataSetForItemType:(unsigned long long)arg1 budgetItemIdentifier:(id)arg2 includeIndicatorImageName:(BOOL)arg3 useDarkColors:(BOOL)arg4 ;
-(NSCache *)dataSetByUsageIdentifier;
-(id)_countedDataSetForItemType:(unsigned long long)arg1 budgetItemIdentifier:(id)arg2 includeIndicatorImageName:(BOOL)arg3 ;
-(id)_timedDataSetForItemType:(unsigned long long)arg1 useDarkColors:(BOOL)arg2 ;
-(id)_timedDataSetForItemType:(unsigned long long)arg1 budgetItemIdentifier:(id)arg2 ;
-(NSDictionary *)notificationsByStartOfDateIntervalByBundleIdentifier;
-(NSDictionary *)notificationsByStartOfDateInterval;
-(NSDictionary *)pickupsByStartOfDateIntervalByBundleIdentifier;
-(NSDictionary *)pickupsByStartOfDateInterval;
-(NSDictionary *)appUsageByStartOfDateInterval;
-(NSDictionary *)webUsageByStartOfDateInterval;
-(NSDictionary *)appUsageByStartOfDateIntervalByBundleIdentifier;
-(NSDictionary *)webUsageByStartOfDateIntervalByDomain;
-(NSDictionary *)categoryUsageByStartOfDateInterval;
-(NSDictionary *)categoryUsageByStartOfDateIntervalByCategoryIdentifier;
-(NSDateInterval *)maxPickupsDateInterval;
-(id)appAndWebUsageDataSetWithDarkColors:(BOOL)arg1 ;
-(double)screenTimeDeltaFromHistoricalAverage;
-(double)pickupRate;
-(double)pickupFrequency;
-(double)pickupDeltaFromHistoricalAverage;
-(double)notificationRate;
-(double)notificationDeltaFromHistoricalAverage;
-(void)setDataSetByUsageIdentifier:(NSCache *)arg1 ;
@end

