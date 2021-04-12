/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol OS_dispatch_queue, SBSwitcherAppSuggestionViewControllerDelegate;
@class SBBestAppSuggestion, SBSwitcherAppSuggestionBannerView, UITapGestureRecognizer, UILongPressGestureRecognizer, NSObject, NSMutableSet;

@interface SBSwitcherAppSuggestionViewController : UIViewController {

	SBBestAppSuggestion* _bestAppSuggestion;
	BOOL _showSuggestions;
	SBSwitcherAppSuggestionBannerView* _bannerView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	BOOL _presentingOrDismissingBanner;
	NSObject*<OS_dispatch_queue> _setSuggestionQueue;
	NSMutableSet* _pauseSuggestionUpdateReasons;
	BOOL _suggestionQueueSuspended;
	id<SBSwitcherAppSuggestionViewControllerDelegate> _delegate;

}

@property (assign,setter=_setSuggestionQueueSuspended:,getter=_isSuggestionQueueSuspended,nonatomic) BOOL suggestionQueueSuspended;              //@synthesize suggestionQueueSuspended=_suggestionQueueSuspended - In the implementation block
@property (nonatomic,retain) SBBestAppSuggestion * bestAppSuggestion;                                                                            //@synthesize bestAppSuggestion=_bestAppSuggestion - In the implementation block
@property (assign,nonatomic) BOOL showSuggestions;                                                                                               //@synthesize showSuggestions=_showSuggestions - In the implementation block
@property (assign,nonatomic,__weak) id<SBSwitcherAppSuggestionViewControllerDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<SBSwitcherAppSuggestionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBSwitcherAppSuggestionViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(unsigned long long)_bannerStyle;
-(SBBestAppSuggestion *)bestAppSuggestion;
-(void)_setBestAppSuggestion:(id)arg1 animationCompletion:(/*^block*/id)arg2 ;
-(void)_activateCurrentSuggestion;
-(void)setBestAppSuggestion:(SBBestAppSuggestion *)arg1 ;
-(void)_evaluateSuggestionQueueSuspension;
-(void)_setSuggestionQueueSuspended:(BOOL)arg1 ;
-(void)_updateBottomBannerWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleBannerTap:(id)arg1 ;
-(CGRect)_idleOnscreenRectForBottomBanner;
-(CGRect)_offscreenRectForBottomBanner;
-(void)_insertAndAnimateInBottomBannerForSuggestion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_animateOutAndRemoveCurrentBottomBannerWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateBestAppSuggestion;
-(void)beginPausingSuggestionUpdatesForReason:(id)arg1 ;
-(void)endPausingSuggestionUpdatesForReason:(id)arg1 ;
-(void)setShowSuggestions:(BOOL)arg1 ;
-(BOOL)_hasSuggestionBannerView;
-(BOOL)showSuggestions;
-(BOOL)_isSuggestionQueueSuspended;
@end

