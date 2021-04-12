/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/

#import <DataAccess/DAContactsAccountProvider.h>

@class CNContactStore;

@interface _DAContactsAccountContactsProvider : DAContactsAccountProvider {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(CNContactStore *)contactStore;
-(id)accountByCreatingAccountWithExternalIdentifier:(id)arg1 ;
-(id)accountForContainerWithIdentifier:(id)arg1 ;
-(id)fetchedAccountWithExternalIdentifier:(id)arg1 ;
-(id)allAccounts;
-(id)initWithContactStore:(id)arg1 ;
@end

