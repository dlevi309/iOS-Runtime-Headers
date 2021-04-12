/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSendMessageIntentExport.h>

@class NSArray, NSString, INSpeakableString, INPerson;

@interface INSendMessageIntent : INIntent <INSendMessageIntentExport>

@property (nonatomic,copy,readonly) NSArray * recipients; 
@property (nonatomic,copy,readonly) NSString * content; 
@property (nonatomic,copy,readonly) INSpeakableString * speakableGroupName; 
@property (nonatomic,copy,readonly) NSString * conversationIdentifier; 
@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (nonatomic,copy,readonly) INPerson * sender; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long effect; 
@property (nonatomic,copy) NSArray * attachments; 
@property (assign,nonatomic) long long messageType; 
+(id)_ignoredParameters;
-(BOOL)cd_saveToPeopleStore;
-(id)cd_derivedIntentIdentifier;
-(long long)cd_interactionMechanism;
-(id)cd_groupName;
-(id)cd_sender;
-(id)cd_recipients;
-(id)domain;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(id)_metadata;
-(NSString *)serviceName;
-(id)groupName;
-(INPerson *)sender;
-(NSArray *)recipients;
-(void)setGroupName:(id)arg1 ;
-(void)setSender:(INPerson *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(INSpeakableString *)speakableGroupName;
-(NSString *)conversationIdentifier;
-(void)setServiceName:(NSString *)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)content;
-(void)setEffect:(long long)arg1 ;
-(long long)effect;
-(void)setContent:(NSString *)arg1 ;
-(long long)messageType;
-(void)setMessageType:(long long)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithRecipients:(id)arg1 content:(id)arg2 serviceName:(id)arg3 sender:(id)arg4 ;
-(BOOL)_isUserConfirmationRequired;
-(BOOL)_isValidSubProducer:(id)arg1 ;
-(id)initWithRecipients:(id)arg1 content:(id)arg2 groupName:(id)arg3 serviceName:(id)arg4 sender:(id)arg5 ;
-(BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2 ;
-(id)_spotlightContentType;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(void)setSpeakableGroupName:(INSpeakableString *)arg1 ;
-(id)_validParameterCombinationsWithSchema:(id)arg1 ;
-(BOOL)_supportsBackgroundExecution;
-(long long)_preferredInteractionDirection;
-(id)initWithRecipients:(id)arg1 content:(id)arg2 speakableGroupName:(id)arg3 conversationIdentifier:(id)arg4 serviceName:(id)arg5 sender:(id)arg6 ;
-(id)_redactedDictionaryRepresentation;
@end

