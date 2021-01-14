/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
*/

#import <libobjc.A.dylib/CardDAVDelegateInfoProvider.h>

@class ACAccountStore, ACAccountType, NSString;

@interface CardDAViCloudDelegateInfoProvider : NSObject <CardDAVDelegateInfoProvider> {

	ACAccountStore* _accountStore;
	ACAccountType* _accountsType;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccountType * accountsType;               //@synthesize accountsType=_accountsType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegateInfoForFamilyMembers:(id)arg1 ;
-(id)init;
-(ACAccountType *)accountsType;
-(ACAccountStore *)accountStore;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(id)collectDelegatesForAccount:(id)arg1 error:(id*)arg2 ;
-(id)familyCircleReturningError:(id*)arg1 ;
-(BOOL)fetchGuardianStatus:(BOOL*)arg1 family:(id)arg2 account:(id)arg3 error:(id*)arg4 ;
-(id)nonParentsInFamily:(id)arg1 error:(id*)arg2 ;
-(id)familyMembersPromise;
-(id)cardDAVAccounts;
-(id)appleIDsOfExistingDelegates:(id)arg1 ;
-(void)setAccountsType:(ACAccountType *)arg1 ;
@end

