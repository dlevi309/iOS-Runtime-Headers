/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSDateFormatter, NSDecimalNumber, NSMutableDictionary, PKAccountServiceAccountResolutionCofiguration, NSMutableArray, _DPStringRecorder, PKAccount, PKTransactionSource, NSArray;

@interface PKBillPaymentSuggestedAmountController : NSObject {

	NSDateFormatter* _monthAndDayFormatter;
	NSDateFormatter* _monthFormatter;
	NSDecimalNumber* _currentStatementPaymentsSum;
	NSDecimalNumber* _previousStatementPaymentsSum;
	NSDecimalNumber* _statementPurchasesSum;
	NSMutableDictionary* _merchantCategoryTransactionSums;
	BOOL _isOnPlanCompletion;
	BOOL _isOnPaymentPlan;
	BOOL _currentStatementIsLastMonthsStatement;
	BOOL _isMonthZero;
	BOOL _isMonthOne;
	PKAccountServiceAccountResolutionCofiguration* _configuration;
	long long _numberOfActiveInstallments;
	long long _numberOfActiveStatementedInstallments;
	NSMutableArray* _differentialPrivacyFeatures;
	_DPStringRecorder* _differentialPrivacyRecorder;
	PKAccount* _account;
	PKTransactionSource* _transactionSource;
	NSArray* _currentStatementSelectedSuggestedAmountEvents;
	NSArray* _previousStatementSelectedSuggestedAmountEvents;
	NSArray* _approvedTransactionsPurchasesSinceStatement;
	NSArray* _approvedTransactionsBillPaymentSinceStatement;
	NSArray* _approvedTransactionsPurchasesForPreviousStatement;
	NSArray* _approvedTransactionsBillPaymentForPreviousStatement;

}

