/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, NSString, INSpeakableString, INPerson;


@protocol INSendMessageIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * recipients; 
@property (assign,nonatomic) long long outgoingMessageType; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) INSpeakableString * speakableGroupName; 
@property (nonatomic,copy) NSString * conversationIdentifier; 
@property (nonatomic,copy) NSString * serviceName; 
@property (nonatomic,copy) INPerson * sender; 
@property (assign,nonatomic) long long effect; 
@property (nonatomic,copy) NSArray * attachments; 
@required
-(NSArray *)recipients;
-(void)setEffect:(long long)arg1;
-(long long)effect;
-(INPerson *)sender;
-(void)setAttachments:(id)arg1;
-(NSString *)content;
-(void)setSender:(id)arg1;
-(NSArray *)attachments;
-(id)init;
-(void)setContent:(id)arg1;
-(void)setRecipients:(id)arg1;
-(void)setConversationIdentifier:(id)arg1;
-(void)setSpeakableGroupName:(id)arg1;
-(NSString *)conversationIdentifier;
-(INSpeakableString *)speakableGroupName;
-(NSString *)serviceName;
-(void)setServiceName:(id)arg1;
-(long long)outgoingMessageType;
-(void)setOutgoingMessageType:(long long)arg1;

@end

