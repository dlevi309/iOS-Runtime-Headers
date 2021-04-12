/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue, MRProtocolMessageQueueDataSource, MRProtocolMessageQueueDelegate;
@class NSObject, MRPendingMessageQueue, NSMutableDictionary;

@interface MRProtocolMessageQueue : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	id<MRProtocolMessageQueueDataSource> _datasource;
	id<MRProtocolMessageQueueDelegate> _delegate;
	MRPendingMessageQueue* _pendingMessageQueue;
	NSMutableDictionary* _pendingReplyQueue;

}

@property (assign,nonatomic,__weak) id<MRProtocolMessageQueueDataSource> datasource; 
@property (assign,nonatomic,__weak) id<MRProtocolMessageQueueDelegate> delegate; 
-(void)flush;
-(void)enqueueMessage:(id)arg1 expectedMessage:(unsigned long long)arg2 reply:(/*^block*/id)arg3 queue:(id)arg4 ;
-(id<MRProtocolMessageQueueDelegate>)delegate;
-(id<MRProtocolMessageQueueDataSource>)datasource;
-(BOOL)reply:(id)arg1 ;
-(void)setDelegate:(id<MRProtocolMessageQueueDelegate>)arg1 ;
-(void)setDatasource:(id<MRProtocolMessageQueueDataSource>)arg1 ;
-(id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1 ;
-(void)dealloc;
@end

