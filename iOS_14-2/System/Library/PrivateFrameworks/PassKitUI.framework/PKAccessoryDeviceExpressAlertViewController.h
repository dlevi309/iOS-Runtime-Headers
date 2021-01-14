/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <libobjc.A.dylib/SBSHardwareButtonEventConsuming.h>
#import <libobjc.A.dylib/PKAccessoryDeviceMonitorDelegate.h>

@protocol BSInvalidatable;
@class NSString, SBSAssertion, PKAssertion, CLInUseAssertion, NSMutableDictionary, PKAccessoryDeviceView, PKAccessoryDevice, PKAccessoryDeviceMonitor, PKFieldProperties, NSArray;

@interface PKAccessoryDeviceExpressAlertViewController : SBUIRemoteAlertServiceViewController <SBSHardwareButtonEventConsuming, PKAccessoryDeviceMonitorDelegate> {

	BOOL _deviceUILocked;
	long long _presentationSource;
	NSString* _passUniqueIdentifier;
	id _staticGlyphResources;
	id<BSInvalidatable> _lockButtonObserver;
	SBSAssertion* _lockButtonAssertion;
	PKAssertion* _notificationSuppressionAssertion;
	BOOL _brightnessRampingAllowed;
	BOOL _backlightActive;
	BOOL _processHomeButtonEvents;
	CLInUseAssertion* _passbookForegroundAssertion;
	BOOL _appeared;
	NSMutableDictionary* _registeredExpressObservers;
	BOOL _hasMultiple;
	long long _accessoryDeviceViewState;
	BOOL _presentedOnView;
	PKAccessoryDeviceView* _accessoryDeviceView;
	PKAccessoryDevice* _accessoryDevice;
	PKAccessoryDeviceMonitor* _accessoryDeviceMonitor;
	CGRect _windowedAccessoryCutoutFrameInScreen;
	PKFieldProperties* _fieldProperties;
	NSArray* _fieldPassUniqueIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecureForRemoteViewService;
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_invalidate;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_contactlessInterfaceSessionDidAuthorize:(id)arg1 ;
-(void)_contactlessInterfaceSessionFinishTransaction:(id)arg1 ;
-(void)_appearIfNecessary;
-(void)_dismissIfRestricted;
-(void)_handleExpressNotification:(id)arg1 ;
-(id)_expressNotificationNames;
-(void)_registerObserverForNotificationName:(id)arg1 center:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_changeStateIfNecessaryTo:(long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)_dismiss;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)shouldAutorotate;
-(BOOL)_canShowWhileLocked;
-(void)didAttachSleeveAccessory:(id)arg1 ;
-(void)didDetachSleeveAccessory;
-(void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)handleButtonActions:(id)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didInvalidateForRemoteAlert;
-(void)didTransitionToAttachedToWindowedAccessory:(BOOL)arg1 windowedAccessoryCutoutFrameInScreen:(CGRect)arg2 ;
-(void)loadView;
-(void)_registerForExpressTransactionNotifications:(BOOL)arg1 ;
-(void)dealloc;
@end

