/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentPerformActionRequest : PKPeerPaymentWebServiceRequest {

	NSString* _paymentIdentifier;
	NSString* _action;

}

@property (nonatomic,copy) NSString * paymentIdentifier;              //@synthesize paymentIdentifier=_paymentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * action;                         //@synthesize action=_action - In the implementation block
-(void)setPaymentIdentifier:(NSString *)arg1 ;
-(NSString *)paymentIdentifier;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
@end

