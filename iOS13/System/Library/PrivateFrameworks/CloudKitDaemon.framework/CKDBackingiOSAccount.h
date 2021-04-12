/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDBackingAccount.h>

@class ACAccountStore, ACAccount;

@interface CKDBackingiOSAccount : CKDBackingAccount {

	ACAccountStore* _accountStore;
	ACAccount* _parentAppleAccount;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) ACAccount * ckAccount; 
@property (nonatomic,retain) ACAccount * parentAppleAccount;               //@synthesize parentAppleAccount=_parentAppleAccount - In the implementation block
+(id)primaryAccountInStore:(id)arg1 ;
+(id)accountWithIdentifier:(id)arg1 inStore:(id)arg2 ;
+(void)determineCloudKitInfoFromEmail:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)identifier;
-(id)dsid;
-(id)fullName;
-(id)username;
-(ACAccountStore *)accountStore;
-(id)displayedHostname;
-(id)primaryEmail;
-(BOOL)isDataclassEnabled:(id)arg1 ;
-(BOOL)isPrimaryEmailVerified;
-(BOOL)iCloudDriveAllowsCellularAccess;
-(id)accountPropertiesForDataclass:(id)arg1 ;
-(void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canRenew;
-(id)cloudKitAuthTokenWithError:(id*)arg1 ;
-(id)iCloudAuthTokenWithError:(id*)arg1 ;
-(ACAccount *)ckAccount;
-(ACAccount *)parentAppleAccount;
-(id)_initWithParentAccount:(id)arg1 inStore:(id)arg2 ;
-(id)_accountCredentialForAccount:(id)arg1 withError:(id*)arg2 ;
-(void)setParentAppleAccount:(ACAccount *)arg1 ;
@end

