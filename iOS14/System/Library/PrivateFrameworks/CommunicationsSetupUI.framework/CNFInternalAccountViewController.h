/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSListController.h>

@class IMAccount, FTRegConnectionHandler;

@interface CNFInternalAccountViewController : PSListController {

	IMAccount* _account;
	FTRegConnectionHandler* _connectionHandler;

}

@property (nonatomic,retain) IMAccount * account;              //@synthesize account=_account - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)bundle;
-(IMAccount *)account;
-(void)setAccount:(IMAccount *)arg1 ;
-(id)specifiers;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(void)_startListeningForNotifications;
-(void)_stopListeningForNotifications;
-(id)initWithAccount:(id)arg1 ;
-(id)statusForAlias:(id)arg1 ;
-(BOOL)isConnectedToDaemon;
-(id)specifierForAlias:(id)arg1 ;
-(void)_handleAccountNotification:(id)arg1 ;
-(id)accountLoginStatus:(id)arg1 ;
-(id)registrationStatus:(id)arg1 ;
-(id)accountLogin:(id)arg1 ;
-(id)accountType:(id)arg1 ;
-(id)accountDisplayName:(id)arg1 ;
-(id)registrationFailureReason:(id)arg1 ;
-(id)accountIsActive:(id)arg1 ;
@end

