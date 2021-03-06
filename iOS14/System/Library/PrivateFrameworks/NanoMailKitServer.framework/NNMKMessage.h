/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <libobjc.A.dylib/NNMKMailboxItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSArray;

@interface NNMKMessage : NSObject <NNMKMailboxItem, NSSecureCoding, NSCopying> {

	BOOL _isThreadSpecific;
	BOOL _replaceStandaloneNotification;
	NSString* _subject;
	NSDate* _dateReceived;
	NSString* _preview;
	unsigned long long _status;
	NSString* _messageId;
	NSString* _serverId;
	NSString* _accountId;
	NSString* _mailboxId;
	NSString* _conversationId;
	NSString* _from;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSDate* _dateSent;
	NSString* _messageIdHeader;
	NSString* _notificationMessageId;
	NSString* _publisherBulletinId;
	unsigned long long _source;
	unsigned long long _statusVersion;
	unsigned long long _isSpecialMailboxSpecific;
	unsigned long long _visibleStatus;

}

@property (assign,nonatomic) unsigned long long visibleStatus;                         //@synthesize visibleStatus=_visibleStatus - In the implementation block
@property (assign,nonatomic) BOOL replaceStandaloneNotification;                       //@synthesize replaceStandaloneNotification=_replaceStandaloneNotification - In the implementation block
@property (nonatomic,copy) NSString * messageId;                                       //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy) NSString * serverId;                                        //@synthesize serverId=_serverId - In the implementation block
@property (nonatomic,copy) NSString * accountId;                                       //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,copy) NSString * mailboxId;                                       //@synthesize mailboxId=_mailboxId - In the implementation block
@property (nonatomic,copy) NSString * conversationId;                                  //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,copy) NSString * from;                                            //@synthesize from=_from - In the implementation block
@property (nonatomic,copy) NSArray * to;                                               //@synthesize to=_to - In the implementation block
@property (nonatomic,copy) NSArray * cc;                                               //@synthesize cc=_cc - In the implementation block
@property (nonatomic,copy) NSArray * bcc;                                              //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,copy) NSDate * dateSent;                                          //@synthesize dateSent=_dateSent - In the implementation block
@property (nonatomic,copy) NSDate * dateReceived;                                      //@synthesize dateReceived=_dateReceived - In the implementation block
@property (nonatomic,copy) NSString * messageIdHeader;                                 //@synthesize messageIdHeader=_messageIdHeader - In the implementation block
@property (nonatomic,copy) NSString * notificationMessageId;                           //@synthesize notificationMessageId=_notificationMessageId - In the implementation block
@property (nonatomic,copy) NSString * publisherBulletinId;                             //@synthesize publisherBulletinId=_publisherBulletinId - In the implementation block
@property (assign,nonatomic) unsigned long long source;                                //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long statusVersion;                         //@synthesize statusVersion=_statusVersion - In the implementation block
@property (assign,nonatomic) BOOL isThreadSpecific;                                    //@synthesize isThreadSpecific=_isThreadSpecific - In the implementation block
@property (assign,nonatomic) unsigned long long isSpecialMailboxSpecific;              //@synthesize isSpecialMailboxSpecific=_isSpecialMailboxSpecific - In the implementation block
@property (nonatomic,retain) NSString * subject;                                       //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSString * preview;                                       //@synthesize preview=_preview - In the implementation block
@property (assign,nonatomic) unsigned long long status;                                //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)isMessageURL:(id)arg1 ;
+(id)messageIdsFromMessages:(id)arg1 ;
+(BOOL)checkStatus:(unsigned long long)arg1 stateToCheck:(unsigned long long)arg2 ;
+(unsigned long long)removeState:(unsigned long long)arg1 fromStatus:(unsigned long long)arg2 ;
+(unsigned long long)addState:(unsigned long long)arg1 toStatus:(unsigned long long)arg2 ;
+(BOOL)messageHasMultipleRecipients:(id)arg1 ;
+(id)URLForMessageId:(id)arg1 ;
+(id)URLForMessageId:(id)arg1 attachmentID:(id)arg2 ;
+(id)messageIdForURL:(id)arg1 ;
+(id)attachmentIdForURL:(id)arg1 ;
+(id)generateMessageHashForMessage:(id)arg1 ;
+(id)generateNotificationIdWithFolderId:(id)arg1 remoteId:(id)arg2 ;
+(id)generateConversationIdWithAccountId:(id)arg1 conversationId:(id)arg2 ;
+(id)serverIdsFromMessages:(id)arg1 ;
-(NSArray *)to;
-(NSArray *)cc;
-(NSArray *)bcc;
-(NSString *)from;
-(NSString *)subject;
-(NSString *)preview;
-(void)setMessageId:(NSString *)arg1 ;
-(void)setTo:(NSArray *)arg1 ;
-(void)setCc:(NSArray *)arg1 ;
-(NSDate *)dateSent;
-(void)setBcc:(NSArray *)arg1 ;
-(void)setDateSent:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDateReceived:(NSDate *)arg1 ;
-(void)setAccountId:(NSString *)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(NSString *)description;
-(void)setFrom:(NSString *)arg1 ;
-(void)setServerId:(NSString *)arg1 ;
-(NSString *)serverId;
-(void)removeState:(unsigned long long)arg1 ;
-(void)setPreview:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)conversationId;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)addState:(unsigned long long)arg1 ;
-(NSDate *)dateReceived;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)accountId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)messageId;
-(unsigned long long)status;
-(unsigned long long)source;
-(void)setStatusVersion:(unsigned long long)arg1 ;
-(unsigned long long)statusVersion;
-(NSString *)mailboxId;
-(void)setMailboxId:(NSString *)arg1 ;
-(void)setConversationId:(NSString *)arg1 ;
-(BOOL)isThreadSpecific;
-(unsigned long long)isSpecialMailboxSpecific;
-(void)setIsThreadSpecific:(BOOL)arg1 ;
-(void)setIsSpecialMailboxSpecific:(unsigned long long)arg1 ;
-(NSString *)messageIdHeader;
-(void)setMessageIdHeader:(NSString *)arg1 ;
-(void)setNotificationMessageId:(NSString *)arg1 ;
-(void)setPublisherBulletinId:(NSString *)arg1 ;
-(NSString *)notificationMessageId;
-(NSString *)publisherBulletinId;
-(BOOL)checkState:(unsigned long long)arg1 ;
-(BOOL)replaceStandaloneNotification;
-(void)setReplaceStandaloneNotification:(BOOL)arg1 ;
-(unsigned long long)visibleStatus;
-(void)setVisibleStatus:(unsigned long long)arg1 ;
@end

