/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/

#import <FMCoreLite/_FMObserverProxy.h>

@class NSString;

@interface _FMKeyValueObserverProxy : _FMObserverProxy {

	BOOL _isObserving;
	/*^block*/id _observerBlock;
	id _observedObject;
	NSString* _keyPath;

}

@property (nonatomic,copy,readonly) id observerBlock;                 //@synthesize observerBlock=_observerBlock - In the implementation block
@property (nonatomic,__weak,readonly) id observedObject;              //@synthesize observedObject=_observedObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;               //@synthesize keyPath=_keyPath - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)observedObject;
-(id)initWithWeakObserver:(id)arg1 observedObject:(id)arg2 keyPath:(id)arg3 options:(unsigned long long)arg4 observerBlock:(/*^block*/id)arg5 ;
-(NSString *)keyPath;
-(id)observerBlock;
-(void)invalidate;
@end

