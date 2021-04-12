/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/STSCategoryTitleTableViewCellDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol STSCategoryViewControllerDelegate;
@class NSMutableArray, STSSearchModel, NSArray, STSCategoryView, NSString;

@interface STSCategoryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, STSCategoryTitleTableViewCellDelegate, UIScrollViewDelegate> {

	BOOL _isScrolling;
	NSMutableArray* _displayedResults;
	BOOL _sendFeedbackOnViewDidAppear;
	STSSearchModel* _searchModel;
	id<STSCategoryViewControllerDelegate> _selectionDelegate;
	NSArray* _categories;
	NSArray* _recents;
	NSMutableArray* _model;

}

@property (nonatomic,retain) STSCategoryView * view; 
@property (nonatomic,retain) NSArray * categories;                                                        //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSArray * recents;                                                           //@synthesize recents=_recents - In the implementation block
@property (nonatomic,retain) NSMutableArray * model;                                                      //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) STSSearchModel * searchModel;                                                //@synthesize searchModel=_searchModel - In the implementation block
@property (assign,nonatomic,__weak) id<STSCategoryViewControllerDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (assign,nonatomic) BOOL sendFeedbackOnViewDidAppear;                                            //@synthesize sendFeedbackOnViewDidAppear=_sendFeedbackOnViewDidAppear - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(NSMutableArray *)model;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(UIEdgeInsets)contentInset;
-(STSSearchModel *)searchModel;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)updateRecents:(id)arg1 ;
-(NSArray *)categories;
-(void)setSearchModel:(STSSearchModel *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setModel:(NSMutableArray *)arg1 ;
-(void)viewDidLoad;
-(void)reload;
-(NSArray *)recents;
-(id<STSCategoryViewControllerDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<STSCategoryViewControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)setRecents:(NSArray *)arg1 ;
-(void)updateModel;
-(id)_searchResultIdentifierForSuggestion:(id)arg1 recent:(BOOL)arg2 ;
-(void)sendRankSectionsFeedback;
-(void)sendVisibleResultsFeedback;
-(void)_commitClearRecents;
-(void)updateContentOffset:(double)arg1 ;
-(BOOL)sendFeedbackOnViewDidAppear;
-(void)setSendFeedbackOnViewDidAppear:(BOOL)arg1 ;
-(void)_reportFeedbackDisplayedResultsDidScroll:(BOOL)arg1 ;
-(void)clearButton:(id)arg1 pressedForCategoryResult:(id)arg2 ;
-(void)clearRecents;
@end

