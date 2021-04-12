/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKHealthStore, _HKDateRangeQuery, NSHashTable, NSString, NSDictionary;

@interface HKSampleTypeDateRangeController : NSObject {

	HKHealthStore* _healthStore;
	_HKDateRangeQuery* _dateRangeQuery;
	NSHashTable* _observers;
	NSString* _name;
	NSDictionary* _dateRangesBySampleType;

}

@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * dateRangesBySampleType;              //@synthesize dateRangesBySampleType=_dateRangesBySampleType - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(id)dateRangeForSampleType:(id)arg1 ;
-(NSDictionary *)dateRangesBySampleType;
-(void)_beginUpdatesWithRetryAttemptCount:(long long)arg1 ;
-(void)_alertObserverDidUpdateDateRanges:(id)arg1 ;
-(void)_resultsDidUpdate:(id)arg1 ;
-(void)_updateHandlerDidReceiveError:(id)arg1 retryCount:(long long)arg2 ;
-(void)_alertObserversDidUpdateDateRanges;
@end

