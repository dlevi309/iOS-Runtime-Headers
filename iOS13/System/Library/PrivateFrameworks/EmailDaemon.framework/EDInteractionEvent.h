/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class NSDate, NSString, NSDictionary;

@interface EDInteractionEvent : NSObject {

	long long _eventID;
	long long _version;
	NSDate* _date;
	NSString* _accountID;
	long long _mailboxID;
	long long _conversationID;
	long long _messageIDHash;
	long long _messagePersistentID;
	NSString* _name;
	NSDictionary* _data;

}

@property (assign,nonatomic) long long eventID;                          //@synthesize eventID=_eventID - In the implementation block
@property (assign,nonatomic) long long version;                          //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * accountID;                         //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) long long mailboxID;                        //@synthesize mailboxID=_mailboxID - In the implementation block
@property (assign,nonatomic) long long conversationID;                   //@synthesize conversationID=_conversationID - In the implementation block
@property (assign,nonatomic) long long messageIDHash;                    //@synthesize messageIDHash=_messageIDHash - In the implementation block
@property (assign,nonatomic) long long messagePersistentID;              //@synthesize messagePersistentID=_messagePersistentID - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * data;                          //@synthesize data=_data - In the implementation block
-(id)debugDescription;
-(NSString *)name;
-(NSDate *)date;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(long long)mailboxID;
-(void)setMailboxID:(long long)arg1 ;
-(long long)conversationID;
-(void)setMessageIDHash:(long long)arg1 ;
-(long long)messageIDHash;
-(void)setConversationID:(long long)arg1 ;
-(long long)eventID;
-(void)setEventID:(long long)arg1 ;
-(void)setMessagePersistentID:(long long)arg1 ;
-(long long)messagePersistentID;
@end

