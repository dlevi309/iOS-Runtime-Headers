/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)accountsForIdentifiers:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(CNCache *)accountsCache;
-(id)accountForIdentifier:(id)arg1 ;
-(void)setAccountsCache:(CNCache *)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)clearCache;
@end

