/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface DEWorkQueues : NSObject {

	NSMutableDictionary* _queues;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (retain) NSMutableDictionary * queues;                            //@synthesize queues=_queues - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDispatchQueue:(id)arg1 ;
-(NSMutableDictionary *)queues;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)advance:(id)arg1 ;
-(void)on:(id)arg1 enqueue:(/*^block*/id)arg2 ;
-(void)setQueues:(NSMutableDictionary *)arg1 ;
@end

