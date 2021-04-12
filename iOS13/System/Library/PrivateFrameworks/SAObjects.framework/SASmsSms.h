/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SAAppInfo, NSURL, NSArray, NSString, NSDate, NSNumber, SAPersonAttribute;

@interface SASmsSms : SADomainObject

@property (nonatomic,retain) SAAppInfo * appInfo; 
@property (nonatomic,copy) NSURL * attachment; 
@property (nonatomic,copy) NSArray * attachments; 
@property (nonatomic,copy) NSString * chatIdentifier; 
@property (nonatomic,copy) NSDate * dateLastMessageReadInThread; 
@property (nonatomic,copy) NSDate * dateSent; 
@property (nonatomic,copy) NSString * effect; 
@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSString * groupNameId; 
@property (assign,nonatomic) BOOL hasGroupName; 
@property (nonatomic,copy) NSNumber * isAudioMessage; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * messageType; 
@property (nonatomic,copy) NSArray * msgRecipients; 
@property (nonatomic,retain) SAPersonAttribute * msgSender; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,retain) SASmsSms * referencedMessage; 
@property (nonatomic,copy) NSString * sender; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * timezoneId; 
+(id)sms;
+(id)smsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_messageValue;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)groupName;
-(NSString *)sender;
-(NSArray *)recipients;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setSender:(NSString *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(NSURL *)attachment;
-(void)setAttachment:(NSURL *)arg1 ;
-(void)setEffect:(NSString *)arg1 ;
-(NSString *)effect;
-(NSString *)messageType;
-(void)setMessageType:(NSString *)arg1 ;
-(NSNumber *)isAudioMessage;
-(NSDate *)dateSent;
-(void)setDateSent:(NSDate *)arg1 ;
-(BOOL)hasGroupName;
-(SASmsSms *)referencedMessage;
-(void)setReferencedMessage:(SASmsSms *)arg1 ;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSString *)chatIdentifier;
-(void)setChatIdentifier:(NSString *)arg1 ;
-(NSString *)groupNameId;
-(void)setGroupNameId:(NSString *)arg1 ;
-(void)setMsgSender:(SAPersonAttribute *)arg1 ;
-(void)setMsgRecipients:(NSArray *)arg1 ;
-(NSNumber *)outgoing;
-(SAPersonAttribute *)msgSender;
-(NSArray *)msgRecipients;
-(void)setIsAudioMessage:(NSNumber *)arg1 ;
-(SAAppInfo *)appInfo;
-(void)setAppInfo:(SAAppInfo *)arg1 ;
-(NSDate *)dateLastMessageReadInThread;
-(void)setDateLastMessageReadInThread:(NSDate *)arg1 ;
-(void)setHasGroupName:(BOOL)arg1 ;
-(NSString *)timezoneId;
-(void)setTimezoneId:(NSString *)arg1 ;
@end

