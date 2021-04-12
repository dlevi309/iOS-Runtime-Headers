/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

@class NSArray, NSString;


@protocol EDReceivingAccount <EDAccount>
@property (nonatomic,readonly) BOOL isManaged; 
@property (nonatomic,readonly) BOOL sourceIsManaged; 
@property (nonatomic,readonly) NSArray * emailAddresses; 
@property (nonatomic,copy,readonly) NSString * smtpIdentifier; 
@property (nonatomic,readonly) BOOL isLocalAccount; 
@property (nonatomic,readonly) BOOL shouldArchiveByDefault; 
@required
-(BOOL)sourceIsManaged;
-(NSArray *)emailAddresses;
-(BOOL)isManaged;
-(BOOL)isLocalAccount;
-(id)deliveryAccount;
-(void)setDeliveryAccount:(id)arg1;
-(BOOL)shouldArchiveByDefault;
-(id)mailboxForType:(long long)arg1;
-(BOOL)containsMailboxWithURL:(id)arg1;
-(NSString *)smtpIdentifier;

@end

