/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)accountID;
-(long long)eventID;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setMessageIDHash:(long long)arg1 ;
-(long long)messageIDHash;
-(id)debugDescription;
-(long long)conversationID;
-(void)setDate:(NSDate *)arg1 ;
-(void)setConversationID:(long long)arg1 ;
-(void)setData:(NSDictionary *)arg1 ;
-(NSString *)name;
-(NSDictionary *)data;
-(void)setName:(NSString *)arg1 ;
-(void)setMessagePersistentID:(long long)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(NSDate *)date;
-(long long)mailboxID;
-(void)setMailboxID:(long long)arg1 ;
-(long long)version;
-(void)setEventID:(long long)arg1 ;
-(long long)messagePersistentID;
@end

