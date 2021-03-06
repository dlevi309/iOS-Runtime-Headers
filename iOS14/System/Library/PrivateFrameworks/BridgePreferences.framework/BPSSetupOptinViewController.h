/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)alternateButtonTitle;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(id)imageResource;
-(id)detailString;
-(UIButton *)learnMoreButton;
-(void)setLearnMoreButton:(UIButton *)arg1 ;
-(UILabel *)detailTextLabel;
-(void)viewDidLoad;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(unsigned long long)style;
-(id)learnMoreButtonTitle;
-(BOOL)wantsLightenBlendedScreen;
-(id)suggestedButtonTitle;
-(void)applyConfirmedOptin:(BOOL)arg1 ;
-(id)imageResourceBundleIdentifier;
-(void)suggestedButtonPressed:(id)arg1 ;
-(void)alternateButtonPressed:(id)arg1 ;
-(UIButton *)alternateChoiceButton;
-(UIButton *)suggestedChoiceButton;
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
-(double)sidePadding;
-(void)okayButtonPressed:(id)arg1 ;
-(void)learnMoreButtonPressed:(id)arg1 ;
-(double)noHWImageOffset;
-(double)noHWDetailOffset;
-(double)alternateButtonDetailTextPaddingWithImage;
-(double)suggestedChoicePillDetailTextLabelVerticalOffset;
-(double)imageDetailPadding;
-(double)okayButtonTopPadding;
-(id)optinLocalizationBundle;
-(id)optinLocalizationStringsFile;
-(void)_madeOptinChoice:(BOOL)arg1 withAlertController:(id)arg2 ;
-(void)showOptinConfirmationAlert:(id)arg1 optinChoice:(BOOL)arg2 ;
-(UILabel *)detailTextTitleLabel;
-(void)setDetailTextTitleLabel:(UILabel *)arg1 ;
-(void)setSuggestedChoiceButton:(UIButton *)arg1 ;
-(void)setAlternateChoiceButton:(UIButton *)arg1 ;
-(UIButton *)okayButton;
-(void)setOkayButton:(UIButton *)arg1 ;
@end

