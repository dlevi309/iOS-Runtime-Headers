/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>

@protocol EKShareeViewControllerDelegate;
@class UIAlertController, EKSharee;

@interface EKShareeViewController : UITableViewController {

	UIAlertController* _removeAlertController;
	BOOL _allowEditing;
	BOOL _allowStopSharing;
	BOOL _allowResendInvitations;
	EKSharee* _sharee;
	id<EKShareeViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) EKSharee * sharee;                                               //@synthesize sharee=_sharee - In the implementation block
@property (assign,nonatomic) BOOL allowEditing;                                               //@synthesize allowEditing=_allowEditing - In the implementation block
@property (assign,nonatomic) BOOL allowStopSharing;                                           //@synthesize allowStopSharing=_allowStopSharing - In the implementation block
@property (assign,nonatomic) BOOL allowResendInvitations;                                     //@synthesize allowResendInvitations=_allowResendInvitations - In the implementation block
@property (assign,nonatomic,__weak) id<EKShareeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id<EKShareeViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(EKSharee *)sharee;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setSharee:(EKSharee *)arg1 ;
-(long long)_rowForSubitem:(int)arg1 ;
-(void)setDelegate:(id<EKShareeViewControllerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(id)initWithSharee:(id)arg1 ;
-(void)setAllowStopSharing:(BOOL)arg1 ;
-(void)setAllowResendInvitations:(BOOL)arg1 ;
-(void)_reloadTitle;
-(BOOL)_shouldDisplayResendInvitationButton;
-(BOOL)_shouldDisplayStopSharingButton;
-(int)_subitemAtRow:(long long)arg1 ;
-(void)_allowEditingChanged:(id)arg1 ;
-(void)removeClicked:(id)arg1 ;
-(BOOL)allowStopSharing;
-(BOOL)allowResendInvitations;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)allowEditing;
-(void)setAllowEditing:(BOOL)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
@end

