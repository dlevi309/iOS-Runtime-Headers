/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface IMDXPCEventStreamHandler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _delegateToQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMapTable * delegateToQueue;                    //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSMapTable *)delegateToQueue;
-(id)initWithEventStreamName:(const char*)arg1 ;
-(void)didReceiveEventWithName:(id)arg1 userInfo:(id)arg2 ;
-(id)queueForDelegate:(id)arg1 ;
@end

