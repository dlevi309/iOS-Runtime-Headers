/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSURL, NSError;

@interface PKAMPCardRegistrationResponse : NSObject <NSSecureCoding> {

	NSData* _cardData;
	NSURL* _brokerURL;
	NSURL* _paymentServicesURL;
	NSError* _error;

}

@property (retain) NSData * cardData;                       //@synthesize cardData=_cardData - In the implementation block
@property (retain) NSURL * brokerURL;                       //@synthesize brokerURL=_brokerURL - In the implementation block
@property (retain) NSURL * paymentServicesURL;              //@synthesize paymentServicesURL=_paymentServicesURL - In the implementation block
@property (retain) NSError * error;                         //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCardData:(NSData *)arg1 ;
-(id)initWithCardData:(id)arg1 brokerURL:(id)arg2 paymentServicesURL:(id)arg3 error:(id)arg4 ;
-(void)setBrokerURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSURL *)brokerURL;
-(NSData *)cardData;
-(id)description;
-(void)setPaymentServicesURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)paymentServicesURL;
@end

