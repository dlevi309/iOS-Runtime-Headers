/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUIKeyboardableTableViewController.h>
#import <SearchUI/SearchUITableViewTesting.h>
#import <SearchUI/SearchUIFeedbackDelegateInternal.h>

@protocol SFFeedbackListener, SearchUIResultsViewDelegate;
@class SearchUITableModel, SearchUIPeekDelegate, UIContextMenuInteraction, TLKTableViewScrollTester, SearchUITableView, NSString;

@interface SearchUITableViewController : SearchUIKeyboardableTableViewController <SearchUITableViewTesting, SearchUIFeedbackDelegateInternal> {

	BOOL _shouldUseInsetRoundedSections;
	BOOL _shouldUseStandardSectionInsets;
	/*^block*/id tableViewWillUpdateHandler;
	/*^block*/id tableViewDidUpdateHandler;
	/*^block*/id cellWillDisplayHandler;
	id<SFFeedbackListener> _feedbackListener;
	id<SearchUIResultsViewDelegate> _resultsViewDelegate;
	SearchUITableModel* _tableModel;
	SearchUIPeekDelegate* _peekDelegate;
	UIContextMenuInteraction* _contextInteraction;
	long long _preferredPunchoutIndex;
	SearchUITableModel* _stateRestoredTableModel;
	TLKTableViewScrollTester* _scrollTester;
	CGPoint _stateRestoredScrollPoint;

}

