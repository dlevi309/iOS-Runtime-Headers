/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSCalendar, NSMutableDictionary, PKCompoundInterestCalculatorConfiguration;

@interface PKCompoundInterestCalculator : NSObject {

	NSCalendar* _calendar;
	NSMutableDictionary* _toDateCache;
	PKCompoundInterestCalculatorConfiguration* _configuration;

}

@property (nonatomic,readonly) PKCompoundInterestCalculatorConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)initWithConfiguration:(id)arg1 ;
-(PKCompoundInterestCalculatorConfiguration *)configuration;
-(id)compoundInterestWithPaymentOfAmount:(id)arg1 ;
-(id)compoundInterestForPaymentOfAmount:(id)arg1 onDate:(id)arg2 ;
-(BOOL)_interestCanBeCalculated;
-(id)_rawCompoundInterestForPaymentOfAmount:(id)arg1 onDate:(id)arg2 includeNewBalance:(BOOL)arg3 ;
-(id)_rawUnpostedInterestCalculationForPaymentOfAmount:(id)arg1 onDate:(id)arg2 includeNewPurchases:(BOOL)arg3 ;
-(BOOL)_date:(id)arg1 isApplicableForProcessingDate:(id)arg2 ;
-(id)_creditsForProcessingDate:(id)arg1 ;
-(id)_additionalBalanceForProcessingDate:(id)arg1 ;
-(id)compoundInterest;
@end

