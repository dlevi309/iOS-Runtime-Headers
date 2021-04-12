/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFPasswordTableViewController.h>

@protocol _SFPasswordPickerTableViewControllerDelegate;
@class NSMutableArray, NSIndexPath, _SFPasswordPickerTableConfiguration;

@interface _SFPasswordPickerTableViewController : _SFPasswordTableViewController {

	NSMutableArray* _savedPasswordsMatchingHintStrings;
	NSMutableArray* _savedPasswords;
	NSMutableArray* _matchingPasswords;
	long long _sectionForPasswordsMatchingHintStrings;
	long long _sectionForAllPasswords;
	NSIndexPath* _indexPathOfRowShowingDetailView;
	id<_SFPasswordPickerTableViewControllerDelegate> _delegate;
	_SFPasswordPickerTableConfiguration* _configuration;

}

@property (assign,nonatomic,__weak) id<_SFPasswordPickerTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) _SFPasswordPickerTableConfiguration * configuration;                         //@synthesize configuration=_configuration - In the implementation block
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(void)_passwordStoreDidChange;
-(void)_updateSections;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(id<_SFPasswordPickerTableViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)_reloadSavedPasswords;
-(void)_deletePasswordAtIndexPath:(id)arg1 ;
-(id)_passwordForIndexPath:(id)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)handleContextMenuDeleteForIndexPath:(id)arg1 ;
-(void)searchPatternDidUpdate;
-(void)_updateMatchingPasswords;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDelegate:(id<_SFPasswordPickerTableViewControllerDelegate>)arg1 ;
-(void)_cancel;
-(_SFPasswordPickerTableConfiguration *)configuration;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
@end

