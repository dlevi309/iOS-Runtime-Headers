/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentRequestUpdate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, PKPeerPaymentQuote, NSString;

@interface PKPaymentRequestPaymentMethodUpdate : PKPaymentRequestUpdate <NSSecureCoding> {

	NSArray* _errors;
	PKPeerPaymentQuote* _peerPaymentQuote;
	NSString* _installmentGroupIdentifier;

}

@property (nonatomic,retain) PKPeerPaymentQuote * peerPaymentQuote;              //@synthesize peerPaymentQuote=_peerPaymentQuote - In the implementation block
@property (nonatomic,copy) NSString * installmentGroupIdentifier;                //@synthesize installmentGroupIdentifier=_installmentGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * errors;                                     //@synthesize errors=_errors - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPaymentSummaryItems:(id)arg1 ;
-(NSString *)installmentGroupIdentifier;
-(void)setInstallmentGroupIdentifier:(NSString *)arg1 ;
-(NSArray *)errors;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2 ;
-(void)setPeerPaymentQuote:(PKPeerPaymentQuote *)arg1 ;
-(void)setErrors:(NSArray *)arg1 ;
-(PKPeerPaymentQuote *)peerPaymentQuote;
@end

