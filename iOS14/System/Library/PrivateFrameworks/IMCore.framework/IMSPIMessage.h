/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSString, NSArray, NSAttributedString, NSDate, IMSPIHandle, LPLinkMetadata, PKCurrencyAmount, NSURL;

@interface IMSPIMessage : NSObject {

	NSString* _guid;
	NSArray* _chatGuids;
	NSString* _text;
	NSAttributedString* _attributedText;
	NSString* _subject;
	NSString* _effect;
	NSArray* _recipients;
	NSDate* _date;
	NSDate* _dateRead;
	NSDate* _dateForLastReadMessageInChat;
	IMSPIHandle* _sender;
	long long _messageID;
	NSArray* _attachments;
	BOOL _isOutgoing;
	BOOL _isRead;
	BOOL _isAudioMessage;
	BOOL _isGroupChat;
	BOOL _hasDataDetectedResults;
	long long _itemType;
	NSString* _groupID;
	NSString* _chatIdentifier;
	NSString* _body;
	NSString* _summary;
	NSString* _displayName;
	NSString* _service;
	IMSPIMessage* _referencedMessage;
	NSString* _bundleId;
	long long _messageType;
	NSString* _displayAppName;
	LPLinkMetadata* _richLinkMetadata;
	PKCurrencyAmount* _peerPaymentAmount;

}

@property (readonly) BOOL allowedByScreenTime; 
@property (retain) NSString * guid;                                    //@synthesize guid=_guid - In the implementation block
@property (assign) long long messageID;                                //@synthesize messageID=_messageID - In the implementation block
@property (assign) long long itemType;                                 //@synthesize itemType=_itemType - In the implementation block
@property (retain) NSArray * chatGuids;                                //@synthesize chatGuids=_chatGuids - In the implementation block
@property (retain) NSString * groupID;                                 //@synthesize groupID=_groupID - In the implementation block
@property (retain) NSString * chatIdentifier;                          //@synthesize chatIdentifier=_chatIdentifier - In the implementation block
@property (assign) BOOL isGroupChat;                                   //@synthesize isGroupChat=_isGroupChat - In the implementation block
@property (retain) NSString * service;                                 //@synthesize service=_service - In the implementation block
@property (retain) NSString * text;                                    //@synthesize text=_text - In the implementation block
@property (retain) NSString * body;                                    //@synthesize body=_body - In the implementation block
@property (retain) NSString * summary;                                 //@synthesize summary=_summary - In the implementation block
@property (retain) NSAttributedString * attributedText;                //@synthesize attributedText=_attributedText - In the implementation block
@property (retain) NSString * subject;                                 //@synthesize subject=_subject - In the implementation block
@property (retain) NSString * effect;                                  //@synthesize effect=_effect - In the implementation block
@property (retain) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
@property (retain) IMSPIHandle * sender;                               //@synthesize sender=_sender - In the implementation block
@property (retain) NSArray * recipients;                               //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (retain) NSDate * dateRead;                                  //@synthesize dateRead=_dateRead - In the implementation block
@property (retain) NSDate * dateForLastReadMessageInChat;              //@synthesize dateForLastReadMessageInChat=_dateForLastReadMessageInChat - In the implementation block
@property (assign) BOOL isOutgoing;                                    //@synthesize isOutgoing=_isOutgoing - In the implementation block
@property (assign) BOOL isRead;                                        //@synthesize isRead=_isRead - In the implementation block
@property (assign) BOOL isAudioMessage;                                //@synthesize isAudioMessage=_isAudioMessage - In the implementation block
@property (retain) IMSPIMessage * referencedMessage;                   //@synthesize referencedMessage=_referencedMessage - In the implementation block
@property (retain) NSString * bundleId;                                //@synthesize bundleId=_bundleId - In the implementation block
@property (assign) long long messageType;                              //@synthesize messageType=_messageType - In the implementation block
@property (retain) NSString * displayAppName;                          //@synthesize displayAppName=_displayAppName - In the implementation block
@property (retain) LPLinkMetadata * richLinkMetadata;                  //@synthesize richLinkMetadata=_richLinkMetadata - In the implementation block
@property (retain) PKCurrencyAmount * peerPaymentAmount;               //@synthesize peerPaymentAmount=_peerPaymentAmount - In the implementation block
@property (retain) NSArray * attachments;                              //@synthesize attachments=_attachments - In the implementation block
@property (assign) BOOL hasDataDetectedResults;                        //@synthesize hasDataDetectedResults=_hasDataDetectedResults - In the implementation block
@property (readonly) NSDate * lastReadDate; 
@property (readonly) NSURL * url; 
-(NSArray *)recipients;
-(void)setEffect:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(long long)messageType;
-(NSString *)effect;
-(BOOL)isOutgoing;
-(NSString *)subject;
-(IMSPIHandle *)sender;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setMessageType:(long long)arg1 ;
-(NSString *)body;
-(NSString *)guid;
-(BOOL)isGroupChat;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setSender:(IMSPIHandle *)arg1 ;
-(NSArray *)attachments;
-(void)setMessageID:(long long)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)displayAppName;
-(void)setDisplayAppName:(NSString *)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(NSString *)groupID;
-(BOOL)allowedByScreenTime;
-(IMSPIMessage *)referencedMessage;
-(void)setReferencedMessage:(IMSPIMessage *)arg1 ;
-(void)setGroupID:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(LPLinkMetadata *)richLinkMetadata;
-(void)setDate:(NSDate *)arg1 ;
-(NSURL *)url;
-(void)setItemType:(long long)arg1 ;
-(void)setChatIdentifier:(NSString *)arg1 ;
-(void)setIsAudioMessage:(BOOL)arg1 ;
-(id)description;
-(long long)itemType;
-(NSString *)summary;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)text;
-(void)setService:(NSString *)arg1 ;
-(NSDate *)lastReadDate;
-(BOOL)isAudioMessage;
-(NSString *)chatIdentifier;
-(NSDate *)date;
-(void)setSummary:(NSString *)arg1 ;
-(void)setIsRead:(BOOL)arg1 ;
-(long long)messageID;
-(NSDate *)dateRead;
-(void)setGuid:(NSString *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)displayName;
-(BOOL)isRead;
-(NSString *)service;
-(void)dealloc;
-(void)setIsOutgoing:(BOOL)arg1 ;
-(void)setDateRead:(NSDate *)arg1 ;
-(void)setDateForLastReadMessageInChat:(NSDate *)arg1 ;
-(void)setChatGuids:(NSArray *)arg1 ;
-(void)setRichLinkMetadata:(LPLinkMetadata *)arg1 ;
-(void)setPeerPaymentAmount:(PKCurrencyAmount *)arg1 ;
-(NSArray *)chatGuids;
-(id)spiChatWithQOS:(unsigned)arg1 ;
-(void)setIsGroupChat:(BOOL)arg1 ;
-(NSDate *)dateForLastReadMessageInChat;
-(PKCurrencyAmount *)peerPaymentAmount;
-(BOOL)hasDataDetectedResults;
-(void)setHasDataDetectedResults:(BOOL)arg1 ;
@end

