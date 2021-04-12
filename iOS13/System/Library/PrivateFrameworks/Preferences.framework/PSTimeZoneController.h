/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>

@class NSArray, PSSpecifier, PSListController, UISearchController, NSString;

@interface PSTimeZoneController : UITableViewController <UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate> {

	NSArray* _cities;
	PSSpecifier* _specifier;
	PSListController* _parentController;
	UISearchController* _searchController;

}

@property (nonatomic,retain) UISearchController * searchController;                   //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                 //@synthesize specifier=_specifier - In the implementation block
@property (assign,nonatomic,__weak) PSListController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setTimeZone:(id)arg1 ;
-(PSSpecifier *)specifier;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(void)setParentController:(PSListController *)arg1 ;
-(PSListController *)parentController;
-(id)currentTimeZoneCityName;
@end

