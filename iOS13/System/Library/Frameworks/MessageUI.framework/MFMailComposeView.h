/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UITransitionView.h>
#import <libobjc.A.dylib/CNComposeHeaderViewDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteResultsTableViewControllerDelegate.h>
#import <libobjc.A.dylib/CNComposeDragSourceDelegate.h>
#import <libobjc.A.dylib/CNComposeDropTargetDelegate.h>
#import <libobjc.A.dylib/MFComposeWebViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/MFMailComposeContactsSearchControllerDelegate.h>

@protocol MFMailComposeViewDelegate, MFMailComposeRecipientTextViewDelegate, MFMailComposeToFieldDelegate;
@class UIScrollView, UIView, MFMailComposeToField, MFMailComposeRecipientTextView, MFComposeSubjectView, MFComposeFromView, MFComposeMultiView, MFComposeImageSizeView, UIPickerView, MFFromAddressViewController, MFComposeWebView, MFMessageContentLoadingView, NSMutableArray, UIResponder, NSInvocation, MFMailComposeContactsSearchController, CNAutocompleteResultsTableViewController, UIViewController, MFComposeDisplayMetrics, NSString;

@interface MFMailComposeView : UITransitionView <CNComposeHeaderViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNComposeDragSourceDelegate, CNComposeDropTargetDelegate, MFComposeWebViewDelegate, UIPopoverControllerDelegate, UIScrollViewDelegate, MFMailComposeContactsSearchControllerDelegate> {

