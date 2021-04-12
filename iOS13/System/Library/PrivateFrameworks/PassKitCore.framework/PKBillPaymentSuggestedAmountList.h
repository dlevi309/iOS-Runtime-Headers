/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableDictionary, NSArray, NSString, NSDecimalNumber, PKBillPaymentSuggestedAmount;

@interface PKBillPaymentSuggestedAmountList : NSObject {

	NSMutableDictionary* _suggestionsForCategory;
	NSMutableDictionary* _suggestionsForAmount;
	NSMutableDictionary* _suggestedAmountGapMessageForAmount;
	NSArray* _sortedSuggestedAmounts;
	NSString* _currencyCode;
	NSDecimalNumber* _minimumAmount;
	NSDecimalNumber* _remainingStatementAmount;
	NSDecimalNumber* _maximumAmount;
	NSDecimalNumber* _smalllestSuggestionAmountBelowRemainingStatementAmount;
	PKBillPaymentSuggestedAmount* _initialSuggestedAmount;

}

@property (nonatomic,copy,readonly) NSArray * sortedSuggestedAmounts;                                                      //@synthesize sortedSuggestedAmounts=_sortedSuggestedAmounts - In the implementation block
@property (nonatomic,copy,readonly) NSString * currencyCode;                                                               //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * minimumAmount;                                                       //@synthesize minimumAmount=_minimumAmount - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * remainingStatementAmount;                                            //@synthesize remainingStatementAmount=_remainingStatementAmount - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * maximumAmount;                                                       //@synthesize maximumAmount=_maximumAmount - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * smalllestSuggestionAmountBelowRemainingStatementAmount;              //@synthesize smalllestSuggestionAmountBelowRemainingStatementAmount=_smalllestSuggestionAmountBelowRemainingStatementAmount - In the implementation block
@property (nonatomic,retain) PKBillPaymentSuggestedAmount * initialSuggestedAmount;                                        //@synthesize initialSuggestedAmount=_initialSuggestedAmount - In the implementation block
+(id)roundingHandler;
+(unsigned long long)maximumNumberSuggestions;
+(id)requiredSuggestedAmountCategories;
+(id)boundaryAngle;
-(id)init;
-(id)description;
-(NSString *)currencyCode;
-(NSDecimalNumber *)maximumAmount;
-(NSDecimalNumber *)minimumAmount;
-(void)_createMandatorySuggestions;
-(BOOL)_addSuggestedAmount:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)canAddAmount:(id)arg1 ;
-(BOOL)canAddCategory:(unsigned long long)arg1 ;
-(BOOL)addSuggestedAmount:(id)arg1 ;
-(BOOL)canAddAmount:(id)arg1 andCategory:(unsigned long long)arg2 ;
-(void)_updateValues;
-(id)suggestedAmountWithCategory:(unsigned long long)arg1 ;
-(id)suggestedAmountBeforeSuggestedAmount:(id)arg1 ;
-(id)suggestedAmountAfterSuggestedAmount:(id)arg1 ;
-(id)maximumSuggestedAmount;
-(id)_boundaryAmount;
-(BOOL)_suggestedAmountIsRequiredCategory:(id)arg1 ;
-(BOOL)isValidWithUnableReason:(unsigned long long*)arg1 ;
-(void)_removeSuggestedAmount:(id)arg1 ;
-(id)_suggestedAmountThatIsNotRequired:(id)arg1 suggestedAmount2:(id)arg2 ;
-(id)_lastSuggestedAmountThatIsNotRequred;
-(id)_sortedAmounts;
-(NSDecimalNumber *)remainingStatementAmount;
-(id)minimumSuggestedAmount;
-(id)_sortedSuggestedAmounts;
-(id)_smalllestSuggestionAmountBelowRemainingStatementAmount;
-(id)initWithCurrencyCode:(id)arg1 remainingMinimumPayment:(id)arg2 remainingStatementBalance:(id)arg3 currentBalance:(id)arg4 ;
-(void)addSuggestedAmountList:(id)arg1 ;
-(id)maximumSuggestedAmountFromCategories:(id)arg1 ;
-(id)minimumSuggestedAmountFromCategories:(id)arg1 ;
-(BOOL)suggestedAmount:(id)arg1 isAdjoiningSuggestedAmount:(id)arg2 ;
-(id)suggestedAmountGapMessageForStartSuggestedAmount:(id)arg1 ;
-(void)addSuggestedAmountGapMessage:(id)arg1 forStartSuggestedAmount:(id)arg2 ;
-(id)billPaymentSelectedSuggestedAmountDataEventForAmount:(id)arg1 accountIdentifier:(id)arg2 statementIdentifier:(id)arg3 ;
-(void)attemptToPurgeInvalidSuggestedAmounts;
-(NSArray *)sortedSuggestedAmounts;
-(NSDecimalNumber *)smalllestSuggestionAmountBelowRemainingStatementAmount;
-(PKBillPaymentSuggestedAmount *)initialSuggestedAmount;
-(void)setInitialSuggestedAmount:(PKBillPaymentSuggestedAmount *)arg1 ;
@end

