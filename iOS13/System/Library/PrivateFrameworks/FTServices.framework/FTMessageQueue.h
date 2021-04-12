/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/


@protocol FTMessageQueueDelegate;
@class NSMutableArray, CUTDeferredTaskQueue, IDSBaseMessage, NSArray;

@interface FTMessageQueue : NSObject {

	NSMutableArray* _queue;
	NSMutableArray* _addDates;
	id<FTMessageQueueDelegate> _delegate;
	CUTDeferredTaskQueue* _timeoutTask;

}

@property (retain) NSMutableArray * _queue;                          //@synthesize queue=_queue - In the implementation block
@property (retain) NSMutableArray * _addDates;                       //@synthesize addDates=_addDates - In the implementation block
@property (readonly) IDSBaseMessage * topMessage; 
@property (readonly) long long count; 
@property (readonly) NSArray * messages; 
@property (__weak) id<FTMessageQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(long long)count;
-(NSMutableArray *)_queue;
-(id<FTMessageQueueDelegate>)delegate;
-(void)setDelegate:(id<FTMessageQueueDelegate>)arg1 ;
-(BOOL)addMessage:(id)arg1 ;
-(NSArray *)messages;
-(void)set_queue:(NSMutableArray *)arg1 ;
-(void)removeAllMessages;
-(IDSBaseMessage *)topMessage;
-(void)_timeoutHit;
-(void)_clearTimeout;
-(void)_setTimeout;
-(id)dequeueTopMessage;
-(BOOL)addMessageAtHeadOfQueue:(id)arg1 ;
-(BOOL)removeMessage:(id)arg1 ;
-(NSMutableArray *)_addDates;
-(void)set_addDates:(NSMutableArray *)arg1 ;
@end

