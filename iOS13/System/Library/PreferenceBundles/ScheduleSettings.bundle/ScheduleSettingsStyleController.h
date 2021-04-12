/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/ScheduleSettings.bundle/ScheduleSettings
*/

#import <Preferences/PSListItemsController.h>

@class ACAccount, NSString, NSArray, NSMutableSet;

@interface ScheduleSettingsStyleController : PSListItemsController {

	ACAccount* _account;
	NSString* _mailAccountUniqueId;
	NSArray* _mailboxInfos;
	NSMutableSet* _monitored;
	BOOL _supportsUserPushedMailboxes;
	BOOL _isExchangeAccount;
	BOOL _ignoringNotifications;

}
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)listItemSelected:(id)arg1 ;
-(void)_accountsChanged;
-(id)notAvailableText;
-(BOOL)shouldShowMailboxes;
-(void)reloadFolders;
-(void)_reloadFoldersAndSpecifiersForced:(BOOL)arg1 ;
-(void)_reloadFoldersAndSpecifiers;
-(void)setPushStateForMailbox:(id)arg1 state:(BOOL)arg2 ;
@end

