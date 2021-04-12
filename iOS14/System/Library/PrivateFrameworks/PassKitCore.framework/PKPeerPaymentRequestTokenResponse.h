/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)success;
-(PKPeerPaymentRequestToken *)requestToken;
-(id)initWithData:(id)arg1 deviceScoreIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

