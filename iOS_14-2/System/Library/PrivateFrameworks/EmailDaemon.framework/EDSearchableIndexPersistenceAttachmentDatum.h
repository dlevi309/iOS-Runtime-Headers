/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class NSString;

@interface EDSearchableIndexPersistenceAttachmentDatum : NSObject {

	NSString* _attachmentPersistentID;
	NSString* _messagePersistentID;
	NSString* _attachmentID;
	NSString* _name;
	long long _mailboxID;

}

@property (nonatomic,copy) NSString * attachmentPersistentID;              //@synthesize attachmentPersistentID=_attachmentPersistentID - In the implementation block
@property (nonatomic,copy) NSString * messagePersistentID;                 //@synthesize messagePersistentID=_messagePersistentID - In the implementation block
@property (nonatomic,copy) NSString * attachmentID;                        //@synthesize attachmentID=_attachmentID - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long mailboxID;                          //@synthesize mailboxID=_mailboxID - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setMessagePersistentID:(NSString *)arg1 ;
-(long long)mailboxID;
-(void)setMailboxID:(long long)arg1 ;
-(NSString *)attachmentID;
-(void)setAttachmentID:(NSString *)arg1 ;
-(NSString *)messagePersistentID;
-(NSString *)attachmentPersistentID;
-(void)setAttachmentPersistentID:(NSString *)arg1 ;
@end

