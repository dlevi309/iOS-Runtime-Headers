/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(void)_handleLongPress:(id)arg1 ;
-(void)_evaluateSuggestionQueueSuspension;
-(id<SBSwitcherAppSuggestionViewControllerDelegate>)delegate;
-(void)setBestAppSuggestion:(SBBestAppSuggestion *)arg1 ;
-(void)_handleBannerTap:(id)arg1 ;
-(void)_activateBestAppSuggestion;
-(void)setShowSuggestions:(BOOL)arg1 ;
-(CGRect)_offscreenRectForBottomBanner;
-(void)_insertAndAnimateInBottomBannerForSuggestion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginPausingSuggestionUpdatesForReason:(id)arg1 ;
-(SBBestAppSuggestion *)bestAppSuggestion;
-(void)_animateOutAndRemoveCurrentBottomBannerWithCompletion:(/*^block*/id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setDelegate:(id<SBSwitcherAppSuggestionViewControllerDelegate>)arg1 ;
-(void)_activateCurrentSuggestion;
-(void)endPausingSuggestionUpdatesForReason:(id)arg1 ;
-(void)viewDidLoad;
-(void)_updateBottomBannerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)showSuggestions;
-(void)_setSuggestionQueueSuspended:(BOOL)arg1 ;
-(BOOL)_hasSuggestionBannerView;
-(BOOL)_isSuggestionQueueSuspended;
-(void)_setBestAppSuggestion:(id)arg1 animationCompletion:(/*^block*/id)arg2 ;
-(void)loadView;
-(unsigned long long)_bannerStyle;
-(CGRect)_idleOnscreenRectForBottomBanner;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

