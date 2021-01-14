/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UITransitionView.h>
#import <libobjc.A.dylib/CNComposeHeaderViewDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteResultsTableViewControllerDelegate.h>
#import <libobjc.A.dylib/CNComposeDragSourceDelegate.h>
#import <libobjc.A.dylib/CNComposeDropTargetDelegate.h>
#import <libobjc.A.dylib/MFComposeMultiViewDelegate.h>
#import <libobjc.A.dylib/MFComposeWebViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <libobjc.A.dylib/MFComposeFromViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/MFMailComposeContactsSearchControllerDelegate.h>

@protocol MFMailComposeViewDelegate, MFMailComposeRecipientTextViewDelegate, MFMailComposeToFieldDelegate;
@class UIScrollView, UIView, MFMailComposeToField, MFMailComposeRecipientTextView, MFComposeSubjectView, MFComposeFromView, MFComposeMultiView, MFComposeImageSizeView, MFComposeWebContentVariationView, MFComposeWebView, MFMessageContentLoadingView, NSMutableArray, UIResponder, NSInvocation, MFMailComposeContactsSearchController, CNAutocompleteResultsTableViewController, UIViewController, MFComposeDisplayMetrics, NSString;

@interface MFMailComposeView : UITransitionView <CNComposeHeaderViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNComposeDragSourceDelegate, CNComposeDropTargetDelegate, MFComposeMultiViewDelegate, MFComposeWebViewDelegate, UIPopoverControllerDelegate, MFComposeFromViewDelegate, UIScrollViewDelegate, MFMailComposeContactsSearchControllerDelegate> {

	UIScrollView* _bodyScroller;
	UIView* _headerView;
	UIView* _contentView;
	UIView* _shadowView;
	MFMailComposeToField* _toField;
	MFMailComposeRecipientTextView* _ccField;
	MFMailComposeRecipientTextView* _bccField;
	MFMailComposeRecipientTextView* _lastChangedRecipientView;
	MFMailComposeRecipientTextView* _activeRecipientView;
	BOOL _completedCCAndBCCFieldSetup;
	MFComposeSubjectView* _subjectField;
	MFComposeFromView* _fromField;
	MFComposeMultiView* _multiField;
	MFComposeImageSizeView* _imageSizeField;
	MFComposeWebContentVariationView* _webContentVariationField;
	MFComposeWebView* _webView;
	MFMessageContentLoadingView* _loadingView;
	BOOL _isDragging;
	NSMutableArray* _pendingDropRecipients;
	UIResponder* _firstResponderBeforeSheet;
	UIResponder* _pinningResponder;
	NSInvocation* _delayedPopoverInvocation;
	MFMailComposeContactsSearchController* _searchController;
	CNAutocompleteResultsTableViewController* _searchViewController;
	CNAutocompleteResultsTableViewController* _corecipientsSearchViewController;
	UIView* _corecipientsSearchTableViewSeparator;
	double _offsetBeforeSearch;
	double _keyboardIntersection;
	unsigned long long _options;
	CGSize _currentContentSize;
	unsigned long long _notifyingBodyField;
	unsigned _isChangingRecipients : 1;
	unsigned _isLoading : 1;
	unsigned _isShowingPeoplePicker : 1;
	unsigned _isRotating : 1;
	unsigned _isClosing : 1;
	unsigned _isForEditing : 1;
	unsigned _isAnimationDisabled : 1;
	unsigned _isDisambiguating : 1;
	unsigned _shouldShowOptionalHeaders : 1;
	unsigned _hasAppeared : 1;
	unsigned _corecipientsTableVisible : 1;
	id<MFMailComposeViewDelegate> _mailComposeViewDelegate;
	id<MFMailComposeRecipientTextViewDelegate> _composeRecipientViewDelegate;
	UIViewController* _popoverOwner;
	id<MFMailComposeToFieldDelegate> _toFieldDelegate;
	MFComposeDisplayMetrics* _displayMetrics;

}

