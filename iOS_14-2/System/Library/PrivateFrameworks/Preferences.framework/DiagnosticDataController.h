/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSListController.h>
#import <UIKit/UISearchResultsUpdating.h>

@class NSArray, UISearchController, NSString;

@interface DiagnosticDataController : PSListController <UISearchResultsUpdating> {

	NSArray* _allSpecifiers;
	UISearchController* _searchController;

}

@property (nonatomic,retain) UISearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(id)specifiers;
-(UISearchController *)searchController;
-(id)init;
-(void)viewDidLoad;
@end

