/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NUScheduledItem : NSObject {

	unsigned long long _scheduledTime;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}

@property (readonly) unsigned long long scheduledTime;                //@synthesize scheduledTime=_scheduledTime - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) id block;                                        //@synthesize block=_block - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(long long)compare:(id)arg1 ;
-(id)block;
-(void)dispatch;
-(unsigned long long)scheduledTime;
-(id)initWithScheduledTime:(unsigned long long)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
@end