@property (nonatomic,retain) SearchUITableView * tableView; 
@property (nonatomic,retain) SearchUIPeekDelegate * peekDelegate;                         //@synthesize peekDelegate=_peekDelegate - In the implementation block
@property (nonatomic,retain) UIContextMenuInteraction * contextInteraction;               //@synthesize contextInteraction=_contextInteraction - In the implementation block
@property (assign,nonatomic) long long preferredPunchoutIndex;                            //@synthesize preferredPunchoutIndex=_preferredPunchoutIndex - In the implementation block
@property (nonatomic,retain) SearchUITableModel * stateRestoredTableModel;                //@synthesize stateRestoredTableModel=_stateRestoredTableModel - In the implementation block
@property (assign,nonatomic) CGPoint stateRestoredScrollPoint;                            //@synthesize stateRestoredScrollPoint=_stateRestoredScrollPoint - In the implementation block
@property (nonatomic,retain) TLKTableViewScrollTester * scrollTester;                     //@synthesize scrollTester=_scrollTester - In the implementation block
@property (assign,nonatomic,__weak) id<SFFeedbackListener> feedbackListener;              //@synthesize feedbackListener=_feedbackListener - In the implementation block
@property (__weak) id<SearchUIResultsViewDelegate> resultsViewDelegate;                   //@synthesize resultsViewDelegate=_resultsViewDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections;                          //@synthesize shouldUseInsetRoundedSections=_shouldUseInsetRoundedSections - In the implementation block
@property (assign,nonatomic) BOOL shouldUseStandardSectionInsets;                         //@synthesize shouldUseStandardSectionInsets=_shouldUseStandardSectionInsets - In the implementation block
@property (nonatomic,retain) SearchUITableModel * tableModel;                             //@synthesize tableModel=_tableModel - In the implementation block
@property (assign,nonatomic) BOOL threeDTouchEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id cellWillDisplayHandler; 
@property (nonatomic,copy) id tableViewWillUpdateHandler; 
@property (nonatomic,copy) id tableViewDidUpdateHandler; 
+(void)applySeparatorStyleToCell:(id)arg1 forCurrentRowModel:(id)arg2 nextRowModel:(id)arg3 ;
-(id)init;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)presentViewController:(id)arg1 ;
-(void)sceneDidActivate:(id)arg1 ;
-(BOOL)threeDTouchEnabled;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(void)willDismissViewController:(id)arg1 ;
-(id<SFFeedbackListener>)feedbackListener;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
-(void)updateViewControllerTitle:(id)arg1 ;
-(void)removeRowModel:(id)arg1 ;
-(id)resultForIndexPath:(id)arg1 ;
-(id)cardSectionForIndexPath:(id)arg1 ;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1 ;
-(SearchUITableModel *)tableModel;
-(void)setTableModel:(SearchUITableModel *)arg1 ;
-(id)cellForIndexPath:(id)arg1 reuseIfPossible:(BOOL)arg2 ;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(void)showViewController:(id)arg1 ;
-(BOOL)shouldUseInsetRoundedSections;
-(double)offScreenContentScrollDistance;
-(BOOL)shouldUseStandardSectionInsets;
-(void)setShouldUseStandardSectionInsets:(BOOL)arg1 ;
-(id)viewControllerForIndexPath:(id)arg1 isPeek:(BOOL)arg2 ;
-(id)fallbackPeekViewControllerForIndexPath:(id)arg1 ;
-(unsigned long long)handleSelectionAtIndexPath:(id)arg1 wasPop:(BOOL)arg2 ;
-(void)dismissIfNecessaryForIconDrag;
-(void)setPreferredPunchoutIndex:(long long)arg1 ;
-(void)addOrbInteractionIfNeeded;
-(void)deselectSelectedRows;
-(UIContextMenuInteraction *)contextInteraction;
-(void)setPeekDelegate:(SearchUIPeekDelegate *)arg1 ;
-(SearchUIPeekDelegate *)peekDelegate;
-(void)setContextInteraction:(UIContextMenuInteraction *)arg1 ;
-(void)updateLayoutMarginsWithSize:(CGSize)arg1 orientation:(long long)arg2 ;
-(void)updateLayoutMargins;
-(BOOL)updateMustAccountForLayout;
-(id)tableViewWillUpdateHandler;
-(id)tableViewDidUpdateHandler;
-(id)nextCardForIndexPath:(id)arg1 ;
-(id<SearchUIResultsViewDelegate>)resultsViewDelegate;
-(void)setResultsViewDelegate:(id<SearchUIResultsViewDelegate>)arg1 ;
-(id)punchoutsForIndexPath:(id)arg1 ;
-(void)sendFeedbackForCardSectionEngagement:(id)arg1 atIndexPath:(id)arg2 withTriggerEvent:(unsigned long long)arg3 ;
-(void)requestAuthIfNecessaryAndPresentViewController:(id)arg1 animated:(BOOL)arg2 forceModalPresentation:(BOOL)arg3 ;
-(long long)preferredPunchoutIndex;
-(id)punchoutPickerTitleForIndexPath:(id)arg1 ;
-(id)punchoutPickerDismissText:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 forceModalPresentation:(BOOL)arg3 ;
-(void)resignTextField;
-(id)cellWillDisplayHandler;
-(void)updateTableForNewCellHeightAnimated:(BOOL)arg1 ;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2 ;
-(void)updateContentScrolledOffScreenStatus;
-(void)setStateRestoredTableModel:(SearchUITableModel *)arg1 ;
-(void)setStateRestoredScrollPoint:(CGPoint)arg1 ;
-(SearchUITableModel *)stateRestoredTableModel;
-(CGPoint)stateRestoredScrollPoint;
-(void)performScrollTestWithHandlerForFirstScrollCompletion:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setScrollTester:(TLKTableViewScrollTester *)arg1 ;
-(TLKTableViewScrollTester *)scrollTester;
-(BOOL)forwardFeedbackForSelector:(SEL)arg1 ;
-(void)performScrollTestWithCompletion:(/*^block*/id)arg1 ;
-(id)currentTableModel;
-(void)toggleShowMoreForSection:(unsigned long long)arg1 ;
-(CGRect)scrollToIndexPath:(id)arg1 ;
-(void)tapAtIndexPath:(id)arg1 ;
-(void)setCellWillDisplayHandler:(id)arg1 ;
-(void)setTableViewWillUpdateHandler:(id)arg1 ;
-(void)setTableViewDidUpdateHandler:(id)arg1 ;
-(void)purgeMemory;
-(void)restoreResultsIfNeeded;
@end

