/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(id)init;
-(NSMapTable *)delegateToQueue;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithEventStreamName:(const char*)arg1 ;
-(void)didReceiveEventWithName:(id)arg1 userInfo:(id)arg2 ;
-(id)queueForDelegate:(id)arg1 ;
@end

