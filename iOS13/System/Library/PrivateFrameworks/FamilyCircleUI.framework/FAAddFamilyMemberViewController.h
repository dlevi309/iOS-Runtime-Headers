/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <libobjc.A.dylib/FAPickInviteeDelegate.h>

@class ACAccount, ACAccountStore, SSAccount, AAGrandSlamSigner, NSOperationQueue, AAUIRemoteUIController, RUIObjectModel, NSMutableURLRequest, UIActivityIndicatorView, UIBarButtonItem, UINavigationItem, NSData, FAFamilyPickInviteeViewController, FARequestConfigurator, NSString;

@interface FAAddFamilyMemberViewController : UINavigationController <RemoteUIControllerDelegate, FAPickInviteeDelegate> {

	ACAccount* _appleAccount;
	ACAccountStore* _accountStore;
	SSAccount* _iTunesAccount;
	AAGrandSlamSigner* _grandSlamSigner;
	NSOperationQueue* _networkingQueue;
	AAUIRemoteUIController* _remoteUIController;
	RUIObjectModel* _lastObjectModel;
	NSMutableURLRequest* _startRemoteUIRequest;
	BOOL _isShowingSpinner;
	UIActivityIndicatorView* _spinnerView;
	UIBarButtonItem* _originalRightBarButtonItem;
	UINavigationItem* _navigationItemShowingSpinner;
	NSData* _pushToken;
	FAFamilyPickInviteeViewController* _pickInviteeVC;
	FARequestConfigurator* _requestConfigurator;
	NSString* _continuationData;

}

@property (assign,nonatomic,__weak) id<FAAddFamilyMemberDelegate><UINavigationControllerDelegate> delegate; 
@property (nonatomic,copy) NSString * continuationData;                                                                  //@synthesize continuationData=_continuationData - In the implementation block
@property (nonatomic,copy) NSString * addFamilyMemberInstructions; 
@property (nonatomic,copy) NSString * createChildAccountButtonTitle; 
@property (nonatomic,copy) NSString * createChildAccountInstructions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)shouldAutorotate;
-(void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(void)harvestDataFromServerHTTPResponse:(id)arg1 ;
-(id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2 ;
-(id)_requestConfigurator;
-(id)_itunesAccount;
-(void)pickInviteeViewControllerWantsChildAccountFlow:(id)arg1 ;
-(void)pickInviteeViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 ;
-(NSString *)addFamilyMemberInstructions;
-(void)setAddFamilyMemberInstructions:(NSString *)arg1 ;
-(NSString *)createChildAccountButtonTitle;
-(void)setCreateChildAccountButtonTitle:(NSString *)arg1 ;
-(NSString *)createChildAccountInstructions;
-(void)setCreateChildAccountInstructions:(NSString *)arg1 ;
-(NSString *)continuationData;
-(void)setContinuationData:(NSString *)arg1 ;
-(void)showActivitySpinnerInNavigationBar;
-(void)hideActivitySpinnerInNavigationBar;
-(void)_startRemoteUIRequest:(id)arg1 ;
@end

