/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDSampleListDataProvider.h>

@class NSMutableDictionary, NSMutableArray;

@interface WDSleepListDataProvider : WDSampleListDataProvider {

	NSMutableDictionary* _sleepData;
	NSMutableArray* _orderedKeys;

}
-(id)_durationFormatter;
-(unsigned long long)numberOfSections;
-(id)sampleTypes;
-(id)titleForSection:(unsigned long long)arg1 ;
-(void)deleteAllData;
-(long long)cellStyle;
-(void)_callUpdateHandler;
-(id)textForObject:(id)arg1 ;
-(id)secondaryTextForObject:(id)arg1 ;
-(id)viewControllerForItemAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(BOOL*)arg3 ;
-(id)_sleepDataDictionaryFromSamples:(id)arg1 ;
-(id)_sleepSampleAtIndex:(unsigned long long)arg1 section:(unsigned long long)arg2 ;
@end

