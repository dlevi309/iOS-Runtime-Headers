/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentAcceptTermsRequest : PKPeerPaymentWebServiceRequest {

	NSString* _termsIdentifier;

}

@property (nonatomic,copy) NSString * termsIdentifier;              //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 ;
-(NSString *)termsIdentifier;
-(void)setTermsIdentifier:(NSString *)arg1 ;
@end

