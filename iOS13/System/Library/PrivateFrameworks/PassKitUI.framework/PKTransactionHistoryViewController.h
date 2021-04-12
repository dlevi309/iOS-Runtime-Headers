/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardViewController.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@protocol OS_dispatch_source;
@class PKSpendingSummaryFooterView, PKSpendingSummaryFooterContainer, NSObject, PKContinuousButton, PKNavigationController, PKAnimatedNavigationBarTitleView, UIImageView, NSString, PKPaymentTransaction, PKPaymentPass;

@interface PKTransactionHistoryViewController : PKDashboardViewController <CNAvatarViewDelegate> {

	PKSpendingSummaryFooterView* _footer;
	PKSpendingSummaryFooterContainer* _footerContainer;
	BOOL _loadingMapsViewController;
	NSObject*<OS_dispatch_source> _loadingMapsTimer;
	PKContinuousButton* _detailsButton;
	PKContinuousButton* _phoneButton;
	PKContinuousButton* _messageButton;
	UIEdgeInsets _lastContentInset;
	double _headerHeight;
	PKNavigationController* _navigationController;
	double _merchantHeaderAnimationProgress;
	PKAnimatedNavigationBarTitleView* _titleView;
	UIImageView* _titleIconImageView;
	NSString* _titleText;
	PKPaymentTransaction* _transaction;
	PKPaymentPass* _paymentPass;
	unsigned long long _historyType;

}

@property (nonatomic,readonly) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass;                     //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,readonly) unsigned long long historyType;                  //@synthesize historyType=_historyType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(PKPaymentTransaction *)transaction;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)_barButtonItems;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(PKPaymentPass *)paymentPass;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)initWithTransactionGroup:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 transactionHistory:(id)arg4 ;
-(id)initWithFetcher:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 featuredTransaction:(id)arg4 selectedTransactions:(id)arg5 transactionHistory:(id)arg6 ;
-(void)contentIsLoaded;
-(id)initWithInstallmentPlan:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 ;
-(SCD_Struct_PK27)pkui_navigationStatusBarStyleDescriptor;
-(void)_updateNavigationBarIconForNavigationBarAppeared:(BOOL)arg1 ;
-(void)_updateNavigationBarIconWithLogoURL:(id)arg1 ;
-(void)_handleInfoButtonTapped:(id)arg1 ;
-(void)_handlePhoneButtonTapped:(id)arg1 ;
-(void)_handleMessageButtonTapped:(id)arg1 ;
-(void)_showMapsDetailsViewController;
-(void)_showContactDetailsViewController;
-(unsigned long long)historyType;
@end

