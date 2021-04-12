/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@protocol FAFamilyPresenterHostProtocol;
@class FACircleContext, NSXPCConnection;

@interface FARemoteAlertServiceViewController : SBUIRemoteAlertServiceViewController {

	FACircleContext* _circleContext;
	NSXPCConnection* _lookupConnection;
	id<FAFamilyPresenterHostProtocol> _hostProxy;

}

@property (nonatomic,retain) id<FAFamilyPresenterHostProtocol> hostProxy;              //@synthesize hostProxy=_hostProxy - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(id<FAFamilyPresenterHostProtocol>)hostProxy;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setHostProxy:(id<FAFamilyPresenterHostProtocol>)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)handleButtonActions:(id)arg1 ;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_account;
-(void)dealloc;
-(void)_setupRemoteProxy;
-(void)_showFamilyFlow;
-(void)_dismissAndExit;
-(void)_handleSignedOutAcceptInvitation;
-(void)_invalidateLookupConnection;
-(void)_main_dismissAndExit;
@end

