/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@protocol EDAccountFactory;
@interface EMAccountAuthentication : NSObject {

	id<EDAccountFactory> _accountFactory;

}

@property (nonatomic,readonly) id<EDAccountFactory> accountFactory;              //@synthesize accountFactory=_accountFactory - In the implementation block
+(id)log;
-(id<EDAccountFactory>)accountFactory;
-(BOOL)_updateDeliveryAccountCredentialIfNecessaryForAccountWithAccount:(id)arg1 ;
-(BOOL)_updateDeliveryAccountCredentialIfNecessaryForReceivingAccount:(id)arg1 ;
-(BOOL)_shouldAutoUpdateDeliveryAccount:(id)arg1 forChangedReceivingAccount:(id)arg2 ;
-(BOOL)_hostnamesHaveSameTopLevelDomain:(id)arg1 deliveryAccount:(id)arg2 ;
-(id)initWithAccountFactory:(id)arg1 ;
-(BOOL)updateDeliveryAccountCredentialIfNecessaryForAccountWithSystemAccount:(id)arg1 ;
-(BOOL)updateDeliveryAccountCredentialIfNecessaryForAccountWithIdentifier:(id)arg1 ;
@end

