/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(id)init;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)stop;
-(BOOL)sortStartDateAscending;
-(void)setupQueryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 completionHandler:(/*^block*/id)arg4 updateHandler:(/*^block*/id)arg5 ;
-(void)handleAddedObjects:(id)arg1 deletedObjects:(id)arg2 queryAnchor:(id)arg3 error:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setSortStartDateAscending:(BOOL)arg1 ;
-(id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 resultsHandler:(/*^block*/id)arg4 ;
@end

