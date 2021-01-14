/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/SBSHardwareButtonEventConsuming.h>

@protocol BSInvalidatable, OS_dispatch_group;
@class PKPassGroupsViewController, PKPaymentService, PKFieldProperties, NSArray, NSString, CLInUseAssertion, SBSAssertion, PKAssertion, NSObject;

@interface PKPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentServiceDelegate, SBSHardwareButtonEventConsuming> {

	PKPassGroupsViewController* _passGroupsViewController;
	id _staticGlyphResources;
	PKPaymentService* _paymentService;
	PKFieldProperties* _fieldProperties;
	NSArray* _fieldPassUniqueIdentifiers;
	NSString* _passUniqueIdentifier;
	CLInUseAssertion* _passbookForegroundAssertion;
	id<BSInvalidatable> _lockButtonObserver;
	SBSAssertion* _lockButtonAssertion;
	PKAssertion* _notificationSuppressionAssertion;
	NSObject*<OS_dispatch_group> _fieldPropertiesLookupGroup;
	long long _presentationSource;
	unsigned long long _presentationStartTime;
	BOOL _backlightActive;
	BOOL _deviceUILocked;
	BOOL _processHomeButtonEvents;
	BOOL _brightnessRampingAllowed;
	BOOL _appearedOnce;
	BOOL _insertedGroupsVC;
	BOOL _shouldInsertGroupsVC;
	long long _invalidationStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecureForRemoteViewService;
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)groupsControllerWithSource:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_invalidate;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_contactlessInterfaceSessionDidAuthorize:(id)arg1 ;
-(void)_contactlessInterfaceSessionFinishTransaction:(id)arg1 ;
-(void)_appearIfNecessary;
-(void)_dismissIfRestricted;
-(unsigned long long)supportedInterfaceOrientations;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)shouldAutorotate;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg1 ;
-(void)openApplication:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)handleButtonActions:(id)arg1 ;
-(void)_insertGroupController;
-(void)_presentHomeButtonDoubleTapAlertIfNecessary;
-(void)_presentPassAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_setupGroupController;
-(void)_dismissForSource:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_notificationIsFromChildViewController:(id)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didInvalidateForRemoteAlert;
-(void)loadView;
-(void)consumeDoublePressUpForButtonKind:(long long)arg1 ;
-(void)_invalidateForType:(long long)arg1 ;
-(void)dealloc;
@end

