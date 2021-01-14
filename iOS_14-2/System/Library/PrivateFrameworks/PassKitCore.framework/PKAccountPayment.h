/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSString, PKCurrencyAmount, NSDate, PKAccountPaymentFundingSource, PKAccountPaymentScheduleDetails;

@interface PKAccountPayment : NSObject <NSSecureCoding, PKRecordObject> {

	BOOL _cancellable;
	NSString* _identifier;
	NSString* _referenceIdentifier;
	NSString* _clientReferenceIdentifier;
	PKCurrencyAmount* _currencyAmount;
	NSDate* _paymentDate;
	NSDate* _paymentStatusDate;
	NSDate* _cancellationExpiryDate;
	long long _state;
	long long _statusCode;
	PKAccountPaymentFundingSource* _fundingSource;
	PKAccountPaymentScheduleDetails* _scheduleDetails;

}

@property (nonatomic,copy) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * referenceIdentifier;                                   //@synthesize referenceIdentifier=_referenceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientReferenceIdentifier;                             //@synthesize clientReferenceIdentifier=_clientReferenceIdentifier - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * currencyAmount;                              //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,copy) NSDate * paymentDate;                                             //@synthesize paymentDate=_paymentDate - In the implementation block
@property (nonatomic,copy) NSDate * paymentStatusDate;                                       //@synthesize paymentStatusDate=_paymentStatusDate - In the implementation block
@property (assign,nonatomic) BOOL cancellable;                                               //@synthesize cancellable=_cancellable - In the implementation block
@property (nonatomic,copy) NSDate * cancellationExpiryDate;                                  //@synthesize cancellationExpiryDate=_cancellationExpiryDate - In the implementation block
@property (assign,nonatomic) long long state;                                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long statusCode;                                           //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) PKAccountPaymentFundingSource * fundingSource;                  //@synthesize fundingSource=_fundingSource - In the implementation block
@property (nonatomic,retain) PKAccountPaymentScheduleDetails * scheduleDetails;              //@synthesize scheduleDetails=_scheduleDetails - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(void)setCancellable:(BOOL)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStatusCode:(long long)arg1 ;
-(NSString *)referenceIdentifier;
-(void)setScheduleDetails:(PKAccountPaymentScheduleDetails *)arg1 ;
-(PKAccountPaymentScheduleDetails *)scheduleDetails;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(NSDate *)paymentDate;
-(void)setPaymentDate:(NSDate *)arg1 ;
-(long long)statusCode;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(PKAccountPaymentFundingSource *)fundingSource;
-(void)setFundingSource:(PKAccountPaymentFundingSource *)arg1 ;
-(id)initWithDictionary:(id)arg1 productTimeZone:(id)arg2 ;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setReferenceIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isRecurring;
-(BOOL)isOnHoldForAccount:(id)arg1 ;
-(BOOL)isCurrentlyCancellable;
-(NSString *)clientReferenceIdentifier;
-(NSDate *)paymentStatusDate;
-(void)setClientReferenceIdentifier:(NSString *)arg1 ;
-(void)setPaymentStatusDate:(NSDate *)arg1 ;
-(BOOL)cancellable;
-(NSDate *)cancellationExpiryDate;
-(void)setCancellationExpiryDate:(NSDate *)arg1 ;
@end

