/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <Message/MFAccount.h>
#import <libobjc.A.dylib/EDDeliveryAccount.h>

@class NSString, NSArray, ACAccount;

@interface DeliveryAccount : MFAccount <EDDeliveryAccount>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * emailAddressStrings; 
@property (nonatomic,copy) NSString * hostname; 
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) ACAccount * systemAccount; 
@property (nonatomic,copy,readonly) NSString * statisticsKind; 
@property (nonatomic,readonly) BOOL primaryiCloudAccount; 
@property (nonatomic,readonly) unsigned long long maximumMessageBytes; 
+(id)accountWithIdentifier:(id)arg1 ;
+(id)accountTypeIdentifier;
+(id)newDefaultInstance;
+(id)existingAccountForUniqueID:(id)arg1 ;
+(void)_postDeliveryAccountsHaveChanged;
+(id)deliveryAccounts;
+(id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(BOOL)arg3 ;
+(id)existingAccountWithHostname:(id)arg1 username:(id)arg2 ;
+(void)addDeliveryAccount:(id)arg1 ;
+(void)reloadDeliveryAccounts;
+(void)removeDeliveryAccount:(id)arg1 ;
+(id)accountWithUniqueId:(id)arg1 ;
+(id)existingAccountWithIdentifier:(id)arg1 ;
+(id)accountWithHostname:(id)arg1 username:(id)arg2 ;
+(id)carrierDeliveryAccount;
-(NSString *)identifier;
-(void)setUsername:(id)arg1 ;
-(void)_setAccountProperties:(id)arg1 ;
-(BOOL)shouldUseAuthentication;
-(id)newDeliveryWithMessage:(id)arg1 ;
-(id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
-(id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 ;
-(Class)deliveryClass;
-(id)mailAccountIfAvailable;
-(void)_updateAccountDescriptionWithUsername:(id)arg1 hostname:(id)arg2 ;
-(void)setShouldUseAuthentication:(BOOL)arg1 ;
-(unsigned long long)maximumMessageBytes;
-(void)setMaximumMessageBytes:(unsigned long long)arg1 ;
-(BOOL)hasNoReferences;
-(id)displayHostname;
-(BOOL)canBeFallbackAccount;
-(BOOL)hasEnoughInformationForEasySetup;
-(BOOL)supportsOutboxCopy;
-(BOOL)shouldUseSaveSentForAccount:(id)arg1 ;
@end

