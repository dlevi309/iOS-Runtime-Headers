/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class CNCache, ACAccountStore;

@interface CNManagedAccountsCache : NSObject {

	CNCache* _accountsCache;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) CNCache * accountsCache;                    //@synthesize accountsCache=_accountsCache - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
+(id)sharedCache;
-(id)init;
-(void)clearCache;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(id)accountForIdentifier:(id)arg1 ;
-(CNCache *)accountsCache;
-(id)accountsForIdentifiers:(id)arg1 ;
-(void)setAccountsCache:(CNCache *)arg1 ;
@end

