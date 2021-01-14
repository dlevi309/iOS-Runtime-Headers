/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/


@protocol OS_xpc_event_publisher, OS_dispatch_queue;
@class NSObject, NSString, NSMutableArray, NSMutableSet;

@interface NFXPCEventPublisher : NSObject {

	BOOL _receivedInitialBarrier;
	NSObject*<OS_xpc_event_publisher> _publisher;
	NSString* _streamName;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _pendingSendEvents;
	NSMutableSet* _tokens;

}

@property (nonatomic,retain) NSObject*<OS_xpc_event_publisher> publisher;              //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,retain) NSString * streamName;                                    //@synthesize streamName=_streamName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingSendEvents;                       //@synthesize pendingSendEvents=_pendingSendEvents - In the implementation block
@property (nonatomic,retain) NSMutableSet * tokens;                                    //@synthesize tokens=_tokens - In the implementation block
@property (assign,nonatomic) BOOL receivedInitialBarrier;                              //@synthesize receivedInitialBarrier=_receivedInitialBarrier - In the implementation block
-(void)setTokens:(NSMutableSet *)arg1 ;
-(void)setPendingSendEvents:(NSMutableArray *)arg1 ;
-(void)setPublisher:(NSObject*<OS_xpc_event_publisher>)arg1 ;
-(NSObject*<OS_xpc_event_publisher>)publisher;
-(NSString *)streamName;
-(NSMutableSet *)tokens;
-(BOOL)receivedInitialBarrier;
-(void)sendXpcNotificationEventWithString:(id)arg1 ;
-(void)setReceivedInitialBarrier:(BOOL)arg1 ;
-(NSMutableArray *)pendingSendEvents;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)sendXpcNotificationEvent:(id)arg1 ;
-(id)initWithStreamName:(id)arg1 queue:(id)arg2 ;
-(void)setStreamName:(NSString *)arg1 ;
-(void)handleEventWithAction:(unsigned)arg1 token:(unsigned long long)arg2 descriptor:(id)arg3 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

