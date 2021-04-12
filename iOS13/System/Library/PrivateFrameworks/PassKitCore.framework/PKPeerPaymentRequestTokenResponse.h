/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentRequestToken;

@interface PKPeerPaymentRequestTokenResponse : PKPeerPaymentWebServiceResponse {

	BOOL _success;
	PKPeerPaymentRequestToken* _requestToken;

}

@property (nonatomic,readonly) BOOL success;                                          //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentRequestToken * requestToken;              //@synthesize requestToken=_requestToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)success;
-(PKPeerPaymentRequestToken *)requestToken;
-(id)initWithData:(id)arg1 deviceScoreIdentifier:(id)arg2 ;
@end

