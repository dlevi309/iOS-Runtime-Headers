/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PKSharedCredentialsGroupControllerDelegate.h>

@class PKAvatarHeaderView, CNContact, PKSharedCredentialGroup, PKSharedCredentialsGroupController, NSString;

@interface PKSharedCredentialGroupDetailsViewController : UITableViewController <PKSharedCredentialsGroupControllerDelegate> {

	PKAvatarHeaderView* _headerView;
	CNContact* _contact;
	PKSharedCredentialGroup* _group;
	PKSharedCredentialsGroupController* _groupController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)infoButton;
-(void)credentialGroupControllerDidUpdateGroups:(id)arg1 ;
-(void)updateWithGroup:(id)arg1 ;
-(void)presentAlertForError:(id)arg1 ;
-(void)showContactDetailsViewController;
-(id)initWithGroup:(id)arg1 groupController:(id)arg2 style:(long long)arg3 ;
@end

