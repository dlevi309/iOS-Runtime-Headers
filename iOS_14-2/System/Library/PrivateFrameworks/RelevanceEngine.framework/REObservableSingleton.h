/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RESingleton.h>

@class REObserverStore;

@interface REObservableSingleton : RESingleton {

	REObserverStore* _store;

}

@property (nonatomic,readonly) unsigned long long numberOfObservers; 
-(void)addObserver:(id)arg1 ;
-(void)enumerateObservers:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfObservers;
-(void)removeObserver:(id)arg1 ;
-(id)_init;
@end

