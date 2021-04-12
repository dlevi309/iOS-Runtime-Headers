/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDomainIdentifier:(id)arg1;
-(NSString *)domainIdentifier;
-(NSArray *)mailboxIdentifiers;
-(NSString *)accountIdentifier;
-(NSArray *)recipientAddresses;
-(void)setAccountIdentifier:(id)arg1;
-(void)setRecipientAddresses:(id)arg1;
-(NSDate *)dateSent;
-(void)setDateSent:(id)arg1;
-(NSString *)senderAddress;
-(void)setSenderAddress:(id)arg1;
-(NSDate *)dateReceived;
-(void)setDateReceived:(id)arg1;
-(void)setMailboxIdentifiers:(id)arg1;

@end

