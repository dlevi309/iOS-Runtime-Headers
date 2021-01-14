/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_PKUIKVisibilityBackdropViewDelegate.h>
#import <libobjc.A.dylib/PKBillPaymentRingViewDelegate.h>
#import <libobjc.A.dylib/PKAccountBillPaymentControllerDelegate.h>
#import <libobjc.A.dylib/PKAddBankAccountInformationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKBillPaymentRingViewDataSource.h>
#import <libobjc.A.dylib/PKAccountBillPaymentAmountDescriptionViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PKAccountServiceAccountResolutionControllerDelegate.h>

@protocol PKAccountBillPaymentObserver;
@class PKAccount, PKTransactionSource, NSArray, PKAccountBillPaymentController, PKBillPaymentSuggestedAmountController, PKBillPaymentSuggestedAmountList, PKCompoundInterestCalculator, NSMutableDictionary, NSDateFormatter, NSNumberFormatter, NSDecimalNumber, NSDictionary, PKAccountServiceAccountResolutionCofiguration, PKAccountBillPaymentAmountDescriptionView, PKBillPaymentRingView, UILabel, UIButton, PKContinuousButton, _PKUIKVisibilityBackdropView, UIScrollView, UIImageView, UITapGestureRecognizer, PKAddBankAccountInformationViewController, PKAccountServiceAccountResolutionController, CLInUseAssertion, NSString;

@interface PKAccountBillPaymentViewController : UIViewController <_PKUIKVisibilityBackdropViewDelegate, PKBillPaymentRingViewDelegate, PKAccountBillPaymentControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKBillPaymentRingViewDataSource, PKAccountBillPaymentAmountDescriptionViewDelegate, UIScrollViewDelegate, PKAccountServiceAccountResolutionControllerDelegate> {

	PKAccount* _account;
	PKTransactionSource* _transactionSource;
	unsigned long long _interstitialState;
	unsigned long long _featuredViewState;
	NSArray* _installmentPlans;
	PKAccountBillPaymentController* _billPaymentCoordinator;
	PKBillPaymentSuggestedAmountController* _suggestedAmountController;
	PKBillPaymentSuggestedAmountList* _suggestionList;
	PKCompoundInterestCalculator* _interestCalculator;
	NSMutableDictionary* _cachedInterestResults;
	NSDateFormatter* _interestDateFormatter;
	NSNumberFormatter* _amountFormatter;
	NSDecimalNumber* _apr;
	NSMutableDictionary* _smallRingInterestAttributes;
	NSDictionary* _smallRingInterestDateAttributes;
	PKAccountServiceAccountResolutionCofiguration* _configuration;
	BOOL _hasAnimatedRing;
	BOOL _performingAction;
	BOOL _buttonsArePayButtons;
	BOOL _shouldEnablePayLaterButton;
	BOOL _viewIsEnabled;
	BOOL _payButtonsEnabled;
	BOOL _usesAccessibilityLayout;
	BOOL _usesLargestAccessibilityLayout;
	BOOL _showKeyboard;
	BOOL _keyboardVisible;
	CGRect _keyboardFrame;
	CGRect _lastKeyboardFrame;
	BOOL _inLayoutSubviews;
	PKAccountBillPaymentAmountDescriptionView* _amountDescriptionView;
	PKBillPaymentRingView* _ringView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _tertiaryButton;
	PKContinuousButton* _primaryButton;
	PKContinuousButton* _secondaryButton;
	UILabel* _smallRingInterestLabel;
	_PKUIKVisibilityBackdropView* _backdropView;
	UIScrollView* _scrollView;
	UIImageView* _productHeroView;
	UITapGestureRecognizer* _ringViewTapRecognizer;
	PKAddBankAccountInformationViewController* _addBankAccountViewController;
	PKAccountServiceAccountResolutionController* _accountResolutionController;
	CLInUseAssertion* _CLInUse;
	unsigned char _visibility;
	id<PKAccountBillPaymentObserver> _observer;

}

