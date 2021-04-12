/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class ACAccountStore;

@interface AADataclassManager : NSObject {

	ACAccountStore* _store;

}
+(id)sharedManager;
+(id)appBundleIdentifierDictionary;
-(id)init;
-(id)whitelistedDataclassesForAppleAccountClassBasic;
-(id)whitelistedDataclassesForAppleAccountClassFull;
-(BOOL)shouldProvisionDataclass:(id)arg1 forAccount:(id)arg2 ;
-(BOOL)_isRestrictedForDataclass:(id)arg1 ;
-(id)appBundleIdentifierForDataclass:(id)arg1 ;
-(BOOL)_hideDataclassWhenAppRemoved:(id)arg1 ;
-(id)_userVisibleDataclasses;
-(id)_nonVisibleServiceDataclass;
-(BOOL)_isRunningInStoreDemoMode;
-(BOOL)isSystemAppRestrictedOrRemovedForDataclass:(id)arg1 ;
-(id)_filteredDataclassesForAccountClass:(id)arg1 ;
-(BOOL)_shouldProvisionNotesForAccount:(id)arg1 ;
-(id)filterDataclassesForPossibleAutoEnablementForAccount:(id)arg1 ;
-(void)enableDataclassesWithoutLocalDataDataclassActionsForDataclasses:(id)arg1 fromAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)buildAutoEnableableDataclassesAndActionsForAccount:(id)arg1 dataclassesForEnablement:(id)arg2 ;
-(BOOL)isDataclassActionSafeForAutoEnablement:(id)arg1 ;
-(BOOL)canAutoEnableDataclass:(id)arg1 forAccount:(id)arg2 ;
-(id)blackListedMacOSDataclasses;
-(id)filteredServerProvidedFeatures:(id)arg1 forAccount:(id)arg2 ;
-(void)enableDataclassesWithoutLocalDataDataclassActionsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

