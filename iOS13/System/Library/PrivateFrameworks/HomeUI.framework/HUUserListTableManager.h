/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUAddPeopleViewControllerDelegate.h>
#import <libobjc.A.dylib/HMHomeDelegatePrivate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol HUUserListManagerTableDelegate;
@class NSArray, HMHome, UIViewController, UITableView, NSIndexPath, CNContactStore, NSString;

@interface HUUserListTableManager : NSObject <HUAddPeopleViewControllerDelegate, HMHomeDelegatePrivate, UITableViewDataSource, UITableViewDelegate> {

	BOOL _editing;
	BOOL _allowsEditing;
	id<HUUserListManagerTableDelegate> _delegate;
	NSArray* _users;
	NSArray* _invitations;
	HMHome* _home;
	UIViewController* _viewController;
	UITableView* _tableView;
	NSIndexPath* _selectedIndexPath;
	CNContactStore* _contactStore;

}

@property (assign,nonatomic) BOOL allowsEditing;                                              //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                 //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                   //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic,__weak) id<HUUserListManagerTableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * users;                                                 //@synthesize users=_users - In the implementation block
@property (nonatomic,retain) NSArray * invitations;                                           //@synthesize invitations=_invitations - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                   //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                        //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                         //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) BOOL editing;                                                    //@synthesize editing=_editing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUUserListManagerTableDelegate>)delegate;
-(void)setDelegate:(id<HUUserListManagerTableDelegate>)arg1 ;
-(HMHome *)home;
-(CNContactStore *)contactStore;
-(NSArray *)users;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UITableView *)tableView;
-(UIViewController *)viewController;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(BOOL)editing;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(void)setHome:(HMHome *)arg1 ;
-(void)setUsers:(NSArray *)arg1 ;
-(void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2 ;
-(void)home:(id)arg1 didAddUser:(id)arg2 ;
-(void)home:(id)arg1 didRemoveUser:(id)arg2 ;
-(NSArray *)invitations;
-(void)setInvitations:(NSArray *)arg1 ;
-(id)sortedUsers;
-(id)sortedInvitations;
-(void)_stopSharingWithCompletion:(/*^block*/id)arg1 ;
-(void)_removeUser:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didRemoveUser:(id)arg1 ;
-(void)_didAddUser:(id)arg1 ;
-(void)_didRemoveInvitation:(id)arg1 ;
-(void)_didInsertAtIndex:(unsigned long long)arg1 ;
-(void)_didRemoveAtIndex:(unsigned long long)arg1 ;
-(long long)sectionForPeople;
-(id)_contactForUser:(id)arg1 ;
-(void)_configurePersonViewController:(id)arg1 invitation:(id)arg2 ;
-(void)_reinvite;
-(void)_stopSharing;
-(void)_didReloadAtIndex:(unsigned long long)arg1 ;
-(long long)numberOfDataRows;
-(BOOL)_indexPathIsInviteUser:(id)arg1 ;
-(id)_stringForInvitationState:(long long)arg1 ;
-(id)_displayNameForUser:(id)arg1 ;
-(id)_personViewControllerForUser:(id)arg1 invitation:(id)arg2 ;
-(void)updateEditingRows;
-(void)addPeopleViewControllerDidCancel:(id)arg1 ;
-(void)addPeopleViewController:(id)arg1 didSendInvitations:(id)arg2 ;
-(id)initWithTableView:(id)arg1 viewController:(id)arg2 ;
-(id)_monogramForUser:(id)arg1 ;
@end

