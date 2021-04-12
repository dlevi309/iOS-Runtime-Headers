/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <AppleAccountUI/AAUIBleachedNavigationController.h>
#import <libobjc.A.dylib/FAFamilySetupPageDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class ACAccount, ACAccountStore, AAGrandSlamSigner, RemoteUIController, NSMutableURLRequest, UIActivityIndicatorView, NSArray, UINavigationItem, NSString;

@interface AAUIFamilySetupViewController : AAUIBleachedNavigationController <FAFamilySetupPageDelegate, RemoteUIControllerDelegate> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	AAGrandSlamSigner* _grandSlamSigner;
	RemoteUIController* _remoteUIController;
	NSMutableURLRequest* _startRemoteUIRequest;
	NSMutableURLRequest* _currentRemoteUIRequest;
	BOOL _isShowingSpinner;
	UIActivityIndicatorView* _spinnerView;
	NSArray* _originalRightBarButtonItems;
	UINavigationItem* _navigationItemShowingSpinner;

}

@property (assign,nonatomic,__weak) id<AAUIFamilySetupDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLoad;
-(BOOL)shouldAutorotate;
-(BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(id)initWithAccount:(id)arg1 grandSlamSigner:(id)arg2 familyEligibilityResponse:(id)arg3 ;
-(id)_initWithAccount:(id)arg1 grandSlamSigner:(id)arg2 rootViewController:(id)arg3 ;
-(id)_createCloseButton;
-(BOOL)_isRunningInSettings;
-(id)_urlForLaunchingSettings;
-(void)_loadRemoteUIPages;
-(void)_closeButtonWasTapped:(id)arg1 ;
-(void)familySetupPage:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 ;
-(void)_showActivitySpinnerInNavigationBar;
-(void)_sendUserToiTunesSettings;
-(void)_remoteUIDidCancel;
-(void)_hideActivitySpinnerInNavigationBar;
-(id)initTrimmedFlowWithAccount:(id)arg1 grandSlamSigner:(id)arg2 ;
@end

