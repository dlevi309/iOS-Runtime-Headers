/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@interface DAContactsAccountProvider : NSObject
+(id)providerWithContactStore:(id)arg1 ;
+(id)providerWithAddressBook:(void*)arg1 ;
-(id)accountByCreatingAccountWithExternalIdentifier:(id)arg1 ;
-(id)accountForContainerWithIdentifier:(id)arg1 ;
-(id)fetchedAccountWithExternalIdentifier:(id)arg1 ;
-(id)allAccounts;
@end

