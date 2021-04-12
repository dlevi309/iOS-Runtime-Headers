/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithHealthStore:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)completedWithResults:(id)arg1 error:(id)arg2 ;
-(void)stopOperation;
-(void)startOperationWithCompletion:(/*^block*/id)arg1 ;
@end

