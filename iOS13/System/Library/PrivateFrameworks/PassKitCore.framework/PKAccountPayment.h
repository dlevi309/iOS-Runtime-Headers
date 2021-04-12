/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSString, PKCurrencyAmount, NSDate, PKAccountPaymentFundingSource, PKAccountPaymentScheduleDetails;

@interface PKAccountPayment : NSObject <NSSecureCoding, PKRecordObject> {

	NSString* _identifier;
	NSString* _referenceIdentifier;
	NSString* _clientReferenceIdentifier;
	PKCurrencyAmount* _currencyAmount;
	NSDate* _paymentDate;
	NSDate* _paymentStatusDate;
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(long long)statusCode;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(void)setStatusCode:(long long)arg1 ;
-(NSString *)referenceIdentifier;
-(void)setReferenceIdentifier:(NSString *)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(NSDate *)paymentDate;
-(void)setPaymentDate:(NSDate *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(void)setScheduleDetails:(PKAccountPaymentScheduleDetails *)arg1 ;
-(PKAccountPaymentScheduleDetails *)scheduleDetails;
-(PKAccountPaymentFundingSource *)fundingSource;
-(void)setFundingSource:(PKAccountPaymentFundingSource *)arg1 ;
-(id)initWithDictionary:(id)arg1 productTimeZone:(id)arg2 ;
-(BOOL)isRecurring;
-(BOOL)isOnHoldForAccount:(id)arg1 ;
-(NSString *)clientReferenceIdentifier;
-(void)setClientReferenceIdentifier:(NSString *)arg1 ;
-(NSDate *)paymentStatusDate;
-(void)setPaymentStatusDate:(NSDate *)arg1 ;
@end

