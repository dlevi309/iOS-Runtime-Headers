/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/

#import <BridgePreferences/BPSSetupPageViewController.h>
#import <libobjc.A.dylib/BPSBuddyController.h>

@class BPSWatchView, UIScrollView, UILabel, UIButton, NSString;

@interface BPSSetupOptinViewController : BPSSetupPageViewController <BPSBuddyController> {

	unsigned long long _style;
	BPSWatchView* _watchView;
	UIScrollView* _scrollView;
	UILabel* _detailTextTitleLabel;
	UILabel* _detailTextLabel;
	UIButton* _suggestedChoiceButton;
	UIButton* _alternateChoiceButton;
	UIButton* _learnMoreButton;
	UIButton* _okayButton;

}

@property (nonatomic,retain) UIScrollView * scrollView;                     //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel; 
@property (nonatomic,retain) UILabel * detailTextTitleLabel;                //@synthesize detailTextTitleLabel=_detailTextTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailTextLabel;                     //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,retain) BPSWatchView * watchView;                      //@synthesize watchView=_watchView - In the implementation block
@property (nonatomic,retain) UIButton * suggestedChoiceButton;              //@synthesize suggestedChoiceButton=_suggestedChoiceButton - In the implementation block
@property (nonatomic,retain) UIButton * alternateChoiceButton;              //@synthesize alternateChoiceButton=_alternateChoiceButton - In the implementation block
@property (nonatomic,retain) UIButton * learnMoreButton;                    //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (nonatomic,retain) UIButton * okayButton;                         //@synthesize okayButton=_okayButton - In the implementation block
@property (assign,nonatomic) unsigned long long style;                      //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(UILabel *)detailTextLabel;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id)detailString;
-(id)alternateButtonTitle;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(UIButton *)learnMoreButton;
-(void)setLearnMoreButton:(UIButton *)arg1 ;
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
-(double)sidePadding;
-(void)suggestedButtonPressed:(id)arg1 ;
-(void)okayButtonPressed:(id)arg1 ;
-(void)alternateButtonPressed:(id)arg1 ;
-(id)learnMoreButtonTitle;
-(void)learnMoreButtonPressed:(id)arg1 ;
-(double)noHWImageOffset;
-(double)noHWDetailOffset;
-(double)alternateButtonDetailTextPaddingWithImage;
-(double)suggestedChoicePillDetailTextLabelVerticalOffset;
-(double)imageDetailPadding;
-(double)okayButtonTopPadding;
-(id)optinLocalizationBundle;
-(id)optinLocalizationStringsFile;
-(void)applyConfirmedOptin:(BOOL)arg1 ;
-(void)_madeOptinChoice:(BOOL)arg1 withAlertController:(id)arg2 ;
-(void)showOptinConfirmationAlert:(id)arg1 optinChoice:(BOOL)arg2 ;
-(UILabel *)detailTextTitleLabel;
-(void)setDetailTextTitleLabel:(UILabel *)arg1 ;
-(UIButton *)suggestedChoiceButton;
-(void)setSuggestedChoiceButton:(UIButton *)arg1 ;
-(UIButton *)alternateChoiceButton;
-(void)setAlternateChoiceButton:(UIButton *)arg1 ;
-(UIButton *)okayButton;
-(void)setOkayButton:(UIButton *)arg1 ;
@end

