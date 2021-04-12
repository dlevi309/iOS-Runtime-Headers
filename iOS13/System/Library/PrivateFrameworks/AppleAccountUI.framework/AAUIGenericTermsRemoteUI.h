/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <libobjc.A.dylib/RUILoaderDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@protocol AAUIGenericTermsRemoteUIDelegate;
@class UINavigationController, UIViewController, RUILoader, NSMutableArray, ACAccount, ACAccountStore, NSString;

@interface AAUIGenericTermsRemoteUI : NSObject <RUILoaderDelegate, RUIObjectModelDelegate> {

	UINavigationController* _parentNavController;
	UIViewController* _originatingViewController;
	UINavigationController* _genericTermsUIViewController;
	RUILoader* _loader;
	NSMutableArray* _objectModels;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	BOOL _isModal;
	BOOL _isPreferringPassword;
	id<AAUIGenericTermsRemoteUIDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIGenericTermsRemoteUIDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                               //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                                     //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AAUIGenericTermsRemoteUIDelegate>)delegate;
-(void)setDelegate:(id<AAUIGenericTermsRemoteUIDelegate>)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)_cancelButtonTapped:(id)arg1 ;
-(id)viewControllerForAlertPresentation;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(id)sessionConfigurationForLoader:(id)arg1 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(id)initWithAccount:(id)arg1 inStore:(id)arg2 ;
-(void)presentFromViewController:(id)arg1 modal:(BOOL)arg2 ;
-(void)_loadRequestPreferringPassword:(BOOL)arg1 ;
-(void)_cleanUpAndDismissWithSuccess:(BOOL)arg1 agreeURL:(id)arg2 ;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
-(void)_cleanupRUILoader;
-(BOOL)_isUnauthorizedError:(id)arg1 ;
-(void)_displayConnectionErrorAndDismiss;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)_agreeToTermsWithURLString:(id)arg1 preferPassword:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

