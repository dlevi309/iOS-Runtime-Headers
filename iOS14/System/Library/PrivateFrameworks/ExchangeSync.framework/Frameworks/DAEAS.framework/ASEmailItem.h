/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASChangedCollectionLeaf.h>

@class NSArray, NSDate, NSString, NSData, ASMeetingRequest;

@interface ASEmailItem : ASChangedCollectionLeaf {

	BOOL _shouldIncludeExceptionDateInUid;
	BOOL _read;
	BOOL _flagged;
	BOOL _bodyTruncated;
	BOOL _readIsSet;
	BOOL _flaggedIsSet;
	BOOL _verbIsSet;
	BOOL _isDraft;
	BOOL _hasAttachments;
	int _importance;
	int _bodySize;
	int _lastVerb;
	int _bodyType;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _from;
	NSArray* _replyTo;
	NSDate* _date;
	NSString* _subject;
	NSString* _displayTo;
	NSString* _body;
	NSString* _messageClass;
	NSArray* _attachments;
	NSString* _threadTopic;
	NSData* _conversationId;
	NSData* _conversationIndex;
	NSString* _mimeData;
	NSString* _folderId;
	NSString* _longID;
	NSString* _sender;
	NSArray* _bcc;
	NSString* _preview;
	ASMeetingRequest* _meetingRequest;

}

