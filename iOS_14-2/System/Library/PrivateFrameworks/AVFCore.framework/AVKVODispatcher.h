/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class AVCallbackContextRegistry;

@interface AVKVODispatcher : NSObject {

	AVCallbackContextRegistry* _callbackContextRegistry;

}
+(id)sharedKVODispatcher;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)startObservingObject:(id)arg1 weakObserver:(id)arg2 forTwoPartKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5 ;
-(id)startObservingValueAtTwoPartKeyPath:(id)arg1 ofObject:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)initWithDescriptionOfHowAllObservedPropertyChangesAreSerializedWithDispatcherDeallocation:(id)arg1 ;
-(id)startObservingValueAtKeyPath:(id)arg1 ofObject:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)startObservingValueAtKeyPath:(id)arg1 withoutKeepingAliveObservedObject:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)startObservingObject:(id)arg1 weakObserver:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5 ;
-(void)dealloc;
@end

