/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <IMSharedUtilities/IMRemoteObjectCoding.h>

@class NSString, NSArray, NSAttributedString, NSData, NSDate, NSDictionary;

@interface IMMessageItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding> {

	BOOL _blockingRichLinks;
	BOOL _isBeingRetried;
	BOOL _updatingDataSourcePayload;
	BOOL _backwardsCompatibleVersion;
	BOOL _isSOS;
	BOOL _NicknameRequested;
	BOOL _shouldSendMeCard;
	unsigned _error;
	NSString* _subject;
	NSString* _plainBody;
	NSArray* _fileTransferGUIDs;
	unsigned long long _flags;
	NSAttributedString* _body;
	NSData* _bodyData;
	long long _replaceID;
	NSDate* _timeRead;
	NSDate* _timeDelivered;
	NSDate* _timePlayed;
	long long _expireState;
	NSData* _payloadData;
	NSData* _contactsAvatarRecipeData;
	NSString* _expressiveSendStyleID;
	NSDate* _timeExpressiveSendPlayed;
	NSData* _typingIndicatorIcon;
	NSDictionary* _messageSummaryInfo;
	NSDictionary* _bizIntent;
	NSString* _locale;
	NSString* _retryToParticipant;
	NSString* _notificationIDSTokenURI;
	NSString* _suggestedAuthorName;
	NSString* _suggestedAuthorAvatarPath;

}

