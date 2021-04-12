/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIInputViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIKeyboardAutocorrectionObserver.h>
#import <libobjc.A.dylib/TUISystemInputAssistantViewDelegate.h>
#import <libobjc.A.dylib/TUIEmojiSearchInputViewControllerDelegate.h>

@protocol UIKeyInput, UIPredictiveViewController;
@class NSTimer, UIViewController, UIView, UITextInputAssistantItem, NSMutableDictionary, TUISystemInputAssistantLayoutStandard, TUISystemInputAssistantLayoutSplit, TUIEmojiSearchInputViewController, TUISystemInputAssistantView, NSString;

@interface UISystemInputAssistantViewController : UIInputViewController <UIPopoverPresentationControllerDelegate, UIKeyboardAutocorrectionObserver, TUISystemInputAssistantViewDelegate, TUIEmojiSearchInputViewControllerDelegate> {

	id<UIKeyInput> _pendingResponderForChangedNotification;
	NSTimer* _pendingResponderChangedTimer;
	BOOL _postedSwitchFromEmojiNotification;
	BOOL _assistantEnabledPreference;
	BOOL _assistantOniPhonePreference;
	BOOL _hasCheckedPreferences;
	BOOL _currentlyCheckingPreferences;
	UIViewController*<UIPredictiveViewController> _centerViewController;
	UIView* _popoverSourceView;
	UITextInputAssistantItem* _observedInputAssistantItem;
	NSMutableDictionary* _cachedPredictiveViewControllers;
	TUISystemInputAssistantLayoutStandard* _standardAssistantViewLayout;
	TUISystemInputAssistantLayoutSplit* _splitAssistantViewLayout;
	TUIEmojiSearchInputViewController* _emojiSearchViewController;
	UIViewController*<UIPredictiveViewController> _predictiveViewController;
	UIViewController* _expandedItemsController;

}

