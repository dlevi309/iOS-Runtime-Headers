/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKHealthStore, NSMutableDictionary;

@interface HKSampleTypeUpdateController : NSObject {

	HKHealthStore* _healthStore;
	NSMutableDictionary* _outstandingQueriesByType;
	NSMutableDictionary* _queryStatesByType;
	NSMutableDictionary* _observersByType;

}
-(id)initWithHealthStore:(id)arg1 ;
-(id)_observersForType:(id)arg1 ;
-(void)removeObserver:(id)arg1 forType:(id)arg2 ;
-(void)addObserver:(id)arg1 forType:(id)arg2 ;
-(BOOL)_typeRequiresNewQuery:(id)arg1 ;
-(void)_createQueryForType:(id)arg1 retryCount:(long long)arg2 ;
-(void)_callObservers:(id)arg1 withType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(id)_allObservedTypes;
-(void)_removeQueryForType:(id)arg1 ;
-(long long)_queryStateForType:(id)arg1 ;
-(void)_setQueryState:(long long)arg1 forType:(id)arg2 ;
-(void)_handleQueryCallbackForType:(id)arg1 samplesAdded:(id)arg2 objectsDeleted:(id)arg3 error:(id)arg4 retryCount:(long long)arg5 ;
-(BOOL)_isHighFrequencyDataType:(id)arg1 ;
-(void)_handleHighFrequencyObserverCallbacksForType:(id)arg1 ;
-(void)_transitionToQueryFailureForType:(id)arg1 ;
-(void)_handleQueryErrorForType:(id)arg1 retryCount:(long long)arg2 error:(id)arg3 ;
-(void)_handleQuerySuccessForType:(id)arg1 samplesAdded:(id)arg2 objectsRemoved:(id)arg3 ;
-(BOOL)isQueryStateRunningForType:(id)arg1 ;
@end

