/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKSecureElementObserver.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <libobjc.A.dylib/PKPaymentVerificationControllerDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentAccountResolutionControllerDelegate.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>
#import <libobjc.A.dylib/PKSpendingSummaryFetcherObserver.h>
#import <libobjc.A.dylib/PKAccountServiceAccountResolutionControllerDelegate.h>
#import <libobjc.A.dylib/PKDiscoveryObserver.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAccountServiceObserver.h>
#import <libobjc.A.dylib/PKDashboardPassDataSource.h>
#import <libobjc.A.dylib/PKDashboardTransactionFetcherDelegate.h>

@protocol PKDashboardDataSourceDelegate, OS_dispatch_source;
@class PKPassGroupView, PKGroup, PKPaymentPass, NSArray, PKDashboardTransactionFetcher, NSObject, NSDate, PKPeerPaymentAccount, PKPeerPaymentContactResolver, PKPeerPaymentWebService, PKPeerPaymentAccountResolutionController, PKTransitBalanceModel, PKPaymentDefaultDataProvider, PKPaymentVerificationController, PKSecureElement, NSOrderedSet, NSDateFormatter, NSMutableArray, PKPassPresentationContext, PKAccount, PKPhysicalCardController, PKCreditAccountStatement, PKSpendingSummaryFetcher, PKSpendingSummary, NSError, PKAccountServiceAccountResolutionController, NSMutableSet, NSMutableDictionary, NSString, PKAMPEnrollmentManager;

@interface PKDashboardPaymentPassDataSource : NSObject <PKSecureElementObserver, PKPaymentDataProviderDelegate, PKPaymentVerificationControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKForegroundActiveArbiterObserver, PKSpendingSummaryFetcherObserver, PKAccountServiceAccountResolutionControllerDelegate, PKDiscoveryObserver, PKPaymentSetupViewControllerDelegate, PKAccountServiceObserver, PKDashboardPassDataSource, PKDashboardTransactionFetcherDelegate> {

	PKPassGroupView* _groupView;
	PKGroup* _group;
	id<PKDashboardDataSourceDelegate> _delegate;
	PKPaymentPass* _pass;
	BOOL _isTransitPass;
	BOOL _isAccessPass;
	NSArray* _transactions;
	PKDashboardTransactionFetcher* _transactionFetcher;
	os_unfair_lock_s _lockTransactions;
	NSArray* _previousTransactions;
	BOOL _transactionsPerPeriodLoaded;
	NSArray* _transactionGroups;
	BOOL _forceTransactionsReload;
	BOOL _forceTransactionsUpdate;
	NSObject*<OS_dispatch_source> _timerTransactions;
	NSDate* _lastTransactionReload;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PKPeerPaymentContactResolver* _contactResolver;
	PKPeerPaymentWebService* _peerPaymentWebService;
	PKPeerPaymentAccountResolutionController* _peerPaymentAccountResolutionController;
	BOOL _performingPeerPaymentResolution;
	BOOL _performingAMPEnrollment;
	PKTransitBalanceModel* _transitBalanceModel;
	BOOL _canDisplayProducts;
	BOOL _productsLoaded;
	BOOL _canDisplayBalance;
	BOOL _balanceLoaded;
	BOOL _balanceSectionNeedsUpdate;
	PKPaymentDefaultDataProvider* _paymentDataProvider;
	PKPaymentVerificationController* _paymentVerificationController;
	BOOL _performingVerification;
	PKSecureElement* _secureElement;
	BOOL _isInRestrictedMode;
	int _sessionActiveToken;
	BOOL _sessionActive;
	NSOrderedSet* _messages;
	BOOL _messagesLoaded;
	NSDateFormatter* _formatterYear;
	BOOL _allContentIsLoaded;
	SCD_Struct_PK4 _activeState;
	NSMutableArray* _executionBlocksContentIsLoaded;
	PKPassPresentationContext* _context;
	BOOL _isCreditPass;
	PKAccount* _account;
	PKPhysicalCardController* _physicalCardController;
	PKCreditAccountStatement* _currentStatement;
	NSArray* _upcomingScheduledPayments;
	BOOL _scheduledPaymentsLoaded;
	PKSpendingSummaryFetcher* _summaryFetcher;
	NSDate* _startCurrentPeriod;
	PKSpendingSummary* _currentSummary;
	BOOL _pendingSummaryUpdate;
	BOOL _hasMoreSummaryUpdates;
	NSError* _accountUpdateError;
	BOOL _performingAccountUpdate;
	PKAccountServiceAccountResolutionController* _accountResolutionController;
	os_unfair_lock_s _lockIcons;
	NSMutableSet* _iconDownloads;
	NSMutableSet* _iconFailedDownloads;
	NSMutableDictionary* _icons;
	BOOL _hasSuccessfulIconDownloads;
	NSString* _scaleKey;
	BOOL _showAMPEnrollmentMessage;
	PKAMPEnrollmentManager* _AMPEnrollmentManager;
	NSMutableDictionary* _messageImagesCache;
	os_unfair_lock_s _lockImages;
	NSArray* _weeks;
	NSArray* _months;

}

