/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSListController.h>

@class IMServiceImpl, FTRegConnectionHandler;

@interface CNFInternalAccountListViewController : PSListController {

	IMServiceImpl* _service;
	FTRegConnectionHandler* _connectionHandler;

}

@property (nonatomic,retain) IMServiceImpl * service;              //@synthesize service=_service - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(void)_startListeningForNotifications;
-(void)_stopListeningForNotifications;
-(id)initWithServiceType:(long long)arg1 ;
-(void)setService:(IMServiceImpl *)arg1 ;
-(IMServiceImpl *)service;
-(void)accountTappedWithSpecifier:(id)arg1 ;
-(void)_handleAccountNotification:(id)arg1 ;
-(id)accountNameForSpecifier:(id)arg1 ;
@end

