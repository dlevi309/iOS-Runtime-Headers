/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGMessage.h>

@class SGCachedResult, SGSimpleNamedEmailAddress, NSArray, NSString, NSNumber, SGHtmlParser, NSIndexSet;

@interface SGSimpleMailMessage : SGMessage {

	SGCachedResult* _htmlParserCached;
	SGCachedResult* _quotedRegionsCached;
	SGCachedResult* _hasHumanHeadersCached;
	SGCachedResult* _authorCached;
	BOOL _hasInhumanHeaders;
	BOOL _isPartiallyDownloaded;
	SGSimpleNamedEmailAddress* _from;
	SGSimpleNamedEmailAddress* _replyTo;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSString* _messageId;
	NSString* _htmlBody;
	NSNumber* _received;
	NSArray* _headers;
	SGSimpleNamedEmailAddress* _mailingList;

}

@property (nonatomic,copy) SGSimpleNamedEmailAddress * from;                     //@synthesize from=_from - In the implementation block
@property (nonatomic,copy) SGSimpleNamedEmailAddress * replyTo;                  //@synthesize replyTo=_replyTo - In the implementation block
@property (nonatomic,copy) NSArray * to;                                         //@synthesize to=_to - In the implementation block
@property (nonatomic,copy) NSArray * cc;                                         //@synthesize cc=_cc - In the implementation block
@property (nonatomic,copy) NSArray * bcc;                                        //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,copy) NSString * messageId;                                 //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy) NSString * htmlBody;                                  //@synthesize htmlBody=_htmlBody - In the implementation block
@property (nonatomic,copy) NSNumber * received;                                  //@synthesize received=_received - In the implementation block
@property (assign,nonatomic) BOOL hasInhumanHeaders;                             //@synthesize hasInhumanHeaders=_hasInhumanHeaders - In the implementation block
@property (assign,nonatomic) BOOL isPartiallyDownloaded;                         //@synthesize isPartiallyDownloaded=_isPartiallyDownloaded - In the implementation block
@property (nonatomic,copy) SGSimpleNamedEmailAddress * mailingList;              //@synthesize mailingList=_mailingList - In the implementation block
@property (nonatomic,copy) NSArray * headers;                                    //@synthesize headers=_headers - In the implementation block
@property (nonatomic,readonly) SGHtmlParser * htmlParser; 
@property (nonatomic,readonly) NSIndexSet * quotedRegions; 
@property (nonatomic,readonly) BOOL hasHumanHeaders; 
+(BOOL)supportsSecureCoding;
+(NSRange)rangeOfBodyFromRfc822:(id)arg1 ;
+(id)parseHeaders:(id)arg1 ;
+(id)simpleMailMessageFromHeaders:(id)arg1 ;
+(id)parseRfc822Headers:(id)arg1 htmlContent:(id)arg2 ;
+(id)dateFromEmailString:(id)arg1 ;
+(id)parseParameterizedHeaderValue:(id)arg1 ;
+(id)htmlBodyFromRfc822:(id)arg1 headers:(id)arg2 attachmentCallback:(/*^block*/id)arg3 ;
+(id)uudecode:(id)arg1 ;
+(id)decodeQuotedPrintable:(id)arg1 charset:(unsigned long long)arg2 rfc2047UnderscoreAsSpace:(BOOL)arg3 ;
+(id)stripTrailingASCIIHSpace:(id)arg1 ;
+(id)formatFlowed:(id)arg1 delSp:(BOOL)arg2 ;
+(id)parseRfc822:(id)arg1 attachmentCallback:(/*^block*/id)arg2 ;
+(id)parseRfc822Headers:(id)arg1 htmlContent:(id)arg2 source:(id)arg3 ;
+(NSRange)rangeOfHeadersFromRfc822:(id)arg1 ;
+(id)parseRfc822:(id)arg1 ;
+(id)addressItemsFromEmailString:(id)arg1 ;
+(id)decodeEncodedWordsIn:(id)arg1 ;
+(BOOL)headersContainInhumanOnes:(id)arg1 keys:(id)arg2 ;
+(id)subjectByCleaningPrefixesInSubject:(id)arg1 ;
-(NSArray *)to;
-(NSArray *)cc;
-(NSArray *)bcc;
-(SGSimpleNamedEmailAddress *)from;
-(void)setMessageId:(NSString *)arg1 ;
-(id)asDictionary;
-(id)author;
-(id)body;
-(void)setTo:(NSArray *)arg1 ;
-(void)setCc:(NSArray *)arg1 ;
-(void)setBcc:(NSArray *)arg1 ;
-(void)setHtmlBody:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(id)allRecipients;
-(id)initWithDictionary:(id)arg1 ;
-(SGSimpleNamedEmailAddress *)replyTo;
-(id)description;
-(id)initWithSearchableItem:(id)arg1 ;
-(id)textContent;
-(void)setFrom:(SGSimpleNamedEmailAddress *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)htmlBody;
-(NSArray *)headers;
-(void)setHeaders:(NSArray *)arg1 ;
-(BOOL)isPartiallyDownloaded;
-(id)headersDictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)messageId;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)received;
-(void)setReceived:(NSNumber *)arg1 ;
-(id)spotlightBundleIdentifier;
-(id)initForBuilding;
-(SGHtmlParser *)htmlParser;
-(NSIndexSet *)quotedRegions;
-(BOOL)isInhumanContentNoncached;
-(BOOL)hasHumanHeaders;
-(id)dataDetectorMatchesWithSignature;
-(BOOL)isEqualToSimpleMailMessage:(id)arg1 ;
-(id)senderDomain;
-(BOOL)hasRecipientFromSameDomainAsSender;
-(id)spotlightUniqueIdentifier;
-(id)createNewSearchableItemWithSource:(id)arg1 uniqueIdentifier:(id)arg2 domainIdentifier:(id)arg3 ;
-(id)createNewSearchableItem;
-(void)setReplyTo:(SGSimpleNamedEmailAddress *)arg1 ;
-(BOOL)hasInhumanHeaders;
-(void)setHasInhumanHeaders:(BOOL)arg1 ;
-(void)setIsPartiallyDownloaded:(BOOL)arg1 ;
-(SGSimpleNamedEmailAddress *)mailingList;
-(void)setMailingList:(SGSimpleNamedEmailAddress *)arg1 ;
@end

