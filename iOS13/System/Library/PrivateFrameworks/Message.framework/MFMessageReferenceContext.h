/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSString, NSArray, MFMailMessage, ECSubject, EFMutableInt64Set, NSMutableDictionary, MFEmailSet;

@interface MFMessageReferenceContext : NSObject {

	NSString* _sender;
	NSArray* _senderList;
	NSString* _to;
	NSArray* _toList;
	NSString* _cc;
	NSArray* _ccList;
	NSString* _bcc;
	NSArray* _bccList;
	MFMailMessage* _message;
	long long _libraryID;
	long long _messageIDHash;
	ECSubject* _subject;
	EFMutableInt64Set* _references;
	NSMutableDictionary* _messageIDsBySubject;
	long long _mailboxID;
	long long _conversationIDHash;
	unsigned long long* _conversationFlagsRef;
	double _dateSentInterval;

}

@property (nonatomic,retain) MFMailMessage * message;                                //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long libraryID;                                    //@synthesize libraryID=_libraryID - In the implementation block
@property (assign,nonatomic) long long messageIDHash;                                //@synthesize messageIDHash=_messageIDHash - In the implementation block
@property (nonatomic,copy) ECSubject * subject;                                      //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) EFMutableInt64Set * references;                         //@synthesize references=_references - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messageIDsBySubject;              //@synthesize messageIDsBySubject=_messageIDsBySubject - In the implementation block
@property (assign,nonatomic) long long mailboxID;                                    //@synthesize mailboxID=_mailboxID - In the implementation block
@property (assign,nonatomic) long long conversationIDHash;                           //@synthesize conversationIDHash=_conversationIDHash - In the implementation block
@property (assign,nonatomic) unsigned long long* conversationFlagsRef;               //@synthesize conversationFlagsRef=_conversationFlagsRef - In the implementation block
@property (assign,nonatomic) double dateSentInterval;                                //@synthesize dateSentInterval=_dateSentInterval - In the implementation block
@property (nonatomic,copy) NSArray * senderList;                                     //@synthesize senderList=_senderList - In the implementation block
@property (nonatomic,copy) NSArray * toList;                                         //@synthesize toList=_toList - In the implementation block
@property (nonatomic,copy) NSArray * ccList;                                         //@synthesize ccList=_ccList - In the implementation block
@property (nonatomic,copy) NSArray * bccList;                                        //@synthesize bccList=_bccList - In the implementation block
@property (nonatomic,copy) NSString * sender;                                        //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * to;                                            //@synthesize to=_to - In the implementation block
@property (nonatomic,copy) NSString * cc;                                            //@synthesize cc=_cc - In the implementation block
@property (nonatomic,copy) NSString * bcc;                                           //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,readonly) MFEmailSet * participants; 
-(NSString *)to;
-(MFMailMessage *)message;
-(void)setMessage:(MFMailMessage *)arg1 ;
-(NSString *)sender;
-(void)setSender:(NSString *)arg1 ;
-(ECSubject *)subject;
-(void)setSubject:(ECSubject *)arg1 ;
-(MFEmailSet *)participants;
-(void)setTo:(NSString *)arg1 ;
-(long long)libraryID;
-(void)setLibraryID:(long long)arg1 ;
-(long long)mailboxID;
-(void)setMailboxID:(long long)arg1 ;
-(EFMutableInt64Set *)references;
-(NSString *)cc;
-(NSString *)bcc;
-(void)setReferences:(EFMutableInt64Set *)arg1 ;
-(void)setMessageIDHash:(long long)arg1 ;
-(void)setDateSentInterval:(double)arg1 ;
-(long long)messageIDHash;
-(double)dateSentInterval;
-(NSMutableDictionary *)messageIDsBySubject;
-(void)setConversationIDHash:(long long)arg1 ;
-(void)setCc:(NSString *)arg1 ;
-(void)setBcc:(NSString *)arg1 ;
-(long long)conversationIDHash;
-(unsigned long long*)conversationFlagsRef;
-(void)setMessageIDsBySubject:(NSMutableDictionary *)arg1 ;
-(void)setConversationFlagsRef:(unsigned long long*)arg1 ;
-(void)setSenderList:(NSArray *)arg1 ;
-(void)setToList:(NSArray *)arg1 ;
-(void)setCcList:(NSArray *)arg1 ;
-(void)setBccList:(NSArray *)arg1 ;
-(NSArray *)senderList;
-(NSArray *)toList;
-(NSArray *)ccList;
-(NSArray *)bccList;
@end

