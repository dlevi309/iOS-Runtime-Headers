/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@interface AppStoreKit.AccountPresenter : _UKNOWN_SUPERCLASS_ {

	 appStateController;
	 restrictions;
	 storeAccountStore;
	 iCloudAccountStore;
	 iapStateProvider;
	 updatesPresenter;
	 activeStoreAccount;
	 hasManagedAppleID;
	 canSetupFamilySharing;
	 arcadeSubscriptionManager;
	 hasSubscriptions;
	 profilePictureDiameter;
	 view;
	 profilePicture;
	 authenticating;
	 accountNameInputValue;
	 passwordInputValue;
	 isMonetaryGiftingEnabled;
	 hasPrimaryiCloudAccount;
	 sections;
	 $__lazy_storage_$_notificationsAccountSectionLink;
	 $__lazy_storage_$_setupFamilySharingSectionLink;

}
-(void)restrictionsDidChange:(id)arg1 ;
-(void)profilePictureStoreDidChange;
-(void)storeAccountsDidChange;
-(void)iCloudAccountsDidChange;
-(void)familyInfoDidChange;
@end

