/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/STSSuggestionViewControllerDelegate.h>
#import <libobjc.A.dylib/STSCategoryViewControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol STSSearchBrowserRootViewControllerDelegate, STSPickerSelectionDelegate;
@class UIViewController, NSMutableArray, STSSuggestionViewController, STSPicker, NSString, STSSearchModel, STSFeedbackReporter, STSCategoryViewController, STSSearchBrowserRootView, STSSearchBrowserHeaderView;

@interface STSSearchBrowserRootViewController : UIViewController <STSSuggestionViewControllerDelegate, STSCategoryViewControllerDelegate, UISearchBarDelegate> {

	UIViewController* _currentChildViewController;
	UIViewController* _legalNoticeViewController;
	double _keyboardHeight;
	double _topInset;
	double _bottomInset;
	NSMutableArray* _recentQueries;
	BOOL _didSendCategoryResultFeedback;
	NSMutableArray* _constraints;
	BOOL _requestedExpandedPresentation;
	STSSuggestionViewController* _suggestionViewController;
	STSPicker* _pickerViewController;
	id<STSSearchBrowserRootViewControllerDelegate> _selectionDelegate;
	id<STSPickerSelectionDelegate> _pickerSelectionDelegate;
	NSString* _conversationID;
	STSSearchModel* _searchModel;
	unsigned long long _presentationStyle;
	STSFeedbackReporter* _feedbackReporter;
	STSCategoryViewController* _categoryViewController;

}

@property (nonatomic,retain) STSSearchBrowserRootView * view; 
@property (nonatomic,retain) STSSuggestionViewController * suggestionViewController;                               //@synthesize suggestionViewController=_suggestionViewController - In the implementation block
@property (nonatomic,retain) STSPicker * pickerViewController;                                                     //@synthesize pickerViewController=_pickerViewController - In the implementation block
@property (nonatomic,readonly) STSFeedbackReporter * feedbackReporter;                                             //@synthesize feedbackReporter=_feedbackReporter - In the implementation block
@property (assign,nonatomic) BOOL requestedExpandedPresentation;                                                   //@synthesize requestedExpandedPresentation=_requestedExpandedPresentation - In the implementation block
@property (nonatomic,retain) STSCategoryViewController * categoryViewController;                                   //@synthesize categoryViewController=_categoryViewController - In the implementation block
@property (nonatomic,readonly) STSSearchBrowserHeaderView * searchHeaderView; 
@property (assign,nonatomic,__weak) id<STSSearchBrowserRootViewControllerDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<STSPickerSelectionDelegate> pickerSelectionDelegate;                        //@synthesize pickerSelectionDelegate=_pickerSelectionDelegate - In the implementation block
@property (nonatomic,retain) NSString * conversationID;                                                            //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,readonly) STSSearchModel * searchModel;                                                       //@synthesize searchModel=_searchModel - In the implementation block
@property (assign,nonatomic) unsigned long long presentationStyle;                                                 //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateContentInsets;
-(unsigned long long)presentationStyle;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)setPresentationStyle:(unsigned long long)arg1 ;
-(STSSearchModel *)searchModel;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(NSString *)conversationID;
-(void)setConversationID:(NSString *)arg1 ;
-(void)setTopInset:(double)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(STSPicker *)pickerViewController;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)showSuggestions;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(id)initWithSearchModel:(id)arg1 ;
-(id<STSSearchBrowserRootViewControllerDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<STSSearchBrowserRootViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)setBottomInset:(double)arg1 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)setPickerViewController:(STSPicker *)arg1 ;
-(STSSuggestionViewController *)suggestionViewController;
-(void)setSuggestionViewController:(STSSuggestionViewController *)arg1 ;
-(void)resetContentOffset;
-(void)dealloc;
-(void)sendVisibleResultsFeedback;
-(void)categoryViewController:(id)arg1 didSelectCategory:(id)arg2 suggested:(BOOL)arg3 ;
-(void)categoryViewController:(id)arg1 didSelectRecent:(id)arg2 ;
-(void)categoryViewControllerDidSelectClearRecentsButton:(id)arg1 ;
-(void)categoryViewControllerScrollViewWillBeginDragging:(id)arg1 ;
-(void)_showLegalNotice;
-(void)showCategories;
-(void)showPickerAndPerformQuery:(id)arg1 requestType:(long long)arg2 ;
-(void)setRequestedExpandedPresentation:(BOOL)arg1 ;
-(STSSearchBrowserHeaderView *)searchHeaderView;
-(void)_clearSuggestions;
-(void)_clearRecents;
-(void)_addQueryToRecents:(id)arg1 ;
-(void)_transitionContentFromViewController:(id)arg1 toViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)suggestionViewController:(id)arg1 didSelectSuggestionAtIndex:(unsigned long long)arg2 ;
-(void)suggestionViewControllerDidTapLogo:(id)arg1 ;
-(void)setPickerSelectionDelegate:(id<STSPickerSelectionDelegate>)arg1 ;
-(BOOL)isPickerVisible;
-(void)fetchCategories;
-(id<STSPickerSelectionDelegate>)pickerSelectionDelegate;
-(STSFeedbackReporter *)feedbackReporter;
-(BOOL)requestedExpandedPresentation;
-(STSCategoryViewController *)categoryViewController;
-(void)setCategoryViewController:(STSCategoryViewController *)arg1 ;
@end

