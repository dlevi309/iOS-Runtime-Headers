/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, NSDate, INPerson, NSArray, NSNumber;


@protocol INMessageExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * conversationIdentifier; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) NSDate * dateSent; 
@property (nonatomic,copy) INPerson * sender; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSDate * dateMessageWasLastRead; 
@property (nonatomic,copy) NSNumber * numberOfAttachments; 
@property (assign,nonatomic) long long messageType; 
@property (assign,nonatomic) long long messageEffectType; 
@required
-(NSArray *)recipients;
-(long long)messageType;
-(INPerson *)sender;
-(void)setMessageType:(long long)arg1;
-(NSString *)content;
-(void)setSender:(id)arg1;
-(id)init;
-(void)setContent:(id)arg1;
-(void)setRecipients:(id)arg1;
-(NSDate *)dateSent;
-(void)setDateSent:(id)arg1;
-(void)setConversationIdentifier:(id)arg1;
-(NSNumber *)numberOfAttachments;
-(void)setNumberOfAttachments:(id)arg1;
-(NSString *)conversationIdentifier;
-(NSDate *)dateMessageWasLastRead;
-(void)setDateMessageWasLastRead:(id)arg1;
-(long long)messageEffectType;
-(void)setMessageEffectType:(long long)arg1;
-(void)setIdentifier:(id)arg1;
-(NSString *)identifier;

@end

