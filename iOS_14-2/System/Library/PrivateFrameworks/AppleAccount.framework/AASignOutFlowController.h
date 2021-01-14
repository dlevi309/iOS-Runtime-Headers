/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@protocol AASignOutFlowControllerDelegate;
@class ACAccountStore;

@interface AASignOutFlowController : NSObject {

	ACAccountStore* _accountStore;
	id<AASignOutFlowControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AASignOutFlowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<AASignOutFlowControllerDelegate>)delegate;
-(void)_signOutAppleAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_preflightSignOutOfAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_disableDeviceLocatorForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_delegate_signOutAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_delegate_disableFindMyDeviceForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signOutAppleAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_delegate_presentError:(id)arg1 withTitle:(id)arg2 ;
-(void)setDelegate:(id<AASignOutFlowControllerDelegate>)arg1 ;
@end

