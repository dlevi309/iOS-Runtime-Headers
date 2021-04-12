/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/SLPlaceDataSourceDelegate.h>

@protocol SLPlaceDataSource;
@class NSTimer, NSString, NSLock, NSObject, UISearchDisplayController, NSArray;

@interface SLSheetPlaceSearchController : NSObject <UITableViewDataSource, SLPlaceDataSourceDelegate> {

	NSTimer* _delayTimer;
	BOOL _isSearching;
	NSString* _searchString;
	int _retryCount;
	NSLock* _retryLock;
	NSObject*<SLPlaceDataSource> _placeDataSource;
	UISearchDisplayController* _searchDisplayController;
	NSArray* _searchResults;

}

@property (retain) NSObject*<SLPlaceDataSource> placeDataSource;                     //@synthesize placeDataSource=_placeDataSource - In the implementation block
@property (retain) UISearchDisplayController * searchDisplayController;              //@synthesize searchDisplayController=_searchDisplayController - In the implementation block
@property (retain) NSArray * searchResults;                                          //@synthesize searchResults=_searchResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSearchDisplayController:(UISearchDisplayController *)arg1 ;
-(UISearchDisplayController *)searchDisplayController;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setSearchResults:(NSArray *)arg1 ;
-(NSArray *)searchResults;
-(void)cancelSearch;
-(void)placeManager:(id)arg1 failedWithError:(id)arg2 ;
-(void)placeManager:(id)arg1 updatedPlaces:(id)arg2 ;
-(NSObject*<SLPlaceDataSource>)placeDataSource;
-(id)initWithPlaceDataSource:(id)arg1 searchDisplayController:(id)arg2 ;
-(void)searchWithSearchString:(id)arg1 ;
-(void)setPlaceDataSource:(NSObject*<SLPlaceDataSource>)arg1 ;
-(void)performDelayedFetch:(id)arg1 ;
@end

