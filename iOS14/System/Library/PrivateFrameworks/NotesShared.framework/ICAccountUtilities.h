/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/ICStateHandlerProvider.h>

@class ACAccount, ACAccountStore, NSDictionary, NSMutableDictionary, NSString;

@interface ICAccountUtilities : NSObject <ICStateHandlerProvider> {

	BOOL _primaryICloudACAccountValid;
	ACAccount* _primaryICloudACAccount;
	ACAccountStore* _accountStore;
	NSDictionary* _currentICloudAccountState;
	NSMutableDictionary* _accountIsManagedByIdentifier;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                                                      //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,copy) NSDictionary * currentICloudAccountState;                                             //@synthesize currentICloudAccountState=_currentICloudAccountState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountIsManagedByIdentifier;                                 //@synthesize accountIsManagedByIdentifier=_accountIsManagedByIdentifier - In the implementation block
@property (assign,getter=isPrimaryICloudACAccountValid,nonatomic) BOOL primaryICloudACAccountValid;              //@synthesize primaryICloudACAccountValid=_primaryICloudACAccountValid - In the implementation block
@property (readonly) ACAccount * primaryICloudACAccount;                                                         //@synthesize primaryICloudACAccount=_primaryICloudACAccount - In the implementation block
@property (nonatomic,readonly) BOOL primaryICloudAccountEnabled; 
@property (nonatomic,readonly) BOOL didChooseToMigratePrimaryICloudAccount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)registerStateHandler;
-(id)init;
-(id)initForObservingAccountStoreChanges:(BOOL)arg1 ;
-(void)accountStoreDidChange:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(void)setPrimaryICloudACAccountValid:(BOOL)arg1 ;
-(void)setCurrentICloudAccountState:(NSDictionary *)arg1 ;
-(NSDictionary *)currentICloudAccountState;
-(BOOL)isPrimaryICloudACAccountValid;
-(void)updateICloudACAccountFromStore;
-(NSMutableDictionary *)accountIsManagedByIdentifier;
-(void)createDirectoryIfNecessaryUsingURL:(id)arg1 ;
-(void)setAccountIsManagedByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)invalidatePrimaryICloudACAccount;
-(void)performBlockInPersonaContextIfNecessary:(/*^block*/id)arg1 forAccountIdentifier:(id)arg2 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(BOOL)didChooseToMigratePrimaryICloudAccount;
-(id)iCloudACAccountWithIdentifier:(id)arg1 ;
-(ACAccount *)primaryICloudACAccount;
-(id)allICloudACAccounts;
-(BOOL)isManagedACAccountWithIdentifer:(id)arg1 ;
-(id)applicationDocumentsURLForAccountIdentifier:(id)arg1 ;
-(BOOL)primaryICloudAccountEnabled;
-(void)internalInvalidatePrimaryICloudACAccount;
-(void)dealloc;
-(id)temporaryDirectoryURLForAccountIdentifier:(id)arg1 ;
@end

