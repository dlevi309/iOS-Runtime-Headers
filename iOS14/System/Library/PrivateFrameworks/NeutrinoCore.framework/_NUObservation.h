/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)block;
-(id)init;
-(id)observer;
-(long long)key;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithObserver:(id)arg1 key:(long long)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)notifyWithBlock:(/*^block*/id)arg1 ;
@end

