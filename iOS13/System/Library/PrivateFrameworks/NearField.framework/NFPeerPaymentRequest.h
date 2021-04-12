/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NFECommercePaymentRequest, NFPeerPaymentTransferRequest;

@interface NFPeerPaymentRequest : NSObject <NSSecureCoding> {

	NFECommercePaymentRequest* _topUpRequest;
	NFPeerPaymentTransferRequest* _transferRequest;

}

@property (nonatomic,retain) NFECommercePaymentRequest * topUpRequest;                    //@synthesize topUpRequest=_topUpRequest - In the implementation block
@property (nonatomic,retain) NFPeerPaymentTransferRequest * transferRequest;              //@synthesize transferRequest=_transferRequest - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTransferRequest:(NFPeerPaymentTransferRequest *)arg1 ;
-(void)setTopUpRequest:(NFECommercePaymentRequest *)arg1 ;
-(NFECommercePaymentRequest *)topUpRequest;
-(NFPeerPaymentTransferRequest *)transferRequest;
@end

