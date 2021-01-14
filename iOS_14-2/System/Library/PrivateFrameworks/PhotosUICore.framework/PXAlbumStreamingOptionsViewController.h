/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PLInvitationRecordsObserver.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol PXAlbumStreamingOptionsViewControllerDelegate;
@class NSString, PLCloudSharedAlbum, UIBarButtonItem, UITableView, UISwitch, NSOperationQueue, ACAccountStore, NSArray, AAUIProfilePictureStore, NSMutableDictionary, PLCloudSharedAlbumInvitationRecord;

@interface PXAlbumStreamingOptionsViewController : UIViewController <PLInvitationRecordsObserver, UITableViewDataSource, UITableViewDelegate> {

	NSString* _visiblePublicURL;
	BOOL _showShareLink;
	PLCloudSharedAlbum* _album;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _doneButton;
	UITableView* _optionsTableView;
	UISwitch* _wantsPublicWebsiteSwitch;
	UISwitch* _wantsMultipleContributorsSwitch;
	UISwitch* _wantsAcceptCloudNotificationSwitch;
	unsigned long long _addSubscribersRow;
	NSOperationQueue* _familyRequestQueue;
	ACAccountStore* _familyAccountStore;
	NSArray* _familyMembers;
	AAUIProfilePictureStore* _familyMemberPictureStore;
	NSMutableDictionary* _familyProfilePictures;
	BOOL _presentedModally;
	BOOL _streamOwner;
	BOOL __shouldScrollToTopOnNextViewLayout;
	BOOL _albumIsFamilyStream;
	BOOL __showingPublicURLActivitySpinner;
	id<PXAlbumStreamingOptionsViewControllerDelegate> _delegate;
	NSString* _albumName;
	NSArray* _sharedAlbumSubscribers;
	PLCloudSharedAlbumInvitationRecord* __selectedSubscriberInvitationRecord;
	NSString* __lastPublicURLSectionFooterTitle;
	NSString* __lastMultiContributorsSectionFooterTitle;

}

