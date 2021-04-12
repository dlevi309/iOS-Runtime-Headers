/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/BPSBuddyController.h>

@protocol BPSBuddyControllerDelegate;
@class BPSWatchView, OBTrayButton, NSString;

@interface BPSWelcomeOptinViewController : OBWelcomeController <BPSBuddyController> {

	BOOL _showSuggestedButton;
	BOOL _showAlternateButton;
	BOOL _showOkayButton;
	BOOL _showLearnMoreButton;
	BOOL _hasFinishedLoadingView;
	unsigned long long _style;
	BPSWatchView* _watchView;
	id<BPSBuddyControllerDelegate> _delegate;
	OBTrayButton* _suggestedChoiceButton;
	OBTrayButton* _alternateChoiceButton;
	OBTrayButton* _okayButton;
	OBTrayButton* _learnMoreButton;

}

@property (nonatomic,retain) BPSWatchView * watchView;                                    //@synthesize watchView=_watchView - In the implementation block
@property (nonatomic,retain) OBTrayButton * suggestedChoiceButton;                        //@synthesize suggestedChoiceButton=_suggestedChoiceButton - In the implementation block
@property (nonatomic,retain) OBTrayButton * alternateChoiceButton;                        //@synthesize alternateChoiceButton=_alternateChoiceButton - In the implementation block
@property (nonatomic,retain) OBTrayButton * okayButton;                                   //@synthesize okayButton=_okayButton - In the implementation block
@property (nonatomic,retain) OBTrayButton * learnMoreButton;                              //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (assign,nonatomic) BOOL showSuggestedButton;                                    //@synthesize showSuggestedButton=_showSuggestedButton - In the implementation block
@property (assign,nonatomic) BOOL showAlternateButton;                                    //@synthesize showAlternateButton=_showAlternateButton - In the implementation block
@property (assign,nonatomic) BOOL showOkayButton;                                         //@synthesize showOkayButton=_showOkayButton - In the implementation block
@property (assign,nonatomic) BOOL showLearnMoreButton;                                    //@synthesize showLearnMoreButton=_showLearnMoreButton - In the implementation block
@property (assign,nonatomic) BOOL hasFinishedLoadingView;                                 //@synthesize hasFinishedLoadingView=_hasFinishedLoadingView - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<BPSBuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<BPSBuddyControllerDelegate>)delegate;
-(void)setDelegate:(id<BPSBuddyControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)localizedTitle;
-(void)viewDidLoad;
-(id)detailString;
-(id)titleString;
-(id)alternateButtonTitle;
-(id)captionText;
-(id)_baseIdentifier;
-(OBTrayButton *)learnMoreButton;
-(void)setLearnMoreButton:(OBTrayButton *)arg1 ;
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
-(id)imageResource;
-(id)imageResourceBundleIdentifier;
-(BOOL)wantsLightenBlendedScreen;
-(id)suggestedButtonTitle;
-(id)okayButtonTitle;
-(void)suggestedButtonPressed:(id)arg1 ;
-(void)okayButtonPressed:(id)arg1 ;
-(void)alternateButtonPressed:(id)arg1 ;
-(id)learnMoreButtonTitle;
-(void)learnMoreButtonPressed:(id)arg1 ;
-(id)optinLocalizationBundle;
-(id)optinLocalizationStringsFile;
-(void)applyConfirmedOptin:(BOOL)arg1 ;
-(void)showOptinConfirmationAlert:(id)arg1 optinChoice:(BOOL)arg2 ;
-(OBTrayButton *)suggestedChoiceButton;
-(void)setSuggestedChoiceButton:(OBTrayButton *)arg1 ;
-(OBTrayButton *)alternateChoiceButton;
-(void)setAlternateChoiceButton:(OBTrayButton *)arg1 ;
-(OBTrayButton *)okayButton;
-(void)setOkayButton:(OBTrayButton *)arg1 ;
-(void)_removeButtonObservers;
-(id)privacyBundles;
-(void)_didTapPrivacyAccept:(id)arg1 ;
-(void)refreshViews;
-(void)_addButtonObservers;
-(void)_refreshButtonTray;
-(BOOL)showSuggestedButton;
-(BOOL)showAlternateButton;
-(BOOL)showOkayButton;
-(BOOL)showLearnMoreButton;
-(void)setShowSuggestedButton:(BOOL)arg1 ;
-(void)setShowAlternateButton:(BOOL)arg1 ;
-(void)setShowOkayButton:(BOOL)arg1 ;
-(void)setShowLearnMoreButton:(BOOL)arg1 ;
-(id)localizedInformativeText;
-(id)followUpIdentifier;
-(id)followUpActions;
-(id)titleAttributedString;
-(id)localizedNotificationTitle;
-(id)localizedInformativeNotificationText;
-(BOOL)wantsFollowUpNotification;
-(void)addFollowUpForPageAndDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addFollowUpForPageWithCompletion:(/*^block*/id)arg1 ;
-(void)removeFollowupForPageWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasFinishedLoadingView;
-(void)setHasFinishedLoadingView:(BOOL)arg1 ;
@end

