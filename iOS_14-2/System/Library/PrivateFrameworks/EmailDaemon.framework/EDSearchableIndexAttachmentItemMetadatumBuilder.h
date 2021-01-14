/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

@class NSString, NSArray, NSDate;


@protocol EDSearchableIndexAttachmentItemMetadatumBuilder <NSObject>
@property (nonatomic,copy) NSString * domainIdentifier; 
@property (nonatomic,copy) NSString * accountIdentifier; 
@property (nonatomic,copy) NSArray * mailboxIdentifiers; 
@property (nonatomic,copy) NSString * senderAddress; 
@property (nonatomic,copy) NSArray * recipientAddresses; 
@property (nonatomic,retain) NSDate * dateReceived; 
@property (nonatomic,retain) NSDate * dateSent; 
@required
-(NSString *)domainIdentifier;
-(void)setSenderAddress:(id)arg1;
-(NSString *)senderAddress;
-(NSDate *)dateSent;
-(void)setRecipientAddresses:(id)arg1;
-(void)setDateSent:(id)arg1;
-(NSString *)accountIdentifier;
-(void)setDateReceived:(id)arg1;
-(void)setMailboxIdentifiers:(id)arg1;
-(NSArray *)recipientAddresses;
-(void)setAccountIdentifier:(id)arg1;
-(void)setDomainIdentifier:(id)arg1;
-(NSArray *)mailboxIdentifiers;
-(NSDate *)dateReceived;

@end

