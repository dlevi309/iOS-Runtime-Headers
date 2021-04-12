/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/BPSBuddyController.h>

@protocol BPSBuddyControllerDelegate;
@class BPSWatchView, OBTrayButton, OBHeaderAccessoryButton, NSUserActivity, NSString;

@interface BPSWelcomeOptinViewController : OBWelcomeController <BPSBuddyController> {

	BOOL _isDisplayingInSkippedMiniFlow;
	BOOL _showSuggestedButton;
	BOOL _showAlternateButton;
	BOOL _showOkayButton;
	BOOL _hasFinishedLoadingView;
	BOOL _hasDetailText;
	unsigned long long _style;
	BPSWatchView* _watchView;
	id<BPSBuddyControllerDelegate> _delegate;
	OBTrayButton* _suggestedChoiceButton;
	OBTrayButton* _alternateChoiceButton;
	OBTrayButton* _okayButton;
	OBHeaderAccessoryButton* _learnMoreButton;
	NSUserActivity* _tapToRadarActivity;

}

@property (nonatomic,retain) BPSWatchView * watchView;                                    //@synthesize watchView=_watchView - In the implementation block
@property (nonatomic,retain) OBTrayButton * suggestedChoiceButton;                        //@synthesize suggestedChoiceButton=_suggestedChoiceButton - In the implementation block
@property (nonatomic,retain) OBTrayButton * alternateChoiceButton;                        //@synthesize alternateChoiceButton=_alternateChoiceButton - In the implementation block
@property (nonatomic,retain) OBTrayButton * okayButton;                                   //@synthesize okayButton=_okayButton - In the implementation block
@property (nonatomic,retain) OBHeaderAccessoryButton * learnMoreButton;                   //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (assign,nonatomic) BOOL showSuggestedButton;                                    //@synthesize showSuggestedButton=_showSuggestedButton - In the implementation block
@property (assign,nonatomic) BOOL showAlternateButton;                                    //@synthesize showAlternateButton=_showAlternateButton - In the implementation block
@property (assign,nonatomic) BOOL showOkayButton;                                         //@synthesize showOkayButton=_showOkayButton - In the implementation block
@property (assign,nonatomic) BOOL hasFinishedLoadingView;                                 //@synthesize hasFinishedLoadingView=_hasFinishedLoadingView - In the implementation block
@property (assign,nonatomic) BOOL hasDetailText;                                          //@synthesize hasDetailText=_hasDetailText - In the implementation block
@property (nonatomic,retain) NSUserActivity * tapToRadarActivity;                         //@synthesize tapToRadarActivity=_tapToRadarActivity - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<BPSBuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingInSkippedMiniFlow;                          //@synthesize isDisplayingInSkippedMiniFlow=_isDisplayingInSkippedMiniFlow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)localizedTitle;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(id)alternateButtonTitle;
-(id)titleAttributedString;
-(id<BPSBuddyControllerDelegate>)delegate;
-(id)_baseIdentifier;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)imageResource;
-(id)detailString;
-(void)setDelegate:(id<BPSBuddyControllerDelegate>)arg1 ;
-(OBHeaderAccessoryButton *)learnMoreButton;
-(void)setLearnMoreButton:(OBHeaderAccessoryButton *)arg1 ;
-(id)captionText;
-(void)viewDidLoad;
-(id)titleString;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(void)dealloc;
-(id)learnMoreButtonTitle;
-(BOOL)wantsLightenBlendedScreen;
-(id)suggestedButtonTitle;
-(id)tapToRadarMetadata;
-(void)applyConfirmedOptin:(BOOL)arg1 ;
-(id)imageResourceBundleIdentifier;
-(void)suggestedButtonPressed:(id)arg1 ;
-(void)alternateButtonPressed:(id)arg1 ;
-(id)privacyBundles;
-(id)localizedNotificationTitle;
-(OBTrayButton *)alternateChoiceButton;
-(void)refreshViews;
-(OBTrayButton *)suggestedChoiceButton;
-(BPSWatchView *)watchView;
-(void)setWatchView:(BPSWatchView *)arg1 ;
-(BOOL)wantsAlternateChoicePillButton;
-(BOOL)wantsAlternateChoiceSystemButton;
-(BOOL)wantsSuggestedChoicePillButton;
-(BOOL)wantsLearnMoreButton;
-(BOOL)wantsOkayPillButton;
-(id)detailTitleString;
-(id)detailAtrributedString;
-(BOOL)wantsToShowWatchHW;
-(id)okayButtonTitle;
-(void)okayButtonPressed:(id)arg1 ;
-(void)learnMoreButtonPressed:(id)arg1 ;
-(id)optinLocalizationBundle;
-(id)optinLocalizationStringsFile;
-(void)showOptinConfirmationAlert:(id)arg1 optinChoice:(BOOL)arg2 ;
-(void)setSuggestedChoiceButton:(OBTrayButton *)arg1 ;
-(void)setAlternateChoiceButton:(OBTrayButton *)arg1 ;
-(OBTrayButton *)okayButton;
-(void)setOkayButton:(OBTrayButton *)arg1 ;
-(void)_removeButtonObservers;
-(BOOL)wantsInternalFPOLabel;
-(void)_didTapPrivacyAccept:(id)arg1 ;
-(BOOL)hasDetailText;
-(void)_addButtonObservers;
-(void)setHasDetailText:(BOOL)arg1 ;
-(void)_refreshButtonTray;
-(void)_startTapToRadarActivity;
-(void)_endTapToRadarActivity;
-(BOOL)showSuggestedButton;
-(BOOL)showAlternateButton;
-(BOOL)showOkayButton;
-(void)setShowSuggestedButton:(BOOL)arg1 ;
-(void)setShowAlternateButton:(BOOL)arg1 ;
-(void)setShowOkayButton:(BOOL)arg1 ;
-(id)localizedInformativeText;
-(id)followUpIdentifier;
-(id)followUpActions;
-(BOOL)isDisplayingInSkippedMiniFlow;
-(id)localizedInformativeNotificationText;
-(BOOL)wantsFollowUpNotification;
-(void)addFollowUpForPageAndDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addFollowUpForPageWithCompletion:(/*^block*/id)arg1 ;
-(void)removeFollowupForPageWithCompletion:(/*^block*/id)arg1 ;
-(void)markPaneAsSkipped;
-(void)openTapToRadar;
-(void)setIsDisplayingInSkippedMiniFlow:(BOOL)arg1 ;
-(BOOL)hasFinishedLoadingView;
-(void)setHasFinishedLoadingView:(BOOL)arg1 ;
-(NSUserActivity *)tapToRadarActivity;
-(void)setTapToRadarActivity:(NSUserActivity *)arg1 ;
@end

