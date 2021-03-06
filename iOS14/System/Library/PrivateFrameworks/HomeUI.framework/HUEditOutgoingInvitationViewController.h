/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUUserTableViewController.h>

@class HUEditOutgoingInvitationItemManager;

@interface HUEditOutgoingInvitationViewController : HUUserTableViewController {

	HUEditOutgoingInvitationItemManager* _editOutgoingInvitationItemManager;

}

@property (nonatomic,readonly) HUEditOutgoingInvitationItemManager * editOutgoingInvitationItemManager;              //@synthesize editOutgoingInvitationItemManager=_editOutgoingInvitationItemManager - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)userHandle;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)initWithItem:(id)arg1 home:(id)arg2 ;
-(HUEditOutgoingInvitationItemManager *)editOutgoingInvitationItemManager;
-(id)_messageForInvitationState:(long long)arg1 ;
-(void)_cancelOutgoingInvitation:(BOOL)arg1 ;
@end

