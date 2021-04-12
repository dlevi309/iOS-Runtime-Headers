/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	 hasSubscriptions;
	 profilePictureDiameter;
	 view;
	 profilePicture;
	 authenticating;
	 accountNameInputValue;
	 passwordInputValue;
	 iForgotUrl;
	 isMonetaryGiftingEnabled;
	??? accountTopUpURL;
	??? manageSubscriptionsURL;
	 hasPrimaryiCloudAccount;
	??? updateAllIndexPath;
	 sections;
	 $__lazy_storage_$_notificationsAccountSectionLink;

}
-(void)restrictionsDidChange:(id)arg1 ;
-(void)profilePictureStoreDidChange;
-(void)storeAccountsDidChange;
-(void)iCloudAccountsDidChange;
@end

