/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/


#import <Accounts/Accounts-Structs.h>
@interface ACDPropertyEncryption : NSObject
+(SecKeyRef)accountPropertyCryptoKeyCreatingIfNecessary:(BOOL)arg1 ;
+(id)encryptProperty:(id)arg1 ;
+(id)decryptProperty:(id)arg1 ;
+(id)_decryptableDataForStoredProperty:(id)arg1 ;
@end

