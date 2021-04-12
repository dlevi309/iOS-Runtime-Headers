/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)listItemSelected:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)_accountsChanged;
-(id)notAvailableText;
-(BOOL)shouldShowMailboxes;
-(void)reloadFolders;
-(void)_reloadFoldersAndSpecifiersForced:(BOOL)arg1 ;
-(void)_reloadFoldersAndSpecifiers;
-(void)setPushStateForMailbox:(id)arg1 state:(BOOL)arg2 ;
@end

