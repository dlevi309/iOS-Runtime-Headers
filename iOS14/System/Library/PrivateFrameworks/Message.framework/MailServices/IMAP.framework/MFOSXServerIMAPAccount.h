/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/

#import <IMAP/IMAPAccount.h>

@class DeliveryAccount;

@interface MFOSXServerIMAPAccount : IMAPAccount {

	DeliveryAccount* _deliveryAccount;

}
+(id)accountTypeString;
+(id)displayedAccountTypeString;
+(id)accountTypeIdentifier;
+(BOOL)primaryDeliveryAccountIsDynamic;
+(id)newChildAccountWithParentAccount:(id)arg1 error:(id*)arg2 ;
+(id)_authSchemeForAuthenticationMethod:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(id)_credentialCreateIfNecessary:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(id)displayName;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg1 ;
@end

