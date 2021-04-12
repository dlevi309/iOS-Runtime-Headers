/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupHideSetupLaterButtonProtocol.h>
#import <libobjc.A.dylib/PKPaymentProvisioningControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, NSMutableArray, PKPaymentCredentialCache, NSMutableOrderedSet, NSMutableDictionary, PKTableHeaderView, PKPaymentSetupFooterView, UIImage, PKPaymentCredentialTableViewCell, PKPaymentSetupFlowController, PKPaymentSetupProduct, NSString;

@interface PKPaymentCredentialsViewController : PKPaymentSetupTableViewController <PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentProvisioningControllerDelegate, PKPaymentSetupPresentationProtocol> {

	PKPaymentProvisioningController* _provisioningController;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	NSMutableArray* _credentialCaches;
	PKPaymentCredentialCache* _peerPaymentCredentialCache;
	NSMutableArray* _refundedCredentialCaches;
	NSMutableArray* _unavailableCredentialCaches;
	NSMutableOrderedSet* _ordering;
	NSMutableDictionary* _paymentCredentialToCredentialSectionMap;
	PKTableHeaderView* _tableHeader;
	PKPaymentSetupFooterView* _tableFooter;
	BOOL _allowsManualEntry;
	UIImage* _placeHolder;
	PKPaymentCredentialTableViewCell* _sizingCell;
	unsigned long long _maximumNumberOfSelectableCredentials;
	double _cachedHeaderViewWidth;
	PKPaymentSetupFlowController* _flowController;
	BOOL _hideSetupLaterButton;
	PKPaymentSetupProduct* _product;
	NSString* _lastBackedUpDefaultPaymentPassSerialNumber;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;                                  //@synthesize product=_product - In the implementation block
@property (assign,nonatomic) BOOL hideSetupLaterButton;                                        //@synthesize hideSetupLaterButton=_hideSetupLaterButton - In the implementation block
@property (nonatomic,copy) NSString * lastBackedUpDefaultPaymentPassSerialNumber;              //@synthesize lastBackedUpDefaultPaymentPassSerialNumber=_lastBackedUpDefaultPaymentPassSerialNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(void)paymentPassUpdatedOnCredential:(id)arg1 ;
-(void)_terminateSetupFlow;
-(BOOL)hideSetupLaterButton;
-(void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHideSetupLaterButton:(BOOL)arg1 ;
-(id)paymentSetupMarker;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 credentials:(id)arg4 allowsManualEntry:(BOOL)arg5 ;
-(void)_continue;
-(void)_populateOrderCredentialCaches;
-(void)_sortCredentialCaches:(id)arg1 ;
-(void)_presentManualAddController;
-(void)_setupLaterTapped;
-(void)_updateRemoteCredentialCache;
-(void)_updateMaximumSelectableCredentials;
-(void)_updateTableHeaderViewSubtitle;
-(BOOL)_canSelectCredential:(id)arg1 ;
-(void)_updateForSelectionCount;
-(unsigned long long)_credentialSectionForSection:(long long)arg1 ;
-(void)_configureCell:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3 sizing:(BOOL)arg4 ;
-(void)_setPassSnapshotOnCell:(id)arg1 cell:(id)arg2 ;
-(long long)_sectionForCredentialSection:(unsigned long long)arg1 ;
-(void)_showRefund:(id)arg1 ;
-(void)_showUnavailableDetail:(id)arg1 ;
-(void)_startProvisioningForCredentials:(id)arg1 ;
-(unsigned long long)_numberOfSelectedCredentials;
-(void)_setUserInteractionEnabled:(BOOL)arg1 ;
-(void)performSecurityCheckForCredentials:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startProvisioningForSelectedCards;
-(void)_presentAccountAlertIfNotSelectedWithContinueHandler:(/*^block*/id)arg1 setupLaterHandler:(/*^block*/id)arg2 ;
-(id)_credentialCacheRequiringAlert;
-(void)_presentAlertForCredentialCache:(id)arg1 continueHandler:(/*^block*/id)arg2 setupLaterHandler:(/*^block*/id)arg3 ;
-(unsigned long long)_credentialSectionForPaymentCredential:(id)arg1 ;
-(void)_queue_updatePassSnapshot:(id)arg1 paymentCredential:(id)arg2 credentialSection:(unsigned long long)arg3 credentialsInCache:(id)arg4 ;
-(void)_presentSecurityCapabilitiesFlowWithFeature:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)lastBackedUpDefaultPaymentPassSerialNumber;
-(void)setLastBackedUpDefaultPaymentPassSerialNumber:(NSString *)arg1 ;
@end

