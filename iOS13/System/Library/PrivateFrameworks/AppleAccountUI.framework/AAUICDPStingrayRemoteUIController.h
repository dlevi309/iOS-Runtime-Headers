/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@class AAUIServerUIHookHandler, ACAccount;

@interface AAUICDPStingrayRemoteUIController : NSObject {

	AAUIServerUIHookHandler* _serverHookHandler;
	ACAccount* _account;

}
-(void)setPresentingController:(id)arg1 ;
-(id)initWithRemoteUIController:(id)arg1 ;
-(void)attachPasscodeHandler:(/*^block*/id)arg1 ;
-(id)initWithRemoteUIController:(id)arg1 appleAccount:(id)arg2 ;
-(void)processObjectModel:(id)arg1 isModal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)attachAllHandlers;
-(void)attachRecoveryKeyHandler:(/*^block*/id)arg1 ;
-(void)attachRepairHandler:(/*^block*/id)arg1 ;
-(void)attachAuthHandler:(/*^block*/id)arg1 ;
-(void)processObjectModel:(id)arg1 isModal:(BOOL)arg2 ;
@end

