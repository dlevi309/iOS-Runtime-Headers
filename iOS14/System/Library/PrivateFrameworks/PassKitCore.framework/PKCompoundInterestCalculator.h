/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_interestCanBeCalculated;
-(id)compoundInterestWithPaymentOfAmount:(id)arg1 ;
-(id)compoundInterestForPaymentOfAmount:(id)arg1 onDate:(id)arg2 ;
-(id)_rawCompoundInterestForPaymentOfAmount:(id)arg1 onDate:(id)arg2 includeNewBalance:(BOOL)arg3 ;
-(id)_rawUnpostedInterestCalculationForPaymentOfAmount:(id)arg1 onDate:(id)arg2 includeNewPurchases:(BOOL)arg3 ;
-(BOOL)_date:(id)arg1 isApplicableForProcessingDate:(id)arg2 ;
-(id)_creditsForProcessingDate:(id)arg1 ;
-(id)_additionalBalanceForProcessingDate:(id)arg1 ;
-(id)compoundInterest;
@end

