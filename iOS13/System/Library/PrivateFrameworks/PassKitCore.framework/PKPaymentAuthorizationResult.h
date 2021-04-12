/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, PKPeerPaymentTransactionMetadata;

@interface PKPaymentAuthorizationResult : NSObject <NSSecureCoding> {

	long long _status;
	NSArray* _errors;
	PKPeerPaymentTransactionMetadata* _peerPaymentTransactionMetadata;

}

@property (nonatomic,retain) PKPeerPaymentTransactionMetadata * peerPaymentTransactionMetadata;              //@synthesize peerPaymentTransactionMetadata=_peerPaymentTransactionMetadata - In the implementation block
@property (assign,nonatomic) long long status;                                                               //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSArray * errors;                                                                 //@synthesize errors=_errors - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sanitizedErrors:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
-(NSArray *)errors;
-(void)setStatus:(long long)arg1 ;
-(void)setErrors:(NSArray *)arg1 ;
-(id)initWithStatus:(long long)arg1 errors:(id)arg2 ;
-(PKPeerPaymentTransactionMetadata *)peerPaymentTransactionMetadata;
-(void)setPeerPaymentTransactionMetadata:(PKPeerPaymentTransactionMetadata *)arg1 ;
@end

