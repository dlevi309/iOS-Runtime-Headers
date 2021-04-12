/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
*/

#import <AppPredictionUI/AppPredictionUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/APUIIntentHandlingViewControllerDelegate.h>
#import <libobjc.A.dylib/CRKCardPresentationDelegate.h>
#import <libobjc.A.dylib/CRKCardViewControllerDelegate.h>
#import <libobjc.A.dylib/PLClickPresentationInteractionPresenting.h>
#import <libobjc.A.dylib/PLClickPresentationInteractionManagerDelegate.h>
#import <libobjc.A.dylib/APUILongLookViewControllerDataSource.h>
#import <libobjc.A.dylib/APUILongLookViewControllerDelegate.h>
#import <libobjc.A.dylib/SearchUIResultShortLook.h>

@protocol PLClickPresentationInteractionPresentable, APUIShortLookViewControllerDelegate, CRKCardViewControlling;
@class PLClickPresentationInteractionManager, UIView, SFSearchResult, APUILongLookViewController, APUITVIntentHandler, NSUserDefaults, INIntent, NSUserActivity, NSString, APUIIntentHandlingViewController, ATXAction, INInteraction, CRKCardPresentation, UIViewController;

@interface APUIShortLookViewController : UIViewController <APUIIntentHandlingViewControllerDelegate, CRKCardPresentationDelegate, CRKCardViewControllerDelegate, PLClickPresentationInteractionPresenting, PLClickPresentationInteractionManagerDelegate, APUILongLookViewControllerDataSource, APUILongLookViewControllerDelegate, SearchUIResultShortLook> {

	APUILongLookViewController*<PLClickPresentationInteractionPresentable> _presentableViewController;
	APUITVIntentHandler* _tvIntentHandler;
	double _preferredPlatterContentHeight;
	BOOL _acceptPlatterTaps;
	long long _dismissalReason;
	BOOL _actionCompletedSuccessfully;
	BOOL _hasShownLongLook;
	BOOL _wasPresentedImmediately;
	BOOL _representsVoiceShortcut;
	NSUserDefaults* _userDefaults;
	INIntent* _intent;
	NSUserActivity* _userActivity;
	PLClickPresentationInteractionManager* _clickPresentationInteractionManager;
	NSString* _bundleId;
	SFSearchResult* _searchResult;
	id<APUIShortLookViewControllerDelegate> _delegate;
	APUIIntentHandlingViewController* _intentHandlingViewController;
	ATXAction* _atxAction;
	INInteraction* _interaction;
	CRKCardPresentation* _cardPresentation;
	UIViewController*<CRKCardViewControlling> _currentCardViewController;

}

@property (nonatomic,retain) APUIIntentHandlingViewController * intentHandlingViewController;                            //@synthesize intentHandlingViewController=_intentHandlingViewController - In the implementation block
@property (nonatomic,retain) ATXAction * atxAction;                                                                      //@synthesize atxAction=_atxAction - In the implementation block
@property (nonatomic,retain) NSUserActivity * userActivity;                                                              //@synthesize userActivity=_userActivity - In the implementation block
@property (nonatomic,retain) INIntent * intent;                                                                          //@synthesize intent=_intent - In the implementation block
@property (nonatomic,retain) INInteraction * interaction;                                                                //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,retain) CRKCardPresentation * cardPresentation;                                                     //@synthesize cardPresentation=_cardPresentation - In the implementation block
@property (nonatomic,retain) UIViewController*<CRKCardViewControlling> currentCardViewController;                        //@synthesize currentCardViewController=_currentCardViewController - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                                                                          //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,retain) SFSearchResult * searchResult;                                                              //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic,__weak) id<APUIShortLookViewControllerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
@property (nonatomic,readonly) PLClickPresentationInteractionManager * clickPresentationInteractionManager;              //@synthesize clickPresentationInteractionManager=_clickPresentationInteractionManager - In the implementation block
@property (nonatomic,readonly) UIView * viewForPreview; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,readonly) CGRect initialPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalDismissedFrameOfViewForPreview; 
-(id<APUIShortLookViewControllerDelegate>)delegate;
-(void)setDelegate:(id<APUIShortLookViewControllerDelegate>)arg1 ;
-(id)_defaults;
-(INInteraction *)interaction;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(INIntent *)intent;
-(void)setView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setIntent:(INIntent *)arg1 ;
-(NSUserActivity *)userActivity;
-(void)setUserActivity:(NSUserActivity *)arg1 ;
-(void)setInteraction:(INInteraction *)arg1 ;
-(SFSearchResult *)searchResult;
-(void)setSearchResult:(SFSearchResult *)arg1 ;
-(void)setAtxAction:(ATXAction *)arg1 ;
-(ATXAction *)atxAction;
-(BOOL)presentImmediately:(/*^block*/id)arg1 ;
-(PLClickPresentationInteractionManager *)clickPresentationInteractionManager;
-(UIView *)viewForPreview;
-(void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg1 ;
-(void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg1 ;
-(void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2 ;
-(id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1 ;
-(void)cardViewControllerDidLoad:(id)arg1 ;
-(void)cardViewControllerBoundsDidChange:(id)arg1 ;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;
-(BOOL)longLookPlatterShouldShowUtilityButton:(id)arg1 ;
-(void)longLookPlatterDidTapUtilityButton:(id)arg1 ;
-(void)longLookPlatterDidReceiveTap:(id)arg1 ;
-(id)interfaceActionsForLongLook:(id)arg1 ;
-(id)appIconImageForLongLook:(id)arg1 ;
-(id)bundleIdentifierForAppIconInLongLook:(id)arg1 ;
-(id)titleForLongLookHeaderInLongLook:(id)arg1 ;
-(BOOL)fetchViewControllerForContentViewInLongLook:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)preferredContentHeightForLongLook:(id)arg1 ;
-(void)intentHandlingViewController:(id)arg1 wantsPreferredSize:(CGSize)arg2 ;
-(void)intentHandlingViewController:(id)arg1 requiresConfirmationWithResponse:(id)arg2 confirmationActionTitle:(id)arg3 ;
-(void)intentHandlingViewController:(id)arg1 willContinueInAppForIntent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)intentHandlingViewControllerDidFailAuthorizationCheck:(id)arg1 ;
-(void)intentHandlingViewController:(id)arg1 didComplete:(BOOL)arg2 ;
-(void)_resetRepresentedObjectState;
-(id)_cardContentWithIntentResponse:(id)arg1 ;
-(void)_handleActionButtonForIntent;
-(id)_intentConfirmationActions;
-(BOOL)_shouldTellDelegateToClearActionOnDismissal:(long long)arg1 ;
-(void)_dismissLongLookWithReason:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)_actionTypeForMetrics;
-(BOOL)_shouldAcceptPlatterTaps;
-(BOOL)_isDoNotDisturbIntent;
-(id)_debugStringForNSUA;
-(id)containerViewForclickPresentationInteractionManager:(id)arg1 ;
-(BOOL)clickPresentationInteractionManagerShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1 ;
-(id)_titleForLongLookViewController:(id)arg1 ;
-(void)handOverIntentHandlingToApp;
-(APUIIntentHandlingViewController *)intentHandlingViewController;
-(void)setIntentHandlingViewController:(APUIIntentHandlingViewController *)arg1 ;
-(CRKCardPresentation *)cardPresentation;
-(void)setCardPresentation:(CRKCardPresentation *)arg1 ;
-(UIViewController*<CRKCardViewControlling>)currentCardViewController;
-(void)setCurrentCardViewController:(UIViewController*<CRKCardViewControlling>)arg1 ;
@end

