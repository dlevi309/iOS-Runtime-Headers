/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, NSString, INSpeakableString, INPerson;


@protocol INSendMessageIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) INSpeakableString * speakableGroupName; 
@property (nonatomic,copy) NSString * conversationIdentifier; 
@property (nonatomic,copy) NSString * serviceName; 
@property (nonatomic,copy) INPerson * sender; 
@property (assign,nonatomic) long long effect; 
@property (nonatomic,copy) NSArray * attachments; 
@property (assign,nonatomic) long long messageType; 
@required
-(id)init;
-(NSArray *)attachments;
-(void)setAttachments:(id)arg1;
-(NSString *)serviceName;
-(INPerson *)sender;
-(NSArray *)recipients;
-(void)setSender:(id)arg1;
-(void)setRecipients:(id)arg1;
-(INSpeakableString *)speakableGroupName;
-(NSString *)conversationIdentifier;
-(void)setServiceName:(id)arg1;
-(NSString *)content;
-(void)setEffect:(long long)arg1;
-(long long)effect;
-(void)setContent:(id)arg1;
-(long long)messageType;
-(void)setMessageType:(long long)arg1;
-(void)setConversationIdentifier:(id)arg1;
-(void)setSpeakableGroupName:(id)arg1;

@end

