/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@class NSMutableArray, NSProtocolChecker, Protocol;

@interface IMInvocationQueue : NSObject {

	BOOL _holdQueue;
	id _delegate;
	id _target;
	double _dequeueRate;
	NSMutableArray* _queue;
	NSMutableArray* _options;
	NSProtocolChecker* _protocolChecker;

}

@property (nonatomic,readonly) BOOL holdQueue;                                          //@synthesize holdQueue=_holdQueue - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * queue;                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,retain,readonly) NSProtocolChecker * protocolChecker;              //@synthesize protocolChecker=_protocolChecker - In the implementation block
@property (nonatomic,retain) Protocol * protocol; 
@property (assign) id target;                                                           //@synthesize target=_target - In the implementation block
@property (assign) id delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double dequeueRate;                                        //@synthesize dequeueRate=_dequeueRate - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) unsigned long long count; 
-(void)setProtocol:(Protocol *)arg1 ;
-(void)setTarget:(id)arg1 ;
-(NSProtocolChecker *)protocolChecker;
-(id)init;
-(id)delegate;
-(Protocol *)protocol;
-(NSMutableArray *)options;
-(unsigned long long)count;
-(id)peek;
-(void)setDelegate:(id)arg1 ;
-(void)_checkQueue;
-(double)dequeueRate;
-(unsigned long long)_optionsForInvocation:(id)arg1 ;
-(void)_setQueueTimer;
-(long long)_enqueueInvocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)_invokeInvocation:(id)arg1 ;
-(id)_dequeueInvocation;
-(int)_numberOfLimitedMessagesInQueue;
-(int)_maxQueueLimitSize;
-(BOOL)_acceptsOptions:(unsigned long long)arg1 ;
-(BOOL)_replaceSimilarInvocation:(id)arg1 ;
-(BOOL)_insertInvocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setDequeueRate:(double)arg1 ;
-(void)_stepQueueNotification:(id)arg1 ;
-(void)_holdQueueNotification:(id)arg1 ;
-(void)_releaseQueueNotification:(id)arg1 ;
-(void)removeAllInvocations;
-(NSMutableArray *)queue;
-(id)target;
-(BOOL)isEmpty;
-(void)invokeAll;
-(BOOL)holdQueue;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

