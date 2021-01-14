/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class NSHashTable, NSArray;

@interface REObserverStore : NSObject {

	os_unfair_lock_s _lock;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allObservers; 
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(NSArray *)allObservers;
-(void)removeObserver:(id)arg1 ;
-(id)initWithFunctionsOptions:(unsigned long long)arg1 ;
@end

