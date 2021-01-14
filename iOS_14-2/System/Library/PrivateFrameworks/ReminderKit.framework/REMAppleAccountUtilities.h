/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class ACAccount, ACAccountStore;

@interface REMAppleAccountUtilities : NSObject {

	BOOL _primaryICloudACAccountIsValid;
	ACAccount* _primaryICloudACAccount;
	ACAccountStore* _accountStore;
	ACAccount* __debug_primaryICloudACAccount;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                          //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) BOOL primaryICloudACAccountIsValid;                     //@synthesize primaryICloudACAccountIsValid=_primaryICloudACAccountIsValid - In the implementation block
@property (nonatomic,retain) ACAccount * _debug_primaryICloudACAccount;              //@synthesize _debug_primaryICloudACAccount=__debug_primaryICloudACAccount - In the implementation block
@property (readonly) ACAccount * primaryICloudACAccount;                             //@synthesize primaryICloudACAccount=_primaryICloudACAccount - In the implementation block
@property (readonly) BOOL primaryICloudAccountEnabled; 
+(id)sharedInstance;
+(id)accountDescriptionWithACAccount:(id)arg1 ;
+(id)getAppleIDSession;
-(ACAccount *)_debug_primaryICloudACAccount;
-(id)init;
-(id)initForObservingAccountStoreChanges:(BOOL)arg1 ;
-(void)_setPrimaryICloudACAccount:(id)arg1 ;
-(void)accountStoreDidChange:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(void)invalidatePrimaryICloudACAccount;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(id)allICloudAccountsWithCloudKitEnabled;
-(void)_unsetMigrationFlagsWithACAccount:(id)arg1 inStore:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)accessQueue;
-(ACAccount *)primaryICloudACAccount;
-(id)primaryICloudAccountCalDavService;
-(BOOL)primaryICloudACAccountIsValid;
-(BOOL)primaryICloudAccountEnabled;
-(void)internalInvalidatePrimaryICloudACAccount;
-(void)setPrimaryICloudACAccountIsValid:(BOOL)arg1 ;
-(void)set_debug_primaryICloudACAccount:(ACAccount *)arg1 ;
-(void)dealloc;
-(void)saveDidChooseToMigrate:(BOOL)arg1 didFinishMigration:(BOOL)arg2 toACAccount:(id)arg3 inStore:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

