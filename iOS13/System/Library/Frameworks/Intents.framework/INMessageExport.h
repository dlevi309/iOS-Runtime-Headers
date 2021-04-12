/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(INPerson *)sender;
-(NSArray *)recipients;
-(void)setSender:(id)arg1;
-(void)setRecipients:(id)arg1;
-(NSString *)conversationIdentifier;
-(NSString *)content;
-(void)setContent:(id)arg1;
-(long long)messageType;
-(void)setMessageType:(long long)arg1;
-(void)setConversationIdentifier:(id)arg1;
-(NSDate *)dateSent;
-(void)setDateSent:(id)arg1;
-(NSNumber *)numberOfAttachments;
-(void)setNumberOfAttachments:(id)arg1;
-(NSDate *)dateMessageWasLastRead;
-(void)setDateMessageWasLastRead:(id)arg1;
-(long long)messageEffectType;
-(void)setMessageEffectType:(long long)arg1;

@end

