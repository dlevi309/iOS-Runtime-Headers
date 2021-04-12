/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RESingleton.h>

@class REObserverStore;

@interface REObservableSingleton : RESingleton {

	REObserverStore* _store;

}

@property (nonatomic,readonly) unsigned long long numberOfObservers; 
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(unsigned long long)numberOfObservers;
-(void)enumerateObservers:(/*^block*/id)arg1 ;
@end

