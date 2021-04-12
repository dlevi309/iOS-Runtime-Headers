/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)_queue;
-(id<FTMessageQueueDelegate>)delegate;
-(void)_clearTimeout;
-(IDSBaseMessage *)topMessage;
-(void)_setTimeout;
-(void)_timeoutHit;
-(long long)count;
-(NSMutableArray *)_addDates;
-(void)setDelegate:(id<FTMessageQueueDelegate>)arg1 ;
-(id)dequeueTopMessage;
-(NSArray *)messages;
-(BOOL)addMessageAtHeadOfQueue:(id)arg1 ;
-(void)set_queue:(NSMutableArray *)arg1 ;
-(BOOL)addMessage:(id)arg1 ;
-(void)removeAllMessages;
-(void)set_addDates:(NSMutableArray *)arg1 ;
-(BOOL)removeMessage:(id)arg1 ;
@end

