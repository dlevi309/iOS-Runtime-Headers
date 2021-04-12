/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDSampleListDataProvider.h>

@class NSMutableDictionary, NSMutableArray;

@interface WDSleepListDataProvider : WDSampleListDataProvider {

	NSMutableDictionary* _sleepData;
	NSMutableArray* _orderedKeys;

}
-(unsigned long long)numberOfSections;
-(long long)cellStyle;
-(id)titleForSection:(unsigned long long)arg1 ;
-(void)deleteAllData;
-(id)sampleTypes;
-(void)_callUpdateHandler;
-(id)textForObject:(id)arg1 ;
-(unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 ;
-(id)viewControllerForItemAtIndexPath:(id)arg1 ;
-(id)_sleepDataDictionaryFromSamples:(id)arg1 ;
-(id)_sleepSampleAtIndex:(unsigned long long)arg1 section:(unsigned long long)arg2 ;
-(id)secondaryTextForObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(BOOL*)arg3 ;
@end