@property (assign,nonatomic,__weak) UIView * popoverSourceView;                                                   //@synthesize popoverSourceView=_popoverSourceView - In the implementation block
@property (assign,nonatomic,__weak) UITextInputAssistantItem * observedInputAssistantItem;                        //@synthesize observedInputAssistantItem=_observedInputAssistantItem - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPredictiveViewControllers;                               //@synthesize cachedPredictiveViewControllers=_cachedPredictiveViewControllers - In the implementation block
@property (nonatomic,retain) TUISystemInputAssistantLayoutStandard * standardAssistantViewLayout;                 //@synthesize standardAssistantViewLayout=_standardAssistantViewLayout - In the implementation block
@property (nonatomic,retain) TUISystemInputAssistantLayoutSplit * splitAssistantViewLayout;                       //@synthesize splitAssistantViewLayout=_splitAssistantViewLayout - In the implementation block
@property (nonatomic,retain) TUIEmojiSearchInputViewController * emojiSearchViewController;                       //@synthesize emojiSearchViewController=_emojiSearchViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<UIPredictiveViewController> predictiveViewController;              //@synthesize predictiveViewController=_predictiveViewController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * expandedItemsController;                                   //@synthesize expandedItemsController=_expandedItemsController - In the implementation block
@property (assign) BOOL assistantEnabledPreference;                                                               //@synthesize assistantEnabledPreference=_assistantEnabledPreference - In the implementation block
@property (assign) BOOL assistantOniPhonePreference;                                                              //@synthesize assistantOniPhonePreference=_assistantOniPhonePreference - In the implementation block
@property (assign) BOOL hasCheckedPreferences;                                                                    //@synthesize hasCheckedPreferences=_hasCheckedPreferences - In the implementation block
@property (assign) BOOL currentlyCheckingPreferences;                                                             //@synthesize currentlyCheckingPreferences=_currentlyCheckingPreferences - In the implementation block
@property (nonatomic,retain) UIViewController*<UIPredictiveViewController> centerViewController;                  //@synthesize centerViewController=_centerViewController - In the implementation block
@property (nonatomic,readonly) TUISystemInputAssistantView * systemInputAssistantView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_requiresProxyInterface;
+(double)_defaultPreferredHeightForTraitCollection:(id)arg1 ;
-(void)emojiSearchTextFieldWillBecomeActive:(id)arg1 ;
-(double)preferredHeightForTraitCollection:(id)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(UIView *)popoverSourceView;
-(double)_buttonBarWidthForTraitCollection:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(void)emojiSearchTextFieldWillBecomeInactive:(id)arg1 ;
-(void)_responderCapabilitiesChangedNotification:(id)arg1 ;
-(BOOL)layoutHasBuiltinAssistantView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UITextInputAssistantItem *)observedInputAssistantItem;
-(void)_didChangePlacementOrInputSourceNotification:(id)arg1 ;
-(void)setInputAssistantButtonItemsForResponder:(id)arg1 ;
-(UIViewController*<UIPredictiveViewController>)predictiveViewController;
-(void)_expandBarItems;
-(void)emojiSearchTextFieldDidBecomeInactive:(id)arg1 ;
-(id)init;
-(id)predictionViewController;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)systemInputAssistantView:(id)arg1 wantsToShowCollapsedItemGroup:(id)arg2 fromView:(id)arg3 ;
-(void)setExpandedItemsController:(UIViewController *)arg1 ;
-(void)setCenterViewController:(UIViewController*<UIPredictiveViewController>)arg1 ;
-(void)setAssistantEnabledPreference:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setEmojiSearchViewController:(TUIEmojiSearchInputViewController *)arg1 ;
-(BOOL)currentlyCheckingPreferences;
-(void)setAssistantOniPhonePreference:(BOOL)arg1 ;
-(void)_responderChangedNotification:(id)arg1 ;
-(void)setObservedInputAssistantItem:(UITextInputAssistantItem *)arg1 ;
-(BOOL)_isAssistantPreferenceEnabled;
-(void)automaticallySetCenterViewControllerBasedOnInputDelegate:(id)arg1 ;
-(void)_inputModeChanged:(id)arg1 ;
-(void)_updateCenterViewWidthForInterfaceOrientation:(long long)arg1 ;
-(void)_didReceiveTextEffectsRotationNotification:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)setStandardAssistantViewLayout:(TUISystemInputAssistantLayoutStandard *)arg1 ;
-(UIViewController*<UIPredictiveViewController>)centerViewController;
-(BOOL)assistantOniPhonePreference;
-(id)_defaultTintColor;
-(void)_showCandidates;
-(void)_registerForAssistantViewNotifications;
-(BOOL)_canShowWhileLocked;
-(BOOL)hasCheckedPreferences;
-(void)autocorrectionController:(id)arg1 didUpdateAutocorrectionList:(id)arg2 ;
-(void)viewDidLoad;
-(void)emojiSearchWillInsertEmoji:(id)arg1 forSearchQuery:(id)arg2 ;
-(UIViewController *)expandedItemsController;
-(TUISystemInputAssistantLayoutSplit *)splitAssistantViewLayout;
-(BOOL)_assistantItemsVisibleForResponder:(id)arg1 ;
-(NSMutableDictionary *)cachedPredictiveViewControllers;
-(TUIEmojiSearchInputViewController *)emojiSearchViewController;
-(BOOL)isEmojiSearchResultsVisible;
-(void)_collapseBarItems;
-(BOOL)assistantEnabledPreference;
-(void)setHasCheckedPreferences:(BOOL)arg1 ;
-(void)_willChangePlacementNotification:(id)arg1 ;
-(void)setSplitAssistantViewLayout:(TUISystemInputAssistantLayoutSplit *)arg1 ;
-(BOOL)_shouldCollapseEmojiSearchView;
-(BOOL)_centerPredictionViewVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(void)_updateSystemInputAssistantViewStylingForInputAssistantItem:(id)arg1 ;
-(id)_popoverViewControllerForBarButtonItemGroup:(id)arg1 ;
-(void)setPopoverSourceView:(UIView *)arg1 ;
-(TUISystemInputAssistantView *)systemInputAssistantView;
-(void)setPredictiveViewController:(UIViewController*<UIPredictiveViewController>)arg1 ;
-(void)updateCenterViewVisibilityStateForInputDelegate:(id)arg1 ;
-(BOOL)shouldBeShownForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(void)updateAssistantPreferences;
-(void)autocorrectionControllerDidClearAutocorrections:(id)arg1 ;
-(void)loadView;
-(BOOL)_shouldShowExpandableButtonBarItemsForResponder:(id)arg1 ;
-(BOOL)_allowedToShowBarButtonItemsInline:(id)arg1 ;
-(BOOL)_isEmojiInputMode;
-(void)setCachedPredictiveViewControllers:(NSMutableDictionary *)arg1 ;
-(id)candidateViewController;
-(void)preferencesControllerChanged:(id)arg1 ;
-(BOOL)_canShowCenterBarButtonItem;
-(double)_centerViewWidthForTraitCollection:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(void)_beginObservingInputAssistantItemForRelevantItemChanges:(id)arg1 ;
-(id)_currentInputDelegate;
-(void)_candidatesChanged;
-(BOOL)_shouldShowEmojiSearchViewControllerForInputDelegate:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)emojiSearchTextFieldDidBecomeActive:(id)arg1 ;
-(TUISystemInputAssistantLayoutStandard *)standardAssistantViewLayout;
-(void)_queueResponderChangedForNewResponder:(id)arg1 ;
-(void)setCurrentlyCheckingPreferences:(BOOL)arg1 ;
-(void)dealloc;
-(id)_inputDelegateAsResponder:(id)arg1 ;
-(void)_keyboardDictationAvailabilityDidChangeNotification:(id)arg1 ;
@end

