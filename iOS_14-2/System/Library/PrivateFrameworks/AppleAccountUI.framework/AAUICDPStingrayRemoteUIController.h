/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@class AAUIServerUIHookHandler, ACAccount;

@interface AAUICDPStingrayRemoteUIController : NSObject {

	AAUIServerUIHookHandler* _serverHookHandler;
	ACAccount* _account;

}
-(id)initWithRemoteUIController:(id)arg1 ;
-(void)setPresentingController:(id)arg1 ;
-(id)initWithRemoteUIController:(id)arg1 appleAccount:(id)arg2 ;
-(void)processObjectModel:(id)arg1 isModal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)attachAllHandlers;
-(void)attachRecoveryKeyHandler:(/*^block*/id)arg1 ;
-(void)attachPasscodeHandler:(/*^block*/id)arg1 ;
-(void)attachRepairHandler:(/*^block*/id)arg1 ;
-(void)attachAuthHandler:(/*^block*/id)arg1 ;
-(void)processObjectModel:(id)arg1 isModal:(BOOL)arg2 ;
@end

