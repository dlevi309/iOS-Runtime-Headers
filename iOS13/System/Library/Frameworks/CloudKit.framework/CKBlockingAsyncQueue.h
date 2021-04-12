/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface CKBlockingAsyncQueue : NSObject {

	unsigned _qosClass;
	unsigned long long _width;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _queueSema;

}

@property (assign,nonatomic) unsigned long long width;                                //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned qosClass;                                       //@synthesize qosClass=_qosClass - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> queueSema;              //@synthesize queueSema=_queueSema - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)initWithWidth:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(void)setWidth:(unsigned long long)arg1 ;
-(unsigned)qosClass;
-(id)initWithWidth:(unsigned long long)arg1 qosClass:(unsigned)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)queueSema;
-(void)performBarrierBlock:(/*^block*/id)arg1 ;
-(void)setQosClass:(unsigned)arg1 ;
-(void)setQueueSema:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

