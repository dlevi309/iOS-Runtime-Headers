/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/

#import <DataAccess/DAContactsAccountProvider.h>

@interface _DAContactsAccountABLegacyProvider : DAContactsAccountProvider {

	void* _addressBook;

}

@property (nonatomic,readonly) void* addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
-(id)accountByCreatingAccountWithExternalIdentifier:(id)arg1 ;
-(id)accountForContainerWithIdentifier:(id)arg1 ;
-(void*)addressBook;
-(id)fetchedAccountWithExternalIdentifier:(id)arg1 ;
-(id)allAccounts;
-(id)initWithAddressBook:(void*)arg1 ;
-(void)dealloc;
@end

