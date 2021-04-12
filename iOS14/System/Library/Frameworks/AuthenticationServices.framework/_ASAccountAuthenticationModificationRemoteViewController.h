/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/ASAccountAuthenticationModificationRemoteViewControllerProtocol.h>

@protocol _ASAccountAuthenticationModificationRemoteViewControllerDelegate;
@interface _ASAccountAuthenticationModificationRemoteViewController : _UIRemoteViewController <ASAccountAuthenticationModificationRemoteViewControllerProtocol> {

	id<_ASAccountAuthenticationModificationRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_ASAccountAuthenticationModificationRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<_ASAccountAuthenticationModificationRemoteViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<_ASAccountAuthenticationModificationRemoteViewControllerDelegate>)arg1 ;
-(void)upgradeCredentialToSignInWithApple:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4 ;
-(void)updateCredential:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4 ;
-(void)requestToUpgradeToSignInWithAppleDidFinishWithUserInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestDidFinishWithCredential:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestDidFailWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentAccountModificationRemoteViewController;
-(void)dismissAccountModificationRemoteViewController;
@end

