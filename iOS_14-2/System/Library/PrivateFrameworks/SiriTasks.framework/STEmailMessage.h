/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSString, NSURL, STPerson, NSArray;

@interface STEmailMessage : STSiriModelObject {

	NSString* _messageBody;
	NSURL* _messageIdentifier;
	STPerson* _sender;
	NSString* _subject;
	long long _type;
	NSArray* _toRecipients;
	NSArray* _ccRecipients;
	NSArray* _bccRecipients;
	NSArray* _receivingAddresses;

}

@property (nonatomic,copy) NSString * messageBody;                      //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,retain) NSURL * messageIdentifier;                 //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,retain) STPerson * sender;                         //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * subject;                          //@synthesize subject=_subject - In the implementation block
@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * toRecipients;                    //@synthesize toRecipients=_toRecipients - In the implementation block
@property (nonatomic,retain) NSArray * ccRecipients;                    //@synthesize ccRecipients=_ccRecipients - In the implementation block
@property (nonatomic,retain) NSArray * bccRecipients;                   //@synthesize bccRecipients=_bccRecipients - In the implementation block
@property (nonatomic,retain) NSArray * receivingAddresses;              //@synthesize receivingAddresses=_receivingAddresses - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)subject;
-(STPerson *)sender;
-(void)setSender:(STPerson *)arg1 ;
-(void)setMessageBody:(NSString *)arg1 ;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(NSArray *)bccRecipients;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setCcRecipients:(NSArray *)arg1 ;
-(void)setBccRecipients:(NSArray *)arg1 ;
-(id)_aceContextObjectValue;
-(NSURL *)messageIdentifier;
-(void)setMessageIdentifier:(NSURL *)arg1 ;
-(void)setToRecipients:(NSArray *)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)receivingAddresses;
-(void)setReceivingAddresses:(NSArray *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)messageBody;
-(id)_personAttributesForRecipients:(id)arg1 ;
@end