@property (assign,nonatomic) BOOL backwardsCompatibleVersion;                                                //@synthesize backwardsCompatibleVersion=_backwardsCompatibleVersion - In the implementation block
@property (assign,nonatomic) BOOL isCorrupt; 
@property (assign,nonatomic) BOOL isSpam; 
@property (nonatomic,retain) NSString * subject;                                                             //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSAttributedString * body;                                                      //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSData * bodyData;                                                              //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,retain) NSData * payloadData;                                                           //@synthesize payloadData=_payloadData - In the implementation block
@property (nonatomic,retain) NSString * expressiveSendStyleID;                                               //@synthesize expressiveSendStyleID=_expressiveSendStyleID - In the implementation block
@property (nonatomic,retain) NSDate * timeExpressiveSendPlayed;                                              //@synthesize timeExpressiveSendPlayed=_timeExpressiveSendPlayed - In the implementation block
@property (nonatomic,retain) NSDate * timeRead;                                                              //@synthesize timeRead=_timeRead - In the implementation block
@property (nonatomic,retain) NSDate * timeDelivered;                                                         //@synthesize timeDelivered=_timeDelivered - In the implementation block
@property (nonatomic,retain) NSDate * timePlayed;                                                            //@synthesize timePlayed=_timePlayed - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                                                       //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) long long expireState;                                                          //@synthesize expireState=_expireState - In the implementation block
@property (nonatomic,retain) NSArray * fileTransferGUIDs;                                                    //@synthesize fileTransferGUIDs=_fileTransferGUIDs - In the implementation block
@property (assign,nonatomic) unsigned errorCode;                                                             //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long replaceID;                                                            //@synthesize replaceID=_replaceID - In the implementation block
@property (assign,nonatomic) BOOL hasDataDetectorResults; 
@property (assign,nonatomic) BOOL blockingRichLinks;                                                         //@synthesize blockingRichLinks=_blockingRichLinks - In the implementation block
@property (nonatomic,readonly) BOOL isDelivered; 
@property (nonatomic,readonly) BOOL isSent; 
@property (nonatomic,readonly) BOOL isRead; 
@property (nonatomic,readonly) BOOL isPlayed; 
@property (nonatomic,readonly) BOOL isFinished; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) BOOL isAlert; 
@property (nonatomic,readonly) BOOL wasDataDetected; 
@property (nonatomic,readonly) BOOL wasDowngraded; 
@property (nonatomic,readonly) BOOL isPrepared; 
@property (nonatomic,readonly) BOOL isTypingMessage; 
@property (nonatomic,readonly) BOOL isLocatingMessage; 
@property (nonatomic,readonly) BOOL isEmote; 
@property (nonatomic,readonly) BOOL isAudioMessage; 
@property (nonatomic,readonly) BOOL isExpirable; 
@property (nonatomic,readonly) BOOL isFromExternalSource; 
@property (assign,nonatomic) BOOL isBeingRetried;                                                            //@synthesize isBeingRetried=_isBeingRetried - In the implementation block
@property (nonatomic,retain) NSString * retryToParticipant;                                                  //@synthesize retryToParticipant=_retryToParticipant - In the implementation block
@property (nonatomic,retain) NSString * notificationIDSTokenURI;                                             //@synthesize notificationIDSTokenURI=_notificationIDSTokenURI - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * breadcrumbText; 
@property (nonatomic,retain) NSString * plainBody;                                                           //@synthesize plainBody=_plainBody - In the implementation block
@property (nonatomic,retain) NSData * typingIndicatorIcon;                                                   //@synthesize typingIndicatorIcon=_typingIndicatorIcon - In the implementation block
@property (nonatomic,retain) NSData * contactsAvatarRecipeData;                                              //@synthesize contactsAvatarRecipeData=_contactsAvatarRecipeData - In the implementation block
@property (assign,getter=isUpdatingDataSourcePayload,nonatomic) BOOL updatingDataSourcePayload;              //@synthesize updatingDataSourcePayload=_updatingDataSourcePayload - In the implementation block
@property (nonatomic,retain) NSDictionary * messageSummaryInfo;                                              //@synthesize messageSummaryInfo=_messageSummaryInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * bizIntent;                                                       //@synthesize bizIntent=_bizIntent - In the implementation block
@property (nonatomic,retain) NSString * locale;                                                              //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) BOOL isSOS;                                                                     //@synthesize isSOS=_isSOS - In the implementation block
@property (assign,nonatomic) BOOL NicknameRequested;                                                         //@synthesize NicknameRequested=_NicknameRequested - In the implementation block
@property (assign,nonatomic) BOOL shouldSendMeCard;                                                          //@synthesize shouldSendMeCard=_shouldSendMeCard - In the implementation block
@property (nonatomic,copy) NSString * suggestedAuthorName;                                                   //@synthesize suggestedAuthorName=_suggestedAuthorName - In the implementation block
@property (nonatomic,copy) NSString * suggestedAuthorAvatarPath;                                             //@synthesize suggestedAuthorAvatarPath=_suggestedAuthorAvatarPath - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)messageContainsSurfDD:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)locale;
-(unsigned long long)flags;
-(BOOL)isFinished;
-(BOOL)isRead;
-(id)sender;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(NSData *)bodyData;
-(void)setBodyData:(NSData *)arg1 ;
-(void)setBody:(NSAttributedString *)arg1 ;
-(NSAttributedString *)body;
-(unsigned)errorCode;
-(void)setErrorCode:(unsigned)arg1 ;
-(id)copyDictionaryRepresentation;
-(BOOL)isFromMe;
-(BOOL)isSent;
-(id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4 ;
-(BOOL)isFirstMessageCandidate;
-(BOOL)isLastMessageCandidate;
-(void)setPayloadData:(NSData *)arg1 ;
-(void)setMessageSummaryInfo:(NSDictionary *)arg1 ;
-(void)setTimeRead:(NSDate *)arg1 ;
-(void)setTimePlayed:(NSDate *)arg1 ;
-(void)setTimeDelivered:(NSDate *)arg1 ;
-(void)setExpireState:(long long)arg1 ;
-(NSData *)payloadData;
-(NSDictionary *)messageSummaryInfo;
-(NSDate *)timeRead;
-(NSDate *)timePlayed;
-(NSDate *)timeDelivered;
-(long long)expireState;
-(NSString *)expressiveSendStyleID;
-(NSArray *)fileTransferGUIDs;
-(BOOL)isExpirable;
-(NSString *)plainBody;
-(void)setPlainBody:(NSString *)arg1 ;
-(void)setFileTransferGUIDs:(NSArray *)arg1 ;
-(long long)replaceID;
-(void)setReplaceID:(long long)arg1 ;
-(void)setExpressiveSendStyleID:(NSString *)arg1 ;
-(NSDate *)timeExpressiveSendPlayed;
-(void)setTimeExpressiveSendPlayed:(NSDate *)arg1 ;
-(NSData *)typingIndicatorIcon;
-(void)setTypingIndicatorIcon:(NSData *)arg1 ;
-(NSData *)contactsAvatarRecipeData;
-(void)setContactsAvatarRecipeData:(NSData *)arg1 ;
-(NSDictionary *)bizIntent;
-(void)setBizIntent:(NSDictionary *)arg1 ;
-(BOOL)isSOS;
-(void)setIsSOS:(BOOL)arg1 ;
-(NSString *)notificationIDSTokenURI;
-(void)setNotificationIDSTokenURI:(NSString *)arg1 ;
-(BOOL)isCorrupt;
-(void)setIsCorrupt:(BOOL)arg1 ;
-(BOOL)isSpam;
-(void)setIsSpam:(BOOL)arg1 ;
-(BOOL)shouldSendMeCard;
-(void)setShouldSendMeCard:(BOOL)arg1 ;
-(BOOL)isBeingRetried;
-(void)setIsBeingRetried:(BOOL)arg1 ;
-(NSString *)retryToParticipant;
-(void)setRetryToParticipant:(NSString *)arg1 ;
-(void)_updateFlags:(unsigned long long)arg1 ;
-(BOOL)isAudioMessage;
-(void)setBackwardsCompatibleVersion:(BOOL)arg1 ;
-(void)_generateBodyDataIfNeeded;
-(id)initWithDictionary:(id)arg1 hint:(id)arg2 ;
-(BOOL)hasDataDetectorResults;
-(id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 type:(long long)arg9 ;
-(id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 bizIntent:(id)arg26 locale:(id)arg27 errorType:(unsigned)arg28 type:(long long)arg29 ;
-(void)adjustIsEmptyFlag;
-(void)_regenerateBodyData;
-(void)_regenerateBodyText;
-(void)_generateBodyTextIfNeeded;
-(void)_clearBodyData;
-(BOOL)isDelivered;
-(BOOL)isPlayed;
-(BOOL)wasDataDetected;
-(BOOL)wasDowngraded;
-(BOOL)isEmote;
-(id)copyWithFlags:(unsigned long long)arg1 ;
-(id)copyForBackwardsCompatibility;
-(void)enumerateAttachmentGUIDsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 ;
-(id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11 ;
-(id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 bizIntent:(id)arg26 locale:(id)arg27 errorType:(unsigned)arg28 ;
-(BOOL)isAlert;
-(BOOL)isPrepared;
-(BOOL)isTypingMessage;
-(BOOL)isLocatingMessage;
-(BOOL)isFromExternalSource;
-(void)setHasDataDetectorResults:(BOOL)arg1 ;
-(void)setWasDataDetected:(BOOL)arg1 ;
-(NSAttributedString *)breadcrumbText;
-(id)_localizedBackwardsCompatibleExpressiveSendText;
-(BOOL)blockingRichLinks;
-(void)setBlockingRichLinks:(BOOL)arg1 ;
-(BOOL)isUpdatingDataSourcePayload;
-(void)setUpdatingDataSourcePayload:(BOOL)arg1 ;
-(BOOL)backwardsCompatibleVersion;
-(BOOL)NicknameRequested;
-(void)setNicknameRequested:(BOOL)arg1 ;
-(NSString *)suggestedAuthorName;
-(void)setSuggestedAuthorName:(NSString *)arg1 ;
-(NSString *)suggestedAuthorAvatarPath;
-(void)setSuggestedAuthorAvatarPath:(NSString *)arg1 ;
@end

