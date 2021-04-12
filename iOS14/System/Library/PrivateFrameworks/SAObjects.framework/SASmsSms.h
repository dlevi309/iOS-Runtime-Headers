/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) NSDate * dateReadingStarted; 
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
+(id)smsWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)sms;
-(id)af_messageValue;
-(NSArray *)recipients;
-(void)setMessage:(NSString *)arg1 ;
-(void)setEffect:(NSString *)arg1 ;
-(NSString *)messageType;
-(NSString *)effect;
-(NSString *)subject;
-(NSString *)sender;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)message;
-(void)setMessageType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)outgoing;
-(void)setSender:(NSString *)arg1 ;
-(NSArray *)attachments;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)encodedClassName;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(NSDate *)dateSent;
-(void)setDateSent:(NSDate *)arg1 ;
-(BOOL)hasGroupName;
-(SASmsSms *)referencedMessage;
-(void)setReferencedMessage:(SASmsSms *)arg1 ;
-(void)setAppInfo:(SAAppInfo *)arg1 ;
-(NSDate *)dateLastMessageReadInThread;
-(void)setDateLastMessageReadInThread:(NSDate *)arg1 ;
-(void)setHasGroupName:(BOOL)arg1 ;
-(void)setMsgSender:(SAPersonAttribute *)arg1 ;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(void)setMsgRecipients:(NSArray *)arg1 ;
-(void)setChatIdentifier:(NSString *)arg1 ;
-(NSDate *)dateReadingStarted;
-(void)setDateReadingStarted:(NSDate *)arg1 ;
-(void)setIsAudioMessage:(NSNumber *)arg1 ;
-(NSString *)timezoneId;
-(void)setTimezoneId:(NSString *)arg1 ;
-(NSURL *)attachment;
-(SAAppInfo *)appInfo;
-(NSString *)groupNameId;
-(void)setGroupNameId:(NSString *)arg1 ;
-(NSArray *)msgRecipients;
-(NSNumber *)isAudioMessage;
-(NSString *)chatIdentifier;
-(void)setAttachment:(NSURL *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(SAPersonAttribute *)msgSender;
@end

