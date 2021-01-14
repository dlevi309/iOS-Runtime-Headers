/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <libobjc.A.dylib/RUILoaderDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@protocol AAUIGenericTermsRemoteUIDelegate;
@class UINavigationController, RUILoader, NSMutableArray, ACAccount, ACAccountStore, NSSet, UIViewController, NSString;

@interface AAUIGenericTermsRemoteUI : NSObject <RUILoaderDelegate, RUIObjectModelDelegate> {

	UINavigationController* _parentNavController;
	UINavigationController* _genericTermsUIViewController;
	RUILoader* _loader;
	NSMutableArray* _objectModels;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	NSSet* _termsEntries;
	BOOL _isModal;
	BOOL _isPreferringPassword;
	BOOL _didRenewCredentials;
	id<AAUIGenericTermsRemoteUIDelegate> _delegate;
	UIViewController* _originatingViewController;

}

@property (assign,nonatomic,__weak) id<AAUIGenericTermsRemoteUIDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * originatingViewController;              //@synthesize originatingViewController=_originatingViewController - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                                //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                                      //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id<AAUIGenericTermsRemoteUIDelegate>)delegate;
-(id)initWithAccount:(id)arg1 inStore:(id)arg2 ;
-(void)presentFromViewController:(id)arg1 modal:(BOOL)arg2 ;
-(id)sessionConfigurationForLoader:(id)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(id)viewControllerForAlertPresentation;
-(ACAccountStore *)accountStore;
-(unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)setDelegate:(id<AAUIGenericTermsRemoteUIDelegate>)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(id)initWithAccount:(id)arg1 inStore:(id)arg2 termsEntries:(id)arg3 ;
-(void)_loadRequestPreferringPassword:(BOOL)arg1 ;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)_cleanUpAndDismissWithSuccess:(BOOL)arg1 agreeURL:(id)arg2 ;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
-(void)_cleanupRUILoader;
-(BOOL)_isUnauthorizedError:(id)arg1 ;
-(void)_renewCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(void)_displayConnectionErrorAndDismiss;
-(void)_sendAcceptedTermsInfo:(id)arg1 ;
-(void)_agreeToTermsWithURLString:(id)arg1 preferPassword:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_authContextForRenewCredentials;
-(UIViewController *)originatingViewController;
@end

