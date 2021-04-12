/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

@class TUSearchResults, TUSearchController;


@protocol TUSearchModuleProtocol <NSObject>
@property (getter=isSearchComplete,readonly) BOOL searchComplete; 
@property (readonly) TUSearchResults * searchResults; 
@property (__weak) TUSearchController * searchController; 
@optional
-(TUSearchController *)searchController;
-(void)setSearchController:(id)arg1;

@required
-(TUSearchResults *)searchResults;
-(void)searchForString:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelSearch;
-(BOOL)isSearchComplete;

@end

