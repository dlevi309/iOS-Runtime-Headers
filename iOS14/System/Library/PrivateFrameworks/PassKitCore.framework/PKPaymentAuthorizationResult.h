/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKPeerPaymentTransactionMetadata *)peerPaymentTransactionMetadata;
-(void)setPeerPaymentTransactionMetadata:(PKPeerPaymentTransactionMetadata *)arg1 ;
-(NSArray *)errors;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)initWithStatus:(long long)arg1 errors:(id)arg2 ;
-(void)setErrors:(NSArray *)arg1 ;
-(long long)status;
@end

