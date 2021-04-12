/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class HKHealthStore, NSHashTable;

@interface WDSourceOrderController : NSObject {

	HKHealthStore* _healthStore;
	NSHashTable* _observers;

}
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)_notifyObserversForDataType:(id)arg1 withProviders:(id)arg2 ;
-(void)getOrderedSourcesForDataType:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setOrderedSources:(id)arg1 dataType:(id)arg2 ;
@end

