/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSListController.h>

@class IMAccount, FTRegConnectionHandler;

@interface CNFInternalAccountViewController : PSListController {

	IMAccount* _account;
	FTRegConnectionHandler* _connectionHandler;

}

@property (nonatomic,retain) IMAccount * account;              //@synthesize account=_account - In the implementation block
-(id)bundle;
-(IMAccount *)account;
-(void)setAccount:(IMAccount *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_startListeningForNotifications;
-(id)specifiers;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(id)statusForAlias:(id)arg1 ;
-(BOOL)isConnectedToDaemon;
-(id)specifierForAlias:(id)arg1 ;
-(void)_stopListeningForNotifications;
-(void)_handleAccountNotification:(id)arg1 ;
-(id)accountLoginStatus:(id)arg1 ;
-(id)registrationStatus:(id)arg1 ;
-(id)accountLogin:(id)arg1 ;
-(id)accountType:(id)arg1 ;
-(id)accountDisplayName:(id)arg1 ;
-(id)registrationFailureReason:(id)arg1 ;
-(id)accountIsActive:(id)arg1 ;
@end

