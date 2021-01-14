/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@class MFMailMessage, MailAccount, DeliveryAccount, MFDeliveryResult, MFMutableMessageHeaders, NSDictionary, NSArray, ECHTMLStringAndMIMECharset, MFPlainTextDocument, EMMessageObjectID;

@interface MFMailDelivery : NSObject {

	id _delegate;
	MFMailMessage* _message;
	MailAccount* _archiveAccount;
	DeliveryAccount* _account;
	MFDeliveryResult* _result;
	MFMutableMessageHeaders* _headers;
	NSDictionary* _compositionSpecification;
	NSArray* _mixedContent;
	BOOL _textPartsAreHTML;
	ECHTMLStringAndMIMECharset* _htmlString;
	MFPlainTextDocument* _plainTextAlternative;
	NSArray* _otherStringsAndAttachments;
	unsigned _threaded : 1;
	unsigned _useCellDataOnly : 1;
	BOOL _isUserRequested;
	BOOL _shouldSign;
	BOOL _shouldEncrypt;
	unsigned long long _conversationFlags;
	EMMessageObjectID* _originalMessageObjectID;
	MFMailMessage* _originalMessage;
	long long _action;

}

@property (nonatomic,retain) NSDictionary * compositionSpecification;                  //@synthesize compositionSpecification=_compositionSpecification - In the implementation block
@property (assign,nonatomic) unsigned long long conversationFlags;                     //@synthesize conversationFlags=_conversationFlags - In the implementation block
@property (assign,nonatomic) BOOL isUserRequested;                                     //@synthesize isUserRequested=_isUserRequested - In the implementation block
@property (nonatomic,retain) EMMessageObjectID * originalMessageObjectID;              //@synthesize originalMessageObjectID=_originalMessageObjectID - In the implementation block
@property (nonatomic,retain) MFMailMessage * originalMessage;                          //@synthesize originalMessage=_originalMessage - In the implementation block
@property (assign,nonatomic) long long action;                                         //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL shouldSign;                                          //@synthesize shouldSign=_shouldSign - In the implementation block
@property (assign,nonatomic) BOOL shouldEncrypt;                                       //@synthesize shouldEncrypt=_shouldEncrypt - In the implementation block
@property (assign,nonatomic,__weak) id delegate; 
+(id)newWithMessage:(id)arg1 ;
+(id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
+(BOOL)deliverMessage:(id)arg1 ;
+(id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 ;
-(id)account;
-(id)message;
-(void)setAccount:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)updateOriginalMessageFromHeaders:(id)arg1 ;
-(NSDictionary *)compositionSpecification;
-(id)originalHeaders;
-(id)headersForDelivery;
-(id)deliverMessageData:(id)arg1 toRecipients:(id)arg2 ;
-(id)archiveAccount;
-(void)setArchiveAccount:(id)arg1 ;
-(long long)deliveryStatus;
-(id)deliveryResult;
-(void)deliverAsynchronously;
-(void)setCellDataOnly:(BOOL)arg1 ;
-(void)setCompositionSpecification:(NSDictionary *)arg1 ;
-(void)setIsUserRequested:(BOOL)arg1 ;
-(EMMessageObjectID *)originalMessageObjectID;
-(void)setShouldSign:(BOOL)arg1 ;
-(void)setOriginalMessageObjectID:(EMMessageObjectID *)arg1 ;
-(void)setOriginalMessage:(MFMailMessage *)arg1 ;
-(void)setShouldEncrypt:(BOOL)arg1 ;
-(void)archive;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(BOOL)shouldEncrypt;
-(id)newMessageWriter;
-(MFMailMessage *)originalMessage;
-(BOOL)shouldSign;
-(BOOL)isUserRequested;
-(unsigned long long)conversationFlags;
-(id)deliverSynchronously;
-(id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
-(id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 ;
-(void)setConversationFlags:(unsigned long long)arg1 ;
-(void)dealloc;
@end

