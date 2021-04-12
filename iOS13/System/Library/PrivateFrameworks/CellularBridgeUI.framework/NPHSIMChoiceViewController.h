/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
*/

#import <BridgePreferences/BPSSetupOptinViewController.h>

@protocol NPHSIMChoiceViewControllerDelegate;
@class UIScrollView, UIActivityIndicatorView, UILabel, UIBarButtonItem, UIButton, NSString, NSArray, NSTimer;

@interface NPHSIMChoiceViewController : BPSSetupOptinViewController {

	BOOL _isTransferFlow;
	BOOL _haveReceivedProxyPlanItems;
	long long _configuration;
	UIScrollView* _scrollView;
	UIActivityIndicatorView* _spinner;
	UILabel* _spinnerExplanation;
	UIBarButtonItem* _nextNavBarButtonItem;
	UIButton* _upperButton;
	NSString* _upperButtonTitle;
	UIButton* _lowerButton;
	NSString* _lowerButtonTitle;
	UIButton* _lowerSkipButton;
	UILabel* _messageTextLabel;
	UIButton* _cancelButton;
	NSArray* _userVisibleErrors;
	id<NPHSIMChoiceViewControllerDelegate> _SIMChoiceDelegate;
	unsigned long long _backgroundTaskID;
	NSTimer* _taskCompletionTimeout;

}

@property (assign,nonatomic) BOOL isTransferFlow;                                                                                  //@synthesize isTransferFlow=_isTransferFlow - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) BOOL haveReceivedProxyPlanItems;                                                                      //@synthesize haveReceivedProxyPlanItems=_haveReceivedProxyPlanItems - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                                                    //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UILabel * spinnerExplanation;                                                                         //@synthesize spinnerExplanation=_spinnerExplanation - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextNavBarButtonItem;                                                               //@synthesize nextNavBarButtonItem=_nextNavBarButtonItem - In the implementation block
@property (nonatomic,retain) UIButton * upperButton;                                                                               //@synthesize upperButton=_upperButton - In the implementation block
@property (nonatomic,retain) NSString * upperButtonTitle;                                                                          //@synthesize upperButtonTitle=_upperButtonTitle - In the implementation block
@property (nonatomic,retain) UIButton * lowerButton;                                                                               //@synthesize lowerButton=_lowerButton - In the implementation block
@property (nonatomic,retain) NSString * lowerButtonTitle;                                                                          //@synthesize lowerButtonTitle=_lowerButtonTitle - In the implementation block
@property (nonatomic,retain) UIButton * lowerSkipButton;                                                                           //@synthesize lowerSkipButton=_lowerSkipButton - In the implementation block
@property (nonatomic,retain) UILabel * messageTextLabel;                                                                           //@synthesize messageTextLabel=_messageTextLabel - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                                              //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) NSArray * userVisibleErrors;                                                                          //@synthesize userVisibleErrors=_userVisibleErrors - In the implementation block
@property (assign,setter=IMChoiceDelegate,nonatomic,__weak) id<NPHSIMChoiceViewControllerDelegate> SIMChoiceDelegate;              //@synthesize SIMChoiceDelegate=_SIMChoiceDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskID;                                                                  //@synthesize backgroundTaskID=_backgroundTaskID - In the implementation block
@property (nonatomic,retain) NSTimer * taskCompletionTimeout;                                                                      //@synthesize taskCompletionTimeout=_taskCompletionTimeout - In the implementation block
@property (assign,nonatomic) long long configuration;                                                                              //@synthesize configuration=_configuration - In the implementation block
-(void)dealloc;
-(void)setConfiguration:(long long)arg1 ;
-(long long)configuration;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(id)titleString;
-(void)transfer;
-(id)imageResource;
-(BOOL)wantsLightenBlendedScreen;
-(double)sidePadding;
-(double)verticalTitleInset;
-(id)initWithSIMChoiceViewControllerDelegate:(id)arg1 andIsTransferFlow:(BOOL)arg2 ;
-(BOOL)isGeminiSetup;
-(void)userTappedSetUp:(id)arg1 ;
-(void)ctCellularPlanInfoDidChange:(id)arg1 ;
-(void)checkForSoftwareUpdate;
-(void)updateUIFromCellularPlanItems;
-(void)userTappedNext:(id)arg1 ;
-(void)userTappedSkip:(id)arg1 ;
-(void)userTappedCancel:(id)arg1 ;
-(void)navigateToNextView;
-(void)setUpNow;
-(void)updateUIToShowSetUpNowSIMChoices;
-(void)updateUIToShowSpinner;
-(void)updateUIToShowUserVisibleError;
-(BOOL)isTransferFlow;
-(void)updateUIToShowPlanTransferOrSetUpNewOptions;
-(void)updateUIToShowPreinstall;
-(void)updateUIToShowUserConsent:(long long)arg1 relevantPlan:(id)arg2 ;
-(void)updateUIToShowContinue;
-(void)updateUIToShowPlanSetUpTrial;
-(void)updateUIToShowSetUpNow;
-(void)userTappedContinue:(id)arg1 ;
-(void)userTappedConsent:(id)arg1 ;
-(void)userTappedTransfer:(id)arg1 ;
-(void)userTappedSetUpNew:(id)arg1 ;
-(void)userTappedSetUpCarrier:(id)arg1 ;
-(id)trialOfferMessage;
-(BOOL)legacyButtonStyles;
-(void)setIsTransferFlow:(BOOL)arg1 ;
-(BOOL)haveReceivedProxyPlanItems;
-(void)setHaveReceivedProxyPlanItems:(BOOL)arg1 ;
-(UILabel *)spinnerExplanation;
-(void)setSpinnerExplanation:(UILabel *)arg1 ;
-(UIBarButtonItem *)nextNavBarButtonItem;
-(void)setNextNavBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIButton *)upperButton;
-(void)setUpperButton:(UIButton *)arg1 ;
-(NSString *)upperButtonTitle;
-(void)setUpperButtonTitle:(NSString *)arg1 ;
-(UIButton *)lowerButton;
-(void)setLowerButton:(UIButton *)arg1 ;
-(NSString *)lowerButtonTitle;
-(void)setLowerButtonTitle:(NSString *)arg1 ;
-(UIButton *)lowerSkipButton;
-(void)setLowerSkipButton:(UIButton *)arg1 ;
-(UILabel *)messageTextLabel;
-(void)setMessageTextLabel:(UILabel *)arg1 ;
-(NSArray *)userVisibleErrors;
-(void)setUserVisibleErrors:(NSArray *)arg1 ;
-(id<NPHSIMChoiceViewControllerDelegate>)SIMChoiceDelegate;
-(void)setSIMChoiceDelegate:(id<NPHSIMChoiceViewControllerDelegate>)arg1 ;
-(unsigned long long)backgroundTaskID;
-(void)setBackgroundTaskID:(unsigned long long)arg1 ;
-(NSTimer *)taskCompletionTimeout;
-(void)setTaskCompletionTimeout:(NSTimer *)arg1 ;
@end

