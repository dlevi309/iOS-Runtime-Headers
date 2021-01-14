/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _revokingGroup;

}

@property (assign,getter=isRevokingGroup,nonatomic) BOOL revokingGroup;              //@synthesize revokingGroup=_revokingGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)infoButton;
-(void)credentialGroupControllerDidUpdateGroups:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)updateHeaderWithGroup:(id)arg1 ;
-(void)showActivityIndicator:(BOOL)arg1 withCell:(id)arg2 ;
-(void)setRevokingGroup:(BOOL)arg1 ;
-(void)presentAlertForError:(id)arg1 ;
-(void)showContactDetailsViewController;
-(void)updateWithGroup:(id)arg1 ;
-(id)initWithGroup:(id)arg1 groupController:(id)arg2 style:(long long)arg3 ;
-(BOOL)isRevokingGroup;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)dealloc;
@end

