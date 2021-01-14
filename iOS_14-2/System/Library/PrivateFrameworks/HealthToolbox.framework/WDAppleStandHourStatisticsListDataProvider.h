/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDSampleListDataProvider.h>

@class NSMutableArray, NSMutableDictionary, HKDisplayTypeValueFormatter, NSDateFormatter;

@interface WDAppleStandHourStatisticsListDataProvider : WDSampleListDataProvider {

	NSMutableArray* _orderedTimePeriods;
	NSMutableDictionary* _totalsByTimePeriod;
	HKDisplayTypeValueFormatter* _valueFormatter;
	NSDateFormatter* _dateFormatter;

}
-(unsigned long long)numberOfSections;
-(id)sampleTypes;
-(id)titleForSection:(unsigned long long)arg1 ;
-(void)deleteAllData;
-(long long)cellStyle;
-(void)_callUpdateHandler;
-(id)predicateForType:(id)arg1 ;
-(id)textForObject:(id)arg1 ;
-(id)secondaryTextForObject:(id)arg1 ;
-(id)viewControllerForItemAtIndexPath:(id)arg1 ;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 ;
-(unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 ;
-(void)_removeSamplesInDateRange:(id)arg1 ;
-(id)_samplesSortDescriptor;
-(void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(BOOL*)arg3 ;
-(void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
@end

