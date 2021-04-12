/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
*/

#import <AccountSettings/AccountFullAccountProtocol.h>

@protocol AccountFullAccountProtocol, AccountRefreshProtocol;
@class NSDictionary, NSMutableDictionary, NSString;

@interface BasicAccount : NSObject <AccountFullAccountProtocol> {

	NSDictionary* _originalProperties;
	NSMutableDictionary* _properties;
	id<AccountFullAccountProtocol> _fullAccount;
	id<AccountRefreshProtocol> _syncAccount;
	BasicAccount* _parentAccount;

}

@property (nonatomic,retain) NSDictionary * originalProperties;              //@synthesize originalProperties=_originalProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)supportedDataclassesForAccountType:(id)arg1 ;
+(id)accountWithProperties:(id)arg1 ;
+(BOOL)isMultitaskingEnabled;
+(BOOL)multipleStoresSupportedByDataclass:(id)arg1 ;
+(id)removeActionsIncompatibleWithSingleStoreDataclass:(id)arg1 ;
+(BOOL)_isValidAccountType:(id)arg1 ;
+(id)createNewAccountUID;
+(id)accountWithType:(id)arg1 class:(id)arg2 ;
+(id)allSupportedDataclasses;
+(id)userActionsToEnableDataclass:(id)arg1 forAccountType:(id)arg2 ;
+(id)userActionsToDisableDataclass:(id)arg1 forAccountType:(id)arg2 ;
+(id)deleteAccountActionsForAccountType:(id)arg1 ;
+(BOOL)showRemindersSeparatelyForAccountType:(id)arg1 ;
+(BOOL)displayToggleForDataclass:(id)arg1 ;
+(BOOL)userConfirmationIsRequiredByDataclass:(id)arg1 ;
+(id)_creatorsInfo;
+(id)_dataclassesProperties;
+(id)_accountCreationMap;
-(id)init;
-(void)dealloc;
-(id)type;
-(id)identifier;
-(id)displayName;
-(id)properties;
-(void)setDisplayName:(id)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(id)parentAccount;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(id)enabledDataclasses;
-(id)typeString;
-(void)setParentAccount:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(id)provisionedDataclasses;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(id)parentAccountIdentifier;
-(id)supportedDataclasses;
-(id)syncStoreIdentifier;
-(void)removeAccountPropertyForKey:(id)arg1 ;
-(id)accountClass;
-(id)_initWithType:(id)arg1 class:(id)arg2 ;
-(void)setOriginalProperties:(NSDictionary *)arg1 ;
-(void)_forcedSetAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(id)_orderedDataclasses:(id)arg1 ;
-(id)_profileRestrictedDataclasses;
-(id)fullAccountCreatorClassNameForAccountType:(id)arg1 loader:(id)arg2 ;
-(void)setFullAccount:(id)arg1 ;
-(id)_cachedSyncAccount;
-(BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)refreshContainerListForDataclass:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(BOOL)refreshContainersForDataclass:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(void)renewAccountCredentialsWithHandler:(/*^block*/id)arg1 ;
-(id)propertiesToSave;
-(void)setAccountClass:(id)arg1 ;
-(id)shortTypeString;
-(void)setEnabledForDataclasses:(id)arg1 ;
-(id)fullAccountUsingLoader:(id)arg1 ;
-(BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 ;
-(BOOL)refreshContainerListForDataclass:(id)arg1 ;
-(BOOL)refreshContainersForDataclass:(id)arg1 ;
-(NSDictionary *)originalProperties;
-(id)syncAccountCreatorClassNameForAccountType:(id)arg1 ;
-(id)_creatorClassNameForAccountType:(id)arg1 creatorType:(id)arg2 loader:(id)arg3 ;
-(void)_forcedSetEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
@end

