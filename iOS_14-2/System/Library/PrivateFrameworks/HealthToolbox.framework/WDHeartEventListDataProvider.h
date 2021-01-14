/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDSampleListDataProvider.h>

@interface WDHeartEventListDataProvider : WDSampleListDataProvider
-(id)sampleTypes;
-(id)titleForSection:(unsigned long long)arg1 ;
-(long long)cellStyle;
-(id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3 ;
-(id)_heartEventType;
-(double)customEstimatedCellHeight;
-(double)customCellHeight;
@end

