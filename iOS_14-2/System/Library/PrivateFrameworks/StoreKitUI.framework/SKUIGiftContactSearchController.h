/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/MFContactsSearchConsumer.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SKUIGiftContactSearchDelegate;
@class NSMutableArray, NSArray, MFContactsSearchManager, UIView, NSNumber, UITableView, NSString;

@interface SKUIGiftContactSearchController : NSObject <MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate> {

	NSMutableArray* _autocompleteSearchResults;
	id<SKUIGiftContactSearchDelegate> _delegate;
	NSArray* _results;
	MFContactsSearchManager* _searchManager;
	UIView* _searchResultsView;
	NSNumber* _searchTaskIdentifier;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) id<SKUIGiftContactSearchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long numberOfResults; 
@property (nonatomic,readonly) UIView * searchResultsView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)cancelSearch;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<SKUIGiftContactSearchDelegate>)delegate;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForAutocompleteResults;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<SKUIGiftContactSearchDelegate>)arg1 ;
-(long long)numberOfResults;
-(UIView *)searchResultsView;
-(id)_tableView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_setResults:(id)arg1 ;
-(void)dealloc;
-(void)searchForText:(id)arg1 ;
-(void)resetSearch;
-(void)_finishSearchWithResults:(id)arg1 ;
-(void)makeChildLabelsSupportDarkMode:(id)arg1 ;
@end

