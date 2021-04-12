/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardViewController.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@protocol OS_dispatch_source;
@class PKSpendingSummaryFooterView, PKSpendingSummaryFooterContainer, NSObject, PKContinuousButton, PKNavigationController, NSIndexPath, PKAnimatedNavigationBarTitleView, UIImageView, NSString, PKPaymentTransaction, PKTransactionSource;

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
	NSIndexPath* _headerIndexPath;
	double _merchantHeaderAnimationProgress;
	PKAnimatedNavigationBarTitleView* _titleView;
	UIImageView* _titleIconImageView;
	NSString* _titleText;
	BOOL _isHeaderPinned;
	PKPaymentTransaction* _transaction;
	PKTransactionSource* _transactionSource;
	unsigned long long _historyType;

}

@property (nonatomic,readonly) PKPaymentTransaction * transaction;                   //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) PKTransactionSource * transactionSource;              //@synthesize transactionSource=_transactionSource - In the implementation block
@property (nonatomic,readonly) unsigned long long historyType;                       //@synthesize historyType=_historyType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateContent;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(PKPaymentTransaction *)transaction;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(id)_barButtonItems;
-(id)initWithTransactionGroup:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 fetcher:(id)arg4 transactionHistory:(id)arg5 ;
-(id)initWithFetcher:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 featuredTransaction:(id)arg4 selectedTransactions:(id)arg5 transactionHistory:(id)arg6 ;
-(void)updateGroup:(id)arg1 ;
-(void)_updateNavigationBarIconForNavigationBarAppeared:(BOOL)arg1 ;
-(void)_updateHeaderCellWithAnimationProgress:(id)arg1 ;
-(void)_updateNavigationBarIconWithLogoURL:(id)arg1 ;
-(void)_handleInfoButtonTapped:(id)arg1 ;
-(void)_handlePhoneButtonTapped:(id)arg1 ;
-(void)_handleMessageButtonTapped:(id)arg1 ;
-(void)_showMapsDetailsViewController;
-(void)_showContactDetailsViewController;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id)initWithInstallmentPlan:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 ;
-(id)initWithTransactionGroups:(id)arg1 headerGroup:(id)arg2 groupPresenter:(id)arg3 regionUpdater:(id)arg4 tokens:(id)arg5 transactionSource:(id)arg6 account:(id)arg7 ;
-(void)updateGroups:(id)arg1 headerGroup:(id)arg2 ;
-(void)viewDidLoad;
-(unsigned long long)historyType;
-(SCD_Struct_PK32)pkui_navigationStatusBarStyleDescriptor;
-(void)viewDidLayoutSubviews;
-(PKTransactionSource *)transactionSource;
-(void)dealloc;
@end

