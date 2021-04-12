/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/HealthExperienceUI.CompoundDataSourceCollectionViewController.h>
#import <UIKit/UISearchResultsUpdating.h>

@interface HealthExperienceUI.SearchViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <UISearchResultsUpdating> {

	 $__lazy_storage_$_mainStore;
	 layoutManager;
	 $__lazy_storage_$_dataSources;
	 $__lazy_storage_$_spotlightSearch;
	 $__lazy_storage_$_searchHandler;
	 $__lazy_storage_$_searchResultsCompletionHandler;
	 $__lazy_storage_$_searchController;
	 searchState;

}
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)restoreUserActivityState:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)viewDidLoad;
@end

