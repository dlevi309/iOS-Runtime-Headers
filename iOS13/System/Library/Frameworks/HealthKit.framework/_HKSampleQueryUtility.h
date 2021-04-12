/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class HKHealthStore, HKSampleType, NSPredicate, HKAnchoredObjectQuery, HKQueryAnchor, NSMutableArray;

@interface _HKSampleQueryUtility : NSObject {

	HKHealthStore* _healthStore;
	HKSampleType* _sampleType;
	NSPredicate* _predicate;
	HKAnchoredObjectQuery* _query;
	HKQueryAnchor* _queryAnchor;
	NSMutableArray* _samples;
	BOOL _sortStartDateAscending;
	/*^block*/id _updateHandler;

}

@property (nonatomic,copy) id updateHandler;                           //@synthesize updateHandler=_updateHandler - In the implementation block
@property (assign,nonatomic) BOOL sortStartDateAscending;              //@synthesize sortStartDateAscending=_sortStartDateAscending - In the implementation block
-(id)init;
-(void)stop;
-(void)execute;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 resultsHandler:(/*^block*/id)arg4 ;
-(void)setSortStartDateAscending:(BOOL)arg1 ;
-(void)setupQueryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 completionHandler:(/*^block*/id)arg4 updateHandler:(/*^block*/id)arg5 ;
-(void)handleAddedObjects:(id)arg1 deletedObjects:(id)arg2 queryAnchor:(id)arg3 error:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)sortStartDateAscending;
@end

