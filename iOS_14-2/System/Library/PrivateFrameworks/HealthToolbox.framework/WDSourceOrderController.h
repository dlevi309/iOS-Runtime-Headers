/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class HKSourceStore, NSHashTable;

@interface WDSourceOrderController : NSObject {

	HKSourceStore* _sourceStore;
	NSHashTable* _observers;

}
-(void)addObserver:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)getOrderedSourcesForDataType:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setOrderedSources:(id)arg1 dataType:(id)arg2 ;
-(void)_notifyObserversForDataType:(id)arg1 withProviders:(id)arg2 ;
@end

