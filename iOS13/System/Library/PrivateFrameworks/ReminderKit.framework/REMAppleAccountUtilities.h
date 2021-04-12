/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class ACAccount, ACAccountStore;

@interface REMAppleAccountUtilities : NSObject {

	BOOL _primaryICloudACAccountIsValid;
	ACAccount* _primaryICloudACAccount;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                   //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) BOOL primaryICloudACAccountIsValid;              //@synthesize primaryICloudACAccountIsValid=_primaryICloudACAccountIsValid - In the implementation block
@property (readonly) ACAccount * primaryICloudACAccount;                      //@synthesize primaryICloudACAccount=_primaryICloudACAccount - In the implementation block
@property (readonly) BOOL primaryICloudAccountEnabled; 
+(id)sharedInstance;
+(id)getAppleIDSession;
+(id)accountDescriptionWithACAccount:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)accessQueue;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(id)initForObservingAccountStoreChanges:(BOOL)arg1 ;
-(void)accountStoreDidChange:(id)arg1 ;
-(BOOL)primaryICloudACAccountIsValid;
-(void)setPrimaryICloudACAccountIsValid:(BOOL)arg1 ;
-(void)internalInvalidatePrimaryICloudACAccount;
-(ACAccount *)primaryICloudACAccount;
-(id)allICloudAccountsWithCloudKitEnabled;
-(void)invalidatePrimaryICloudACAccount;
-(void)saveDidChooseToMigrate:(BOOL)arg1 didFinishMigration:(BOOL)arg2 toACAccount:(id)arg3 inStore:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)primaryICloudAccountEnabled;
-(id)primaryICloudAccountCalDavService;
@end