@property (nonatomic,retain) PKAccountServiceAccountResolutionCofiguration * configuration;                //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) PKAccount * account;                                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) PKTransactionSource * transactionSource;                                    //@synthesize transactionSource=_transactionSource - In the implementation block
@property (nonatomic,readonly) NSArray * currentStatementSelectedSuggestedAmountEvents;                    //@synthesize currentStatementSelectedSuggestedAmountEvents=_currentStatementSelectedSuggestedAmountEvents - In the implementation block
@property (nonatomic,readonly) NSArray * previousStatementSelectedSuggestedAmountEvents;                   //@synthesize previousStatementSelectedSuggestedAmountEvents=_previousStatementSelectedSuggestedAmountEvents - In the implementation block
@property (nonatomic,readonly) NSArray * approvedTransactionsPurchasesSinceStatement;                      //@synthesize approvedTransactionsPurchasesSinceStatement=_approvedTransactionsPurchasesSinceStatement - In the implementation block
@property (nonatomic,readonly) NSArray * approvedTransactionsBillPaymentSinceStatement;                    //@synthesize approvedTransactionsBillPaymentSinceStatement=_approvedTransactionsBillPaymentSinceStatement - In the implementation block
@property (nonatomic,readonly) NSArray * approvedTransactionsPurchasesForPreviousStatement;                //@synthesize approvedTransactionsPurchasesForPreviousStatement=_approvedTransactionsPurchasesForPreviousStatement - In the implementation block
@property (nonatomic,readonly) NSArray * approvedTransactionsBillPaymentForPreviousStatement;              //@synthesize approvedTransactionsBillPaymentForPreviousStatement=_approvedTransactionsBillPaymentForPreviousStatement - In the implementation block
+(void)approvedTransactionsPurchasesForPreviousStatementForAccount:(id)arg1 transactionSource:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)approvedTransactionsPurchasesSinceStatementForAccount:(id)arg1 transactionSource:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)approvedTransactionsBillPaymentSinceStatementForAccount:(id)arg1 transactionSource:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)approvedTransactionsBillPaymentForPreviousStatementForAccount:(id)arg1 transactionSource:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)currentStatementSelectedSuggestedAmountEventsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)previousStatementSelectedSuggestedAmountEventsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_approvedTransactionsSinceStatementForAccount:(id)arg1 transactionSource:(id)arg2 transactionType:(long long)arg3 completion:(/*^block*/id)arg4 ;
+(void)_approvedTransactionsForPreviousStatementForAccount:(id)arg1 transactionSource:(id)arg2 transactionType:(long long)arg3 completion:(/*^block*/id)arg4 ;
+(void)defaultControllerForAccount:(id)arg1 transactionSource:(id)arg2 configuration:(id)arg3 completion:(/*^block*/id)arg4 ;
-(PKAccount *)account;
-(void)_minimumMerchcantCategoriesAboveMinimumAmount:(id)arg1 minMerchantCategory1:(long long*)arg2 minMerchantCategory2:(long long*)arg3 minMerchantCategorySum1:(id*)arg4 minMerchantCategorySum2:(id*)arg5 ;
-(id)initWithAccount:(id)arg1 transactionSource:(id)arg2 currentStatementSelectedSuggestedAmountEvents:(id)arg3 previousStatementSelectedSuggestedAmountEvents:(id)arg4 approvedTransactionsPurchasesSinceStatement:(id)arg5 approvedTransactionsPurchasesForPreviousStatement:(id)arg6 approvedTransactionsBillPaymentSinceStatement:(id)arg7 approvedTransactionsBillPaymentForPreviousStatement:(id)arg8 configuration:(id)arg9 ;
-(PKAccountServiceAccountResolutionCofiguration *)configuration;
-(id)_createDefaultAmountSuggestionListFromAccount;
-(id)_titleForSuggestion:(id)arg1 ;
-(id)generateAmountSuggestionList;
-(void)_populatePriorityValuesForList:(id)arg1 ;
-(void)_populateStringValuesForList:(id)arg1 ;
-(BOOL)_categoryIsPaymentPlan:(unsigned long long)arg1 ;
-(void)_initializeDifferentialPrivacy:(id)arg1 accountSummary:(id)arg2 ;
-(BOOL)_calculateCurrentStatementIsLastMonthsStatement;
-(id)_planCompletionTitleString;
-(void)_generateAmountSuggestionListUsingTransactionHistoryForList:(id)arg1 ;
-(BOOL)_suggestedAmountListIsValidAfterPurgeIfNecessary:(id)arg1 ;
-(void)_zerothOrFirstMonthBillPaymentSuggestionsForList:(id)arg1 ;
-(BOOL)_allMandatoryValuesAreSameAmount;
-(id)_filterSuggestions:(id)arg1 belowThreshold:(id)arg2 ;
-(id)_suggestedAmountsForPayOffDateForStatementBalance:(id)arg1 creditUtilization:(id)arg2 lastPaymentCategory:(unsigned long long)arg3 ;
-(id)_calculateThresholdForLastPaymentCategory:(unsigned long long)arg1 statementBalance:(id)arg2 suggestedAmountWithSameCategory:(id)arg3 ;
-(id)_messageForSuggestion:(id)arg1 ;
-(void)_setDifferentialPrivacyFeature:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)_categoryIsCurrentBalanceType:(unsigned long long)arg1 ;
-(id)_remainingStatementBalanceGapTitleText;
-(id)_remainingStatementBalanceGapDescriptionText;
-(id)_remainingStatementBalanceTitleString;
-(id)differentialPrivacyFeaturesAsString;
-(id)_remainingStatementBalanceMessageString;
-(void)recordPaymentActionWithDifferentialPrivacy:(unsigned long long)arg1 ;
-(NSArray *)currentStatementSelectedSuggestedAmountEvents;
-(NSArray *)previousStatementSelectedSuggestedAmountEvents;
-(NSArray *)approvedTransactionsPurchasesSinceStatement;
-(NSArray *)approvedTransactionsBillPaymentSinceStatement;
-(NSArray *)approvedTransactionsPurchasesForPreviousStatement;
-(NSArray *)approvedTransactionsBillPaymentForPreviousStatement;
-(PKTransactionSource *)transactionSource;
-(void)setConfiguration:(PKAccountServiceAccountResolutionCofiguration *)arg1 ;
@end

