/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/

#import <IMAP/YahooAccount.h>
#import <libobjc.A.dylib/MFOAuth2TokenAuthProtocol.h>

@class NSString;

@interface AOLAccount : YahooAccount <MFOAuth2TokenAuthProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)displayedAccountTypeString;
+(id)accountTypeIdentifier;
+(id)emailAddressWithUsername:(id)arg1 ;
+(id)deliveryAccountHostname;
+(BOOL)deliveryAccountUsesSSL;
+(unsigned)deliveryAccountPortNumber;
-(id)_defaultSpecialMailboxNameForType:(int)arg1 ;
-(id)URLForMessage:(id)arg1 ;
-(id)statisticsKind;
-(id)iconString;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg1 ;
@end