@property (nonatomic,retain) PLCloudSharedAlbum * album;                                                                                                           //@synthesize album=_album - In the implementation block
@property (nonatomic,copy) NSString * albumName;                                                                                                                   //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,retain) NSArray * sharedAlbumSubscribers;                                                                                                     //@synthesize sharedAlbumSubscribers=_sharedAlbumSubscribers - In the implementation block
@property (assign,nonatomic) BOOL streamOwner;                                                                                                                     //@synthesize streamOwner=_streamOwner - In the implementation block
@property (setter=_setSelectedSubscriberInvitationRecord:,nonatomic,retain) PLCloudSharedAlbumInvitationRecord * _selectedSubscriberInvitationRecord;              //@synthesize _selectedSubscriberInvitationRecord=__selectedSubscriberInvitationRecord - In the implementation block
@property (assign,setter=_setShouldScrollToTopOnNextViewLayout:,nonatomic) BOOL _shouldScrollToTopOnNextViewLayout;                                                //@synthesize _shouldScrollToTopOnNextViewLayout=__shouldScrollToTopOnNextViewLayout - In the implementation block
@property (setter=_setLastPublicURLSectionFooterTitle:,nonatomic,copy) NSString * _lastPublicURLSectionFooterTitle;                                                //@synthesize _lastPublicURLSectionFooterTitle=__lastPublicURLSectionFooterTitle - In the implementation block
@property (setter=_setLastMultiContributorsSectionFooterTitle:,nonatomic,copy) NSString * _lastMultiContributorsSectionFooterTitle;                                //@synthesize _lastMultiContributorsSectionFooterTitle=__lastMultiContributorsSectionFooterTitle - In the implementation block
@property (assign,nonatomic) BOOL albumIsFamilyStream;                                                                                                             //@synthesize albumIsFamilyStream=_albumIsFamilyStream - In the implementation block
@property (assign,setter=_setShowingPublicURLActivitySpinner:,nonatomic) BOOL _showingPublicURLActivitySpinner;                                                    //@synthesize _showingPublicURLActivitySpinner=__showingPublicURLActivitySpinner - In the implementation block
@property (assign,nonatomic,__weak) id<PXAlbumStreamingOptionsViewControllerDelegate> delegate;                                                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPresentedModally,nonatomic) BOOL presentedModally;                                                                                      //@synthesize presentedModally=_presentedModally - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setAlbumName:(NSString *)arg1 ;
-(NSString *)albumName;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)isPresentedModally;
-(void)setPresentedModally:(BOOL)arg1 ;
-(BOOL)streamOwner;
-(id<PXAlbumStreamingOptionsViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithPHAlbum:(id)arg1 ;
-(void)_updateAllControls;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateWantsPublicWebsiteField;
-(void)_updateWantsAcceptCloudNotificationField;
-(void)_updateWantsMultipleContributorsField;
-(void)_handleCompletionWithReason:(int)arg1 ;
-(void)_changeWantsPublicWebsite:(id)arg1 ;
-(void)_changeWantsAcceptCloudNotification:(id)arg1 ;
-(void)_changeWantsMultipleContributors:(id)arg1 ;
-(void)_deletePhotoStream;
-(void)_displayConfirmationWithMessage:(id)arg1 destructiveTitle:(id)arg2 actionHandler:(/*^block*/id)arg3 ;
-(void)_displayDeleteConfirmation:(id)arg1 ;
-(void)_displayActivitySheet;
-(BOOL)_publicURLEnabled;
-(BOOL)_multipleContributorsEnabled;
-(BOOL)_shouldShowPublicURLActivitySpinner;
-(void)_setShowingPublicURLActivitySpinner:(BOOL)arg1 ;
-(void)_setShowingMultipleContributorSpinner:(BOOL)arg1 ;
-(void)_updatePublicURLStateIfNecessaryAnimated:(BOOL)arg1 ;
-(void)_updateMultipleContributorsState;
-(void)_removeSelectedSubscriber;
-(id)_personViewControllerSubscriberInfo:(id)arg1 canResendInvitation:(BOOL)arg2 canRemoveSubscriber:(BOOL)arg3 ;
-(void)_resendInvitationToSelectedSubscriber;
-(void)_displayConfirmationForRemovalOfSelectedSubscriber;
-(NSArray *)sharedAlbumSubscribers;
-(void)setSharedAlbumSubscribers:(NSArray *)arg1 ;
-(void)setStreamOwner:(BOOL)arg1 ;
-(PLCloudSharedAlbumInvitationRecord *)_selectedSubscriberInvitationRecord;
-(void)_setSelectedSubscriberInvitationRecord:(id)arg1 ;
-(BOOL)_shouldScrollToTopOnNextViewLayout;
-(void)_setShouldScrollToTopOnNextViewLayout:(BOOL)arg1 ;
-(NSString *)_lastPublicURLSectionFooterTitle;
-(void)_setLastPublicURLSectionFooterTitle:(id)arg1 ;
-(NSString *)_lastMultiContributorsSectionFooterTitle;
-(void)_setLastMultiContributorsSectionFooterTitle:(id)arg1 ;
-(BOOL)albumIsFamilyStream;
-(void)setAlbumIsFamilyStream:(BOOL)arg1 ;
-(BOOL)_showingPublicURLActivitySpinner;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidUnload;
-(void)setDelegate:(id<PXAlbumStreamingOptionsViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)_suppressionContexts;
-(void)_updateNavigationItem;
-(void)setAlbum:(PLCloudSharedAlbum *)arg1 ;
-(PLCloudSharedAlbum *)album;
-(void)_doneAction:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invitationRecordsDidChange:(id)arg1 ;
-(id)initWithAlbum:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(CGSize)contentSizeForViewInPopover;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

