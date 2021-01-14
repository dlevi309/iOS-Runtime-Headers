/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKNavigationController.h>

@class PKSearchResultsSearchController;

@interface PKSearchResultsNavigationController : PKNavigationController {

	PKSearchResultsSearchController* _searchController;

}

@property (assign,nonatomic,__weak) PKSearchResultsSearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
-(void)setSearchController:(PKSearchResultsSearchController *)arg1 ;
-(PKSearchResultsSearchController *)searchController;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
@end

