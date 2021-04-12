/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSListController.h>

@class IMServiceImpl, FTRegConnectionHandler;

@interface CNFInternalAccountListViewController : PSListController {

	IMServiceImpl* _service;
	FTRegConnectionHandler* _connectionHandler;

}

@property (nonatomic,retain) IMServiceImpl * service;              //@synthesize service=_service - In the implementation block
-(IMServiceImpl *)service;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setService:(IMServiceImpl *)arg1 ;
-(void)_startListeningForNotifications;
-(id)initWithServiceType:(long long)arg1 ;
-(id)specifiers;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(void)accountTappedWithSpecifier:(id)arg1 ;
-(void)_stopListeningForNotifications;
-(void)_handleAccountNotification:(id)arg1 ;
-(id)accountNameForSpecifier:(id)arg1 ;
@end

