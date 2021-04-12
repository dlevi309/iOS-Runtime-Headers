/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <AppleAccountUI/AAUIBleachedNavigationController.h>
#import <libobjc.A.dylib/FAConfirmIdentityViewControllerDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class ACAccount, ACAccountStore, AAGrandSlamSigner, AAFamilyInvite, AAUIRemoteUIController, NSOperationQueue, NSMutableURLRequest, NSString;

@interface FAFamilyInvitationAcceptanceViewController : AAUIBleachedNavigationController <FAConfirmIdentityViewControllerDelegate, RemoteUIControllerDelegate> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	AAGrandSlamSigner* _grandSlamSigner;
	AAFamilyInvite* _invite;
	AAUIRemoteUIController* _remoteUIController;
	NSOperationQueue* _inviteOperationQueue;
	NSMutableURLRequest* _startRemoteUIRequest;
	NSMutableURLRequest* _currentRemoteUIRequest;

}

@property (assign,nonatomic,__weak) id<FAInvitationAcceptanceDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2 ;
-(id)_createCancelButton;
-(void)_sendUserToiTunesSettings;
-(void)confirmIdentityViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 ;
-(void)_loadiTunesLinkingRemoteUI;
-(void)_showErrorAlert;
-(id)initWithInvite:(id)arg1 appleAccount:(id)arg2 grandSlamSigner:(id)arg3 ;
@end

