/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)cellStyle;
-(id)titleForSection:(unsigned long long)arg1 ;
-(void)deleteAllData;
-(id)sampleTypes;
-(void)_callUpdateHandler;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 ;
-(id)textForObject:(id)arg1 ;
-(unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 ;
-(id)viewControllerForItemAtIndexPath:(id)arg1 ;
-(id)secondaryTextForObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(BOOL*)arg3 ;
-(void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)predicateForType:(id)arg1 ;
-(id)_samplesSortDescriptor;
-(void)_removeSamplesInDateRange:(id)arg1 ;
@end

