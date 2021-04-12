/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKHealthStore, _HKDateRangeQuery, NSHashTable, NSString, NSDictionary;

@interface HKSampleTypeDateRangeController : NSObject {

	HKHealthStore* _healthStore;
	_HKDateRangeQuery* _dateRangeQuery;
	NSHashTable* _observers;
	BOOL _applicationIsInForeground;
	BOOL _lastQuerySufferedError;
	NSString* _name;
	NSDictionary* _dateRangesBySampleType;

}

@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * dateRangesBySampleType;              //@synthesize dateRangesBySampleType=_dateRangesBySampleType - In the implementation block
-(void)addObserver:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(NSString *)name;
-(void)_beginUpdates;
-(void)removeObserver:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
-(void)_applicationMovingToForeground:(id)arg1 ;
-(void)_applicationMovingToBackground:(id)arg1 ;
-(void)_alertObserverDidUpdateDateRanges:(id)arg1 ;
-(void)_resultsDidUpdate:(id)arg1 ;
-(void)_updateHandlerDidReceiveError:(id)arg1 ;
-(void)_alertObserversDidUpdateDateRanges;
-(id)dateRangeForSampleType:(id)arg1 ;
-(NSDictionary *)dateRangesBySampleType;
@end

