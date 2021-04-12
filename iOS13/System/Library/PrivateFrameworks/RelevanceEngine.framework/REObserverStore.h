/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(unsigned long long)count;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)allObservers;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(id)initWithFunctionsOptions:(unsigned long long)arg1 ;
@end

