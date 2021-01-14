/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@class NSArray, NSString, NSDate;

@interface NNMKRequestContext : NSObject {

	BOOL _hasProtectedMessages;
	NSArray* _mailboxes;
	NSString* _conversationId;
	NSDate* _beforeDate;
	unsigned long long _count;
	unsigned long long _resendInterval;
	unsigned long long _messagesForSpecialMailbox;

}

@property (assign,nonatomic) unsigned long long resendInterval;                         //@synthesize resendInterval=_resendInterval - In the implementation block
@property (nonatomic,retain) NSArray * mailboxes;                                       //@synthesize mailboxes=_mailboxes - In the implementation block
@property (nonatomic,retain) NSString * conversationId;                                 //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,retain) NSDate * beforeDate;                                       //@synthesize beforeDate=_beforeDate - In the implementation block
@property (assign,nonatomic) unsigned long long count;                                  //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long messagesForSpecialMailbox;              //@synthesize messagesForSpecialMailbox=_messagesForSpecialMailbox - In the implementation block
@property (assign,nonatomic) BOOL hasProtectedMessages;                                 //@synthesize hasProtectedMessages=_hasProtectedMessages - In the implementation block
-(void)setCount:(unsigned long long)arg1 ;
-(NSArray *)mailboxes;
-(unsigned long long)count;
-(NSString *)conversationId;
-(void)setMailboxes:(NSArray *)arg1 ;
-(void)setConversationId:(NSString *)arg1 ;
-(unsigned long long)resendInterval;
-(void)setResendInterval:(unsigned long long)arg1 ;
-(NSDate *)beforeDate;
-(BOOL)hasProtectedMessages;
-(unsigned long long)messagesForSpecialMailbox;
-(void)setBeforeDate:(NSDate *)arg1 ;
-(void)setMessagesForSpecialMailbox:(unsigned long long)arg1 ;
-(void)setHasProtectedMessages:(BOOL)arg1 ;
@end

