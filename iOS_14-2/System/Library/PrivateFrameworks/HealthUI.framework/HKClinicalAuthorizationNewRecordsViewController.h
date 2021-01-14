/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/HKHealthPrivacyServicePromptController.h>

@protocol HKHealthPrivacyServicePromptControllerDelegate;
@class HKClinicalAuthorizationSequenceContext, UITableView, HKClinicalAuthorizationDisplayController, NSString;

@interface HKClinicalAuthorizationNewRecordsViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController> {

	HKClinicalAuthorizationSequenceContext* _context;
	id<HKHealthPrivacyServicePromptControllerDelegate> _delegate;
	UITableView* _tableView;
	HKClinicalAuthorizationDisplayController* _displayController;
	long long _authorizationMode;

}

@property (nonatomic,readonly) UITableView * tableView;                                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) HKClinicalAuthorizationDisplayController * displayController;                  //@synthesize displayController=_displayController - In the implementation block
@property (assign,nonatomic) long long authorizationMode;                                                     //@synthesize authorizationMode=_authorizationMode - In the implementation block
@property (nonatomic,readonly) HKClinicalAuthorizationSequenceContext * context;                              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<HKHealthPrivacyServicePromptControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id<HKHealthPrivacyServicePromptControllerDelegate>)delegate;
-(UITableView *)tableView;
-(id)initWithContext:(id)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(HKClinicalAuthorizationSequenceContext *)context;
-(void)setDelegate:(id<HKHealthPrivacyServicePromptControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)authorizationMode;
-(void)_updateForCurrentContentSizeCategory;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)_configureNavigationItem;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_createFooterView;
-(void)_configureTableView;
-(BOOL)_indexPathIsValidRow:(id)arg1 ;
-(void)setAuthorizationMode:(long long)arg1 ;
-(id)_createHeaderView;
-(id)_indexPathForShareAuthorizationMode:(long long)arg1 ;
-(long long)_shareAuthorizationModeForIndexPath:(id)arg1 ;
-(HKClinicalAuthorizationDisplayController *)displayController;
-(id)_formatStringForShareAuthorizationModeFooterWithMode:(long long)arg1 ;
-(id)_visibleShareAuthorizationModeCellForMode:(long long)arg1 ;
-(void)_updateShareAuthorizationModeSectionFooter;
-(id)_shareAuthorizationModeCellForIndexPath:(id)arg1 ;
-(id)_titleForShareAuthorizationModeFooter;
-(void)_shareAuthorizationModeCellPressed:(id)arg1 ;
@end

