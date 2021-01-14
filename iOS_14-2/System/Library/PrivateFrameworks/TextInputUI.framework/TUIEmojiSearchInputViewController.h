/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIInputViewController.h>
#import <libobjc.A.dylib/TUIEmojiSearchTextFieldDelegate.h>
#import <libobjc.A.dylib/TUIEmojiSearchSourceDelegate.h>
#import <libobjc.A.dylib/TUIEmojiSearchResultsCollectionViewControllerDelegate.h>
#import <UIKit/UIPredictiveViewController.h>

@protocol TUIEmojiSearchInputViewControllerDelegate, UIPredictiveViewController;
@class NSArray, TUIEmojiSearchSource, TUIEmojiSearchResultsCollectionViewController, TUIEmojiVariantSelectorView, UITapGestureRecognizer, TouchExclusionView, NSTimer, NSString, NSDate, NSLayoutConstraint, TUIEmojiSearchAnalyticsSession, _UIKeyboardFeedbackGenerator, TUIEmojiSearchView, UIViewController;

@interface TUIEmojiSearchInputViewController : UIInputViewController <TUIEmojiSearchTextFieldDelegate, TUIEmojiSearchSourceDelegate, TUIEmojiSearchResultsCollectionViewControllerDelegate, UIPredictiveViewController> {

	TUIEmojiSearchSource* _emojiSearchSource;
	TUIEmojiSearchResultsCollectionViewController* _resultsViewController;
	TUIEmojiVariantSelectorView* _variantSelectorView;
	UITapGestureRecognizer* _variantSelectorDismissGesture;
	TouchExclusionView* _variantSelectorDismissOverlayView;
	NSTimer* _resultsUpdateRateLimitTimer;
	NSArray* _rateLimitedResults;
	NSString* _rateLimitedSearchQuery;
	BOOL _canAutocorrectWithCurrentInputMode;
	NSTimer* _waitForAutocorrectionDelayTimer;
	NSString* _exactSearchQuery;
	NSString* _autocorrectedSearchQuery;
	NSDate* _lastActivationDate;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _trailingConstraint;
	TUIEmojiSearchAnalyticsSession* _analyticsSession;
	_UIKeyboardFeedbackGenerator* _feedbackGenerator;
	id<TUIEmojiSearchInputViewControllerDelegate> _delegate;
	TUIEmojiSearchView* _emojiSearchView;
	UIViewController*<UIPredictiveViewController> _childPredictionViewController;

}

@property (assign,nonatomic,__weak) id<TUIEmojiSearchInputViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TUIEmojiSearchView * emojiSearchView;                                                   //@synthesize emojiSearchView=_emojiSearchView - In the implementation block
@property (nonatomic,retain) UIViewController*<UIPredictiveViewController> childPredictionViewController;              //@synthesize childPredictionViewController=_childPredictionViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * displayedCandidates; 
-(void)emojiSearchTextFieldWillBecomeActive:(id)arg1 ;
-(double)preferredHeightForTraitCollection:(id)arg1 ;
-(void)emojiSearchSource:(id)arg1 didProduceResults:(id)arg2 forExactQuery:(id)arg3 autocorrectedQuery:(id)arg4 ;
-(void)emojiSearchTextFieldWillBecomeInactive:(id)arg1 ;
-(BOOL)hidesExpandableButton;
-(void)emojiSearchTextFieldDidBecomeInactive:(id)arg1 ;
-(void)emojiSearchTextField:(id)arg1 didChangeSearchString:(id)arg2 ;
-(id<TUIEmojiSearchInputViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_dismissVariantSelector;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIEdgeInsets)_keyboardInsets;
-(void)setChildPredictionViewController:(UIViewController*<UIPredictiveViewController>)arg1 ;
-(void)emojiSearchResultsController:(id)arg1 didRequestVariantSelectorForEmojiToken:(id)arg2 fromRect:(CGRect)arg3 ;
-(void)_didRecognizeVariantDismissGesture:(id)arg1 ;
-(void)setDelegate:(id<TUIEmojiSearchInputViewControllerDelegate>)arg1 ;
-(TUIEmojiSearchView *)emojiSearchView;
-(UIViewController*<UIPredictiveViewController>)childPredictionViewController;
-(BOOL)_canShowWhileLocked;
-(void)emojiSearchTextFieldWillClear:(id)arg1 ;
-(void)viewDidLoad;
-(void)_displayResults:(id)arg1 forExactQuery:(id)arg2 autocorrectedQuery:(id)arg3 ;
-(void)_keyboardInputModeDidChange:(id)arg1 ;
-(void)_selectedEmojiString:(id)arg1 ;
-(void)_variantSelectorValueChanged:(id)arg1 ;
-(void)autocorrectionListDidBecomeAvailable:(id)arg1 ;
-(void)loadView;
-(void)emojiSearchResultsController:(id)arg1 didSelectEmoji:(id)arg2 ;
-(BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(void)emojiSearchTextFieldDidBecomeActive:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(NSArray *)displayedCandidates;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

