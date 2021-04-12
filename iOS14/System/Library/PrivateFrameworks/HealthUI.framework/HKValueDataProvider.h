/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKDateCacheObserver.h>
#import <libobjc.A.dylib/HKSampleTypeUpdateControllerObserver.h>

@class HKFetchOperation, NSHashTable, HKHealthStore, HKDateCache, HKDisplayType, NSString;

@interface HKValueDataProvider : NSObject <HKDateCacheObserver, HKSampleTypeUpdateControllerObserver> {

	BOOL _resultsLoaded;
	BOOL _needsToReFetchValue;
	id _value;
	HKFetchOperation* _outstandingFetchOperation;
	NSHashTable* _observers;
	HKHealthStore* _healthStore;
	HKDateCache* _dateCache;
	HKDisplayType* _displayType;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKDateCache * dateCache;                  //@synthesize dateCache=_dateCache - In the implementation block
@property (nonatomic,readonly) id value; 
@property (nonatomic,readonly) BOOL hasLoadedData; 
@property (nonatomic,readonly) HKDisplayType * displayType;              //@synthesize displayType=_displayType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKHealthStore *)healthStore;
-(void)addObserver:(id)arg1 ;
-(HKDisplayType *)displayType;
-(HKDateCache *)dateCache;
-(id)secondaryValue;
-(void)removeObserver:(id)arg1 ;
-(id)currentValue;
-(BOOL)hasLoadedData;
-(id)value;
-(void)dealloc;
-(id)initWithHealthStore:(id)arg1 updateController:(id)arg2 dateCache:(id)arg3 displayType:(id)arg4 ;
-(void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2 ;
-(void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2 ;
-(void)_handleUnitPreferencesDidChangeNotification:(id)arg1 ;
-(void)_refreshValueIfNecessary;
-(BOOL)_currentlyFetchingValue;
-(void)_setNeedsReFetchValue;
-(void)_alertObserversDidUpdateValues;
-(BOOL)_requiresValueFetch;
-(void)_fetchValueWithRetryCount:(long long)arg1 ;
-(void)_transitionToFetchFailure;
-(void)_updateValueWithValue:(id)arg1 ;
-(id)fetchOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)didUpdateValue;
-(void)invalidateValue;
-(void)unitPreferencesDidUpdate;
@end

