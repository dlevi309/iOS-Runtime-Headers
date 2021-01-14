/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol ECEmailAddressConvertible;
@class NSArray, MFMailMessage, ECSubject, EFMutableInt64Set, NSMutableDictionary, NSSet;

@interface MFMessageReferenceContext : NSObject {

	id<ECEmailAddressConvertible> _sender;
	NSArray* _senderList;
	id<ECEmailAddressConvertible> _to;
	NSArray* _toList;
	id<ECEmailAddressConvertible> _cc;
	NSArray* _ccList;
	id<ECEmailAddressConvertible> _bcc;
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
@property (nonatomic,copy) id<ECEmailAddressConvertible> sender;                     //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) id<ECEmailAddressConvertible> to;                         //@synthesize to=_to - In the implementation block
@property (nonatomic,copy) id<ECEmailAddressConvertible> cc;                         //@synthesize cc=_cc - In the implementation block
@property (nonatomic,copy) id<ECEmailAddressConvertible> bcc;                        //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,readonly) NSSet * participants; 
-(id<ECEmailAddressConvertible>)to;
-(id<ECEmailAddressConvertible>)cc;
-(id<ECEmailAddressConvertible>)bcc;
-(void)setMessage:(MFMailMessage *)arg1 ;
-(ECSubject *)subject;
-(id<ECEmailAddressConvertible>)sender;
-(MFMailMessage *)message;
-(void)setSender:(id<ECEmailAddressConvertible>)arg1 ;
-(void)setTo:(id<ECEmailAddressConvertible>)arg1 ;
-(void)setMessageIDHash:(long long)arg1 ;
-(NSArray *)senderList;
-(void)setDateSentInterval:(double)arg1 ;
-(long long)messageIDHash;
-(void)setCc:(id<ECEmailAddressConvertible>)arg1 ;
-(double)dateSentInterval;
-(void)setBcc:(id<ECEmailAddressConvertible>)arg1 ;
-(NSMutableDictionary *)messageIDsBySubject;
-(void)setConversationIDHash:(long long)arg1 ;
-(long long)conversationIDHash;
-(unsigned long long*)conversationFlagsRef;
-(long long)libraryID;
-(void)setMessageIDsBySubject:(NSMutableDictionary *)arg1 ;
-(void)setConversationFlagsRef:(unsigned long long*)arg1 ;
-(void)setToList:(NSArray *)arg1 ;
-(void)setSenderList:(NSArray *)arg1 ;
-(void)setCcList:(NSArray *)arg1 ;
-(void)setBccList:(NSArray *)arg1 ;
-(NSArray *)toList;
-(NSArray *)ccList;
-(NSSet *)participants;
-(NSArray *)bccList;
-(void)setLibraryID:(long long)arg1 ;
-(long long)mailboxID;
-(EFMutableInt64Set *)references;
-(void)setMailboxID:(long long)arg1 ;
-(void)setReferences:(EFMutableInt64Set *)arg1 ;
-(void)setSubject:(ECSubject *)arg1 ;
@end

