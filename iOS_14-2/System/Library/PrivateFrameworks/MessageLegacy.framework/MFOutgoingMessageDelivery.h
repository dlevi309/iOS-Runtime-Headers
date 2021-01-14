/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@protocol MFDeliveryDelegate;
@class MFMailMessage, MFMutableMessageHeaders, NSArray, ECHTMLStringAndMIMECharset, MFPlainTextDocument, MailAccount, DeliveryAccount, NSDictionary, MFMailDelivery, MFAttachmentCompositionContext;

@interface MFOutgoingMessageDelivery : NSObject {

	MFMailMessage* _message;
	MFMutableMessageHeaders* _headers;
	NSArray* _mixedContent;
	BOOL _textPartsAreHTML;
	ECHTMLStringAndMIMECharset* _htmlBody;
	MFPlainTextDocument* _plainTextAlternative;
	NSArray* _otherHTMLAndAttachments;
	MailAccount* _archiveAccount;
	DeliveryAccount* _deliveryAccount;
	NSDictionary* _compositionSpecification;
	MFMailDelivery* _currentDeliveryObject;
	BOOL _isUserRequested;
	BOOL _shouldSign;
	BOOL _shouldEncrypt;
	id<MFDeliveryDelegate> _delegate;
	MFAttachmentCompositionContext* _attachmentContext;
	unsigned long long _conversationFlags;
	MFMailMessage* _originalMessage;
	long long _originalConversationId;
	long long _action;

}

@property (assign,nonatomic,__weak) id<MFDeliveryDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MFAttachmentCompositionContext * attachmentContext;              //@synthesize attachmentContext=_attachmentContext - In the implementation block
@property (nonatomic,retain) NSDictionary * compositionSpecification;                         //@synthesize compositionSpecification=_compositionSpecification - In the implementation block
@property (assign,nonatomic) unsigned long long conversationFlags;                            //@synthesize conversationFlags=_conversationFlags - In the implementation block
@property (nonatomic,retain) MFMailMessage * originalMessage;                                 //@synthesize originalMessage=_originalMessage - In the implementation block
@property (assign,nonatomic) long long originalConversationId;                                //@synthesize originalConversationId=_originalConversationId - In the implementation block
@property (assign,nonatomic) BOOL isUserRequested;                                            //@synthesize isUserRequested=_isUserRequested - In the implementation block
@property (assign,nonatomic) long long action;                                                //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL shouldSign;                                                 //@synthesize shouldSign=_shouldSign - In the implementation block
@property (assign,nonatomic) BOOL shouldEncrypt;                                              //@synthesize shouldEncrypt=_shouldEncrypt - In the implementation block
+(id)newWithMessage:(id)arg1 ;
+(id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
+(id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 ;
-(id)account;
-(id)message;
-(void)setAccount:(id)arg1 ;
-(id)init;
-(id<MFDeliveryDelegate>)delegate;
-(NSDictionary *)compositionSpecification;
-(id)originalHeaders;
-(void)setArchiveAccount:(id)arg1 ;
-(long long)deliveryStatus;
-(void)setCompositionSpecification:(NSDictionary *)arg1 ;
-(void)setIsUserRequested:(BOOL)arg1 ;
-(id)originalMessageObjectID;
-(void)setShouldSign:(BOOL)arg1 ;
-(void)setOriginalMessage:(MFMailMessage *)arg1 ;
-(void)setShouldEncrypt:(BOOL)arg1 ;
-(id)_currentDeliveryObject;
-(id)_deliverSynchronouslyWithCurrentSettings:(BOOL)arg1 ;
-(MFAttachmentCompositionContext *)attachmentContext;
-(id)_deliveryAccountForInitializers;
-(void)setAttachmentContext:(MFAttachmentCompositionContext *)arg1 ;
-(long long)originalConversationId;
-(void)setOriginalConversationId:(long long)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(void)setDelegate:(id<MFDeliveryDelegate>)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(BOOL)shouldEncrypt;
-(MFMailMessage *)originalMessage;
-(BOOL)shouldSign;
-(BOOL)isUserRequested;
-(unsigned long long)conversationFlags;
-(id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
-(id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 ;
-(id)deliverSynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(void)setConversationFlags:(unsigned long long)arg1 ;
@end

