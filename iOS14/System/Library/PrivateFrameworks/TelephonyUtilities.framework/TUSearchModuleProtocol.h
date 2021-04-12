/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

@class TUSearchResults, TUSearchController;


@protocol TUSearchModuleProtocol <NSObject>
@property (getter=isSearchComplete,readonly) BOOL searchComplete; 
@property (readonly) TUSearchResults * searchResults; 
@property (__weak) TUSearchController * searchController; 
@optional
-(void)setSearchController:(id)arg1;
-(TUSearchController *)searchController;

@required
-(void)cancelSearch;
-(void)searchForString:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)isSearchComplete;
-(TUSearchResults *)searchResults;

@end

