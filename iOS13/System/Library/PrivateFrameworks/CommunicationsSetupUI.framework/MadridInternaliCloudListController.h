/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/IMCloudKitEventHandler.h>

@class NSString;

@interface MadridInternaliCloudListController : PSListController <IMCloudKitEventHandler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_startListeningForNotifications;
-(id)specifiers;
-(void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2 ;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(void)_stopListeningForNotifications;
-(void)setMessagesOniCloudEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)messagesOniCloudEnabled:(id)arg1 ;
-(void)syncToiCloudNow:(id)arg1 ;
-(void)clearLocalSyncState:(id)arg1 ;
-(void)clearData:(id)arg1 ;
@end

