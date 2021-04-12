/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@interface _MFMailMessageLibraryStatistics : NSObject {

	BOOL _protectedDataAvailable;
	double _start;
	double _duration;
	unsigned long long _messages;
	unsigned long long _protectedMessages;
	unsigned long long _messageData;
	unsigned long long _protectedMessageData;
	unsigned long long _messagesDeleted;
	unsigned long long _messageDataDeleted;
	unsigned long long _messagesMarkedAsJournaled;
	unsigned long long _mailboxesNeedingReconcilication;

}

@property (assign,nonatomic) double start;                                                    //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) double duration;                                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL protectedDataAvailable;                                     //@synthesize protectedDataAvailable=_protectedDataAvailable - In the implementation block
@property (assign,nonatomic) unsigned long long messages;                                     //@synthesize messages=_messages - In the implementation block
@property (assign,nonatomic) unsigned long long protectedMessages;                            //@synthesize protectedMessages=_protectedMessages - In the implementation block
@property (assign,nonatomic) unsigned long long messageData;                                  //@synthesize messageData=_messageData - In the implementation block
@property (assign,nonatomic) unsigned long long protectedMessageData;                         //@synthesize protectedMessageData=_protectedMessageData - In the implementation block
@property (assign,nonatomic) unsigned long long messagesDeleted;                              //@synthesize messagesDeleted=_messagesDeleted - In the implementation block
@property (assign,nonatomic) unsigned long long messageDataDeleted;                           //@synthesize messageDataDeleted=_messageDataDeleted - In the implementation block
@property (assign,nonatomic) unsigned long long messagesMarkedAsJournaled;                    //@synthesize messagesMarkedAsJournaled=_messagesMarkedAsJournaled - In the implementation block
@property (assign,nonatomic) unsigned long long mailboxesNeedingReconcilication;              //@synthesize mailboxesNeedingReconcilication=_mailboxesNeedingReconcilication - In the implementation block
-(void)setMessages:(unsigned long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)start;
-(BOOL)protectedDataAvailable;
-(unsigned long long)protectedMessages;
-(void)setProtectedDataAvailable:(BOOL)arg1 ;
-(void)setMessageDataDeleted:(unsigned long long)arg1 ;
-(void)setMessagesMarkedAsJournaled:(unsigned long long)arg1 ;
-(void)setMailboxesNeedingReconcilication:(unsigned long long)arg1 ;
-(void)setProtectedMessages:(unsigned long long)arg1 ;
-(void)setProtectedMessageData:(unsigned long long)arg1 ;
-(unsigned long long)messagesMarkedAsJournaled;
-(unsigned long long)messagesDeleted;
-(unsigned long long)protectedMessageData;
-(unsigned long long)messageDataDeleted;
-(unsigned long long)mailboxesNeedingReconcilication;
-(void)setMessagesDeleted:(unsigned long long)arg1 ;
-(unsigned long long)messages;
-(void)setMessageData:(unsigned long long)arg1 ;
-(double)duration;
-(void)setStart:(double)arg1 ;
-(unsigned long long)messageData;
@end

