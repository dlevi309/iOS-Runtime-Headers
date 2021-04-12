/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <AccountsUI/ACUIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <libobjc.A.dylib/FASharedSubscriptionSpecifierProviderDelegeate.h>

@protocol FAFamilySettingsViewControllerDelegate;
@class AAGrandSlamSigner, ACAccount, SSAccount, ACAccountStore, AAFamilyDetailsResponse, NSOperationQueue, PSSpecifier, AAUIProfilePictureStore, CNMonogrammer, AAUIRemoteUIController, FACircleRemoteUIDelegate, UITableViewCell, NSURL, AAFamilyMember, NSMutableDictionary, FAChildAccountCreationController, UINavigationController, NSObject, FAFamilyNotificationObserver, FAFamilyCreditCard, NSArray, NSMutableURLRequest, FARequestConfigurator, AAUIServerUIHookHandler, FASharedSubscriptionSpecifierProvider, NSString;

@interface FAFamilySettingsViewController : ACUIViewController <UINavigationControllerDelegate, RemoteUIControllerDelegate, FASharedSubscriptionSpecifierProviderDelegeate> {

	AAGrandSlamSigner* _iCloudGrandSlamSigner;
	AAGrandSlamSigner* _appleIDGrandSlamSigner;
	ACAccount* _appleAccount;
	ACAccount* _grandSlamAccount;
	SSAccount* _itunesAccount;
	ACAccountStore* _accountStore;
	AAFamilyDetailsResponse* _familyDetailsResponse;
	NSOperationQueue* _networkingQueue;
	PSSpecifier* _familyMembersGroup;
	PSSpecifier* _addFamilyMemberCell;
	AAUIProfilePictureStore* _profilePictureStore;
	CNMonogrammer* _monogrammer;
	AAUIRemoteUIController* _iCloudRemoteUIController;
	AAUIRemoteUIController* _appleIDRemoteUIController;
	AAUIRemoteUIController* _familyV2RemoteUIController;
	FACircleRemoteUIDelegate* _familyRemoteUIDelegate;
	UITableViewCell* _activeCell;
	NSURL* _activeURL;
	AAFamilyMember* _memberBeingViewed;
	NSMutableDictionary* _memberDetailsPageSurrogatesByOM;
	FAChildAccountCreationController* _childAccountCreationController;
	UINavigationController* _childAccountCreationNavController;
	NSObject* _profilePictureStoreDidChangeObserver;
	FAFamilyNotificationObserver* _notificationObserver;
	BOOL _fetchingPaymentInfo;
	FAFamilyCreditCard* _paymentMethod;
	NSArray* _paymentInfoSpecifiers;
	BOOL _fetchingPaymentMethodImage;
	NSMutableURLRequest* _currentRemoteUIRequest;
	FARequestConfigurator* _requestConfigurator;
	AAUIServerUIHookHandler* _serverUIHookHandler;
	FACircleRemoteUIDelegate* _faCircleRemoteUIDelegate;
	FASharedSubscriptionSpecifierProvider* _sharedSubscriptionSpecifierProvider;
	id<FAFamilySettingsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FAFamilySettingsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<FAFamilySettingsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<FAFamilySettingsViewControllerDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(id)specifiers;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(id)remoteUIController:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2 ;
-(id)_requestConfigurator;
-(id)_sharedSubscriptionSpecifierProvider;
-(void)_fetchUpdatedFamilyDetailsWithCompletion:(/*^block*/id)arg1 ;
-(id)_createSpecifierForFamilyMemberGroup;
-(id)_createSpecifierForFamilyMemberCell:(id)arg1 ;
-(id)_createSpecifierForPendingMember:(id)arg1 ;
-(void)_addFamilyMemberButtonWasTapped:(id)arg1 ;
-(id)_sharedSubscriptionSpecifiers;
-(id)_createSpecifiersForPaymentInfo;
-(void)_familyMemberCellWasTapped:(id)arg1 ;
-(void)_pendingFamilyMemberCellWasTapped:(id)arg1 ;
-(void)_reloadPaymentInfoSpecifiersAnimated:(BOOL)arg1 ;
-(BOOL)_hasActiveCell;
-(void)_loadRemoteUIWithRequest:(id)arg1 url:(id)arg2 specifier:(id)arg3 type:(long long)arg4 ;
-(void)_loadRemoteUIWithRequest:(id)arg1 specifier:(id)arg2 type:(long long)arg3 ;
-(void)_startSpinnerInCellLoadingRemoteUI:(id)arg1 ;
-(void)_setFresnoRemoteUIDelgate:(id)arg1 ;
-(void)_stopSpinnerInCellLoadingRemoteUI;
-(void)_addMemberWithEventType:(id)arg1 ;
-(void)_performEventWithContext:(id)arg1 specifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_appleIDGrandSlamSigner;
-(id)_itunesAccount;
-(void)_showConnectivityAlert;
-(void)_handleFamilyStatusChange:(id)arg1 ;
-(void)_handleFamilySubscriptionChanged;
-(void)_updateMemberDetailsPageWithLinkedAppleID:(id)arg1 ;
-(void)_handleFamilyDeletion;
-(void)_handleMemberDeletion:(id)arg1 ;
-(void)_handleMemberUpdate:(id)arg1 ;
-(void)_fireFamilyUpdateNotification;
-(void)_fetchFamilyPaymentInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)reloadSpecifiersForProvider:(id)arg1 oldSpecifiers:(id)arg2 animated:(BOOL)arg3 ;
-(void)didSelectSpecifier:(id)arg1 ;
-(id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2 familyDetailsResponse:(id)arg3 ;
-(id)_imageFromBundle:(id)arg1 ;
-(void)_learnMoreLinkButtonWasTapped:(id)arg1 ;
-(void)_paymentMethodCellWasTapped:(id)arg1 ;
@end

