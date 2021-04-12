/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _NUObservation : NSObject {

	id _observer;
	long long _key;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}

@property (nonatomic,__weak,readonly) id observer;                              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) long long key;                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id block;                                        //@synthesize block=_block - In the implementation block
-(id)init;
-(long long)key;
-(id)observer;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)block;
-(id)initWithObserver:(id)arg1 key:(long long)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)notifyWithBlock:(/*^block*/id)arg1 ;
@end

