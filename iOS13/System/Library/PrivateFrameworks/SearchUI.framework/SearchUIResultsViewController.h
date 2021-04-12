/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SearchUI/SearchUIKeyboardableTableViewScrollDelegate.h>
#import <SearchUI/SearchUITableViewTesting.h>

@protocol SearchUIResultsViewDelegate;
@class NSArray, SearchUIResultTableViewController, SearchUIReplicatorView, NSString, SearchUIBackgroundView, UIView, SearchUISearchField;

@interface SearchUIResultsViewController : UIViewController <UIGestureRecognizerDelegate, SearchUIKeyboardableTableViewScrollDelegate, SearchUITableViewTesting> {

	BOOL _immediatelyShowCardForSingleResult;
	BOOL _shouldMonitorScrollingPastBottomOfContent;
	/*^block*/id tableViewWillUpdateHandler;
	/*^block*/id tableViewDidUpdateHandler;
	/*^block*/id cellWillDisplayHandler;
	NSArray* _sections;
	unsigned long long _style;
	SearchUIResultTableViewController* _resultTableViewController;
	SearchUIReplicatorView* _replicatorView;
	NSString* _previousSearchString;
	id<SearchUIResultsViewDelegate> _delegate;

}

@property (nonatomic,retain) SearchUIBackgroundView * view; 
@property (nonatomic,retain) SearchUIResultTableViewController * resultTableViewController;              //@synthesize resultTableViewController=_resultTableViewController - In the implementation block
@property (nonatomic,retain) SearchUIReplicatorView * replicatorView;                                    //@synthesize replicatorView=_replicatorView - In the implementation block
@property (nonatomic,retain) NSString * previousSearchString;                                            //@synthesize previousSearchString=_previousSearchString - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIResultsViewDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldHideResultsUnderKeyboard; 
@property (assign,nonatomic) BOOL shouldMonitorScrollingPastBottomOfContent;                             //@synthesize shouldMonitorScrollingPastBottomOfContent=_shouldMonitorScrollingPastBottomOfContent - In the implementation block
@property (nonatomic,readonly) double distanceToTopOfAppIcons; 
@property (assign,nonatomic) BOOL shortenTopFloatingHeader; 
@property (nonatomic,retain) UIView * footerView; 
@property (assign,nonatomic) BOOL showsVerticalScrollIndicator; 
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections; 
@property (assign,nonatomic) BOOL shouldUseStandardSectionInsets; 
@property (assign,nonatomic) BOOL immediatelyShowCardForSingleResult;                                    //@synthesize immediatelyShowCardForSingleResult=_immediatelyShowCardForSingleResult - In the implementation block
@property (nonatomic,retain) SearchUISearchField * searchField; 
@property (nonatomic,retain) NSString * queryString; 
@property (nonatomic,retain) NSArray * sections;                                                         //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic,__weak) id<SFFeedbackListener> feedbackListener; 
@property (assign,nonatomic) unsigned long long style;                                                   //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id cellWillDisplayHandler; 
@property (nonatomic,copy) id tableViewWillUpdateHandler; 
@property (nonatomic,copy) id tableViewDidUpdateHandler; 
-(id)init;
-(id<SearchUIResultsViewDelegate>)delegate;
-(void)setDelegate:(id<SearchUIResultsViewDelegate>)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(SearchUISearchField *)searchField;
-(void)setSearchField:(SearchUISearchField *)arg1 ;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg1 ;
-(id)contentScrollView;
-(BOOL)showsVerticalScrollIndicator;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)previousSearchString;
-(void)setPreviousSearchString:(NSString *)arg1 ;
-(void)didTap;
-(id<SFFeedbackListener>)feedbackListener;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(BOOL)shouldUseInsetRoundedSections;
-(BOOL)shouldUseStandardSectionInsets;
-(void)setShouldUseStandardSectionInsets:(BOOL)arg1 ;
-(id)tableViewWillUpdateHandler;
-(id)tableViewDidUpdateHandler;
-(id)cellWillDisplayHandler;
-(void)performScrollTestWithHandlerForFirstScrollCompletion:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
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
-(BOOL)shortenTopFloatingHeader;
-(void)setShortenTopFloatingHeader:(BOOL)arg1 ;
-(void)replaceResult:(id)arg1 withResult:(id)arg2 ;
-(SearchUIResultTableViewController *)resultTableViewController;
-(void)setReplicatorView:(SearchUIReplicatorView *)arg1 ;
-(SearchUIReplicatorView *)replicatorView;
-(void)setResultTableViewController:(SearchUIResultTableViewController *)arg1 ;
-(void)didScrollPastBottomOfContent;
-(void)updateWithResultSections:(id)arg1 resetScrollPoint:(BOOL)arg2 ;
-(void)updateWithResultSections:(id)arg1 ;
-(BOOL)immediatelyShowCardForSingleResult;
-(BOOL)shouldMonitorScrollingPastBottomOfContent;
-(void)didBeginScrolling;
-(void)setShouldMonitorScrollingPastBottomOfContent:(BOOL)arg1 ;
-(void)setShouldHideResultsUnderKeyboard:(BOOL)arg1 ;
-(BOOL)shouldHideResultsUnderKeyboard;
-(double)distanceToTopOfAppIcons;
-(void)performReturnKeyPressAction;
-(void)setImmediatelyShowCardForSingleResult:(BOOL)arg1 ;
@end

