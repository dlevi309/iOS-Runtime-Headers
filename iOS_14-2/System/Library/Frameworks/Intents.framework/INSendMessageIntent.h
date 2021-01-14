/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSendMessageIntentExport.h>

@class NSArray, NSString, INSpeakableString, INPerson;

@interface INSendMessageIntent : INIntent <INSendMessageIntentExport>

@property (nonatomic,copy,readonly) NSArray * recipients; 
@property (nonatomic,readonly) long long outgoingMessageType; 
@property (nonatomic,copy,readonly) NSString * content; 
@property (nonatomic,copy,readonly) INSpeakableString * speakableGroupName; 
@property (nonatomic,copy,readonly) NSString * conversationIdentifier; 
@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (nonatomic,copy,readonly) INPerson * sender; 
@property (nonatomic,copy,readonly) NSArray * attachments; 
@property (assign,nonatomic) long long effect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_ignoredParameters;
-(id)cd_sender;
-(id)cd_groupName;
-(long long)cd_interactionMechanism;
-(id)cd_recipients;
-(BOOL)cd_saveToPeopleStore;
-(id)cd_derivedIntentIdentifier;
-(NSArray *)recipients;
-(void)setEffect:(long long)arg1 ;
-(id)verb;
-(long long)effect;
-(void)_setMetadata:(id)arg1 ;
-(INPerson *)sender;
-(void)setAttachments:(NSArray *)arg1 ;
-(id)initWithRecipients:(id)arg1 outgoingMessageType:(long long)arg2 content:(id)arg3 speakableGroupName:(id)arg4 conversationIdentifier:(id)arg5 serviceName:(id)arg6 sender:(id)arg7 attachments:(id)arg8 ;
-(id)initWithRecipients:(id)arg1 outgoingMessageType:(long long)arg2 content:(id)arg3 speakableGroupName:(id)arg4 conversationIdentifier:(id)arg5 serviceName:(id)arg6 sender:(id)arg7 ;
-(NSString *)content;
-(void)setSender:(INPerson *)arg1 ;
-(NSArray *)attachments;
-(id)_metadata;
-(void)setContent:(NSString *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setGroupName:(id)arg1 ;
-(id)groupName;
-(id)initWithRecipients:(id)arg1 content:(id)arg2 groupName:(id)arg3 serviceName:(id)arg4 sender:(id)arg5 ;
-(void)_intents_resolveOutgoingMessageTypeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRecipients:(id)arg1 content:(id)arg2 speakableGroupName:(id)arg3 conversationIdentifier:(id)arg4 serviceName:(id)arg5 sender:(id)arg6 ;
-(BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2 ;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(void)setSpeakableGroupName:(INSpeakableString *)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(NSString *)conversationIdentifier;
-(INSpeakableString *)speakableGroupName;
-(id)_spotlightContentType;
-(NSString *)serviceName;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithRecipients:(id)arg1 content:(id)arg2 serviceName:(id)arg3 sender:(id)arg4 ;
-(BOOL)_isUserConfirmationRequired;
-(id)_validParameterCombinationsWithSchema:(id)arg1 ;
-(id)_currentParameterCombination;
-(void)setServiceName:(NSString *)arg1 ;
-(long long)outgoingMessageType;
-(void)setOutgoingMessageType:(long long)arg1 ;
-(long long)_preferredInteractionDirection;
-(id)_redactedDictionaryRepresentation;
-(id)_keyCodableAttributes;
-(BOOL)_isValidSubProducer:(id)arg1 ;
@end

