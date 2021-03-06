/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol EFScheduler, EMContentItemRequestDelegate;
@class EMMessageObjectID, EDMessagePersistence, MFMailMessage, MFMessageTransformer, NSString, EMContentRequestOptions, EDMailDropMetadataGenerator, EDListUnsubscribeHandler;

@interface MFMessageContentRequest : NSObject {

	id<EFScheduler> _scheduler;
	EMMessageObjectID* _objectID;
	EDMessagePersistence* _messagePersistence;
	MFMailMessage* _legacyMessage;
	MFMessageTransformer* _messageTransformer;
	NSString* _clientIdentifier;
	EMContentRequestOptions* _options;
	EDMailDropMetadataGenerator* _mailDropAttachmentGenerator;
	EDListUnsubscribeHandler* _listUnsubscribeHandler;
	id<EMContentItemRequestDelegate> _delegate;

}

@property (nonatomic,readonly) id<EFScheduler> scheduler;                                              //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) EMMessageObjectID * objectID;                                           //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) EDMessagePersistence * messagePersistence;                              //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (nonatomic,readonly) MFMailMessage * legacyMessage;                                          //@synthesize legacyMessage=_legacyMessage - In the implementation block
@property (nonatomic,readonly) MFMessageTransformer * messageTransformer;                              //@synthesize messageTransformer=_messageTransformer - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;                                            //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) EMContentRequestOptions * options;                                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) EDMailDropMetadataGenerator * mailDropAttachmentGenerator;              //@synthesize mailDropAttachmentGenerator=_mailDropAttachmentGenerator - In the implementation block
@property (nonatomic,readonly) EDListUnsubscribeHandler * listUnsubscribeHandler;                      //@synthesize listUnsubscribeHandler=_listUnsubscribeHandler - In the implementation block
@property (nonatomic,readonly) id<EMContentItemRequestDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
+(id)onScheduler:(id)arg1 requestID:(unsigned long long)arg2 requestContentForObjectID:(id)arg3 messagePersistence:(id)arg4 legacyMessage:(id)arg5 messageTransformer:(id)arg6 mailDropAttachmentGenerator:(id)arg7 listUnsubscribeHandler:(id)arg8 clientIdentifier:(id)arg9 options:(id)arg10 delegate:(id)arg11 completionHandler:(/*^block*/id)arg12 ;
+(id)onScheduler:(id)arg1 requestContentForObjectID:(id)arg2 messagePersistence:(id)arg3 legacyMessage:(id)arg4 messageTransformer:(id)arg5 mailDropAttachmentGenerator:(id)arg6 listUnsubscribeHandler:(id)arg7 clientIdentifier:(id)arg8 options:(id)arg9 delegate:(id)arg10 completionHandler:(/*^block*/id)arg11 ;
+(id)metadataWithDictionary:(id)arg1 ;
-(MFMailMessage *)legacyMessage;
-(id)beginRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)requestRawRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)requestHTMLRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_dataHolderWithCancelationToken:(id)arg1 ;
-(id)_contentRepresentationForLoadingEvent:(id)arg1 existingRepresentation:(id)arg2 ;
-(id)_generateRepresentationForLoadingContext:(id)arg1 existingRepresentation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_contentItemForAttachment:(id)arg1 manager:(id)arg2 managed:(BOOL)arg3 ;
-(id)delegateWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_processContentLoadingContextEvent:(id)arg1 ;
-(EDMailDropMetadataGenerator *)mailDropAttachmentGenerator;
-(id)_attachmentContentItemsForMailDropNodes:(id)arg1 withContext:(id)arg2 ;
-(id)_contentRepresentationForEvent:(id)arg1 contentURL:(id)arg2 relatedItems:(id)arg3 existingRepresentation:(id)arg4 invocable:(id)arg5 ;
-(void)_includeSuggestionItemsIfNeededForRepresentation:(id)arg1 message:(id)arg2 ;
-(void)_includeHeadersIfNeededForRepresentation:(id)arg1 message:(id)arg2 options:(id)arg3 ;
-(MFMessageTransformer *)messageTransformer;
-(id)_messageForLegacyMessage:(id)arg1 ;
-(id)_requestContentForAttachment:(id)arg1 manager:(id)arg2 options:(id)arg3 managed:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)_maildropMetadataFromContext:(id)arg1 ;
-(id)_attachmentForMailDropMetaData:(id)arg1 context:(id)arg2 ;
-(id<EMContentItemRequestDelegate>)delegate;
-(EMContentRequestOptions *)options;
-(EDMessagePersistence *)messagePersistence;
-(EDListUnsubscribeHandler *)listUnsubscribeHandler;
-(EMMessageObjectID *)objectID;
-(id)_init;
-(NSString *)clientIdentifier;
-(id<EFScheduler>)scheduler;
@end

