/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/STSSuggestionViewDelegate.h>
#import <libobjc.A.dylib/STSSearchModelQuerySuggestionsDelegate.h>

@protocol STSSuggestionViewControllerDelegate;
@class STSSearchModel, STSSuggestionView, NSString;

@interface STSSuggestionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, STSSuggestionViewDelegate, STSSearchModelQuerySuggestionsDelegate> {

	STSSearchModel* _searchModel;
	id<STSSuggestionViewControllerDelegate> _selectionDelegate;

}

@property (nonatomic,retain) STSSuggestionView * view; 
@property (nonatomic,retain) STSSearchModel * searchModel;                                                  //@synthesize searchModel=_searchModel - In the implementation block
@property (assign,nonatomic,__weak) id<STSSuggestionViewControllerDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(UIEdgeInsets)contentInset;
-(STSSearchModel *)searchModel;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setSearchModel:(STSSearchModel *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)clearSuggestions;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id<STSSuggestionViewControllerDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<STSSuggestionViewControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)updateContentOffset:(double)arg1 ;
-(void)updateQuerySuggestions:(id)arg1 ;
-(void)searchModelWillFetchQuerySuggestionsCompletions:(id)arg1 ;
-(void)searchModelUpdatedQuerySuggestions:(id)arg1 ;
-(void)_updateFooterOrigin;
-(void)suggestionViewDidTapLogo:(id)arg1 ;
-(void)_updateFooterOriginForBoundsHeight:(double)arg1 ;
-(void)_hideNoticeOverlay;
-(void)noticeViewDidDismiss:(id)arg1 ;
@end

