/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSData *)cardData;
-(NSURL *)brokerURL;
-(NSURL *)paymentServicesURL;
-(id)initWithCardData:(id)arg1 brokerURL:(id)arg2 paymentServicesURL:(id)arg3 error:(id)arg4 ;
-(void)setCardData:(NSData *)arg1 ;
-(void)setBrokerURL:(NSURL *)arg1 ;
-(void)setPaymentServicesURL:(NSURL *)arg1 ;
@end

