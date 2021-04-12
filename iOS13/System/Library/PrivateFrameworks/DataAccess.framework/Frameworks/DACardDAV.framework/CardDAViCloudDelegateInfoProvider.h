/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
*/

#import <libobjc.A.dylib/CardDAVDelegateInfoProvider.h>

@class ACAccountStore, ACAccountType, CNPromise, NSString;

@interface CardDAViCloudDelegateInfoProvider : NSObject <CardDAVDelegateInfoProvider> {

	ACAccountStore* _accountStore;
	ACAccountType* _accountsType;
	CNPromise* _familyCirclePromise;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccountType * accountsType;                 //@synthesize accountsType=_accountsType - In the implementation block
@property (nonatomic,retain) CNPromise * familyCirclePromise;              //@synthesize familyCirclePromise=_familyCirclePromise - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegateInfoForFamilyMembers:(id)arg1 ;
-(id)init;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(ACAccountType *)accountsType;
-(id)collectDelegatesForAccount:(id)arg1 ;
-(id)collectExpiredDelgatesForAccount:(id)arg1 ;
-(id)familyMembersPromise;
-(BOOL)isGuardianAccount:(id)arg1 ;
-(id)nonParentsInFamily;
-(id)adultsInFamily;
-(CNPromise *)familyCirclePromise;
-(void)setFamilyCirclePromise:(CNPromise *)arg1 ;
-(id)cardDAVAccounts;
-(id)appleIDsOfExistingDelegates:(id)arg1 ;
-(void)retryFamilyCircleFetch;
-(void)setAccountsType:(ACAccountType *)arg1 ;
@end

