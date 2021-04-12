/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<MRProtocolMessageQueueDelegate>)delegate;
-(void)setDelegate:(id<MRProtocolMessageQueueDelegate>)arg1 ;
-(void)flush;
-(void)setDatasource:(id<MRProtocolMessageQueueDataSource>)arg1 ;
-(id<MRProtocolMessageQueueDataSource>)datasource;
-(id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1 ;
-(id)_dataForMessage:(id)arg1 ;
-(void)enqueueMessage:(id)arg1 reply:(/*^block*/id)arg2 queue:(id)arg3 ;
-(BOOL)reply:(id)arg1 ;
@end

