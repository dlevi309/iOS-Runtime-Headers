/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class ACAccountStore;

@interface AADataclassManager : NSObject {

	ACAccountStore* _store;

}
+(id)appBundleIdentifierDictionary;
+(id)sharedManager;
-(BOOL)shouldProvisionDataclass:(id)arg1 forAccount:(id)arg2 ;
-(id)whitelistedDataclassesForAppleAccountClassBasic;
-(id)whitelistedDataclassesForAppleAccountClassFull;
-(BOOL)_isRestrictedForDataclass:(id)arg1 ;
-(id)_userVisibleDataclasses;
-(id)appBundleIdentifierForDataclass:(id)arg1 ;
-(BOOL)_hideDataclassWhenAppRemoved:(id)arg1 ;
-(id)_nonVisibleServiceDataclass;
-(BOOL)isSystemAppRestrictedOrRemovedForDataclass:(id)arg1 ;
-(id)_filteredDataclassesForAccountClass:(id)arg1 ;
-(BOOL)_shouldProvisionNotesForAccount:(id)arg1 ;
-(id)filterDataclassesForPossibleAutoEnablementForAccount:(id)arg1 ;
-(void)enableDataclassesWithoutLocalDataDataclassActionsForDataclasses:(id)arg1 fromAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)buildAutoEnableableDataclassesAndActionsForAccount:(id)arg1 dataclassesForEnablement:(id)arg2 ;
-(id)init;
-(BOOL)isDataclassActionSafeForAutoEnablement:(id)arg1 ;
-(BOOL)canAutoEnableDataclass:(id)arg1 forAccount:(id)arg2 ;
-(id)blackListedMacOSDataclasses;
-(id)filteredServerProvidedFeatures:(id)arg1 forAccount:(id)arg2 ;
-(void)enableDataclassesWithoutLocalDataDataclassActionsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithAccountStore:(id)arg1 ;
@end

