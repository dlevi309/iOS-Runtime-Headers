/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MIME-Structs.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MFMessageStore, NSArray, ECAngleBracketIDHash, NSUUID, MFMimePart, NSURL, ECSubject;

@interface MFMessage : NSObject <EFPubliclyDescribable, NSCopying> {

	MFMessageStore* _store;
	unsigned _preferredEncoding;
	NSString* _senderAddressComment;
	unsigned _dateSentInterval;
	unsigned _dateReceivedInterval;
	AQ _generationNumber;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSArray* _sender;
	NSString* _contentType;
	long long _messageIDHeaderHash;
	long long _conversationID;
	ECAngleBracketIDHash* _listIDHash;
	NSString* _summary;
	NSString* _externalID;
	NSUUID* _documentID;
	MFMimePart* _parentPart;
	NSURL* _messageURL;
	NSString* _cachedMessageIDHeader;
	unsigned _calculatedAttachmentInfo : 1;
	unsigned short _numberOfAttachments;
	ECSubject* _subject;

}

@property (nonatomic,retain) MFMimePart * parentPart;                             //@synthesize parentPart=_parentPart - In the implementation block
@property (nonatomic,copy) ECSubject * subject;                                   //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSString * externalID; 
@property (nonatomic,retain) NSUUID * documentID;                                 //@synthesize documentID=_documentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)dataMessageStoreToUse;
+(id)messageWithRFC822Data:(id)arg1 withParentPart:(id)arg2 generateMessageIDHash:(BOOL)arg3 ;
+(void)setMessageClassForStore:(id)arg1 ;
+(id)messageWithRFC822Data:(id)arg1 withParentPart:(id)arg2 ;
+(id)messageWithRFC822Data:(id)arg1 ;
+(id)messageWithRFC822Data:(id)arg1 forMailboxUID:(id)arg2 ;
-(id)to;
-(id)cc;
-(id)bcc;
-(ECSubject *)subject;
-(unsigned)uid;
-(void)setSender:(id)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(id)init;
-(long long)generationCompare:(id)arg1 ;
-(void)setTo:(id)arg1 ;
-(NSString *)ef_publicDescription;
-(id)senders;
-(id)defaultAlternativeInPart:(id)arg1 ;
-(void)setNumberOfAttachments:(unsigned long long)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 ;
-(void)setDateSentTimeIntervalSince1970:(double)arg1 ;
-(void)setMessageIDHash:(long long)arg1 ;
-(void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 summary:(id)arg8 withOptions:(unsigned)arg9 ;
-(double)dateReceivedAsTimeIntervalSince1970;
-(double)dateSentAsTimeIntervalSince1970;
-(long long)messageIDHash;
-(id)bestAlternativeInPart:(id)arg1 ;
-(unsigned)preferredEncoding;
-(void)setCc:(id)arg1 ;
-(id)preferredEmailAddressToReplyWith;
-(id)dateSent;
-(void)setBcc:(id)arg1 ;
-(id)contentType;
-(id)headerData;
-(id)messageDataHolderIsComplete:(BOOL*)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(unsigned long long)fileSize;
-(NSString *)externalID;
-(id)toIfCached;
-(void)setGenerationNumber:(unsigned long long)arg1 ;
-(id)sendersIfCached;
-(id)ccIfCached;
-(id)bccIfCached;
-(void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 summary:(id)arg8 ;
-(void)setListIDHash:(id)arg1 ;
-(void)setMessageIDHeader:(id)arg1 ;
-(unsigned long long)numberOfAttachments;
-(void)setNumberOfAttachments:(unsigned long long)arg1 ;
-(id)path;
-(long long)conversationID;
-(void)setDateReceivedTimeIntervalSince1970:(double)arg1 ;
-(void)setConversationID:(long long)arg1 ;
-(void)calculateAttachmentInfoFromBody:(id)arg1 ;
-(id)dataForMimePart:(id)arg1 ;
-(void)setMessagePropertiesFromMessage:(id)arg1 ;
-(void)setMessageURL:(id)arg1 ;
-(NSString *)description;
-(id)messageURL;
-(id)firstSender;
-(id)summary;
-(id)senderAddressComment;
-(id)messageBodyIfAvailable;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(BOOL)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)_privacySafeDescription;
-(id)persistentID;
-(id)messageStore;
-(NSUUID *)documentID;
-(void)setDocumentID:(NSUUID *)arg1 ;
-(id)messageIDHeaderInFortyBytesOrLess;
-(id)messageDataHolder;
-(id)bodyData;
-(id)remoteID;
-(void)setContentType:(id)arg1 ;
-(void)setMessageStore:(id)arg1 ;
-(id)messageDataIsComplete:(BOOL*)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)headers;
-(id)messageID;
-(void)setPreferredEncoding:(unsigned)arg1 ;
-(void)loadCachedHeaderValuesFromHeaders:(id)arg1 ;
-(id)dateReceived;
-(id)messageIDHeader;
-(id)messageIDHeaderHash;
-(id)listIDHash;
-(BOOL)isMessageContentsLocallyAvailable;
-(id)dataPathForMimePart:(id)arg1 ;
-(void)setMessageData:(id)arg1 isPartial:(BOOL)arg2 ;
-(id)dataConsumerForMimePart:(id)arg1 ;
-(BOOL)isLibraryMessage;
-(id)attachmentStorageLocation;
-(void)setSubject:(ECSubject *)arg1 ;
-(unsigned long long)generationNumber;
-(MFMimePart *)parentPart;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5 ;
-(id)messageBodyUpdatingFlags:(BOOL)arg1 ;
-(id)messageBodyIfAvailableUpdatingFlags:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)messageSize;
-(id)headersIfAvailable;
-(id)messageData;
-(id)messageBody;
-(void)setParentPart:(MFMimePart *)arg1 ;
-(BOOL)_doesDateAppearToBeSane:(id)arg1 ;
-(id)_copyDateFromReceivedHeadersInHeaders:(id)arg1 ;
-(id)_copyDateFromDateHeaderInHeaders:(id)arg1 ;
-(void)_setDateReceivedFromHeaders:(id)arg1 ;
-(void)_setDateSentFromHeaders:(id)arg1 ;
-(id)uniqueArray:(id)arg1 withStore:(id)arg2 ;
-(long long)_messageIDHeaderHashIvar;
-(id)bodyDataIsComplete:(BOOL*)arg1 isPartial:(BOOL*)arg2 ;
-(id)bodyDataIsComplete:(BOOL*)arg1 isPartial:(BOOL*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)headerDataDownloadIfNecessary:(BOOL)arg1 ;
-(BOOL)calculatedNumberOfAttachments;
-(BOOL)needsDateReceived;
-(void)setMessageInfo:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHash:(long long)arg8 conversationID:(long long)arg9 summary:(id)arg10 ;
-(id)bodyDataIsComplete:(BOOL*)arg1 ;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 ;
-(BOOL)fetchDataForMimePart:(id)arg1 inRange:(NSRange)arg2 withConsumer:(id)arg3 isComplete:(BOOL*)arg4 downloadIfNecessary:(BOOL)arg5 ;
-(BOOL)canBeTriaged;
-(id)additionalHeadersForReply;
-(id)additionalHeadersForForward;
@end

