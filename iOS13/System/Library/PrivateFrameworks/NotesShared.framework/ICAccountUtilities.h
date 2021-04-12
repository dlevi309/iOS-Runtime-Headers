/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class ACAccount, ACAccountStore, NSDictionary;

@interface ICAccountUtilities : NSObject {

	BOOL _primaryICloudACAccountValid;
	ACAccount* _primaryICloudACAccount;
	ACAccountStore* _accountStore;
	NSDictionary* _currentICloudAccountState;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                                                      //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,copy) NSDictionary * currentICloudAccountState;                                             //@synthesize currentICloudAccountState=_currentICloudAccountState - In the implementation block
@property (assign,getter=isPrimaryICloudACAccountValid,nonatomic) BOOL primaryICloudACAccountValid;              //@synthesize primaryICloudACAccountValid=_primaryICloudACAccountValid - In the implementation block
@property (readonly) ACAccount * primaryICloudACAccount;                                                         //@synthesize primaryICloudACAccount=_primaryICloudACAccount - In the implementation block
@property (nonatomic,readonly) BOOL primaryICloudAccountEnabled; 
@property (nonatomic,readonly) BOOL didChooseToMigratePrimaryICloudAccount; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(id)initForObservingAccountStoreChanges:(BOOL)arg1 ;
-(void)accountStoreDidChange:(id)arg1 ;
-(void)internalInvalidatePrimaryICloudACAccount;
-(ACAccount *)primaryICloudACAccount;
-(void)invalidatePrimaryICloudACAccount;
-(BOOL)primaryICloudAccountEnabled;
-(void)performBlockInPersonaContextIfNecessary:(/*^block*/id)arg1 forAccountIdentifier:(id)arg2 ;
-(id)allICloudACAccounts;
-(id)applicationDocumentsURLForAccountIdentifier:(id)arg1 ;
-(BOOL)didChooseToMigratePrimaryICloudAccount;
-(id)iCloudACAccountWithIdentifier:(id)arg1 ;
-(id)temporaryDirectoryURLForAccountIdentifier:(id)arg1 ;
-(void)setPrimaryICloudACAccountValid:(BOOL)arg1 ;
-(void)setCurrentICloudAccountState:(NSDictionary *)arg1 ;
-(BOOL)isPrimaryICloudACAccountValid;
-(void)updateICloudACAccountFromStore;
-(NSDictionary *)currentICloudAccountState;
@end

