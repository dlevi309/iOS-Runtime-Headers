/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/MCUITableViewController.h>

@class MCUIProfile, NSArray;

@interface MCProfileDetailsViewController : MCUITableViewController {

	BOOL _showTitleIfOnlyOneSection;
	BOOL _viewControllerCanPop;
	int _mode;
	double _tableViewBottomInset;
	MCUIProfile* _UIProfile;
	NSArray* _sections;

}

@property (nonatomic,retain) MCUIProfile * UIProfile;                     //@synthesize UIProfile=_UIProfile - In the implementation block
@property (assign,nonatomic) BOOL showTitleIfOnlyOneSection;              //@synthesize showTitleIfOnlyOneSection=_showTitleIfOnlyOneSection - In the implementation block
@property (assign,nonatomic) BOOL viewControllerCanPop;                   //@synthesize viewControllerCanPop=_viewControllerCanPop - In the implementation block
@property (nonatomic,retain) NSArray * sections;                          //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) int mode;                                    //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double tableViewBottomInset;                 //@synthesize tableViewBottomInset=_tableViewBottomInset - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)_setup;
-(int)mode;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)sections;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setMode:(int)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(MCUIProfile *)UIProfile;
-(void)setUIProfile:(MCUIProfile *)arg1 ;
-(void)_profileChanged:(id)arg1 ;
-(void)setTableViewBottomInset:(double)arg1 ;
-(void)setViewControllerCanPop:(BOOL)arg1 ;
-(void)_updateStateForCurrentMode;
-(void)setProfileDetailsMode:(int)arg1 ;
-(BOOL)showTitleIfOnlyOneSection;
-(double)tableViewBottomInset;
-(void)reloadSectionArray;
-(BOOL)viewControllerCanPop;
-(void)setUIProfile:(id)arg1 mode:(int)arg2 ;
-(void)setShowTitleIfOnlyOneSection:(BOOL)arg1 ;
@end

