/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
*/

#import <MobileCalSettings/MobileCalSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/DelegateDetailProtocol.h>
#import <libobjc.A.dylib/CNAutocompleteFetchDelegate.h>

@protocol CNCancelable;
@class UISearchController, EKSource, CNAutocompleteFetchContext, NSMutableArray, CSAccountController, CNAutocompleteStore, NSString;

@interface CSAccountSearchController : PSListController <UISearchResultsUpdating, UITableViewDelegate, DelegateDetailProtocol, CNAutocompleteFetchDelegate> {

	UISearchController* _searchController;
	EKSource* _source;
	CNAutocompleteFetchContext* _fetchContext;
	NSMutableArray* _searchResults;
	CSAccountController* _accountController;
	id<CNCancelable> _currentFetchRequest;
	CNAutocompleteStore* _autocompleteStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpecifier:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetchDidFinish:(id)arg1 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg1 ;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg1 ;
-(long long)tableViewStyle;
-(void)didModifyDelegate:(id)arg1 ;
-(void)didDismissViewControllerSavingNewDelegate:(BOOL)arg1 ;
-(id)_grantedDelegateFromAutocompleteResult:(id)arg1 ;
@end