@property (nonatomic,retain) MFComposeDisplayMetrics * displayMetrics;                                                //@synthesize displayMetrics=_displayMetrics - In the implementation block
@property (assign,nonatomic,__weak) id<MFMailComposeViewDelegate> composeViewDelegate;                                //@synthesize mailComposeViewDelegate=_mailComposeViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MFMailComposeRecipientTextViewDelegate> composeRecipientDelegate;              //@synthesize composeRecipientViewDelegate=_composeRecipientViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * popoverOwner;                                                  //@synthesize popoverOwner=_popoverOwner - In the implementation block
@property (assign,nonatomic,__weak) id<MFMailComposeToFieldDelegate> toFieldDelegate;                                 //@synthesize toFieldDelegate=_toFieldDelegate - In the implementation block
@property (assign,nonatomic) BOOL isForEditing; 
@property (assign,getter=isAnimationDisabled,nonatomic) BOOL animationDisabled; 
@property (assign,getter=isChangingRecipients,nonatomic) BOOL changingRecipients; 
@property (assign,getter=isShowingPeoplePicker,nonatomic) BOOL showingPeoplePicker; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (getter=isSearching,nonatomic,readonly) BOOL searching; 
@property (nonatomic,readonly) MFMailComposeToField * toField;                                                        //@synthesize toField=_toField - In the implementation block
@property (nonatomic,readonly) MFMailComposeRecipientTextView * ccField;                                              //@synthesize ccField=_ccField - In the implementation block
@property (nonatomic,readonly) MFMailComposeRecipientTextView * bccField;                                             //@synthesize bccField=_bccField - In the implementation block
@property (nonatomic,readonly) MFComposeSubjectView * subjectField;                                                   //@synthesize subjectField=_subjectField - In the implementation block
@property (nonatomic,readonly) MFComposeFromView * fromField;                                                         //@synthesize fromField=_fromField - In the implementation block
@property (nonatomic,readonly) MFComposeImageSizeView * imageSizeField;                                               //@synthesize imageSizeField=_imageSizeField - In the implementation block
@property (nonatomic,readonly) MFComposeMultiView * multiField;                                                       //@synthesize multiField=_multiField - In the implementation block
@property (nonatomic,readonly) MFComposeWebView * composeWebView; 
@property (nonatomic,readonly) MFComposeWebContentVariationView * webContentVariationField;                           //@synthesize webContentVariationField=_webContentVariationField - In the implementation block
@property (nonatomic,readonly) UIScrollView * bodyScroller;                                                           //@synthesize bodyScroller=_bodyScroller - In the implementation block
@property (nonatomic,readonly) MFMailComposeContactsSearchController * searchController;                              //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,readonly) CNAutocompleteResultsTableViewController * searchViewController;                       //@synthesize searchViewController=_searchViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNAutocompleteResultsTableViewController *)searchViewController;
-(void)setToFieldDelegate:(id<MFMailComposeToFieldDelegate>)arg1 ;
-(void)autocompleteResultsController:(id)arg1 didAskToRemoveRecipient:(id)arg2 ;
-(void)dismissSearchResultsIfDisambiguating;
-(BOOL)endEditing:(BOOL)arg1 ;
-(BOOL)isSearchResultsPopoverVisible;
-(void)_setupField:(id)arg1 withLabel:(id)arg2 navTitle:(id)arg3 ;
-(void)resetContentSize;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)layoutMarginsDidChange;
-(void)setAutoresizingMask:(unsigned long long)arg1 ;
-(void)parentWillClose;
-(UIViewController *)popoverOwner;
-(void)composeContactsSearchController:(id)arg1 didSortResults:(id)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)searchResultsPopoverWasDismissed;
-(void)didIgnoreSearchResults;
-(CGRect)_headerFrame;
-(BOOL)chooseSelectedSearchResult;
-(MFMailComposeRecipientTextView *)ccField;
-(void)_layoutSubviewsWithActiveRecipientView:(BOOL)arg1 changingView:(id)arg2 toSize:(CGSize)arg3 ;
-(void)setShowingPeoplePicker:(BOOL)arg1 ;
-(void)dropTargetDragExited:(id)arg1 ;
-(void)restoreFirstResponder;
-(void)dropTarget:(id)arg1 dragEnteredAtPoint:(CGPoint)arg2 ;
-(BOOL)_presentsSearchResultsTableAsPopover;
-(id<MFMailComposeViewDelegate>)composeViewDelegate;
-(BOOL)isForEditing;
-(MFComposeSubjectView *)subjectField;
-(void)composeContactsSearchController:(id)arg1 didFindCorecipients:(id)arg2 ;
-(void)_layoutSubviews:(BOOL)arg1 ;
-(void)_setCorecipientsTableViewVisible:(BOOL)arg1 withFieldFrame:(CGRect)arg2 ;
-(id)dragSource:(id)arg1 draggableItemsAtPoint:(CGPoint)arg2 ;
-(BOOL)isSearching;
-(void)_layoutLoadingView;
-(id)recipientTextViewForComposeMultiView:(id)arg1 ;
-(void)_setupBodyFieldWithHeaderFrame:(CGRect)arg1 enclosingFrame:(CGRect)arg2 changingView:(id)arg3 frameToPin:(CGRect)arg4 wasSearching:(BOOL)arg5 ;
-(void)_updateOptionalHeaderVisibilityForceVisible:(BOOL)arg1 ;
-(void)_updateTextViewHeightWithHeaderFrame:(CGRect)arg1 ;
-(void)_createCCAndBCCFieldIfNeededAndCompleteSetup:(BOOL)arg1 ;
-(void)_revealSelectionIfNeededWithChangingView:(id)arg1 ;
-(void)_setHeaderFrame:(CGRect)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)composeFromView:(id)arg1 didSelectAddress:(id)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)cancelSearch;
-(void)_updateFromField;
-(BOOL)isKeyboardVisible;
-(void)beginSearchForText:(id)arg1 recipientView:(id)arg2 ;
-(void)didAppear;
-(void)_updateKeyboardIntersection:(CGRect)arg1 ;
-(MFMailComposeContactsSearchController *)searchController;
-(MFComposeImageSizeView *)imageSizeField;
-(id)dragSource:(id)arg1 localObjectForDraggableItem:(id)arg2 ;
-(void)_endBlockingBodyScroll;
-(void)_finishUpRotationToInterfaceOrientation:(long long)arg1 ;
-(id)dragSource:(id)arg1 targetedPreviewForDraggableItem:(id)arg2 ;
-(void)setPopoverOwner:(UIViewController *)arg1 ;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(void)_dropItems:(id)arg1 recipientTextView:(id)arg2 ;
-(MFComposeDisplayMetrics *)displayMetrics;
-(void)saveFirstResponderWithKeyboardPinning:(BOOL)arg1 ;
-(void)setKeyboardVisible:(BOOL)arg1 animate:(BOOL)arg2 ;
-(BOOL)dragSource:(id)arg1 sessionAllowsMoveOperation:(id)arg2 ;
-(BOOL)presentSearchResults:(id)arg1 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 ;
-(void)_layoutComposeHeaderViewsWithChangingHeader:(id)arg1 toSize:(CGSize)arg2 withPinFrame:(out CGRect*)arg3 ;
-(void)selectNextSearchResult;
-(MFComposeMultiView *)multiField;
-(MFComposeWebView *)composeWebView;
-(void)_adjustHeaderFieldsPreferredContentSize;
-(void)_createImageSizeFieldIfNeededAndAddSubview:(BOOL)arg1 ;
-(void)_updateMultiField;
-(void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2 ;
-(void)_revealSelection;
-(void)_collectKeyViews:(id)arg1 ;
-(void)automaticKeyboardFinishedAppearing:(id)arg1 ;
-(void)_adjustScrollerForBottomView;
-(MFMailComposeRecipientTextView *)bccField;
-(void)saveFirstResponder;
-(BOOL)_userInterfaceConfigurationSupportsCorecipientsTableView;
-(void)disambiguateRecipient:(id)arg1 recipientView:(id)arg2 ;
-(void)_updateQuoteLevelMenu;
-(void)_multiFieldClicked;
-(void)composeWebViewTextChanged:(id)arg1 ;
-(id<MFMailComposeRecipientTextViewDelegate>)composeRecipientDelegate;
-(void)setAnimationDisabled:(BOOL)arg1 ;
-(void)removeFromSuperview;
-(void)dropTarget:(id)arg1 dragDidMoveToPoint:(CGPoint)arg2 ;
-(void)_updateTextViewOriginWithHeaderFrame:(CGRect)arg1 ;
-(BOOL)isChangingRecipients;
-(void)menuDidHide;
-(void)selectPreviousSearchResult;
-(double)_heightForBottomView;
-(void)_setDragging:(BOOL)arg1 ;
-(BOOL)isAnimationDisabled;
-(id<MFMailComposeToFieldDelegate>)toFieldDelegate;
-(void)_normalizeBodyFieldFrame;
-(id)dragSource:(id)arg1 suggestedNameForDraggableItem:(id)arg2 ;
-(void)composeContactsSearchController:(id)arg1 finishedWithResults:(BOOL)arg2 ;
-(MFComposeFromView *)fromField;
-(id)sendingAccountProxyForComposeContactsSearchController:(id)arg1 ;
-(void)clearSearchForActiveRecipientView;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)setIsForEditing:(BOOL)arg1 ;
-(void)setRecipientFieldsEditable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_focusedRecipientView;
-(BOOL)isLoading;
-(void)restoreFirstResponderWithKeyboardPinning:(BOOL)arg1 ;
-(void)_presentDelayedPopover;
-(UIScrollView *)bodyScroller;
-(void)setDisplayMetrics:(MFComposeDisplayMetrics *)arg1 ;
-(void)toggleImageSizeFieldIfNecessary;
-(BOOL)isShowingPeoplePicker;
-(void)setComposeRecipientDelegate:(id<MFMailComposeRecipientTextViewDelegate>)arg1 ;
-(void)setComposeViewDelegate:(id<MFMailComposeViewDelegate>)arg1 ;
-(void)automaticKeyboardFinishedDisappearing:(id)arg1 ;
-(void)findCorecipientsWithRecipientView:(id)arg1 ;
-(void)_displayMetricsDidChange;
-(void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(CGSize)arg3 ;
-(id)_searchResultsTable;
-(void)clearSearchForRecipientView:(id)arg1 reflow:(BOOL)arg2 clear:(BOOL)arg3 ;
-(void)dragSource:(id)arg1 willEndInteractionWithItems:(id)arg2 dropOperation:(unsigned long long)arg3 ;
-(void)focusFirstResponderAfterRecipientView:(id)arg1 ;
-(double)_verticalPadding;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)willDisappear;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)_adjustScrollerContentSize;
-(void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(CGSize)arg3 searchResultsWereDismissed:(BOOL)arg4 ;
-(void)layoutForChangedComposeHeaderView:(id)arg1 size:(CGSize)arg2 ;
-(MFMailComposeToField *)toField;
-(MFComposeWebContentVariationView *)webContentVariationField;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)layoutSubviews;
-(void)cancelDelayedPopover;
-(void)composeHeaderViewClicked:(id)arg1 ;
-(id)_corecipientResultsTable;
-(void)_setShadowViewVisible:(BOOL)arg1 frame:(CGRect)arg2 ;
-(void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)invalidateSearchResultRecipient:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)_cancelDelayedPopover;
-(void)_setUpContentView;
-(void)_beginPreventingScrollingToRevealSelection;
-(void)_cancelAnimations;
-(BOOL)_shouldShowCorecipientsTableView;
-(void)updateOptionalHeaderVisibility;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_beginBlockingBodyScroll;
-(void)_endPreventingScrollingToRevealSelection;
-(CGPoint)_headerViewOriginWithScrollViewOffsetCalculation;
-(void)dealloc;
-(void)dismissSearchResults;
-(void)dropTarget:(id)arg1 didDropDragItems:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)parentDidClose;
-(BOOL)presentSearchResults;
-(void)setChangingRecipients:(BOOL)arg1 ;
-(void)viewDidBecomeFirstResponder:(id)arg1 ;
@end

