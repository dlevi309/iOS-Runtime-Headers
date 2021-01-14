/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_dispatch_queue;
@class HKHealthStore, NSHashTable, HKWheelchairUseObject, NSObject;

@interface _HKWheelchairUseCharacteristicCache : NSObject {

	HKHealthStore* _healthStore;
	NSHashTable* _observers;
	long long _state;
	HKWheelchairUseObject* _wheelchairUseObject;
	NSObject*<OS_dispatch_queue> _queue;
	int _characteristicUpdateToken;
	long long _queryRetries;

}
-(void)addObserver:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(BOOL)_needsFetch;
-(void)_fetchWheelchairUse;
-(void)_fetchWheelchairUseIfNecessary;
-(void)_handleFetchSuccess:(id)arg1 ;
-(void)_handleFetchError:(id)arg1 ;
-(BOOL)isWheelchairUser;
-(BOOL)hasFetchedWheelchairUse;
-(void)_alertObserversDidUpdateToWheelchairUser:(BOOL)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
@end