@property (nonatomic,retain) NSArray * weeks;                                                   //@synthesize weeks=_weeks - In the implementation block
@property (nonatomic,retain) NSArray * months;                                                  //@synthesize months=_months - In the implementation block
@property (nonatomic,readonly) PKAccount * account;                                             //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) PKDashboardTransactionFetcher * transactionFetcher;              //@synthesize transactionFetcher=_transactionFetcher - In the implementation block
@property (nonatomic,readonly) PKSpendingSummaryFetcher * summaryFetcher;                       //@synthesize summaryFetcher=_summaryFetcher - In the implementation block
@property (nonatomic,readonly) NSArray * currentMonthTransactions; 
@property (nonatomic,readonly) NSArray * upcomingScheduledPayments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(PKAccount *)account;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)titleForSection:(unsigned long long)arg1 ;
-(void)setDataSourceDelegate:(id)arg1 ;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(void)discoveryServiceDidReceiveUpdatedDiscoveryEngagementMessages:(id)arg1 ;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK4)arg2 ;
-(void)secureElementDidEnterRestrictedMode:(id)arg1 ;
-(void)secureElementDidLeaveRestrictedMode:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(id)_contactResolver;
-(void)scheduledPaymentsChangedForAccountIdentifier:(id)arg1 ;
-(void)invalidatedSummariesAvailable;
-(void)invalidatedSpendingSummaryOfType:(unsigned long long)arg1 startingWithDate:(id)arg2 ;
-(void)invalidatedSpendingSummariesOfType:(unsigned long long)arg1 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg1 ;
-(void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2 ;
-(void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didChangeVerificationPresentation;
-(PKSpendingSummaryFetcher *)summaryFetcher;
-(NSArray *)weeks;
-(NSArray *)months;
-(NSArray *)upcomingScheduledPayments;
-(void)summaryTypeDidChange;
-(void)setWeeks:(NSArray *)arg1 ;
-(void)setMonths:(NSArray *)arg1 ;
-(id)footerTextForSection:(unsigned long long)arg1 ;
-(id)initWithGroupView:(id)arg1 context:(id)arg2 ;
-(void)groupViewDidUpdatePassView:(id)arg1 ;
-(NSArray *)currentMonthTransactions;
-(void)executeAfterContentIsLoaded:(/*^block*/id)arg1 ;
-(PKDashboardTransactionFetcher *)transactionFetcher;
-(void)_peerPaymentAccountChanged:(id)arg1 ;
-(void)reloadMessages;
-(BOOL)_passAvailableForAMPEnrollment;
-(void)_fetchAMPEnrollmentEligibility;
-(void)reloadAccount;
-(void)reloadAllContent;
-(void)_updateTransactionsTimer;
-(unsigned long long)transitItemForItemIndex:(long long)arg1 ;
-(BOOL)transitItemIsEnabled:(unsigned long long)arg1 ;
-(BOOL)_showTiledBalances;
-(long long)numberOfTransitItemsEnabled;
-(void)_updateBalance;
-(void)reloadTransactions;
-(void)reloadTransactionGroups;
-(void)reloadScheduledPayments;
-(void)updateContentIsLoaded;
-(BOOL)_canDisplayBalance;
-(void)loadSummariesWithForceReload:(BOOL)arg1 ;
-(BOOL)_canShowTransactions;
-(void)updateWithTransactions:(id)arg1 ;
-(void)_updateWithTransactionGroups:(id)arg1 ;
-(void)_messagesForAccountStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)_messageForPaymentApplicationStatus;
-(id)_messageForSessionActive;
-(void)_messageFromPaymentServiceSuppressingPassStateChanges:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_messageForPhysicalCard;
-(id)_messagesForInstallmentPlans;
-(void)_messageForRewardsRedemptionWithCompletion:(/*^block*/id)arg1 ;
-(void)_educationMessagesWithCompletion:(/*^block*/id)arg1 ;
-(void)_messageForPaymentFailedWithCompletion:(/*^block*/id)arg1 ;
-(void)_messageForEnableNotificationsWithCompletion:(/*^block*/id)arg1 ;
-(void)_messageForPeerPaymentIdentityVerificationForRewardsWithCompletion:(/*^block*/id)arg1 ;
-(id)_messageFromEngagementMessage:(id)arg1 ;
-(id)_messageForAMPEnrollment;
-(SCD_Struct_PK18)_peerPaymentDashboardCondition;
-(id)_messageImageWithName:(id)arg1 extension:(id)arg2 ;
-(void)_peerPaymentResolutionTappedWithResolution:(unsigned long long)arg1 ;
-(void)_verificationButtonTapped;
-(void)_lostModeButtonTapped;
-(void)_deleteButtonTapped;
-(BOOL)_shouldPaymentMessageAppear:(id)arg1 ;
-(void)_presentAccountResolution:(unsigned long long)arg1 forBusinessChatContext:(id)arg2 ;
-(void)_presentPassDetailsWithAction:(unsigned long long)arg1 ;
-(void)_presentPassWithPassUniqueIdentifier:(id)arg1 ;
-(void)_presentPhysicalCardActivation;
-(id)_downloadMessageIconURLAndReloadIfNecessary:(id)arg1 ;
-(void)_addToAMPButtonTappedForPass:(id)arg1 ;
-(void)_updateTransitBalanceProperties:(id)arg1 dynamicBalances:(id)arg2 ;
-(void)reloadTransitBalance;
-(void)transactionsChanged:(id)arg1 ;
@end