@property (setter=_setMeetingRequest:,nonatomic,retain) ASMeetingRequest * meetingRequest;              //@synthesize meetingRequest=_meetingRequest - In the implementation block
@property (nonatomic,copy) NSArray * to;                                                                //@synthesize to=_to - In the implementation block
@property (nonatomic,copy) NSArray * cc;                                                                //@synthesize cc=_cc - In the implementation block
@property (nonatomic,copy) NSArray * from;                                                              //@synthesize from=_from - In the implementation block
@property (nonatomic,copy) NSArray * replyTo;                                                           //@synthesize replyTo=_replyTo - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                             //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSString * subject;                                                        //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSString * displayTo;                                                      //@synthesize displayTo=_displayTo - In the implementation block
@property (assign,nonatomic) int importance;                                                            //@synthesize importance=_importance - In the implementation block
@property (assign,nonatomic) BOOL read;                                                                 //@synthesize read=_read - In the implementation block
@property (assign,nonatomic) BOOL flagged;                                                              //@synthesize flagged=_flagged - In the implementation block
@property (nonatomic,retain) NSString * body;                                                           //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) int bodySize;                                                              //@synthesize bodySize=_bodySize - In the implementation block
@property (assign,nonatomic) BOOL bodyTruncated;                                                        //@synthesize bodyTruncated=_bodyTruncated - In the implementation block
@property (nonatomic,retain) NSString * messageClass;                                                   //@synthesize messageClass=_messageClass - In the implementation block
@property (nonatomic,retain) NSArray * attachments;                                                     //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) NSString * threadTopic;                                                    //@synthesize threadTopic=_threadTopic - In the implementation block
@property (nonatomic,retain) NSData * conversationId;                                                   //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,retain) NSData * conversationIndex;                                                //@synthesize conversationIndex=_conversationIndex - In the implementation block
@property (nonatomic,retain) NSString * mimeData;                                                       //@synthesize mimeData=_mimeData - In the implementation block
@property (nonatomic,retain) NSString * folderId;                                                       //@synthesize folderId=_folderId - In the implementation block
@property (nonatomic,retain) NSString * longID;                                                         //@synthesize longID=_longID - In the implementation block
@property (assign,nonatomic) int lastVerb;                                                              //@synthesize lastVerb=_lastVerb - In the implementation block
@property (nonatomic,retain) NSString * sender;                                                         //@synthesize sender=_sender - In the implementation block
@property (assign,nonatomic) BOOL readIsSet;                                                            //@synthesize readIsSet=_readIsSet - In the implementation block
@property (assign,nonatomic) BOOL flaggedIsSet;                                                         //@synthesize flaggedIsSet=_flaggedIsSet - In the implementation block
@property (assign,nonatomic) BOOL verbIsSet;                                                            //@synthesize verbIsSet=_verbIsSet - In the implementation block
@property (nonatomic,readonly) NSString * meetingRequestUUID; 
@property (nonatomic,readonly) NSData * meetingRequestMetaData; 
@property (nonatomic,readonly) int meetingMessageType; 
@property (assign,nonatomic) int bodyType;                                                              //@synthesize bodyType=_bodyType - In the implementation block
@property (nonatomic,copy) NSArray * bcc;                                                               //@synthesize bcc=_bcc - In the implementation block
@property (assign,nonatomic) BOOL isDraft;                                                              //@synthesize isDraft=_isDraft - In the implementation block
@property (nonatomic,retain) NSString * preview;                                                        //@synthesize preview=_preview - In the implementation block
@property (assign,nonatomic) BOOL hasAttachments;                                                       //@synthesize hasAttachments=_hasAttachments - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSArray *)to;
-(NSArray *)cc;
-(NSArray *)bcc;
-(void)setBody:(NSString *)arg1 ;
-(NSArray *)from;
-(NSString *)subject;
-(NSString *)sender;
-(NSString *)preview;
-(void)setAttachments:(NSArray *)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSString *)body;
-(void)setSender:(NSString *)arg1 ;
-(NSArray *)attachments;
-(void)setTo:(NSArray *)arg1 ;
-(BOOL)flagged;
-(void)setFlagged:(BOOL)arg1 ;
-(void)setCc:(NSArray *)arg1 ;
-(void)setBcc:(NSArray *)arg1 ;
-(BOOL)read;
-(void)setHasAttachments:(BOOL)arg1 ;
-(NSString *)longID;
-(BOOL)hasAttachments;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isDraft;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)messageClass;
-(NSArray *)replyTo;
-(id)description;
-(void)setFrom:(NSArray *)arg1 ;
-(int)importance;
-(void)setLongID:(NSString *)arg1 ;
-(void)setPreview:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)conversationId;
-(NSString *)meetingRequestUUID;
-(void)setBodyType:(int)arg1 ;
-(BOOL)_isSearchResult;
-(NSString *)folderId;
-(int)lastVerb;
-(int)bodySize;
-(int)bodyType;
-(NSString *)displayTo;
-(BOOL)bodyTruncated;
-(NSString *)threadTopic;
-(NSData *)conversationIndex;
-(BOOL)readIsSet;
-(BOOL)flaggedIsSet;
-(BOOL)verbIsSet;
-(NSData *)meetingRequestMetaData;
-(void)setFolderId:(NSString *)arg1 ;
-(NSDate *)date;
-(void)setIsDraft:(BOOL)arg1 ;
-(void)setMessageClass:(NSString *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(void)setRead:(BOOL)arg1 ;
-(void)setReplyTo:(NSArray *)arg1 ;
-(void)setConversationId:(NSData *)arg1 ;
-(void)setImportance:(int)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)postProcessApplicationData;
-(void)setBodyTruncated:(BOOL)arg1 ;
-(void)_setMeetingRequest:(id)arg1 ;
-(void)processAppDataForStream;
-(void)setBodySize:(int)arg1 ;
-(void)setToString:(id)arg1 ;
-(void)setCCString:(id)arg1 ;
-(void)setBCCString:(id)arg1 ;
-(void)setFromString:(id)arg1 ;
-(void)setReplyToString:(id)arg1 ;
-(void)setDisplayTo:(NSString *)arg1 ;
-(void)setLastVerb:(int)arg1 ;
-(void)setMimeData:(NSString *)arg1 ;
-(void)setThreadTopic:(NSString *)arg1 ;
-(void)setConversationIndex:(NSData *)arg1 ;
-(void)_processApplicationData:(BOOL)arg1 ;
-(ASMeetingRequest *)meetingRequest;
-(NSString *)mimeData;
-(int)meetingMessageType;
-(void)setReadIsSet:(BOOL)arg1 ;
-(void)setFlaggedIsSet:(BOOL)arg1 ;
-(void)setVerbIsSet:(BOOL)arg1 ;
@end

