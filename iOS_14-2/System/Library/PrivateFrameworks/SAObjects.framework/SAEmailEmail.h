/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, SAPersonAttribute, NSString, NSNumber, NSURL;

@interface SAEmailEmail : SADomainObject

@property (nonatomic,copy) NSArray * attachments; 
@property (nonatomic,copy) NSDate * dateSent; 
@property (nonatomic,retain) SAPersonAttribute * fromEmail; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * messagePreview; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSArray * receivingAddresses; 
@property (nonatomic,copy) NSArray * recipientsBcc; 
@property (nonatomic,copy) NSArray * recipientsCc; 
@property (nonatomic,copy) NSArray * recipientsTo; 
@property (nonatomic,copy) NSURL * referenceId; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * type; 
+(id)emailWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)email;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)message;
-(id)groupIdentifier;
-(NSNumber *)outgoing;
-(NSArray *)attachments;
-(id)encodedClassName;
-(NSDate *)dateSent;
-(NSArray *)recipientsTo;
-(void)setRecipientsTo:(NSArray *)arg1 ;
-(void)setDateSent:(NSDate *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(SAPersonAttribute *)fromEmail;
-(void)setFromEmail:(SAPersonAttribute *)arg1 ;
-(NSString *)type;
-(NSString *)timeZoneId;
-(NSArray *)receivingAddresses;
-(NSString *)messagePreview;
-(NSArray *)recipientsBcc;
-(void)setMessagePreview:(NSString *)arg1 ;
-(void)setReceivingAddresses:(NSArray *)arg1 ;
-(void)setRecipientsBcc:(NSArray *)arg1 ;
-(NSArray *)recipientsCc;
-(void)setRecipientsCc:(NSArray *)arg1 ;
-(NSURL *)referenceId;
-(void)setReferenceId:(NSURL *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
@end

