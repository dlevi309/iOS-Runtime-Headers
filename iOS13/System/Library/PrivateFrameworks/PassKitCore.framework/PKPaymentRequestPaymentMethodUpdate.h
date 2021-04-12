/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)errors;
-(void)setErrors:(NSArray *)arg1 ;
-(id)initWithPaymentSummaryItems:(id)arg1 ;
-(void)setInstallmentGroupIdentifier:(NSString *)arg1 ;
-(PKPeerPaymentQuote *)peerPaymentQuote;
-(NSString *)installmentGroupIdentifier;
-(void)setPeerPaymentQuote:(PKPeerPaymentQuote *)arg1 ;
-(id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2 ;
@end

