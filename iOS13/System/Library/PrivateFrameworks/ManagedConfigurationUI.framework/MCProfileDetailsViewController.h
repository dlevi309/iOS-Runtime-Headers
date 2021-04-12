/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class MCUIProfile, NSArray, NSString;

@interface MCProfileDetailsViewController : UITableViewController <PSStateRestoration> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)_setup;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setSections:(NSArray *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(BOOL)canBeShownFromSuspendedState;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(MCUIProfile *)UIProfile;
-(void)setUIProfile:(MCUIProfile *)arg1 ;
-(void)_profileChanged:(id)arg1 ;
-(void)setTableViewBottomInset:(double)arg1 ;
-(void)setViewControllerCanPop:(BOOL)arg1 ;
-(void)setProfileDetailsMode:(int)arg1 ;
-(void)reloadSectionArray;
-(BOOL)viewControllerCanPop;
-(BOOL)showTitleIfOnlyOneSection;
-(double)tableViewBottomInset;
-(void)setUIProfile:(id)arg1 mode:(int)arg2 ;
-(void)setShowTitleIfOnlyOneSection:(BOOL)arg1 ;
@end

