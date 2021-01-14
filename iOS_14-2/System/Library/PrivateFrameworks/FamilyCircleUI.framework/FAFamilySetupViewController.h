/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <AppleAccountUI/AAUIBleachedNavigationController.h>
#import <libobjc.A.dylib/FAFamilySetupPageDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class ACAccount, ACAccountStore, AAGrandSlamSigner, AAUIRemoteUIController, NSMutableURLRequest, UIActivityIndicatorView, NSArray, UINavigationItem, NSString;

@interface FAFamilySetupViewController : AAUIBleachedNavigationController <FAFamilySetupPageDelegate, RemoteUIControllerDelegate> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	AAGrandSlamSigner* _grandSlamSigner;
	AAUIRemoteUIController* _remoteUIController;
	NSMutableURLRequest* _startRemoteUIRequest;
	NSMutableURLRequest* _currentRemoteUIRequest;
	long long _spinnerCount;
	UIActivityIndicatorView* _spinnerView;
	NSArray* _originalRightBarButtonItems;
	UINavigationItem* _navigationItemShowingSpinner;

}

@property (assign,nonatomic,__weak) id<FASetupDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(void)dealloc;
-(BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
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

