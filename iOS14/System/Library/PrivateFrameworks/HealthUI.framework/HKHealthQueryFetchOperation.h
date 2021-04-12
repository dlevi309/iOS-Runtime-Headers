/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKChartCacheFetchOperation.h>

@class HKHealthStore, NSArray;

@interface HKHealthQueryFetchOperation : HKChartCacheFetchOperation {

	HKHealthStore* _healthStore;
	/*^block*/id _clientCompletion;
	/*^block*/id _fetchOperationManager;
	NSArray* _queries;

}

@property (nonatomic,retain) NSArray * queries;              //@synthesize queries=_queries - In the implementation block
-(void)setQueries:(NSArray *)arg1 ;
-(NSArray *)queries;
-(id)initWithHealthStore:(id)arg1 operationDescription:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)completedWithResults:(id)arg1 error:(id)arg2 ;
-(void)startOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)stopOperation;
@end