@property (nonatomic,readonly) PKAccount * account;                                         //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) PKTransactionSource * transactionSource;                     //@synthesize transactionSource=_transactionSource - In the implementation block
@property (assign,nonatomic,__weak) id<PKAccountBillPaymentObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIEdgeInsets)contentMargins;
+(id)backgroundColor;
+(id)displayableErrorForAccount:(id)arg1 reason:(unsigned long long)arg2 ;
+(void)_billPaymentViewControllerForAccount:(id)arg1 transactionSource:(id)arg2 configuration:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
+(CGSize)smallRingSizeWithAccessibilityLayout:(BOOL)arg1 ;
+(double)ringTopMargin;
+(double)smallRingTopMargin;
+(BOOL)canPayBillForAccount:(id)arg1 displayableError:(id*)arg2 ;
+(id)alertControllerForDisplayableError:(id)arg1 ;
+(void)billPaymentViewControllerForAccount:(id)arg1 transactionSource:(id)arg2 configuration:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_title;
-(PKAccount *)account;
-(void)viewWillLayoutSubviews;
-(void)setObserver:(id<PKAccountBillPaymentObserver>)arg1 ;
-(id<PKAccountBillPaymentObserver>)observer;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_accountDidChange:(id)arg1 ;
-(void)keyboardWillChange:(id)arg1 ;
-(id)_paymentAmount;
-(void)accountBillPaymentController:(id)arg1 hasChangedState:(unsigned long long)arg2 error:(id)arg3 updatedAccount:(id)arg4 ;
-(void)_setEnabled:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg1 transactionSource:(id)arg2 suggestedAmountController:(id)arg3 configuration:(id)arg4 interstitalState:(unsigned long long)arg5 ;
-(id)initWithSuggestedAmountController:(id)arg1 account:(id)arg2 transactionSource:(id)arg3 configuration:(id)arg4 interstitialState:(unsigned long long)arg5 ;
-(void)_setupAmountDescriptionViewForInterstitial;
-(void)_payNowButtonTapped:(id)arg1 ;
-(void)_payLaterButtonTapped:(id)arg1 ;
-(void)_showKeyboardButtonTapped:(id)arg1 ;
-(void)_contactSupportButtonTapped:(id)arg1 ;
-(void)_interstitialButtonTapped:(id)arg1 ;
-(void)_configureProductHeroView;
-(BOOL)_interestLabelIsOutsideSmallRing;
-(void)_updateNavigationTitle;
-(void)_updateForShowKeyboardAnimated:(BOOL)arg1 ;
-(void)_layoutFooterWithState:(SCD_Struct_PK6)arg1 ;
-(CGSize)_layoutScrollViewWithContentWidth:(double)arg1 ;
-(void)_showOrHideKeypad;
-(void)_reportEventForPassIfNecessary:(id)arg1 ;
-(id)_interestForAmount:(id)arg1 ;
-(id)_interestPostDate;
-(id)_interestStringForAmount:(id)arg1 ;
-(void)_setPayButtonsEnabled:(BOOL)arg1 ;
-(void)_updateInterestString;
-(void)_presentAlertControllerForError:(id)arg1 ;
-(void)_dismissViewControllerWithSuccess:(BOOL)arg1 ;
-(void)_updateLayoutForKeyboardAction:(/*^block*/id)arg1 ;
-(void)_setShowKeyboard:(BOOL)arg1 ;
-(void)_tappedSmallRingView:(id)arg1 ;
-(void)_presentAddBankAccount;
-(void)_performBillPaymentWithAmount:(id)arg1 billPaymentSuggestedAmountDataEvent:(id)arg2 ;
-(void)billPaymentRingView:(id)arg1 selectedSuggestedAmount:(id)arg2 selectedSuggestedAmountIsTarget:(BOOL)arg3 userInitiatedChange:(BOOL)arg4 ;
-(id)billPaymentRingView:(id)arg1 topCurvedTextForSuggestedAmount:(id)arg2 ;
-(id)billPaymentRingView:(id)arg1 bottomCurvedTextForSuggestedAmount:(id)arg2 ;
-(id)disabledTopCurvedTextForBillPaymentRingView:(id)arg1 ;
-(id)disabledBottomCurvedTextForBillPaymentRingView:(id)arg1 ;
-(id)billPaymentRingView:(id)arg1 interestTextForAmount:(id)arg2 ;
-(id)billPaymentRingViewZeroInterestText:(id)arg1 ;
-(void)billPaymentAmountDescriptionView:(id)arg1 hasChangedAmount:(id)arg2 isValidAmount:(BOOL)arg3 ;
-(void)billPaymentAmountDescriptionViewHasTappedLearnMore:(id)arg1 ;
-(id)initWithSuggestedAmountController:(id)arg1 transactionSource:(id)arg2 ;
-(id)_addBankAccountInformationViewController;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1 ;
-(void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2 ;
-(void)addBankAccountInformationViewControllerDidFinish:(id)arg1 ;
-(long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateSubtitle;
-(void)viewDidLayoutSubviews;
-(void)_cancelButtonTapped:(id)arg1 ;
-(PKTransactionSource *)transactionSource;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_setAccount:(id)arg1 ;
@end

