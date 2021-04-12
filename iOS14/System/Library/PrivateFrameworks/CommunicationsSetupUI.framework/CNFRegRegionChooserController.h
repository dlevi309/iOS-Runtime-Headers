/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/CNFRegRegionChooserDelegate.h>
#import <libobjc.A.dylib/PSController.h>

@protocol CNFRegRegionChooserDelegate, PSController;
@class NSString, NSArray, UIViewController, PSRootController, PSSpecifier, UISearchController;

@interface CNFRegRegionChooserController : UITableViewController <UISearchResultsUpdating, UISearchControllerDelegate, UISearchBarDelegate, CNFRegRegionChooserDelegate, PSController> {

	NSString* _selectedRegionID;
	NSArray* _regionList;
	NSArray* _filteredRegionList;
	id<CNFRegRegionChooserDelegate> _delegate;
	UIViewController*<PSController> _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;
	UISearchController* _searchController;

}

@property (nonatomic,retain) NSArray * regionList;                                  //@synthesize regionList=_regionList - In the implementation block
@property (nonatomic,retain) NSArray * filteredRegionList;                          //@synthesize filteredRegionList=_filteredRegionList - In the implementation block
@property (nonatomic,retain) NSString * selectedRegionID;                           //@synthesize selectedRegionID=_selectedRegionID - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                 //@synthesize searchController=_searchController - In the implementation block
@property (assign,nonatomic) id<CNFRegRegionChooserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willBecomeActive;
-(void)handleURL:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(id)specifier;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)suspend;
-(void)setSearchController:(UISearchController *)arg1 ;
-(UISearchController *)searchController;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)rootController;
-(id<CNFRegRegionChooserDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(void)didLock;
-(void)didWake;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)willPresentSearchController:(id)arg1 ;
-(void)viewDidUnload;
-(void)setParentController:(id)arg1 ;
-(void)setDelegate:(id<CNFRegRegionChooserDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)parentController;
-(void)didUnlock;
-(void)willResignActive;
-(void)setRootController:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)showController:(id)arg1 ;
-(void)willUnlock;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)dealloc;
-(void)didPresentSearchController:(id)arg1 ;
-(id)initWithRegionList:(id)arg1 selectedRegionID:(id)arg2 ;
-(id)drillDownControllerList;
-(void)regionChooser:(id)arg1 selectedRegionID:(id)arg2 ;
-(void)setRegionList:(NSArray *)arg1 ;
-(void)setSelectedRegionID:(NSString *)arg1 ;
-(void)setFilteredRegionList:(NSArray *)arg1 ;
-(NSArray *)filteredRegionList;
-(NSArray *)regionList;
-(NSString *)selectedRegionID;
-(void)_drillDownControllersWithArray:(id)arg1 ;
-(void)_selectRegionID:(id)arg1 ;
-(void)_selectRegionList:(id)arg1 ;
-(void)_hideTableViewCells;
-(void)_showTableViewCells;
@end

