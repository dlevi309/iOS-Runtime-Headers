/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SearchUI/SearchUIKeyboardableTableViewDelegate.h>
#import <SearchUI/SearchUISizingDelegate.h>
#import <SearchUI/SearchUITableViewTesting.h>

@protocol SearchUIResultsViewDelegate;
@class NSArray, SearchUIResultsTableViewController, NSString, SearchUIBackgroundView, UIResponder, UIView, UISearchTextField;

@interface SearchUIResultsViewController : UIViewController <UIGestureRecognizerDelegate, SearchUIKeyboardableTableViewDelegate, SearchUISizingDelegate, SearchUITableViewTesting> {

	BOOL _immediatelyShowCardForSingleResult;
	BOOL _shouldMonitorScrollingPastBottomOfContent;
	/*^block*/id tableViewWillUpdateHandler;
	/*^block*/id tableViewDidUpdateHandler;
	/*^block*/id cellWillDisplayHandler;
	NSArray* _sections;
	unsigned long long _style;
	SearchUIResultsTableViewController* _resultsTableViewController;
	NSString* _previousSearchString;
	id<SearchUIResultsViewDelegate> _delegate;

}

@property (nonatomic,retain) SearchUIBackgroundView * view; 
@property (nonatomic,retain) SearchUIResultsTableViewController * resultsTableViewController;              //@synthesize resultsTableViewController=_resultsTableViewController - In the implementation block
@property (nonatomic,retain) NSString * previousSearchString;                                              //@synthesize previousSearchString=_previousSearchString - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIResultsViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldHideResultsUnderKeyboard; 
@property (assign,nonatomic) BOOL shouldMonitorScrollingPastBottomOfContent;                               //@synthesize shouldMonitorScrollingPastBottomOfContent=_shouldMonitorScrollingPastBottomOfContent - In the implementation block
@property (nonatomic,readonly) double distanceToTopOfAppIcons; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) UIResponder * responderForKeyboardInput; 
@property (assign,nonatomic) BOOL shortenTopFloatingHeader; 
@property (nonatomic,retain) UIView * footerView; 
@property (assign,nonatomic) BOOL showsVerticalScrollIndicator; 
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections; 
@property (assign,nonatomic) BOOL shouldUseStandardSectionInsets; 
@property (assign,nonatomic) BOOL immediatelyShowCardForSingleResult;                                      //@synthesize immediatelyShowCardForSingleResult=_immediatelyShowCardForSingleResult - In the implementation block
@property (nonatomic,retain) UISearchTextField * searchField; 
@property (nonatomic,retain) NSString * queryString; 
@property (nonatomic,retain) NSArray * sections;                                                           //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic,__weak) id<SFFeedbackListener> feedbackListener; 
@property (assign,nonatomic) unsigned long long style;                                                     //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id cellWillDisplayHandler; 
@property (nonatomic,copy) id tableViewWillUpdateHandler; 
@property (nonatomic,copy) id tableViewDidUpdateHandler; 
-(void)setSections:(NSArray *)arg1 ;
-(id<SFFeedbackListener>)feedbackListener;
-(UIView *)footerView;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
-(void)setSearchField:(UISearchTextField *)arg1 ;
-(void)didTap;
-(double)distanceToTopOfAppIcons;
-(UISearchTextField *)searchField;
-(UIResponder *)responderForKeyboardInput;
-(id<SearchUIResultsViewDelegate>)delegate;
-(void)purgeMemory;
-(CGSize)contentSize;
-(NSString *)queryString;
-(NSArray *)sections;
-(void)setQueryString:(NSString *)arg1 ;
-(void)setResultsTableViewController:(SearchUIResultsTableViewController *)arg1 ;
-(void)contentSizeDidChange:(CGSize)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<SearchUIResultsViewDelegate>)arg1 ;
-(SearchUIResultsTableViewController *)resultsTableViewController;
-(void)updateWithResultSections:(id)arg1 resetScrollPoint:(BOOL)arg2 ;
-(void)updateWithResultSections:(id)arg1 ;
-(BOOL)immediatelyShowCardForSingleResult;
-(BOOL)shouldMonitorScrollingPastBottomOfContent;
-(void)didBeginScrolling;
-(void)didFocusOnCell:(id)arg1 ;
-(void)setShouldMonitorScrollingPastBottomOfContent:(BOOL)arg1 ;
-(void)setShouldHideResultsUnderKeyboard:(BOOL)arg1 ;
-(BOOL)shouldHideResultsUnderKeyboard;
-(double)contentHeightForWidth:(double)arg1 maxHeight:(double)arg2 ;
-(void)performReturnKeyPressAction;
-(void)setImmediatelyShowCardForSingleResult:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)didScrollPastBottomOfContent;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setShouldUseStandardSectionInsets:(BOOL)arg1 ;
-(BOOL)shouldUseStandardSectionInsets;
-(NSString *)previousSearchString;
-(void)setPreviousSearchString:(NSString *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shortenTopFloatingHeader;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(void)highlightResult:(id)arg1 ;
-(void)replaceResult:(id)arg1 withResult:(id)arg2 ;
-(BOOL)showsVerticalScrollIndicator;
-(id)tableViewWillUpdateHandler;
-(id)tableViewDidUpdateHandler;
-(id)cellWillDisplayHandler;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setShortenTopFloatingHeader:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg1 ;
-(void)toggleShowMoreForSection:(unsigned long long)arg1 ;
-(BOOL)shouldUseInsetRoundedSections;
-(void)performScrollTestWithHandlerForFirstScrollCompletion:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performScrollTestWithCompletion:(/*^block*/id)arg1 ;
-(id)currentTableModel;
-(CGRect)scrollToIndexPath:(id)arg1 ;
-(void)tapAtIndexPath:(id)arg1 ;
-(void)setCellWillDisplayHandler:(id)arg1 ;
-(void)setTableViewWillUpdateHandler:(id)arg1 ;
-(void)setTableViewDidUpdateHandler:(id)arg1 ;
-(void)restoreResultsIfNeeded;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(unsigned long long)style;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

