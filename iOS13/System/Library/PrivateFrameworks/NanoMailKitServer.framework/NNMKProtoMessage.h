/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSData;

@interface NNMKProtoMessage : PBCodable <NSCopying> {

	NSString* _accountId;
	NSMutableArray* _bccs;
	NSMutableArray* _ccs;
	NSString* _conversationId;
	NSData* _dateReceived;
	NSData* _dateSent;
	NSString* _from;
	unsigned _isSpecialMailboxSpecific;
	NSString* _mailboxId;
	NSString* _messageId;
	NSString* _messageIdHeader;
	NSString* _notificationMessageId;
	NSString* _publisherBulletinId;
	NSString* _remoteId;
	unsigned _status;
	unsigned _statusVersion;
	NSString* _subject;
	NSMutableArray* _tos;
	BOOL _isThreadSpecific;
	SCD_Struct_NN5 _has;

}

@property (nonatomic,readonly) BOOL hasMessageId; 
@property (nonatomic,retain) NSString * messageId;                           //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountId; 
@property (nonatomic,retain) NSString * accountId;                           //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,readonly) BOOL hasConversationId; 
@property (nonatomic,retain) NSString * conversationId;                      //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,readonly) BOOL hasSubject; 
@property (nonatomic,retain) NSString * subject;                             //@synthesize subject=_subject - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                                //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasFrom; 
@property (nonatomic,retain) NSString * from;                                //@synthesize from=_from - In the implementation block
@property (nonatomic,retain) NSMutableArray * tos;                           //@synthesize tos=_tos - In the implementation block
@property (nonatomic,retain) NSMutableArray * ccs;                           //@synthesize ccs=_ccs - In the implementation block
@property (nonatomic,readonly) BOOL hasDateSent; 
@property (nonatomic,retain) NSData * dateSent;                              //@synthesize dateSent=_dateSent - In the implementation block
@property (nonatomic,readonly) BOOL hasDateReceived; 
@property (nonatomic,retain) NSData * dateReceived;                          //@synthesize dateReceived=_dateReceived - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageIdHeader; 
@property (nonatomic,retain) NSString * messageIdHeader;                     //@synthesize messageIdHeader=_messageIdHeader - In the implementation block
@property (nonatomic,retain) NSMutableArray * bccs;                          //@synthesize bccs=_bccs - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteId; 
@property (nonatomic,retain) NSString * remoteId;                            //@synthesize remoteId=_remoteId - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationMessageId; 
@property (nonatomic,retain) NSString * notificationMessageId;               //@synthesize notificationMessageId=_notificationMessageId - In the implementation block
@property (nonatomic,readonly) BOOL hasMailboxId; 
@property (nonatomic,retain) NSString * mailboxId;                           //@synthesize mailboxId=_mailboxId - In the implementation block
@property (assign,nonatomic) BOOL hasIsThreadSpecific; 
@property (assign,nonatomic) BOOL isThreadSpecific;                          //@synthesize isThreadSpecific=_isThreadSpecific - In the implementation block
@property (assign,nonatomic) BOOL hasIsSpecialMailboxSpecific; 
@property (assign,nonatomic) unsigned isSpecialMailboxSpecific;              //@synthesize isSpecialMailboxSpecific=_isSpecialMailboxSpecific - In the implementation block
@property (nonatomic,readonly) BOOL hasPublisherBulletinId; 
@property (nonatomic,retain) NSString * publisherBulletinId;                 //@synthesize publisherBulletinId=_publisherBulletinId - In the implementation block
@property (assign,nonatomic) BOOL hasStatusVersion; 
@property (assign,nonatomic) unsigned statusVersion;                         //@synthesize statusVersion=_statusVersion - In the implementation block
+(Class)toType;
+(Class)ccType;
+(id)protoMessageFromMessage:(id)arg1 organizedByThread:(BOOL)arg2 sanitizeMessageId:(BOOL)arg3 supportsStandaloneMode:(BOOL)arg4 ;
+(Class)bccType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)status;
-(void)writeTo:(id)arg1 ;
-(NSString *)from;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(BOOL)hasMessageId;
-(void)setFrom:(NSString *)arg1 ;
-(BOOL)hasFrom;
-(NSData *)dateSent;
-(void)setDateSent:(NSData *)arg1 ;
-(BOOL)hasDateSent;
-(NSString *)accountId;
-(void)setAccountId:(NSString *)arg1 ;
-(NSData *)dateReceived;
-(void)setDateReceived:(NSData *)arg1 ;
-(NSString *)conversationId;
-(BOOL)hasAccountId;
-(NSString *)mailboxId;
-(void)setMailboxId:(NSString *)arg1 ;
-(void)setConversationId:(NSString *)arg1 ;
-(BOOL)hasMailboxId;
-(BOOL)hasConversationId;
-(BOOL)hasDateReceived;
-(void)addTo:(id)arg1 ;
-(void)setStatusVersion:(unsigned)arg1 ;
-(unsigned)statusVersion;
-(BOOL)hasSubject;
-(void)setHasStatusVersion:(BOOL)arg1 ;
-(BOOL)hasStatusVersion;
-(void)addCc:(id)arg1 ;
-(unsigned long long)tosCount;
-(void)clearTos;
-(id)toAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)ccsCount;
-(void)clearCcs;
-(id)ccAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)tos;
-(void)setTos:(NSMutableArray *)arg1 ;
-(NSMutableArray *)ccs;
-(void)setCcs:(NSMutableArray *)arg1 ;
-(BOOL)isThreadSpecific;
-(unsigned)isSpecialMailboxSpecific;
-(void)setIsThreadSpecific:(BOOL)arg1 ;
-(void)setIsSpecialMailboxSpecific:(unsigned)arg1 ;
-(NSString *)messageIdHeader;
-(void)addBcc:(id)arg1 ;
-(void)setMessageIdHeader:(NSString *)arg1 ;
-(unsigned long long)bccsCount;
-(void)clearBccs;
-(id)bccAtIndex:(unsigned long long)arg1 ;
-(void)setRemoteId:(NSString *)arg1 ;
-(void)setNotificationMessageId:(NSString *)arg1 ;
-(void)setPublisherBulletinId:(NSString *)arg1 ;
-(BOOL)hasMessageIdHeader;
-(BOOL)hasRemoteId;
-(BOOL)hasNotificationMessageId;
-(void)setHasIsThreadSpecific:(BOOL)arg1 ;
-(BOOL)hasIsThreadSpecific;
-(void)setHasIsSpecialMailboxSpecific:(BOOL)arg1 ;
-(BOOL)hasIsSpecialMailboxSpecific;
-(BOOL)hasPublisherBulletinId;
-(NSMutableArray *)bccs;
-(void)setBccs:(NSMutableArray *)arg1 ;
-(NSString *)remoteId;
-(NSString *)notificationMessageId;
-(NSString *)publisherBulletinId;
@end