	UIScrollView* _bodyScroller;
	UIView* _headerView;
	UIView* _contentView;
	UIView* _shadowView;
	MFMailComposeToField* _toField;
	MFMailComposeRecipientTextView* _ccField;
	MFMailComposeRecipientTextView* _bccField;
	MFMailComposeRecipientTextView* _lastChangedRecipientView;
	MFMailComposeRecipientTextView* _activeRecipientView;
	MFComposeSubjectView* _subjectField;
	MFComposeFromView* _fromField;
	MFComposeMultiView* _multiField;
	MFComposeImageSizeView* _imageSizeField;
	UIPickerView* _fromAddressPickerView;
	MFFromAddressViewController* _fromAddressViewController;
	UIView* _fromAddressPickerBackgroundView;
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
	unsigned long long _fromAddressPickerDisplayMode;
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
@property (nonatomic,readonly) UIScrollView * bodyScroller;                                                           //@synthesize bodyScroller=_bodyScroller - In the implementation block
@property (nonatomic,readonly) MFMailComposeContactsSearchController * searchController;                              //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,readonly) CNAutocompleteResultsTableViewController * searchViewController;                       //@synthesize searchViewController=_searchViewController - In the implementation block
@property (nonatomic,readonly) unsigned long long fromAddressPickerDisplayMode;                                       //@synthesize fromAddressPickerDisplayMode=_fromAddressPickerDisplayMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)expectedFromAddressPickerDisplayModeForTraitCollection:(id)arg1 ;
-(void)dealloc;
-(void)removeFromSuperview;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setAutoresizingMask:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)layoutMarginsDidChange;
-(MFMailComposeContactsSearchController *)searchController;
-(CGRect)_headerFrame;
-(BOOL)endEditing:(BOOL)arg1 ;
-(void)_setDragging:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(id)bottomView;
-(void)_collectKeyViews:(id)arg1 ;
-(BOOL)isLoading;
-(void)selectNextSearchResult;
-(void)selectPreviousSearchResult;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)isSearching;
-(void)cancelSearch;
-(void)_layoutSubviews:(BOOL)arg1 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(void)invalidateSearchResultRecipient:(id)arg1 ;
-(void)composeHeaderViewClicked:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2 ;
-(void)autocompleteResultsController:(id)arg1 didAskToRemoveRecipient:(id)arg2 ;
-(void)didAppear;
-(void)willDisappear;
-(MFMailComposeToField *)toField;
-(void)parentWillClose;
-(void)parentDidClose;
-(BOOL)isKeyboardVisible;
-(CNAutocompleteResultsTableViewController *)searchViewController;
-(void)_layoutLoadingView;
-(double)_verticalPadding;
-(BOOL)presentSearchResults:(id)arg1 ;
-(MFComposeDisplayMetrics *)displayMetrics;
-(MFComposeWebView *)composeWebView;
-(void)composeWebViewTextChanged:(id)arg1 ;
-(id)dragSource:(id)arg1 localObjectForDraggableItem:(id)arg2 ;
-(id)dragSource:(id)arg1 targetedPreviewForDraggableItem:(id)arg2 ;
-(id)dragSource:(id)arg1 suggestedNameForDraggableItem:(id)arg2 ;
-(void)dragSource:(id)arg1 willEndInteractionWithItems:(id)arg2 dropOperation:(unsigned long long)arg3 ;
-(BOOL)dragSource:(id)arg1 sessionAllowsMoveOperation:(id)arg2 ;
-(id)dragSource:(id)arg1 draggableItemsAtPoint:(CGPoint)arg2 ;
-(void)dropTarget:(id)arg1 dragEnteredAtPoint:(CGPoint)arg2 ;
-(void)dropTargetDragExited:(id)arg1 ;
-(void)dropTarget:(id)arg1 dragDidMoveToPoint:(CGPoint)arg2 ;
-(void)dropTarget:(id)arg1 didDropDragItems:(id)arg2 atPoint:(CGPoint)arg3 ;
-(id)sendingAccountProxyForComposeContactsSearchController:(id)arg1 ;
-(void)composeContactsSearchController:(id)arg1 didFindCorecipients:(id)arg2 ;
-(void)composeContactsSearchController:(id)arg1 didSortResults:(id)arg2 ;
-(void)composeContactsSearchController:(id)arg1 finishedWithResults:(BOOL)arg2 ;
-(void)setComposeRecipientDelegate:(id<MFMailComposeRecipientTextViewDelegate>)arg1 ;
-(void)setComposeViewDelegate:(id<MFMailComposeViewDelegate>)arg1 ;
-(void)setPopoverOwner:(UIViewController *)arg1 ;
-(void)resetContentSize;
-(void)setIsForEditing:(BOOL)arg1 ;
-(void)_displayMetricsDidChange;
-(void)fromAddressPickerNeedsToBeRefreshed;
-(BOOL)isShowingFromAddressPickerWheel;
-(void)setFromAddressPickerVisible:(BOOL)arg1 ;
-(MFComposeSubjectView *)subjectField;
-(void)setKeyboardVisible:(BOOL)arg1 animate:(BOOL)arg2 ;
-(void)setAnimationDisabled:(BOOL)arg1 ;
-(void)saveFirstResponder;
-(MFComposeFromView *)fromField;
-(MFComposeMultiView *)multiField;
-(void)restoreFirstResponder;
-(MFMailComposeRecipientTextView *)bccField;
-(void)viewDidBecomeFirstResponder:(id)arg1 ;
-(void)updateOptionalHeaderVisibility;
-(void)toggleImageSizeFieldIfNecessary;
-(void)_beginBlockingBodyScroll;
-(void)_endBlockingBodyScroll;
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 ;
-(MFMailComposeRecipientTextView *)ccField;
-(MFComposeImageSizeView *)imageSizeField;
-(void)setToFieldDelegate:(id<MFMailComposeToFieldDelegate>)arg1 ;
-(void)setRecipientFieldsEditable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)restoreFirstResponderWithKeyboardPinning:(BOOL)arg1 ;
-(void)setDisplayMetrics:(MFComposeDisplayMetrics *)arg1 ;
-(void)setShowingPeoplePicker:(BOOL)arg1 ;
-(void)cancelDelayedPopover;
-(unsigned long long)fromAddressPickerDisplayMode;
-(void)findCorecipientsWithRecipientView:(id)arg1 ;
-(void)clearSearchForRecipientView:(id)arg1 reflow:(BOOL)arg2 clear:(BOOL)arg3 ;
-(void)didIgnoreSearchResults;
-(void)setChangingRecipients:(BOOL)arg1 ;
-(void)disambiguateRecipient:(id)arg1 recipientView:(id)arg2 ;
-(void)dismissSearchResultsIfDisambiguating;
-(void)layoutForChangedComposeHeaderView:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)isShowingPeoplePicker;
-(void)beginSearchForText:(id)arg1 recipientView:(id)arg2 ;
-(void)clearSearchForActiveRecipientView;
-(void)saveFirstResponderWithKeyboardPinning:(BOOL)arg1 ;
-(void)focusFirstResponderAfterRecipientView:(id)arg1 ;
-(BOOL)presentSearchResults;
-(void)dismissSearchResults;
-(BOOL)chooseSelectedSearchResult;
-(BOOL)isSearchResultsPopoverVisible;
-(void)searchResultsPopoverWasDismissed;
-(void)fromAddressPickerPopoverWasDismissed;
-(id<MFMailComposeToFieldDelegate>)toFieldDelegate;
-(void)_setUpContentView;
-(void)_setupField:(id)arg1 withLabel:(id)arg2 navTitle:(id)arg3 ;
-(void)_multiFieldClicked;
-(void)menuDidHide;
-(void)automaticKeyboardFinishedAppearing:(id)arg1 ;
-(void)automaticKeyboardFinishedDisappearing:(id)arg1 ;
-(void)_adjustHeaderFieldsPreferredContentSize;
-(void)_setHeaderFrame:(CGRect)arg1 ;
-(void)_cancelAnimations;
-(BOOL)_presentsSearchResultsTableAsPopover;
-(void)setFromAddressPickerVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateTextViewHeightWithHeaderFrame:(CGRect)arg1 ;
-(void)_adjustScrollerContentSize;
-(void)_revealSelectionIfNeededWithChangingView:(id)arg1 ;
-(void)_layoutComposeHeaderViewsWithChangingHeader:(id)arg1 toSize:(CGSize)arg2 withPinFrame:(out CGRect*)arg3 ;
-(double)_heightForBottomView;
-(void)_updateTextViewOriginWithHeaderFrame:(CGRect)arg1 ;
-(id)_searchResultsTable;
-(void)_cancelDelayedPopover;
-(void)_presentDelayedPopover;
-(void)_setShadowViewVisible:(BOOL)arg1 frame:(CGRect)arg2 ;
-(BOOL)_userInterfaceConfigurationSupportsCorecipientsTableView;
-(id)_corecipientResultsTable;
-(void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(CGSize)arg3 searchResultsWereDismissed:(BOOL)arg4 ;
-(BOOL)_shouldShowCorecipientsTableView;
-(void)_setCorecipientsTableViewVisible:(BOOL)arg1 withFieldFrame:(CGRect)arg2 ;
-(void)_updateFromField;
-(void)_updateMultiField;
-(void)_layoutSubviewsWithActiveRecipientView:(BOOL)arg1 changingView:(id)arg2 toSize:(CGSize)arg3 ;
-(CGPoint)_headerViewOriginWithScrollViewOffsetCalculation;
-(BOOL)isChangingRecipients;
-(void)_setupBodyFieldWithHeaderFrame:(CGRect)arg1 enclosingFrame:(CGRect)arg2 changingView:(id)arg3 frameToPin:(CGRect)arg4 wasSearching:(BOOL)arg5 ;
-(void)_revealSelection;
-(void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(CGSize)arg3 ;
-(UIScrollView *)bodyScroller;
-(void)_updateOptionalHeaderVisibilityForceVisible:(BOOL)arg1 ;
-(void)_dropItems:(id)arg1 recipientTextView:(id)arg2 ;
-(void)_adjustScrollerForBottomView;
-(void)_finishUpRotationToInterfaceOrientation:(long long)arg1 ;
-(id)_focusedRecipientView;
-(id<MFMailComposeViewDelegate>)composeViewDelegate;
-(void)_normalizeBodyFieldFrame;
-(void)_setBodyShouldScrollToFirstResponder:(BOOL)arg1 ;
-(void)_updateKeyboardIntersection:(CGRect)arg1 ;
-(void)_beginPreventingScrollingToRevealSelection;
-(void)_endPreventingScrollingToRevealSelection;
-(void)_updateQuoteLevelMenu;
-(id)_allHeaderViews;
-(BOOL)isForEditing;
-(BOOL)isAnimationDisabled;
-(id<MFMailComposeRecipientTextViewDelegate>)composeRecipientDelegate;
-(UIViewController *)popoverOwner;
@end

