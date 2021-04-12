/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)_fetchWheelchairUseIfNecessary;
-(BOOL)_needsFetch;
-(void)_fetchWheelchairUse;
-(void)_handleFetchSuccess:(id)arg1 ;
-(void)_handleFetchError:(id)arg1 ;
-(BOOL)isWheelchairUser;
-(void)_alertObserversDidUpdateToWheelchairUser:(BOOL)arg1 ;
-(BOOL)hasFetchedWheelchairUse;
@end

