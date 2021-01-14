/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@class NSPointerArray;

@interface ARUIObserverStore : NSObject {

	NSPointerArray* _observers;

}

@property (nonatomic,readonly) unsigned long long count; 
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(void)removeObserver:(id)arg1 ;
@end

