/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@protocol VSMessageQueueDelegate;
@class NSMutableArray;

@interface VSMessageQueue : NSObject {

	id<VSMessageQueueDelegate> _delegate;
	NSMutableArray* _messages;

}

@property (nonatomic,retain) NSMutableArray * messages;                               //@synthesize messages=_messages - In the implementation block
@property (assign,nonatomic,__weak) id<VSMessageQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<VSMessageQueueDelegate>)delegate;
-(void)setDelegate:(id<VSMessageQueueDelegate>)arg1 ;
-(void)addMessage:(id)arg1 ;
-(NSMutableArray *)messages;
-(void)setMessages:(NSMutableArray *)arg1 ;
-(id)removeAllMessages;
@end

