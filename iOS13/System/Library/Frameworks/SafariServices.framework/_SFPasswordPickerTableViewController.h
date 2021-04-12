/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<_SFPasswordPickerTableViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_SFPasswordPickerTableViewControllerDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(_SFPasswordPickerTableConfiguration *)configuration;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)_cancel;
-(void)handleContextMenuDeleteForIndexPath:(id)arg1 ;
-(void)searchPatternDidUpdate;
-(void)_updateMatchingPasswords;
-(void)_updateSections;
-(void)_deletePasswordAtIndexPath:(id)arg1 ;
-(id)_passwordForIndexPath:(id)arg1 ;
@end

