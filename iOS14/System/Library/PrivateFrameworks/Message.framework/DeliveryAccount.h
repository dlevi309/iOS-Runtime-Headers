/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFAccount.h>
#import <libobjc.A.dylib/EDDeliveryAccount.h>

@class NSString, ACAccount, NSArray;

@interface DeliveryAccount : MFAccount <EDDeliveryAccount>

@property (nonatomic,readonly) unsigned long long maximumMessageBytes; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) ACAccount * systemAccount; 
@property (nonatomic,copy,readonly) NSString * statisticsKind; 
@property (nonatomic,readonly) BOOL primaryiCloudAccount; 
@property (nonatomic,copy,readonly) NSArray * emailAddressStrings; 
@property (nonatomic,copy) NSString * hostname; 
@property (nonatomic,copy) NSString * password; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newDefaultInstance;
+(id)accountTypeIdentifier;
+(id)existingAccountForUniqueID:(id)arg1 ;
+(id)deliveryAccounts;
+(void)_postDeliveryAccountsHaveChanged;
+(id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(BOOL)arg3 ;
+(id)existingAccountWithHostname:(id)arg1 username:(id)arg2 ;
+(void)addDeliveryAccount:(id)arg1 ;
+(void)reloadDeliveryAccounts;
+(void)removeDeliveryAccount:(id)arg1 ;
+(id)accountWithUniqueId:(id)arg1 ;
+(id)existingAccountWithIdentifier:(id)arg1 ;
+(id)accountWithHostname:(id)arg1 username:(id)arg2 ;
+(id)carrierDeliveryAccount;
+(id)accountWithIdentifier:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(void)_setAccountProperties:(id)arg1 ;
-(BOOL)shouldUseAuthentication;
-(id)newDeliveryWithMessage:(id)arg1 ;
-(id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
-(id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 ;
-(Class)deliveryClass;
-(id)mailAccountIfAvailable;
-(NSString *)identifier;
-(void)_updateAccountDescriptionWithUsername:(id)arg1 hostname:(id)arg2 ;
-(void)setShouldUseAuthentication:(BOOL)arg1 ;
-(unsigned long long)maximumMessageBytes;
-(void)setMaximumMessageBytes:(unsigned long long)arg1 ;
-(BOOL)hasNoReferences;
-(id)displayHostname;
-(BOOL)supportsOutboxCopy;
-(BOOL)canBeFallbackAccount;
-(BOOL)hasEnoughInformationForEasySetup;
-(BOOL)shouldUseSaveSentForAccount:(id)arg1 ;
@end

