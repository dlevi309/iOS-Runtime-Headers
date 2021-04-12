/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isManaged;
-(BOOL)sourceIsManaged;
-(NSString *)smtpIdentifier;
-(id)mailboxForType:(long long)arg1;
-(BOOL)containsMailboxWithURL:(id)arg1;
-(NSArray *)emailAddresses;
-(BOOL)isLocalAccount;
-(id)deliveryAccount;
-(void)setDeliveryAccount:(id)arg1;
-(BOOL)shouldArchiveByDefault;

@end

