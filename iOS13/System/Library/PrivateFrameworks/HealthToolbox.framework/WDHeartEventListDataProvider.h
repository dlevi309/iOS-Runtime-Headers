/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDSampleListDataProvider.h>

@interface WDHeartEventListDataProvider : WDSampleListDataProvider
-(long long)cellStyle;
-(id)titleForSection:(unsigned long long)arg1 ;
-(id)sampleTypes;
-(id)_heartEventType;
-(double)customCellHeight;
-(double)customEstimatedCellHeight;
-(id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3 ;
-(id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
@end

