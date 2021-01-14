/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol UISearchDisplayDelegate <NSObject>
@optional
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
-(void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(long long)arg2;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
-(void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
-(void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1;
-(void)searchDisplayControllerDidEndSearch:(id)arg1;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1;
-(void)searchDisplayControllerWillEndSearch:(id)arg1;
-(void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;

@end

