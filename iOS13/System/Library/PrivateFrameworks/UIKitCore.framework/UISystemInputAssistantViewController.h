/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIInputViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol UIPredictiveViewController;
@class UIViewController, UIView, UITextInputAssistantItem, NSMutableDictionary, TUISystemInputAssistantLayoutStandard, TUISystemInputAssistantLayoutSplit, TUISystemInputAssistantView, NSString;

@interface UISystemInputAssistantViewController : UIInputViewController <UIPopoverPresentationControllerDelegate> {

	UIViewController*<UIPredictiveViewController> _centerViewController;
	UIView* _popoverSourceView;
	UITextInputAssistantItem* _observedInputAssistantItem;
	NSMutableDictionary* _cachedPredictiveViewControllers;
	TUISystemInputAssistantLayoutStandard* _standardAssistantViewLayout;
	TUISystemInputAssistantLayoutSplit* _splitAssistantViewLayout;

}

@property (assign,nonatomic,__weak) UIView * popoverSourceView;                                                //@synthesize popoverSourceView=_popoverSourceView - In the implementation block
@property (assign,nonatomic,__weak) UITextInputAssistantItem * observedInputAssistantItem;                     //@synthesize observedInputAssistantItem=_observedInputAssistantItem - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPredictiveViewControllers;                            //@synthesize cachedPredictiveViewControllers=_cachedPredictiveViewControllers - In the implementation block
@property (nonatomic,retain) TUISystemInputAssistantLayoutStandard * standardAssistantViewLayout;              //@synthesize standardAssistantViewLayout=_standardAssistantViewLayout - In the implementation block
@property (nonatomic,retain) TUISystemInputAssistantLayoutSplit * splitAssistantViewLayout;                    //@synthesize splitAssistantViewLayout=_splitAssistantViewLayout - In the implementation block
@property (nonatomic,retain) UIViewController*<UIPredictiveViewController> centerViewController;               //@synthesize centerViewController=_centerViewController - In the implementation block
@property (nonatomic,readonly) TUISystemInputAssistantView * systemInputAssistantView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_requiresProxyInterface;
+(double)preferredHeightForTraitCollection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)setCachedPredictiveViewControllers:(NSMutableDictionary *)arg1 ;
-(void)_beginObservingInputAssistantItemForRelevantItemChanges:(id)arg1 ;
-(void)_registerForAssistantViewNotifications;
-(TUISystemInputAssistantView *)systemInputAssistantView;
-(BOOL)_isAssistantPreferenceEnabled;
-(BOOL)_shouldShowExpandableButtonBarItemsForResponder:(id)arg1 ;
-(UIViewController*<UIPredictiveViewController>)centerViewController;
-(void)automaticallySetCenterViewControllerBasedOnInputDelegate:(id)arg1 ;
-(id)_inputDelegateAsResponder:(id)arg1 ;
-(id)_currentInputDelegate;
-(BOOL)layoutHasBuiltinAssistantView;
-(BOOL)_assistantItemsVisibleForResponder:(id)arg1 ;
-(BOOL)_centerPredictionViewVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(id)candidateViewController;
-(id)predictionViewController;
-(TUISystemInputAssistantLayoutStandard *)standardAssistantViewLayout;
-(TUISystemInputAssistantLayoutSplit *)splitAssistantViewLayout;
-(NSMutableDictionary *)cachedPredictiveViewControllers;
-(void)setCenterViewController:(UIViewController*<UIPredictiveViewController>)arg1 ;
-(void)updateCenterViewVisibilityStateForInputDelegate:(id)arg1 ;
-(void)_updateSystemInputAssistantViewStylingForInputAssistantItem:(id)arg1 ;
-(id)_defaultTintColor;
-(BOOL)_allowedToShowBarButtonItemsInline;
-(void)_responderChangedNotification:(id)arg1 ;
-(void)_responderCapabilitiesChangedNotification:(id)arg1 ;
-(void)_showCandidates;
-(void)_collapseBarItems;
-(void)_didReceiveTextEffectsRotationNotification:(id)arg1 ;
-(void)_didChangePlacementOrInputSourceNotification:(id)arg1 ;
-(void)_expandBarItems;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)_updateCenterViewWidthForInterfaceOrientation:(long long)arg1 ;
-(UITextInputAssistantItem *)observedInputAssistantItem;
-(void)setObservedInputAssistantItem:(UITextInputAssistantItem *)arg1 ;
-(double)_buttonBarWidthForTraitCollection:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(double)_centerViewWidthForTraitCollection:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(void)setPopoverSourceView:(UIView *)arg1 ;
-(id)_popoverViewControllerForBarButtonItemGroup:(id)arg1 ;
-(UIView *)popoverSourceView;
-(BOOL)shouldBeShownForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(void)setInputAssistantButtonItemsForResponder:(id)arg1 ;
-(void)systemInputAssistantView:(id)arg1 wantsToShowCollapsedItemGroup:(id)arg2 fromView:(id)arg3 ;
-(void)setStandardAssistantViewLayout:(TUISystemInputAssistantLayoutStandard *)arg1 ;
-(void)setSplitAssistantViewLayout:(TUISystemInputAssistantLayoutSplit *)arg1 ;
@end

