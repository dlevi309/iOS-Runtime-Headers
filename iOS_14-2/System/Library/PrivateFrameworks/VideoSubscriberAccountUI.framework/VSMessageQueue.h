/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessages:(NSMutableArray *)arg1 ;
-(id)init;
-(id<VSMessageQueueDelegate>)delegate;
-(void)setDelegate:(id<VSMessageQueueDelegate>)arg1 ;
-(NSMutableArray *)messages;
-(void)addMessage:(id)arg1 ;
-(id)removeAllMessages;
@end

